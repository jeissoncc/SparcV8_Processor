----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:47:17 10/02/2017 
-- Design Name: 
-- Module Name:    ALU - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.All;
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ALU is
    Port ( crs1 : in  STD_LOGIC_VECTOR (31 downto 0);
           crs2 : in  STD_LOGIC_VECTOR (31 downto 0);
           entrada_uc : in  STD_LOGIC_VECTOR (5 downto 0);
           salida_alu : out  STD_LOGIC_VECTOR (31 downto 0));
end ALU;

architecture Behavioral of ALU is

begin
	process(crs1, crs2, entrada_uc)
		begin
			case (entrada_uc) is
				when "000001" => -- add
					salida_alu <= crs1 + crs2;
				when "000010" => -- addx
					salida_alu <= crs1 + crs2;
				when "000011" => -- sub
					salida_alu <= crs1 - crs2;
				when "000100" => -- subx
					salida_alu <= crs1 - crs2;
				when "000101" => -- and
					salida_alu <= crs1 and crs2;
				when "000110" => -- andn
					salida_alu <= crs1 nand crs2;
				when "000111" => --or
					salida_alu <= crs1 or crs2;				
				when "001000" => --orn
					salida_alu <= crs1 nor crs2;	
				when "001011" => -- xor
					salida_alu <= crs1 xor crs2;
				when "001100" => -- xnor
					salida_alu <= crs1 xnor crs2;
				when others => --nop
					salida_alu <= (others=>'0');
			end case;
	end process;
end Behavioral;

