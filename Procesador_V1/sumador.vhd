----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:32:17 09/28/2017 
-- Design Name: 
-- Module Name:    sumador - Behavioral 
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
use IEEE.NUMERIC_STD.ALL;
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity sumador is
    Port ( operador1 : in  STD_LOGIC_VECTOR (31 downto 0);
           operador2 : in  STD_LOGIC_VECTOR (31 downto 0);
           sal_sumador : out  STD_LOGIC_VECTOR (31 downto 0));
end sumador;

architecture Behavioral of sumador is

begin
process (operador1, operador2)
begin
   sal_sumador <= STD_LOGIC_VECTOR(unsigned(operador1) + unsigned(operador2));
end process;

end Behavioral;


