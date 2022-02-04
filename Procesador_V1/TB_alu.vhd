--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:41:19 10/02/2017
-- Design Name:   
-- Module Name:   C:/Documents and Settings/Administrador/Mis documentos/Arquitectura/Procesador/TB_alu.vhd
-- Project Name:  ProgramCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: ALU
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_alu IS
END TB_alu;
 
ARCHITECTURE behavior OF TB_alu IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT ALU
    PORT(
         crs1 : IN  std_logic_vector(31 downto 0);
         crs2 : IN  std_logic_vector(31 downto 0);
         entrada_uc : IN  std_logic_vector(5 downto 0);
         salida_alu : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal crs1 : std_logic_vector(31 downto 0) := (others => '0');
   signal crs2 : std_logic_vector(31 downto 0) := (others => '0');
   signal entrada_uc : std_logic_vector(5 downto 0) := (others => '0');

 	--Outputs
   signal salida_alu : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
  
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: ALU PORT MAP (
          crs1 => crs1,
          crs2 => crs2,
          entrada_uc => entrada_uc,
          salida_alu => salida_alu
        );

   -- insert stimulus here 
	
	stim_proc: process
   begin		
	
	crs1 <= x"00000004";
	crs2 <= x"00000002";
	entrada_uc <= "000111";

      wait;
   end process;

END;
