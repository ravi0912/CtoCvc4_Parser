-----------------------------------------------------------
-- Definition Package: lru_type
-----------------------------------------------------------

use work.types.all;

-----------------------------------------------------------
-- Circuit Name: lru
-----------------------------------------------------------
entity lru is
  port (CLK            : in   bit;
        LRU            : out  nat8;
        MRU            : in   nat8;
        Reset          : in   bit);
end lru;
-----------------------------------------------------------
architecture lru of lru is 
begin
    main:process
    variable  found          : bit;
    variable  i              : nat3;
    variable  last           : nat3;
    variable  list           : Memory(0 to 7);
    variable  newGuy         : nat8;
    variable  pushTo         : nat3;
    begin
        wait until (CLK = '1');
        RESET_LOOP: loop
            wait until (CLK = '1'); exit RESET_LOOP when (Reset = '1');
            found := '0';
            newGuy := MRU;
            i := 0;
            while ((i < last) and (found = '0')) loop
                if ( list (i) = newGuy ) then
                    found := '1';
                else
                    i := i + 1;
                end if;
                wait until (CLK = '1'); exit RESET_LOOP when (Reset = '1');
            end loop;

            if (found = '1') then
                pushTo := i;
            else
                if (last < 7) then
                    pushTo := last + 1;
                else 
                    pushTo := last;
                end if;
                last := pushTo;
            end if;

            wait until (CLK = '1'); exit RESET_LOOP when (Reset = '1');
            while (pushTo > 0) loop
                list ( pushTo ) := list ( pushTo - 1 );
                pushTo := pushTo - 1;
                wait until (CLK = '1'); exit RESET_LOOP when (Reset = '1');
            end loop;

            list ( 0 ) := newGuy;
            LRU <= list ( last );
        end loop;
    end process;
end lru;
