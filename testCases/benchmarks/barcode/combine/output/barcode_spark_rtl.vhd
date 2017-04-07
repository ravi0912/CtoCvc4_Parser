-- Automatically generated by the SPARK High-Level Synthesis System
-- Wed May  4 13:47:49 2011, source file : barcode.c

-- 'SPARK' should be defined as the user package
PACKAGE spark_pkg is
  TYPE integer_vector IS ARRAY ( NATURAL RANGE <>) OF integer;
  TYPE boolean_vector IS ARRAY ( NATURAL RANGE <>) OF boolean;
  FUNCTION integer_wired_or ( arr_int : integer_vector ) RETURN integer;
  FUNCTION boolean_wired_or ( arr_bool : boolean_vector ) RETURN boolean;
  SUBTYPE wiredOrInt IS integer_wired_or integer;
  SUBTYPE wiredOrBoolean IS boolean_wired_or boolean;
END spark_pkg;


library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;

PACKAGE BODY spark_pkg IS
  FUNCTION integer_wired_or ( arr_int : integer_vector ) RETURN integer is
    -- pragma resolution_method wired_or
    variable i : integer;
    variable returnVal : std_logic_vector(15 downto 0);
    variable arr_int_std_logic_vec : std_logic_vector(15 downto 0);
  BEGIN
    returnVal := (others => '0');
    for i in arr_int'range loop
      arr_int_std_logic_vec := conv_std_logic_vector(arr_int(i), 16);
      returnVal := returnVal or arr_int_std_logic_vec;
    end loop;
    RETURN conv_integer(returnVal);
  END integer_wired_or;

  FUNCTION boolean_wired_or ( arr_bool : boolean_vector ) RETURN boolean is
    -- pragma resolution_method wired_or
    variable i : integer;
    variable returnVal : boolean;
  BEGIN
    returnVal := FALSE;
    for i in arr_bool'range loop
      returnVal := returnVal or arr_bool(i);
    end loop;
    RETURN returnVal;
  END boolean_wired_or;
end spark_pkg;

library IEEE;

library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_ALU IS
port(
  res_ALU_in0 : IN integer range -32767 to 32768;
  res_ALU_in1 : IN integer range -32767 to 32768;
  res_ALU_execOp : IN integer range 0 to 1;
  res_ALU_out : OUT integer range -32767 to 32768
);
END res_ALU;

ARCHITECTURE rtl of res_ALU IS
BEGIN
  res_ALU_out <= res_ALU_in0 +  res_ALU_in1   when (res_ALU_execOp = 0)
       else res_ALU_in0 -  res_ALU_in1;
END rtl;  -- architecture of res_ALU

library IEEE;

library DW02,DWARE,SYNOPSYS;
use DW02.DW02_components.all;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_MUL IS
port(
  res_MUL_in0 : IN integer range -32767 to 32768;
  res_MUL_in1 : IN integer range -32767 to 32768;
  res_MUL_out : OUT integer range -32767 to 32768;
  CLOCK : IN std_logic
);
END res_MUL;

ARCHITECTURE rtl of res_MUL IS
  signal in1_vec : std_logic_vector(15 downto 0);
  signal in2_vec : std_logic_vector(15 downto 0);
  signal out_vec : std_logic_vector(31 downto 0);
  signal TC_inst : std_logic;
BEGIN
  in1_vec <= conv_std_logic_vector(res_MUL_in0, 16);
  in2_vec <= conv_std_logic_vector(res_MUL_in1, 16);
  TC_inst <= '1';
  U1 : DW02_mult_2_stage
      generic map ( A_width => 16,
                    B_width => 16 )
      port map ( A => in1_vec, B => in2_vec, TC => TC_inst,
                 CLK => CLOCK, PRODUCT => out_vec );
  res_MUL_out <= conv_integer(out_vec);
END rtl;  -- architecture of res_MUL

library IEEE;

