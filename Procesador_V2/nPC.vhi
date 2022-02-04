
-- VHDL Instantiation Created from source file nPC.vhd -- 03:15:38 10/09/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT nPC
	PORT(
		clk : IN std_logic;
		rst : IN std_logic;
		senal : IN std_logic_vector(31 downto 0);          
		sal_npc : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_nPC: nPC PORT MAP(
		clk => ,
		rst => ,
		senal => ,
		sal_npc => 
	);


