--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:53:13 09/28/2017
-- Design Name:   
-- Module Name:   C:/Documents and Settings/Administrador/Mis documentos/Arquitectura/ProgramCounter/tb_sumador.vhd
-- Project Name:  ProgramCounter
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: sumador
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
 
ENTITY tb_sumador IS
END tb_sumador;
 
ARCHITECTURE behavior OF tb_sumador IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT sumador
    PORT(
         operador1 : IN  std_logic_vector(31 downto 0);
         operador2 : IN  std_logic_vector(31 downto 0);
         sal_sumador : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal operador1 : std_logic_vector(31 downto 0) := (others => '0');
   signal operador2 : std_logic_vector(31 downto 0) := (others => '0');

 	--Outputs
   signal sal_sumador : std_logic_vector(31 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: sumador PORT MAP (
          operador1 => operador1,
          operador2 => operador2,
          sal_sumador => sal_sumador
        );

     -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 30 ns;
		operador1<= x"00000007";
		operador2 <= x"00000001";
		wait for 30 ns;
		operador1 <= x"00000008";
		operador2 <= x"00000001";
      wait;
   end process;

END;