library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_CMP IS
port(
  res_CMP_in0 : IN integer range -32767 to 32768;
  res_CMP_in1 : IN integer range -32767 to 32768;
  res_CMP_execOp : IN integer range 0 to 5;
  res_CMP_out : OUT boolean
);
END res_CMP;

ARCHITECTURE rtl of res_CMP IS
BEGIN
  res_CMP_out <= res_CMP_in0 /=  res_CMP_in1   when (res_CMP_execOp = 0)
       else res_CMP_in0 =  res_CMP_in1        when (res_CMP_execOp = 1)
       else res_CMP_in0 <  res_CMP_in1        when (res_CMP_execOp = 2)
       else res_CMP_in0 >  res_CMP_in1        when (res_CMP_execOp = 3)
       else res_CMP_in0 >=  res_CMP_in1        when (res_CMP_execOp = 4)
       else res_CMP_in0 <=  res_CMP_in1;
END rtl;  -- architecture of res_CMP

library IEEE;

library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_SHFT IS
port(
  res_SHFT_in0 : IN integer range -32767 to 32768;
  res_SHFT_in1 : IN integer range -32767 to 32768;
  res_SHFT_execOp : IN integer range 0 to 1;
  res_SHFT_out : OUT integer range -32767 to 32768
);
END res_SHFT;

ARCHITECTURE rtl of res_SHFT IS
BEGIN
  res_SHFT_out <= conv_integer(
            shl(conv_std_logic_vector(res_SHFT_in0, 16),
                conv_std_logic_vector(res_SHFT_in1, 16) ))
               when (res_SHFT_execOp = 0)
       else conv_integer(
                 shr(conv_std_logic_vector(res_SHFT_in0, 16),
                     conv_std_logic_vector(res_SHFT_in1, 16) ))
                 ;
END rtl;  -- architecture of res_SHFT

library IEEE;

library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_ARR IS
port(
  res_ARR_in0 : IN integer range -32767 to 32768;
  res_ARR_out : OUT integer range -32767 to 32768
);
END res_ARR;

ARCHITECTURE rtl of res_ARR IS
BEGIN
  res_ARR_out <= res_ARR_in0;
END rtl;  -- architecture of res_ARR

library IEEE;

library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_LOGIC IS
port(
  res_LOGIC_in0 : IN boolean;
  res_LOGIC_in1 : IN boolean;
  res_LOGIC_execOp : IN integer range 0 to 1;
  res_LOGIC_out : OUT boolean
);
END res_LOGIC;

ARCHITECTURE rtl of res_LOGIC IS
BEGIN
  res_LOGIC_out <= res_LOGIC_in0 and  res_LOGIC_in1   when (res_LOGIC_execOp = 0)
       else res_LOGIC_in0 or  res_LOGIC_in1;
END rtl;  -- architecture of res_LOGIC

library IEEE;

library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


ENTITY res_GATE IS
port(
  res_GATE_in0 : IN integer range -32767 to 32768;
  res_GATE_in1 : IN integer range -32767 to 32768;
  res_GATE_execOp : IN integer range 0 to 1;
  res_GATE_out : OUT integer range -32767 to 32768
);
END res_GATE;

ARCHITECTURE rtl of res_GATE IS
BEGIN
  res_GATE_out <= conv_integer(
            conv_std_logic_vector(res_GATE_in0, 16) and 
            conv_std_logic_vector(res_GATE_in1, 16) )
               when (res_GATE_execOp = 0)
       else conv_integer(
                 conv_std_logic_vector(res_GATE_in0, 16) or 
                 conv_std_logic_vector(res_GATE_in1, 16) )
                 ;
END rtl;  -- architecture of res_GATE

library IEEE;
library DWARE,SYNOPSYS;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_arith.all;
use IEEE.std_logic_signed.all;
use SYNOPSYS.attributes.all;


library work;
use work.spark_pkg.all;


