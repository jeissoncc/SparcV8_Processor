
-- VHDL Instantiation Created from source file MUX.vhd -- 03:35:17 10/09/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT MUX
	PORT(
		i : IN std_logic;
		crs2 : IN std_logic_vector(31 downto 0);
		dato_seu : IN std_logic_vector(31 downto 0);          
		sal_mux : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_MUX: MUX PORT MAP(
		i => ,
		crs2 => ,
		dato_seu => ,
		sal_mux => 
	);


