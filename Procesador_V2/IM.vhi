
-- VHDL Instantiation Created from source file IM.vhd -- 03:26:45 10/09/2017
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT IM
	PORT(
		rst : IN std_logic;
		address : IN std_logic_vector(31 downto 0);          
		outInstruction : OUT std_logic_vector(31 downto 0)
		);
	END COMPONENT;

	Inst_IM: IM PORT MAP(
		rst => ,
		address => ,
		outInstruction => 
	);


