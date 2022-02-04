----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:39:11 10/14/2017 
-- Design Name: 
-- Module Name:    MUX - Behavioral 
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

entity MUX is
    Port ( i : in  STD_LOGIC;
           crs2 : in  STD_LOGIC_VECTOR (31 downto 0);
           dato_seu : in  STD_LOGIC_VECTOR (31 downto 0);
           sal_mux : out  STD_LOGIC_VECTOR (31 downto 0));
end MUX;

architecture Behavioral of MUX is

begin
	process(i,crs2,dato_seu)
		begin
			if(i='1')then
				sal_mux<= dato_seu;--si el inmediato es cero retorna el valor del register file
			else 
				if(i='0')then
					sal_mux <= crs2;--si el valor es uno retorna el valor de unidad de extnsion 
				end if ; 
			end if; 	
	end process; 
end Behavioral;