ENTITY main IS 
port(
  returnVar_main :  OUT wiredOrInt range -32767 to 32768 ;
  CLOCK : IN std_logic ;
  RESET : IN std_logic ;
  done : OUT std_logic );
END main;

ARCHITECTURE rtl OF main IS

  COMPONENT res_ALU
  port(
    res_ALU_in0 : IN integer range -32767 to 32768;
    res_ALU_in1 : IN integer range -32767 to 32768;
    res_ALU_execOp : IN integer range 0 to 1;
    res_ALU_out : OUT integer range -32767 to 32768
  );
  END COMPONENT;  -- end of component res_ALU

  COMPONENT res_CMP
  port(
    res_CMP_in0 : IN integer range -32767 to 32768;
    res_CMP_in1 : IN integer range -32767 to 32768;
    res_CMP_execOp : IN integer range 0 to 5;
    res_CMP_out : OUT boolean
  );
  END COMPONENT;  -- end of component res_CMP

  COMPONENT res_LOGIC
  port(
    res_LOGIC_in0 : IN boolean;
    res_LOGIC_in1 : IN boolean;
    res_LOGIC_execOp : IN integer range 0 to 1;
    res_LOGIC_out : OUT boolean
  );
  END COMPONENT;  -- end of component res_LOGIC

  signal sT2_30 : wiredOrBoolean  ;
  signal sT3_32 : wiredOrBoolean  ;
  signal sT4_37 : wiredOrBoolean  ;
  signal sT5_44 : wiredOrBoolean  ;
  signal sT6_47 : wiredOrBoolean  ;
  signal sT7_47 : wiredOrBoolean  ;
  signal sT8_47 : wiredOrBoolean  ;
  signal sT10_51 : wiredOrBoolean  ;
  signal sT11_53 : wiredOrBoolean  ;
  signal sT12_58 : wiredOrBoolean  ;
  signal sT13_62 : wiredOrBoolean  ;
  signal sT14_71 : wiredOrBoolean  ;
  signal sT15_71 : wiredOrBoolean  ;
  signal sT16_71 : wiredOrBoolean  ;
  signal sT17_73 : wiredOrBoolean  ;
  signal sT18_75 : wiredOrBoolean  ;
  signal sT19_78 : wiredOrBoolean  ;
  signal sT20_85 : wiredOrBoolean  ;
  signal sT21_99 : wiredOrBoolean  ;
  signal sT22_102 : wiredOrBoolean  ;
  signal sT23_109 : wiredOrBoolean  ;
  signal sT24_121 : wiredOrBoolean  ;
  signal sT25_127 : wiredOrBoolean  ;
  signal sT26_131 : wiredOrBoolean  ;
  signal sT27_137 : wiredOrBoolean  ;
  signal sT28_139 : wiredOrBoolean  ;
  signal sT29_142 : wiredOrBoolean  ;
  signal sT30_147 : wiredOrBoolean  ;
  signal sT31_32 : wiredOrBoolean  ;
  signal sT32_37 : wiredOrBoolean  ;
  signal sT35_53 : wiredOrBoolean  ;
  signal sT36_58 : wiredOrBoolean  ;
  signal sT41_121 : wiredOrBoolean  ;
  signal sT42_142 : wiredOrBoolean  ;

  signal res_ALU_0_in0 : integer range -32767 to 32768 := 0;
  signal res_ALU_0_in1 : integer range -32767 to 32768 := 0;
  signal res_ALU_0_execOp : integer range 0 to 1 := 0;
  signal res_ALU_0_out : integer range -32767 to 32768 := 0;
  signal res_ALU_1_in0 : integer range -32767 to 32768 := 0;
  signal res_ALU_1_in1 : integer range -32767 to 32768 := 0;
  signal res_ALU_1_execOp : integer range 0 to 1 := 0;
  signal res_ALU_1_out : integer range -32767 to 32768 := 0;
  signal res_CMP_3_in0 : integer range -32767 to 32768 := 0;
  signal res_CMP_3_in1 : integer range -32767 to 32768 := 0;
  signal res_CMP_3_execOp : integer range 0 to 5 := 0;
  signal res_CMP_3_out : boolean;
  signal res_CMP_4_in0 : integer range -32767 to 32768 := 0;
  signal res_CMP_4_in1 : integer range -32767 to 32768 := 0;
  signal res_CMP_4_execOp : integer range 0 to 5 := 0;
  signal res_CMP_4_out : boolean;
  signal res_LOGIC_9_in0 : boolean;
  signal res_LOGIC_9_in1 : boolean;
  signal res_LOGIC_9_execOp : integer range 0 to 1 := 0;
  signal res_LOGIC_9_out : boolean;
  -- Statistics collected about this Schedule
  -- Scheduled with the following resources 
  -- 2 ALU, 1 MUL, 2 CMP, 2 SHFT, 2 ARR, 5 LOGIC, 5 GATE, 2 ALLCALLS, 
  -- Declarations of the 24 states in routine main
  subtype StateType is std_logic_vector(23 downto 0);
  CONSTANT S_0 : std_logic_vector(23 downto 0) := "000000000000000000000001";
  CONSTANT S_1 : std_logic_vector(23 downto 0) := "000000000000000000000010";
  CONSTANT S_2 : std_logic_vector(23 downto 0) := "000000000000000000000100";
  CONSTANT S_3 : std_logic_vector(23 downto 0) := "000000000000000000001000";
  CONSTANT S_4 : std_logic_vector(23 downto 0) := "000000000000000000010000";
  CONSTANT S_5 : std_logic_vector(23 downto 0) := "000000000000000000100000";
  CONSTANT S_6 : std_logic_vector(23 downto 0) := "000000000000000001000000";
  CONSTANT S_7 : std_logic_vector(23 downto 0) := "000000000000000010000000";
  CONSTANT S_8 : std_logic_vector(23 downto 0) := "000000000000000100000000";
  CONSTANT S_9 : std_logic_vector(23 downto 0) := "000000000000001000000000";
  CONSTANT S_10 : std_logic_vector(23 downto 0) := "000000000000010000000000";
  CONSTANT S_11 : std_logic_vector(23 downto 0) := "000000000000100000000000";
  CONSTANT S_12 : std_logic_vector(23 downto 0) := "000000000001000000000000";
  CONSTANT S_13 : std_logic_vector(23 downto 0) := "000000000010000000000000";
  CONSTANT S_14 : std_logic_vector(23 downto 0) := "000000000100000000000000";
  CONSTANT S_15 : std_logic_vector(23 downto 0) := "000000001000000000000000";
  CONSTANT S_16 : std_logic_vector(23 downto 0) := "000000010000000000000000";
  CONSTANT S_17 : std_logic_vector(23 downto 0) := "000000100000000000000000";
  CONSTANT S_18 : std_logic_vector(23 downto 0) := "000001000000000000000000";
  CONSTANT S_19 : std_logic_vector(23 downto 0) := "000010000000000000000000";
  CONSTANT S_20 : std_logic_vector(23 downto 0) := "000100000000000000000000";
  CONSTANT S_21 : std_logic_vector(23 downto 0) := "001000000000000000000000";
  CONSTANT S_22 : std_logic_vector(23 downto 0) := "010000000000000000000000";
  CONSTANT S_23 : std_logic_vector(23 downto 0) := "100000000000000000000000";
  signal CURRENT_STATE : StateType;
  signal NEXT_STATE : StateType;
  -- Declarations of the 15 registers in main
  signal regNum0 : integer range -32767 to 32768 := 0;
  signal regNum1 : integer range -32767 to 32768 := 0;
  signal regNum2 : integer range -32767 to 32768 := 0;
  signal regNum3 : integer range -32767 to 32768 := 0;
  signal regNum4 : integer range -32767 to 32768 := 0;
  signal regNum5 : integer range -32767 to 32768 := 0;
  signal regNum6 : integer range -32767 to 32768 := 0;
  signal regNum7 : integer range -32767 to 32768 := 0;
  signal regNum8 : integer range -32767 to 32768 := 0;
  signal regNum9 : integer range -32767 to 32768 := 0;
  signal regNum10 : integer range -32767 to 32768 := 0;
  signal regNum11 : integer range -32767 to 32768 := 0;
  signal regNum12 : integer range -32767 to 32768 := 0;
  signal regNum13 : integer range -32767 to 32768 := 0;
  signal regNum14 : integer range -32767 to 32768 := 0;
  BEGIN
    res_ALU_instance_0 : res_ALU
    port map (
      res_ALU_in0 => res_ALU_0_in0,
      res_ALU_in1 => res_ALU_0_in1,
      res_ALU_execOp => res_ALU_0_execOp,
      res_ALU_out => res_ALU_0_out
    );
    -- end of port map of component res_ALU_instance_0

    res_ALU_instance_1 : res_ALU
    port map (
      res_ALU_in0 => res_ALU_1_in0,
      res_ALU_in1 => res_ALU_1_in1,
      res_ALU_execOp => res_ALU_1_execOp,
      res_ALU_out => res_ALU_1_out
    );
    -- end of port map of component res_ALU_instance_1

    res_CMP_instance_3 : res_CMP
    port map (
      res_CMP_in0 => res_CMP_3_in0,
      res_CMP_in1 => res_CMP_3_in1,
      res_CMP_execOp => res_CMP_3_execOp,
      res_CMP_out => res_CMP_3_out
    );
    -- end of port map of component res_CMP_instance_3

    res_CMP_instance_4 : res_CMP
    port map (
      res_CMP_in0 => res_CMP_4_in0,
      res_CMP_in1 => res_CMP_4_in1,
      res_CMP_execOp => res_CMP_4_execOp,
      res_CMP_out => res_CMP_4_out
    );
    -- end of port map of component res_CMP_instance_4

    res_LOGIC_instance_9 : res_LOGIC
    port map (
      res_LOGIC_in0 => res_LOGIC_9_in0,
      res_LOGIC_in1 => res_LOGIC_9_in1,
      res_LOGIC_execOp => res_LOGIC_9_execOp,
      res_LOGIC_out => res_LOGIC_9_out
    );
    -- end of port map of component res_LOGIC_instance_9

    SYNC: PROCESS
    BEGIN
      wait until CLOCK'event and CLOCK = '1';
      if reset = '1' then
        CURRENT_STATE <= S_0;
        done <= '0';
      else
        CURRENT_STATE <= NEXT_STATE;
        if CURRENT_STATE /= S_0 and NEXT_STATE = S_0 then
          done <= '1';
        end if;
      end if;   -- if reset check
    END PROCESS;   -- SYNC Process

    FSM: PROCESS(CURRENT_STATE, sT8_47, sT5_44, sT42_142, sT41_121, sT36_58, sT35_53, sT32_37, sT31_32, sT30_147, sT2_30, sT28_139, sT27_137, sT26_131, sT25_127, sT23_109, sT21_99, sT20_85, sT19_78, sT18_75, sT17_73, sT16_71, sT13_62, sT10_51)
    BEGIN
      NEXT_STATE <= CURRENT_STATE;
      if CURRENT_STATE(0) = '1' then
        NEXT_STATE <= S_1;
      elsif CURRENT_STATE(1) = '1' then
        NEXT_STATE <= S_2;
      elsif CURRENT_STATE(2) = '1' then
        if true then
          NEXT_STATE <= S_3;
        else  -- true        
          NEXT_STATE <= S_0;
        end if; -- conditions
      elsif CURRENT_STATE(3) = '1' then
        if true then
          if true then
            NEXT_STATE <= S_4;
          else  -- true          
            NEXT_STATE <= S_6;
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(4) = '1' then
        if true then
          if true then
            if sT2_30 then
              NEXT_STATE <= S_3;
            else  -- sT2_30            
              NEXT_STATE <= S_4;
            end if;  -- NOT(sT2_30)            
            if sT31_32 then
              NEXT_STATE <= S_6;
            else  -- sT31_32            
              NEXT_STATE <= S_5;
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(5) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if sT32_37 then
                NEXT_STATE <= S_6;
              else  -- sT32_37              
                NEXT_STATE <= S_2;
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(6) = '1' then
        NEXT_STATE <= S_7;
      elsif CURRENT_STATE(7) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                NEXT_STATE <= S_8;
                NEXT_STATE <= S_7;
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(8) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  NEXT_STATE <= S_9;
                else  -- sT8_47                
                  NEXT_STATE <= S_19;
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(9) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    NEXT_STATE <= S_10;
                  else  -- true                  
                    NEXT_STATE <= S_12;
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(10) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if sT10_51 then
                      NEXT_STATE <= S_9;
                    else  -- sT10_51                    
                      NEXT_STATE <= S_10;
                    end if;  -- NOT(sT10_51)                    
                    if sT35_53 then
                      NEXT_STATE <= S_12;
                    else  -- sT35_53                    
                      NEXT_STATE <= S_11;
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(11) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if sT36_58 then
                        NEXT_STATE <= S_12;
                      else  -- sT36_58                      
                        NEXT_STATE <= S_8;
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(12) = '1' then
        NEXT_STATE <= S_13;
      elsif CURRENT_STATE(13) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        NEXT_STATE <= S_14;
                        NEXT_STATE <= S_13;
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(14) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          NEXT_STATE <= S_15;
                        else  -- sT16_71                        
                          NEXT_STATE <= S_18;
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(15) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if sT17_73 then
                            NEXT_STATE <= S_16;
                          else  -- sT17_73                          
                            NEXT_STATE <= S_16;
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(16) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if sT17_73 then
                            if sT18_75 then
                              NEXT_STATE <= S_15;
                            else  -- sT18_75                            
                              NEXT_STATE <= S_16;
                            end if;  -- NOT(sT18_75)                            
                            if sT19_78 then
                              NEXT_STATE <= S_18;
                            else  -- sT19_78                            
                              NEXT_STATE <= S_17;
                            end if;  -- NOT(sT19_78)                            
                          else  -- sT17_73                          
                            if sT21_99 then
                              NEXT_STATE <= S_15;
                            else  -- sT21_99                            
                              NEXT_STATE <= S_16;
                            end if;  -- NOT(sT21_99)                            
                            if sT19_78 then
                              NEXT_STATE <= S_18;
                            else  -- sT19_78                            
                              NEXT_STATE <= S_17;
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(17) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if sT17_73 then
                            if NOT(sT19_78) then
                              if sT20_85 then
                                NEXT_STATE <= S_18;
                              else  -- sT20_85                              
                                NEXT_STATE <= S_18;
                              end if;  -- NOT(sT19_78)                              
                            end if;  -- NOT(sT20_85)                            
                          else  -- sT17_73                          
                            if NOT(sT19_78) then
                              if sT23_109 then
                                NEXT_STATE <= S_18;
                              else  -- sT23_109                              
                                NEXT_STATE <= S_18;
                              end if; -- conditions
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(18) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if NOT(sT17_73) then
                            NEXT_STATE <= S_19;
                            if sT41_121 then
                              NEXT_STATE <= S_18;
                            else  -- sT41_121                            
                              NEXT_STATE <= S_13;
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(19) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if NOT(sT17_73) then
                            NEXT_STATE <= S_20;
                            if NOT(sT25_127) then
                              NEXT_STATE <= S_7;
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(20) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if NOT(sT17_73) then
                            if NOT(sT26_131) then
                              NEXT_STATE <= S_21;
                              NEXT_STATE <= S_20;
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(21) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if NOT(sT17_73) then
                            if NOT(sT26_131) then
                              if sT27_137 then
                                NEXT_STATE <= S_22;
                              else  -- sT27_137                              
                                NEXT_STATE <= S_23;
                              end if; -- conditions
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(22) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if NOT(sT17_73) then
                            if NOT(sT26_131) then
                              if sT27_137 then
                                if sT28_139 then
                                  NEXT_STATE <= S_21;
                                else  -- sT28_139                                
                                  NEXT_STATE <= S_22;
                                end if;  -- NOT(sT28_139)                                
                                if sT42_142 then
                                  NEXT_STATE <= S_23;
                                else  -- sT42_142                                
                                  NEXT_STATE <= S_23;
                                end if; -- conditions
                              end if; -- conditions
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      elsif CURRENT_STATE(23) = '1' then
        if true then
          if true then
            if NOT(sT31_32) then
              if NOT(sT5_44) then
                if sT8_47 then
                  if true then
                    if NOT(sT35_53) then
                      if NOT(sT13_62) then
                        if sT16_71 then
                          if NOT(sT17_73) then
                            if NOT(sT26_131) then
                              if sT27_137 then
                                if NOT(sT42_142) then
                                  NEXT_STATE <= S_1;
                                  if NOT(sT30_147) then
                                    NEXT_STATE <= S_20;
                                  end if; -- conditions
                                end if; -- conditions
                              end if; -- conditions
                            end if; -- conditions
                          end if; -- conditions
                        end if; -- conditions
                      end if; -- conditions
                    end if; -- conditions
                  end if; -- conditions
                end if; -- conditions
              end if; -- conditions
            end if; -- conditions
          end if; -- conditions
        end if; -- conditions
      END if;  -- if (CURRENT_STATE)
    END PROCESS;   -- FSM Process

    DP: PROCESS
    variable sT33_47 : wiredOrBoolean  ;
    variable sT34_47 : wiredOrBoolean  ;
    variable sT39_71 : wiredOrBoolean  ;
    variable sT40_71 : wiredOrBoolean  ;

    BEGIN
      wait until CLOCK'event and CLOCK = '1';
      if reset = '1' then
        sT10_51 <= FALSE;
        sT13_62 <= FALSE;
        sT16_71 <= FALSE;
        sT17_73 <= FALSE;
        sT18_75 <= FALSE;
        sT19_78 <= FALSE;
        sT20_85 <= FALSE;
        sT21_99 <= FALSE;
        sT23_109 <= FALSE;
        sT25_127 <= FALSE;
        sT26_131 <= FALSE;
        sT27_137 <= FALSE;
        sT28_139 <= FALSE;
        sT2_30 <= FALSE;
        sT30_147 <= FALSE;
        sT31_32 <= FALSE;
        sT32_37 <= FALSE;
        sT35_53 <= FALSE;
        sT36_58 <= FALSE;
        sT41_121 <= FALSE;
        sT42_142 <= FALSE;
        sT5_44 <= FALSE;
        sT8_47 <= FALSE;
      else   -- else of   if reset
        if CURRENT_STATE(0) = '1' then
          regNum0 <= 0;
          regNum4 <= 1;
          regNum5 <= 0;
          regNum1 <= 0;
          regNum2 <= 0;
          regNum6 <= 0;
          regNum3 <= 0;
          returnVar_main <= 0;
        elsif CURRENT_STATE(1) = '1' then
          regNum7 <= 1;
        elsif CURRENT_STATE(2) = '1' then
          if true then
            sT31_32 <= res_CMP_3_out;
            sT32_37 <= res_CMP_4_out;
            regNum0 <= 1;
          end if; -- conditions
        elsif CURRENT_STATE(3) = '1' then
          if true then
            if true then
              sT2_30 <= res_CMP_4_out;
            end if; -- conditions
          end if; -- conditions
        elsif CURRENT_STATE(4) = '1' then
          if true then
            if true then
              if sT2_30