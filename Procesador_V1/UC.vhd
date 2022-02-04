----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:59:00 10/02/2017 
-- Design Name: 
-- Module Name:    UC - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity UC is
    Port ( op : in  STD_LOGIC_VECTOR (1 downto 0);
           op3 : in  STD_LOGIC_VECTOR (5 downto 0);
           salida_uc : out  STD_LOGIC_VECTOR (5 downto 0));
end UC;

architecture Behavioral of UC is

begin
 process(op,op3)
	begin
		if (op="10")then   
			case op3 is			
				when "000001" => -- add
					salida_uc <= "000001";
				when "000010" => -- addx
					salida_uc <= "000010";
				when "000011" => -- sub
					salida_uc <= "000011";
				when "000100" => -- subx
					salida_uc <= "000100";
				when "000101" => -- and
					salida_uc <= "000101";
				when "000110" => -- andn
					salida_uc <= "000110";
				when "000111" => --or
					salida_uc <= "000111";				
				when "001000" => --orn
					salida_uc <= "001000";	
				when "001011" => -- xor
					salida_uc <= "001011";
				when "001100" => -- xnor
					salida_uc <= "001100";
				when others => --nop
					salida_uc <= "111111";
		end case;						 
	end if; 
end process; 

end Behavioral;

