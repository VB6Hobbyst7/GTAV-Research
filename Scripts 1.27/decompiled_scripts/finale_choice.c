#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	float fLocal_20 = 0f;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	int iLocal_27 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	bool bVar0;
	
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	sLocal_19 = "NULL";
	fLocal_20 = 0f;
	fLocal_24 = -0.0375f;
	fLocal_25 = 0.17f;
	iLocal_27 = 1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_35();
	}
	func_34(20);
	func_33();
	func_32(1);
	func_32(0);
	func_32(2);
	func_32(13);
	func_32(12);
	Global_8DC = 1;
	func_31();
	if (!func_30(-1615086084))
	{
		func_29(-1615086084, 2, 2, 2, 1, -1, 5);
	}
	if (!func_30(-1970925435))
	{
		func_29(-1970925435, 2, 0, 0, 1, -1, 5);
	}
	if (!func_30(-1817481777))
	{
		func_29(-1817481777, 2, 12, 3, 1, -1, 5);
	}
	bVar0 = false;
	while (func_28(23) && !func_27(134))
	{
		if (func_23() == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if ((!PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) && !FIRE::IS_ENTITY_ON_FIRE(PLAYER::PLAYER_PED_ID()))
					{
						if (!bVar0)
						{
							if (!((func_22() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) || func_21()))
							{
								if (func_13())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (iLocal_27)
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 384);
								PED::SET_PED_MAX_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID(), 0f);
								PAD::ENABLE_CONTROL_ACTION(0, 173, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 172, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 174, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 175, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 176, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 177, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 178, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 179, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 180, 1);
								PAD::ENABLE_CONTROL_ACTION(0, 181, 1);
							}
							else
							{
								PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
							}
							switch (func_12())
							{
								case -1615086084:
									if (!func_30(-1989308064))
									{
										func_8(-1989308064, 0, 1, 0, 1, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1989308064:
									func_7(12, 0);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 2, 1);
									break;
								
								case -1970925435:
									if (!func_30(-1060930305))
									{
										func_8(-1060930305, 0, 1, 2, 2, 6000, 6000, -1, 0, -1, 68);
									}
									break;
								
								case -1060930305:
									func_7(12, 1);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 1, 1);
									break;
								
								case -1817481777:
									func_7(12, 2);
									func_6(134, 1);
									STATS::STAT_SET_INT(joaat("sp_final_decision"), 3, 1);
									break;
								
								default:
									if (!func_5(0))
									{
										bVar0 = false;
									}
									else if (iLocal_27)
									{
										if (func_4())
										{
											iLocal_27 = 0;
										}
									}
									break;
								}
							}
						}
					}
				}
		}
		SYSTEM::WAIT(0);
	}
	func_3(20);
	Global_15F91 = 0;
	func_1();
	func_35();
}

int func_1()//Position - 0x2F0
{
	if (func_2(0))
	{
		return 0;
	}
	if (Global_15F91.f_8)
	{
		if (Global_15F91.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_15F91.f_A > 1)
	{
		return 0;
	}
	Global_15F91.f_A++;
	return 1;
}

bool func_2(bool bParam0)//Position - 0x33B
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

int func_3(int iParam0)//Position - 0x366
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

int func_4()//Position - 0x3C0
{
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		return 1;
	}
	return 0;
}

