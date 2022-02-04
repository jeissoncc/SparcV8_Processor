----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    03:00:20 10/09/2017 
-- Design Name: 
-- Module Name:    nPC - Behavioral 
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity nPC is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           senal : in  STD_LOGIC_VECTOR (31 downto 0);
           sal_npc : out  STD_LOGIC_VECTOR (31 downto 0));
end nPC;

architecture Behavioral of nPC is

begin
	process (clk,rst,senal)
		begin
			if(rising_edge(clk))then
				if rst='1' then
					sal_npc<=x"00000000";
				else
					sal_npc<=senal;		
				end if;
			end if;
	end process;
end Behavioral;

