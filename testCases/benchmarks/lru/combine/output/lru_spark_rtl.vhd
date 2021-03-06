-- Automatically generated by the SPARK High-Level Synthesis System
-- Wed May  4 13:55:53 2011, source file : lru.c

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
  res_ALU_in0 : IN integer range 0 to 65535;
  res_ALU_in1 : IN integer range 0 to 65535;
  res_ALU_execOp : IN integer range 0 to 1;
  res_ALU_out : OUT integer range 0 to 65535
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
  res_MUL_in0 : IN integer range 0 to 65535;
  res_MUL_in1 : IN integer range 0 to 65535;
  res_MUL_execOp : IN integer range 0 to 1;
  res_MUL_out : OUT integer range 0 to 65535
);
END res_MUL;

ARCHITECTURE rtl of res_MUL IS
  signal in1_vec : std_logic_vector(15 downto 0);
  signal in2_vec : std_logic_vector(15 downto 0);
  signal out_vec : std_logic_vector(15 downto 0);
  signal TC_inst : std_logic;
BEGIN