int func_5(int iParam0)//Position - 0x3E9
{
	if (iParam0 == 1)
	{
		if (Global_3839.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_8D7, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_3839.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_6(int iParam0, int iParam1)//Position - 0x443
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return;
	}
	if (Global_17C49.f_1CAD.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_17C49.f_1CAD.f_63.f_3A[iParam0] = iParam1;
}

void func_7(int iParam0, int iParam1)//Position - 0x488
{
	if (iParam0 == 13 || iParam0 == -1)
	{
		return;
	}
	if (Global_17C49.f_1CAD.f_63.f_CB[iParam0] == iParam1)
	{
		return;
	}
	Global_17C49.f_1CAD.f_63.f_CB[iParam0] = iParam1;
}

int func_8(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)//Position - 0x4CD
{
	struct<15> Var0;
	int iVar1;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 < 0)
	{
		return 0;
	}
	if (iParam7 == 76)
	{
		return 0;
	}
	if (iParam8 == 235)
	{
		return 0;
	}
	if (iParam3 == iParam2)
	{
		return 0;
	}
	if (((iParam2 != 144 && iParam2 != 0) && iParam2 != 1) && iParam2 != 2)
	{
		return 0;
	}
	if (Global_17C49.f_1738.f_88 < 9)
	{
		Var0 = iParam0;
		if (Global_17C49.f_1738.f_38F == Var0)
		{
			Global_17C49.f_1738.f_38F = -1;
		}
		Var0.f_3 = func_11(iParam1);
		Var0.f_5 = iParam6;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam5);
		Var0.f_1 = iParam10;
		iVar1 = 0;
		MISC::SET_BIT(&iVar1, iParam2);
		Var0.f_2 = iVar1;
		Var0.f_6 = iParam3;
		Var0.f_E = iParam4;
		Var0.f_A = -1;
		Var0.f_B = -1;
		Var0.f_7 = iParam7;
		Var0.f_8 = iParam8;
		Var0.f_9 = iParam9;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::CLEAR_BIT(&(Var0.f_1), 1);
		if (iParam1 == 0)
		{
			MISC::SET_BIT(&(Var0.f_1), 10);
		}
		Global_17C49.f_1738[Global_17C49.f_1738.f_88 /*15*/] = { Var0 };
		Global_17C49.f_1738.f_88++;
		func_9(iParam2);
		return 1;
	}
	return 0;
}

void func_9(int iParam0)//Position - 0x61E
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (!func_10(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738[iVar0 /*15*/].f_2, iParam0))
		{
			if (Global_17C49.f_1738[iVar0 /*15*/].f_3 > iVar1)
			{
				iVar1 = Global_17C49.f_1738[iVar0 /*15*/].f_3;
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < Global_17C49.f_1738.f_2FC)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_1738.f_28B[iVar2 /*14*/].f_2, iParam0))
		{
			if (Global_17C49.f_1738.f_28B[iVar2 /*14*/].f_3 == 5)
			{
				iVar1 = 5;
			}
		}
		iVar2++;
	}
	Global_17C49.f_1738.f_397[iParam0] = iVar1;
}

bool func_10(int iParam0)//Position - 0x6E2
{
	return iParam0 < 3;
}

int func_11(int iParam0)//Position - 0x6EE
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_12()//Position - 0x758
{
	return Global_17C49.f_1738.f_38F;
}

int func_13()//Position - 0x76A
{
	MISC::SET_BIT(&Global_8D8, 0);
	if (func_14(0, 0, 1, 1))
	{
		return 1;
	}
	return 0;
}

int func_14(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x78D
{
	if (Global_10A95)
	{
		if (iParam0 != 17 && iParam0 != 3)
		{
			return 0;
		}
		if (!MISC::IS_BIT_SET(Global_26D408, 14))
		{
			if (iParam0 == 17)
			{
				MISC::SET_BIT(&Global_26D408, 14);
				MISC::SET_BIT(&Global_26D408, 16);
			}
			if (iParam0 == 3)
			{
				MISC::SET_BIT(&Global_26D408, 14);
				MISC::SET_BIT(&Global_26D408, 15);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) > 0)
		{
			MISC::CLEAR_BIT(&Global_26D408, 14);
			MISC::CLEAR_BIT(&Global_26D408, 16);
			MISC::CLEAR_BIT(&Global_26D408, 15);
			return 1;
		}
		else
		{
			return 0;
		}
	}
	func_19();
	if (Global_3839.f_1 == 9)
	{
		return 0;
	}
	if (iParam2 == 0)
	{
		if (func_5(0) == 1)
		{
			return 0;
		}
	}
	if (Global_3817 == 1)
	{
		return 0;
	}
	if (Global_3839.f_1 == 7)
	{
		return 0;
	}
	if (iParam1 == 1)
	{
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_3836))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
		{
			if (Global_3839.f_1 < 4)
			{
				func_18("cellphone_flashhand");
				if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) == 0)
				{
					Global_3836 = SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", 1424);
				}
				SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
			}
		}
	}
	while (!Global_3827)
	{
		SYSTEM::WAIT(0);
	}
	func_17();
	func_15();
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) == 0)
	{
		Global_B35 = 0;
		Global_3839.f_1 = 7;
		func_18(&(Global_8DE[iParam0 /*15*/].f_5));
		if (bParam3)
		{
			if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) == 0)
			{
				Global_3837 = SYSTEM::START_NEW_SCRIPT(&(Global_8DE[iParam0 /*15*/].f_5), 3800);
			}
		}
		else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_8DE[iParam0 /*15*/].f_9) == 0)
		{
			Global_3837 = SYSTEM::START_NEW_SCRIPT(&(Global_8DE[iParam0 /*15*/].f_5), 2552);
		}
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8DE[iParam0 /*15*/].f_5));
		return 1;
	}
	return 1;
}

