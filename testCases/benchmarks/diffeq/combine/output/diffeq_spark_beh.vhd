-- Automatically generated by the SPARK Parallelizing High-Level Synthesis Framework
-- Wed May  4 13:24:18 2011, source file : diffeq.c

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


library work;
use work.spark_pkg.all;


ENTITY main IS 
port(
  returnVar_main :  OUT wiredOrInt range -32767 to 32768 ;
  CLOCK : IN std_logic ;
  RESET : IN std_logic ;
  done : OUT std_logic );
END main;

ARCHITECTURE behav OF main IS
signal x : wiredOrInt range -32767 to 32768 ;
signal y : wiredOrInt range -32767 to 32768 ;
signal u : wiredOrInt range -32767 to 32768 ;
signal a : wiredOrInt range -32767 to 32768 ;
signal dx : wiredOrInt range -32767 to 32768 ;
signal t1 : wiredOrInt range -32767 to 32768 ;
signal t2 : wiredOrInt range -32767 to 32768 ;
signal t3 : wiredOrInt range -32767 to 32768 ;
signal t4 : wiredOrInt range -32767 to 32768 ;
signal t5 : wiredOrInt range -32767 to 32768 ;
signal t6 : wiredOrInt range -32767 to 32768 ;
signal y1 : wiredOrInt range -32767 to 32768 ;
signal i : wiredOrInt range -32767 to 32768 ;
signal xout : wiredOrInt range -32767 to 32768 ;
signal yout : wiredOrInt range -32767 to 32768 ;
signal uout : wiredOrInt range -32767 to 32768 ;
signal sT0_7 : wiredOrBoolean  ;



BEGIN
    PROCESS
    BEGIN
    wait until CLOCK'event and CLOCK = '1';

