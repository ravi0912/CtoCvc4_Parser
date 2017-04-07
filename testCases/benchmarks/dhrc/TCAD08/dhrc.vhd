-- VHDL description of Differential Heat Release Computation

PACKAGE dhrc_types IS
  -- SUBTYPE nat is integer range -32768 to 32767;
  SUBTYPE nat is integer range -128 to 127;
END dhrc_types;

USE work.dhrc_types.all;

entity dhrc is 
        port (
                CLK    : in bit;
                reset  : in bit;
                a0_in  : in nat;
                a1_in  : in nat;
                a2_in  : in nat;
                p339_in  : in nat;
                p340_in  : in nat;
                p_in  : in nat;
                v_in  : in nat;
                dv_in  : in nat;
                HOST_OUT : out nat 
             );
end dhrc;


architecture dhrc of dhrc is 
begin
MAIN:process 
        type Memory is array (integer range <>) of nat;
        variable P  : Memory(7 downto 0);        
        variable V  : Memory(6 downto 1);        
        variable DV : Memory(6 downto 1);        
        variable BV : Memory(6 downto 1);        

        variable A0 : nat; 
        variable A1 : nat; 
        variable A2 : nat; 

        variable H1 : nat; 
        variable H2 : nat; 
        variable H3 : nat; 
        variable H4 : nat; 
        variable H5 : nat; 
        variable H6 : nat; 
        variable H7 : nat; 
        variable H8 : nat; 
        variable H9 : nat; 

        variable S  : nat; 
        variable S1 : nat; 
        variable S2 : nat; 

        variable CV : nat; 
        variable DP : nat; 
        variable D  : nat; 
        variable I  : nat;
        variable J  : nat; 
        variable K  : nat;

begin
        a0 := 0; a1 := 0; a2 := 0; 
        h1 := 0; h2 := 0; h3 := 0; h4 := 0; 
        h5 := 0; h6 := 0; h7 := 0; h8 := 0; h9 := 0;
        s := 0; s1 := 0; s2 := 0; 
        cv := 0; dp := 0; d := 0; i := 0; j := 0; k := 0;
        v(1):= 0; v(2):= 0; v(3):= 0; 
        v(4):= 0; v(5):= 0; v(6):= 0;
        p(0):= 0; p(1):= 0; p(2):= 0; p(3):= 0; 
        p(4):= 0; p(5):= 0; p(6):= 0; p(7):= 0;
        dv(1):= 0; dv(2):= 0; dv(3):= 0; 
        dv(4):= 0; dv(5):= 0; dv(6):= 0;
        bv(1):= 0; bv(2):= 0; bv(3):= 0; bv(4):= 0; 
        bv(5):= 0; bv(6):= 0; 

BIGLOOP : loop

      wait until CLK = '1';
      a0   := a0_in;
      a1   := a1_in;
      a2   := a2_in;
      p(0) := p339_in ;
      p(7) := p340_in ;
      s  := 0;
      cv := 0;
      h7 := 0;
      h6 := 0;
      h4 := 0;
      dp := 0;
      host_out <= 0;
      i := 0;
      
    initloop : loop
        wait until CLK = '1';
        exit BIGLOOP when (reset = '1');
        exit initloop when ( i > 6 ) ;
        p(i)  := p_in;
        v(i)  := v_in;
        dv(i) := dv_in;
        i := i + 1;
    end loop initloop;

    i := 1;
    smallloop : loop
      wait until CLK = '1';
      exit BIGLOOP when (reset = '1');
      exit smallloop when ( i > 6) ;
        j := i + 1;
        k := i - 1;
        p(j) := p_in;
        d  := p(j)  - p(k);
        dp := d / 2;
        h1 := a0 * v(i);
        h2 := h1 / 16;
        h3 := a1+ h2;
        h4 := h3 * p(i); 
        s2 := dp * v(i);
        h7 := s2 / 4;
        h5 := h4 / 4;
        cv := h5 + a2;
        s1 := p(i) * dv(i);
        h6 := s1 / 4;
        s  := h6 + h7;
        h8 := s * cv;
        h9 := h8 / 2;
        bv(i) := h9 + h6;
        host_out <= bv(i);
	i := i + 1;
    end loop smallloop;

end loop BIGLOOP;

end process;

end dhrc;
