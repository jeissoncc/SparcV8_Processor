----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:41:20 10/14/2017 
-- Design Name: 
-- Module Name:    ALU -crs2 ehavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

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
			  Carry : in STD_LOGIC;
           salida_alu: out  STD_LOGIC_VECTOR (31 downto 0));
end ALU;

architecture Behavioral of ALU is

begin
	process(entrada_uc,crs1,crs2)
	begin
		case entrada_uc is	
		
			when 	"000000" => --ADD
				salida_alu <= crs1 + crs2;			
			when 	"000001" => --SUB
				salida_alu <= crs1 - crs2;				
			when 	"000010" => --AND
				salida_alu <=crs1 and crs2;										
			when 	"000011" => --ANDN
				salida_alu <=crs1 and not crs2;			
			when 	"000100" => --OR
				salida_alu <=crs1 or crs2;										
			when 	"000101" => --ORN
				salida_alu <=crs1 or not crs2;			
			when 	"000110" => --XOR
				salida_alu <=crs1 xor crs2;										
			when 	"000111" => --XNOR
				salida_alu <=crs1 xnor crs2;			
			when 	"001000" => --SUBcc
				salida_alu <=crs1 - crs2;			
			when 	"001001" => -- SUBx
				salida_alu <=crs1 - crs2 - Carry;			
			when 	"001010" => --SUBxcc
				salida_alu <=crs1 - crs2 - Carry;			
			when 	"001011" => --ANDcc
				salida_alu <=crs1 and crs2;			
			when 	"001100" => --ANDNcc
				salida_alu <=crs1 and not crs2;			
			when 	"001101" => --ORcc
				salida_alu <=crs1 or crs2;			
			when 	"001110" => --ORNcc
				salida_alu <=crs1 or not crs2;			
			when 	"001111" => --XORcc
				salida_alu <=crs1 xor crs2;			
			when 	"010000" => --XNORcc
				salida_alu <=crs1 xnor crs2;			
			when 	"010001" => --ADDx
				salida_alu <=crs1 + crs2 + Carry;			
			when 	"010010" => --ADDxcc
				salida_alu <=crs1 + crs2 + Carry;			
			when 	"010011" => --ADDcc 
				salida_alu <=crs1 + crs2;				
			when others =>
				salida_alu <= (others=>'1'); --error			
			end case;
	end process;	
end Behavioral;