void func_15()//Position - 0x95E
{
	if (Global_10A95 == 0)
	{
		Global_8DE[14 /*15*/].f_4 = -99;
		Global_8DE[4 /*15*/].f_4 = -99;
		if (Global_2528A2)
		{
			func_16(14, "CELL_29", 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
		}
		else
		{
			func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		}
	}
}

void func_16(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x9B3
{
	StringCopy(&(Global_8DE[iParam0 /*15*/]), sParam1, 16);
	Global_8DE[iParam0 /*15*/].f_4 = iParam2;
	StringCopy(&(Global_8DE[iParam0 /*15*/].f_5), sParam3, 16);
	Global_8DE[iParam0 /*15*/].f_9 = MISC::GET_HASH_KEY(sParam3);
	Global_8DE[iParam0 /*15*/].f_A = iParam4;
	Global_8DE[iParam0 /*15*/].f_B = iParam5;
	Global_8DE[iParam0 /*15*/].f_C = iParam6;
	Global_8DE[iParam0 /*15*/].f_D = iParam7;
	Global_8DE[iParam0 /*15*/].f_E = iParam8;
	if (Global_8DE[iParam0 /*15*/].f_C == 0)
	{
		Global_8DE[iParam0 /*15*/].f_C = 0;
	}
	if (Global_8DE[iParam0 /*15*/].f_D == 0)
	{
		Global_8DE[iParam0 /*15*/].f_D = 0;
	}
	if (Global_8DE[iParam0 /*15*/].f_E == 0)
	{
		Global_8DE[iParam0 /*15*/].f_E = 0;
	}
}

void func_17()//Position - 0xA69
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 34)
	{
		Global_8DE[iVar0 /*15*/].f_4 = -99;
		iVar0++;
	}
	if (Global_10A95 == 0)
	{
		iVar1 = 0;
		while (iVar2 < 147)
		{
			if (Global_17C49.f_744E[iVar2 /*29*/].f_13[Global_3839] == 1)
			{
				iVar1 = 1;
			}
			iVar2++;
		}
		func_16(7, "CELL_5", 0, "appEmail", 4, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(4, "CELL_23", 2, "appChecklist", 39, 1, 1, 0, 0);
		if ((Global_8861 == 15 && func_2(0) == 0) && Global_8DC == 0)
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_38DA = 0;
			Global_8DD = 255;
		}
		else
		{
			func_16(20, "CELL_32", 3, "appSettings", 43, 1, 1, 0, 0);
			Global_38DA = 1;
			Global_8DD = 42;
		}
		if (iVar1 == 1)
		{
			func_16(0, "CELL_0", 4, "appContacts", 27, 1, 1, 0, 0);
		}
		else
		{
			func_16(0, "CELL_0", 4, "appContacts", 5, 1, 1, 0, 0);
		}
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		if (Global_17C49.f_3011.f_59 == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		if (Global_17C49.f_3011.f_58 == 1)
		{
			func_16(16, "CELL_25", 0, "appContacts", 40, 2, 1, 0, 0);
		}
		func_16(25, "CELL_14", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(11, "CELL_14", -99, "appContacts", 8, 2, 1, 0, 0);
		func_16(27, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", -99, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", -99, "appSettings", 17, 2, 1, 0, 0);
	}
	else
	{
		func_16(7, "CELL_5", 0, "appMPEmail", 4, 1, 1, 0, 0);
		func_16(10, "CELL_16", 5, "appSettings", 24, 1, 1, 0, 0);
		func_16(1, "CELL_1", 1, "appTextMessage", 2, 1, 1, 0, 0);
		func_16(3, "CELL_7", 6, "appCamera", 1, 1, 1, 0, 0);
		func_16(2, "CELL_2", 7, "appInternet", 6, 1, 1, 0, 0);
		func_16(14, "CELL_29", 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
		func_16(0, "CELL_0", 2, "appContacts", 5, 1, 1, 0, 0);
		func_16(21, "JIPMP_QJ", 3, "AppJIPMP", 14, 1, 1, 0, 0);
		if (MISC::IS_BIT_SET(Global_26D408, 4) == 1)
		{
			func_16(17, "CELL_28", 8, "appTrackify", 42, 1, 1, 0, 0);
		}
		func_16(13, "CELL_35", -99, "appMPCopBackup", 39, 1, 1, 0, 0);
		func_16(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
		func_16(15, "CELL_18", -99, "appContacts", 8, 1, 1, 0, 0);
		func_16(9, "CELL_13", -99, "appContacts", 13, 2, 1, 0, 0);
		func_16(5, "CELL_4", -99, "appContacts", 12, 2, 1, 0, 0);
		func_16(23, "CELL_15", 0, "appContacts", 17, 2, 1, 0, 0);
		func_16(24, "CELL_15", 1, "appContacts", 17, 2, 1, 0, 0);
		func_16(25, "CELL_15", 2, "appContacts", 17, 2, 1, 0, 0);
		func_16(26, "CELL_15", 3, "appContacts", 17, 2, 1, 0, 0);
		func_16(27, "CELL_15", 4, "appContacts", 17, 2, 1, 0, 0);
		func_16(28, "CELL_15", 5, "appContacts", 17, 2, 1, 0, 0);
		func_16(29, "CELL_15", 6, "appContacts", 17, 2, 1, 0, 0);
		func_16(30, "CELL_15", 7, "appContacts", 17, 2, 1, 0, 0);
		func_16(31, "CELL_15", 8, "appContacts", 17, 2, 1, 0, 0);
		func_16(32, "CELL_15", 9, "appContacts", 17, 2, 1, 0, 0);
		func_16(33, "CELL_15", 10, "appContacts", 17, 2, 1, 0, 0);
		if (!MISC::IS_BIT_SET(Global_26D408, 4) == 1)
		{
			if (Global_1801A4)
			{
				func_16(23, "CELL_CIRCBREAK", 8, "AppVLSI", 54, 1, 1, 0, 0);
			}
		}
	}
}

void func_18(char* sParam0)//Position - 0xEAE
{
	SCRIPT::REQUEST_SCRIPT(sParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
	{
		SYSTEM::WAIT(0);
	}
}

void func_19()//Position - 0xECE
{
	if (func_20(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[0 /*29*/])
			{
				Global_3839 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[1 /*29*/])
			{
				Global_3839 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_17C49.f_744E[2 /*29*/])
			{
				Global_3839 = 2;
			}
			else
			{
				Global_3839 = 0;
			}
		}
	}
	else
	{
		Global_3839 = func_23();
		if (Global_3839 == 145)
		{
			Global_3839 = 3;
		}
		if (Global_10A95)
		{
			Global_3839 = 3;
		}
		if (Global_3839 > 3)
		{
			Global_3839 = 3;
		}
	}
}

bool func_20(int iParam0)//Position - 0xF6F
{
	return Global_8861 == iParam0;
}

int func_21()//Position - 0xF7D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_22()//Position - 0xF99
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_23()//Position - 0xFB3
{
	func_24();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_24()//Position - 0xFCC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_26(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_25(PLAYER::PLAYER_PED_ID());
			if (func_10(iVar0) && (!func_20(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_10(Global_17C49.f_6C1.f_21B.f_C8D))
				{
					Global_17C49.f_6C1.f_21B.f_C8E = Global_17C49.f_6C1.f_21B.f_C8D;
				}
				Global_17C49.f_6C1.f_21B.f_C8F = iVar0;
				Global_17C49.f_6C1.f_21B.f_C8D = iVar0;
				return;
			}
		}
		else
		{
			if (Global_17C49.f_6C1.f_21B.f_C8D != 145)
			{
				Global_17C49.f_6C1.f_21B.f_C8F = Global_17C49.f_6C1.f_21B.f_C8D;
			}
			return;
		}
	}
	Global_17C49.f_6C1.f_21B.f_C8D = 145;
}

int func_25(var uParam0)//Position - 0x10C9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_26(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_26(int iParam0)//Position - 0x1106
{
	if (func_10(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_27(int iParam0)//Position - 0x1130
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

int func_28(int iParam0)//Position - 0x115D
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

int func_29(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1189
{
	struct<15> Var0;
	
	if (func_2(0))
	{
		return 0;
	}
	if (iParam2 < 3)
	{
		if (MISC::IS_BIT_SET(iParam1, iParam2))
		{
			return 0;
		}
	}
	if (iParam1 < 1 || iParam1 > 7)
	{
		return 0;
	}
	if (iParam4 <= 0)
	{
		return 0;
	}
	if (Global_17C49.f_1738.f_28A < 30)
	{
		Var0 = iParam0;
		if (Global_17C49.f_1738.f_38F == Var0)
		{
			Global_17C49.f_1738.f_38F = -1;
		}
		Var0.f_1 = 0;
		Var0.f_6 = iParam2;
		Var0.f_2 = iParam1;
		Var0.f_E = iParam3;
		Var0.f_3 = iParam6;
		Var0.f_7 = -1;
		Var0.f_8 = 0;
		Var0.f_9 = -1;
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_9 = iParam5;
		Var0.f_A = -1;
		Var0.f_B = -1;
		MISC::SET_BIT(&(Var0.f_1), 0);
		MISC::SET_BIT(&(Var0.f_1), 6);
		Global_17C49.f_1738.f_C7[Global_17C49.f_1738.f_28A /*15*/] = { Var0 };
		Global_17C49.f_1738.f_28A++;
		return 1;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x128F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (Global_17C49.f_1738[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_28A)
	{
		if (Global_17C49.f_1738.f_C7[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_C6)
	{
		if (Global_17C49.f_1738.f_89[iVar0 /*15*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_2FC)
	{
		if (Global_17C49.f_1738.f_28B[iVar0 /*14*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_362)
	{
		if (Global_17C49.f_1738.f_2FD[iVar0 /*10*/] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_31()//Position - 0x138B
{
	Global_15F91 = 1;
}

void func_32(int iParam0)//Position - 0x1398
{
	if (((iParam0 == 144 || iParam0 == 145) || iParam0 == 147) || iParam0 == 148)
	{
		return;
	}
	Global_8A89[iParam0] = MISC::GET_GAME_TIMER();
}

void func_33()//Position - 0x13D7
{
	Global_8A88 = MISC::GET_GAME_TIMER();
}

int func_34(int iParam0)//Position - 0x13E6
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_17C49.f_1CAD.f_63.f_D9[iVar0]), iVar1);
	return 1;
}

void func_35()//Position - 0x1440
{
	func_36(-1615086084);
	func_36(-1989308064);
	func_36(-1970925435);
	func_36(-1060930305);
	func_36(-1817481777);
	Global_8DC = 0;
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_36(int iParam0)//Position - 0x148C
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_88)
	{
		if (Global_17C49.f_1738[iVar0 /*15*/] == iParam0)
		{
			if (Global_8A84 != iVar0)
			{
				func_43(iVar0);
				func_40(iParam0);
				iVar1 = 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_C6)
	{
		if (Global_17C49.f_1738.f_89[iVar0 /*15*/] == iParam0)
		{
			func_40(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_28A)
	{
		if (Global_17C49.f_1738.f_C7[iVar0 /*15*/] == iParam0)
		{
			func_39(iParam0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_2FC)
	{
		if (Global_17C49.f_1738.f_28B[iVar0 /*14*/] == iParam0)
		{
			func_38(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_1738.f_362)
	{
		if (Global_17C49.f_1738.f_2FD[iVar0 /*10*/] == iParam0)
		{
			func_37(iVar0);
			iVar1 = 1;
		}
		iVar0++;
	}
	return iVar1;
}

void func_37(int iParam0)//Position - 0x15B3
{
	int iVar0;
	struct<10> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_17C49.f_1738.f_362)
	{
		return;
	}
	if (Global_17C49.f_1738.f_362 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_17C49.f_1738.f_362 - 2))
		{
			Global_17C49.f_1738.f_2FD[iVar0 /*10*/] = { Global_17C49.f_1738.f_2FD[iVar0 + 1 /*10*/] };
			iVar0++;
		}
	}
	if (Global_17C49.f_1738.f_362 > 0)
	{
		Global_17C49.f_1738.f_2FD[(Global_17C49.f_1738.f_362 - 1) /*10*/] = { Var1 };
		Global_17C49.f_1738.f_362 = (Global_17C49.f_1738.f_362 - 1);
	}
}

void func_38(int iParam0)//Position - 0x166C
{
	int iVar0;
	struct<14> Var1;
	
	if (iParam0 < 0 || iParam0 >= Global_17C49.f_1738.f_2FC)
	{
		return;
	}
	if (Global_17C49.f_1738.f_2FC > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_17C49.f_1738.f_2FC - 2))
		{
			Global_17C49.f_1738.f_28B[iVar0 /*14*/] = { Global_17C49.f_1738.f_28B[iVar0 + 1 /*14*/] };
			iVar0++;
		}
	}
	if (Global_17C49.f_1738.f_2FC > 0)
	{
		Global_17C49.f_1738.f_28B[(Global_17C49.f_1738.f_2FC - 1) /*14*/] = { Var1 };
		Global_17C49.f_1738.f_2FC = (Global_17C49.f_1738.f_2FC - 1);
	}
	func_9(0);
	func_9(1);
	func_9(2);
}

void func_39(int iParam0)//Position - 0x1734
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_17C49.f_1738.f_28A)
	{
		if (Global_17C49.f_1738.f_C7[iVar1 /*15*/] == iParam0)
		{
			iVar2 = iVar1;
			while (iVar2 <= (Global_17C49.f_1738.f_28A - 2))
			{
				Global_17C49.f_1738.f_C7[iVar2 /*15*/] = { Global_17C49.f_1738.f_C7[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_17C49.f_1738.f_C7[(Global_17C49.f_1738.f_28A - 1) /*15*/] = { Var0 };
			Global_17C49.f_1738.f_28A = (Global_17C49.f_1738.f_28A - 1);
			return;
		}
		iVar1++;
	}
}

void func_40(int iParam0)//Position - 0x17E1
{
	struct<15> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < Global_17C49.f_1738.f_C6)
	{
		if (Global_17C49.f_1738.f_89[iVar1 /*15*/] == iParam0)
		{
			func_41(Global_17C49.f_1738.f_89[iVar1 /*15*/].f_6);
			iVar2 = iVar1;
			while (iVar2 <= (Global_17C49.f_1738.f_C6 - 2))
			{
				Global_17C49.f_1738.f_89[iVar2 /*15*/] = { Global_17C49.f_1738.f_89[iVar2 + 1 /*15*/] };
				iVar2++;
			}
			Global_17C49.f_1738.f_89[(Global_17C49.f_1738.f_C6 - 1) /*15*/] = { Var0 };
			Global_17C49.f_1738.f_C6 = (Global_17C49.f_1738.f_C6 - 1);
			return;
		}
		iVar1++;
	}
}

int func_41(int iParam0)//Position - 0x189D
{
	int iVar0;
	
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		if (Global_17C49.f_744E[iParam0 /*29*/].f_13[Global_3839] == 1)
		{
			Global_17C49.f_744E[iParam0 /*29*/].f_13[Global_3839] = 0;
			if (Global_17C49.f_744E[iParam0 /*29*/].f_18[Global_3839] == 0)
			{
				iVar0 = Global_3839;
				func_42(iParam0, iVar0);
			}
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

void func_42(int iParam0, int iParam1)//Position - 0x190E
{
	if (Global_61[iParam0 /*10*/].f_8 != 138)
	{
		if (iParam1 > 3)
		{
		}
		else
		{
			Global_17C49.f_744E[iParam0 /*29*/].f_C[iParam1] = 0;
			Global_17C49.f_744E[iParam0 /*29*/].f_18[iParam1] = 0;
		}
	}
}

void func_43(int iParam0)//Position - 0x1951
{
	int iVar0;
	var uVar1;
	struct<15> Var2;
	
	if (iParam0 < 0 || iParam0 >= Global_17C49.f_1738.f_88)
	{
		return;
	}
	uVar1 = Global_17C49.f_1738[iParam0 /*15*/].f_2;
	if (Global_17C49.f_1738.f_88 > 1)
	{
		iVar0 = iParam0;
		while (iVar0 <= (Global_17C49.f_1738.f_88 - 2))
		{
			Global_17C49.f_1738[iVar0 /*15*/] = { Global_17C49.f_1738[iVar0 + 1 /*15*/] };
			iVar0++;
		}
	}
	if (Global_17C49.f_1738.f_88 > 0)
	{
		Global_17C49.f_1738[(Global_17C49.f_1738.f_88 - 1) /*15*/] = { Var2 };
		Global_17C49.f_1738.f_88 = (Global_17C49.f_1738.f_88 - 1);
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (MISC::IS_BIT_SET(uVar1, iVar0))
		{
			func_9(iVar0);
		}
		iVar0++;
	}
}

