//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Launch Google");
	truclient_step("1", "Navigate to 'http://www.google.com/'", "snapshot=Action_1.inf");
	lr_end_transaction("Launch Google",0);
	truclient_step("2", "Type microfous in Search combobox", "snapshot=Action_2.inf");
	lr_start_transaction("Retrieve_Results");
	truclient_step("3", "Press key Enter on Search combobox", "snapshot=Action_3.inf");
	lr_end_transaction("Retrieve_Results",0);

	return 0;
}
