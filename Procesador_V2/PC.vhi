
-- VHDL Instantiation Created from source file PC.vhd -- 03:16:28 10/09/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT PC
	PORT(
		clk : IN std_logic;
		rst : IN std_logic;
		senal : IN std_logic_vector(31 downto 0);          
		salida : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_PC: PC PORT MAP(
		clk => ,
		rst => ,
		senal => ,
		salida => 
	);


