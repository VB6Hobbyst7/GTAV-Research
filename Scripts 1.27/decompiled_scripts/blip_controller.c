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
	char* sLocal_17 = NULL;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	char* sLocal_21 = NULL;
	char* sLocal_22 = NULL;
	struct<3> Local_23 = { 0, 0, 0 } ;
	struct<3> Local_24 = { 0, 0, 0 } ;
	int iLocal_25 = 0;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	float fLocal_34 = 0f;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	bool bLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	bool bLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[7] = { 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	
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
	sLocal_17 = "NULL";
	sLocal_20 = "CHECKPOINT_NORMAL";
	sLocal_21 = "CHECKPOINT_MISSED";
	sLocal_22 = "CHECKPOINT_PERFECT";
	Local_23 = { 1694.74f, 3276.502f, 41.2796f };
	Local_24 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_25 = 3;
	fLocal_26 = 0f;
	fLocal_30 = -0.0375f;
	fLocal_31 = 0.17f;
	fLocal_34 = 80f;
	fLocal_35 = 140f;
	fLocal_36 = 180f;
	bLocal_45 = true;
	iLocal_48 = -1;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_50();
	}
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		iVar1 = func_49(iVar0);
		func_46(iVar1, func_47(iVar0));
		iVar0++;
	}
	func_45(90, 1);
	func_45(91, 1);
	Global_60A9 = 1;
	while (Global_60AB)
	{
		if ((MISC::GET_GAME_TIMER() % 250) == 0)
		{
		}
		SYSTEM::WAIT(0);
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iLocal_50[iVar2] = -1;
		iVar2++;
	}
	MISC::SET_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 18);
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 262)
	{
		MISC::SET_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 18);
		iVar2++;
	}
	iLocal_59 = Global_7838;
	bVar3 = false;
	func_44();
	func_42();
	while (true)
	{
		if (!bVar3)
		{
			func_41();
		}
		bVar3 = func_34();
		if (bVar3)
		{
			Global_60A9 = 1;
		}
		iVar4 = 0;
		iVar5 = 0;
		iVar2 = 0;
		if (Global_60A9)
		{
			func_44();
			func_42();
			iVar6 = 0;
			iVar2 = 0;
			while (iVar2 < 262)
			{
				bVar7 = MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 18);
				if (!bVar7)
				{
					if (func_33(iVar2))
					{
						iVar5++;
						bVar7 = true;
					}
				}
				iVar4++;
				if (bVar7)
				{
					iVar8 = 0;
					iVar9 = 0;
					if (Global_7838)
					{
						iVar8++;
						iVar9++;
					}
					else
					{
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 13))
						{
							if (func_32())
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 1))
						{
							if (!bLocal_45)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 2))
						{
							if (bLocal_45)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 7))
						{
							if (!func_31(15))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 16))
						{
							if (!func_29(Global_60AC[iVar2 /*23*/].f_16))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 14))
						{
							if (func_31(5))
							{
								iVar8++;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 8))
						{
							if (Global_60AC[iVar2 /*23*/].f_10 != 4 && Global_60AC[iVar2 /*23*/].f_10 != 8)
							{
								if (!func_28(iVar2))
								{
									iVar8++;
								}
								iVar9++;
							}
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 19))
						{
							switch (iLocal_52)
							{
								case 1:
								case 0:
								case 2:
									break;
								
								default:
									iVar8++;
									break;
							}
							iVar9++;
						}
						if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 27))
						{
							if (bLocal_40)
							{
								iVar8++;
							}
							iVar9++;
						}
						if (Global_60AC[iVar2 /*23*/].f_10 == 1)
						{
							func_22();
						}
					}
					if (iVar9 > 0)
					{
						if (iVar8 > 0)
						{
							MISC::CLEAR_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 0);
						}
						else if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 15))
						{
							MISC::SET_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 0);
						}
					}
					else if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 15))
					{
						MISC::SET_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 0);
					}
					if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 0) && MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 3))
					{
						bVar10 = false;
						if (!HUD::DOES_BLIP_EXIST(Global_60AC[iVar2 /*23*/].f_13))
						{
							while (!HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
							if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 19))
							{
								switch (iLocal_52)
								{
									case 1:
									case 0:
									case 2:
										if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 28))
										{
											Global_60AC[iVar2 /*23*/].f_13 = HUD::ADD_BLIP_FOR_RADIUS(Global_60AC[iVar2 /*23*/][0 /*3*/], Global_60AC[iVar2 /*23*/].f_A);
											HUD::SET_BLIP_ALPHA(Global_60AC[iVar2 /*23*/].f_13, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_60AC[iVar2 /*23*/].f_13, 0);
										}
										else
										{
											Global_60AC[iVar2 /*23*/].f_13 = HUD::ADD_BLIP_FOR_COORD(Global_60AC[iVar2 /*23*/][iLocal_52 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_60AC[iVar2 /*23*/].f_13, Global_60AC[iVar2 /*23*/].f_C[iLocal_52]);
										}
										break;
									
									default:
										Global_60AC[iVar2 /*23*/].f_13 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 28))
							{
								Global_60AC[iVar2 /*23*/].f_13 = HUD::ADD_BLIP_FOR_RADIUS(Global_60AC[iVar2 /*23*/][0 /*3*/], Global_60AC[iVar2 /*23*/].f_A);
								HUD::SET_BLIP_ALPHA(Global_60AC[iVar2 /*23*/].f_13, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_60AC[iVar2 /*23*/].f_13, 0);
							}
							else
							{
								Global_60AC[iVar2 /*23*/].f_13 = HUD::ADD_BLIP_FOR_COORD(Global_60AC[iVar2 /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_60AC[iVar2 /*23*/].f_13, Global_60AC[iVar2 /*23*/].f_C[0]);
							}
							if (Global_60AC[iVar2 /*23*/].f_10 == 1)
							{
								bVar10 = true;
							}
						}
						else
						{
							if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 19))
							{
								switch (iLocal_52)
								{
									case 1:
									case 0:
									case 2:
										HUD::SET_BLIP_COORDS(Global_60AC[iVar2 /*23*/].f_13, Global_60AC[iVar2 /*23*/][iLocal_52 /*3*/]);
										break;
									
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_60AC[iVar2 /*23*/].f_13, Global_60AC[iVar2 /*23*/][0 /*3*/]);
							}
							if (MISC::IS_BIT_SET(Global_60AC[iVar2 /*23*/].f_B, 9))
							{
								if (iLocal_42)
								{
									HUD::SET_BLIP_FLASHES(Global_60AC[iVar2 /*23*/].f_13, 1);
									iLocal_42 = 0;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_60AC[iVar2 /*23*/].f_13, 1);
									iLocal_42 = 1;
								}
								HUD::SET_BLIP_FLASH_TIMER(Global_60AC[iVar2 /*23*/].f_13, 10000);
								MISC::CLEAR_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_60AC[iVar2 /*23*/].f_13, 0);
							}
						}
						func_19(Global_60AC[iVar2 /*23*/].f_13, iVar2);
						if (bVar10)
						{
							func_18(iVar2);
						}
						iVar5++;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar2 /*23*/].f_13))
						{
							HUD::REMOVE_BLIP(&(Global_60AC[iVar2 /*23*/].f_13));
							iVar5++;
							if (Global_60AC[iVar2 /*23*/].f_10 == 1)
							{
								func_17(iVar2);
							}
						}
						Global_60AC[iVar2 /*23*/].f_13 = 0;
					}
				}
				MISC::CLEAR_BIT(&(Global_60AC[iVar2 /*23*/].f_B), 18);
				iVar11 = 30;
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					iVar11 = 250;
				}
				if (iVar5 > iVar11)
				{
					SYSTEM::WAIT(0);
					iVar5 = 0;
				}
				if ((iVar4 / 20) > iVar6)
				{
					iVar6 = (iVar4 / 20);
					SYSTEM::WAIT(0);
				}
				iVar2++;
			}
		}
		Global_60A9 = Global_60AA;
		Global_60AA = 0;
		if (iVar4 == 0)
		{
			func_10();
			func_6();
			SYSTEM::WAIT(500);
			iLocal_52 = func_1();
		}
	}
}

int func_1()//Position - 0x743
{
	func_2();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_2()//Position - 0x75C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_5(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_4(PLAYER::PLAYER_PED_ID());
			if (func_3(iVar0) && (!func_31(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_3(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_3(int iParam0)//Position - 0x859
{
	return iParam0 < 3;
}

int func_4(var uParam0)//Position - 0x865
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_5(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_5(int iParam0)//Position - 0x8A2
{
	if (func_3(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_6()//Position - 0x8CC
{
	if (func_1() == 1)
	{
		if (func_9(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_9(126))
				{
					if (func_8(137))
					{
						func_7(137, 0, 0);
					}
					if (!func_8(138))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 19.3f, 528.24f, 169.63f, 1) > 50f)
							{
								func_7(138, 1, 0);
							}
						}
					}
				}
				else
				{
					if (func_8(138))
					{
						func_7(138, 0, 0);
					}
					if (!func_8(137))
					{
						if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop")) == 0)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), -11.15f, -1425.56f, 29.67f, 1) > 50f)
							{
								func_7(137, 1, 0);
							}
						}
					}
				}
			}
		}
	}
}

void func_7(int iParam0, bool bParam1, bool bParam2)//Position - 0x9A8
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (!bParam2)
	{
		iVar1 = MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 15);
		if (iVar1 == bParam1)
		{
			return;
		}
	}
	if (bParam1 != MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
		if (Global_60A9 == 1)
		{
			Global_60AA = 1;
		}
		Global_60A9 = 1;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 0);
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 15);
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(1);
			HUD::REMOVE_BLIP(&(Global_60AC[iVar0 /*23*/].f_13));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(0);
		}
	}
}

bool func_8(int iParam0)//Position - 0xAB1
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	return HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13);
}

int func_9(int iParam0)//Position - 0xAED
{
	if (iParam0 == 144 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_63.f_3A[iParam0];
}

void func_10()//Position - 0xB1A
{
	struct<3> Var0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	Var0 = { func_16(PLAYER::GET_PLAYER_INDEX()) };
	iVar1 = -1;
	fVar2 = 1000000f;
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_50[iVar3] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_60AC[iLocal_50[iVar3] /*23*/].f_13))
			{
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, HUD::GET_BLIP_COORDS(Global_60AC[iLocal_50[iVar3] /*23*/].f_13), 1);
				if (fVar4 < fVar2)
				{
					fVar2 = fVar4;
					iVar1 = iVar3;
				}
			}
		}
		iVar3++;
	}
	if (iLocal_48 == iVar1)
	{
		return;
	}
	iLocal_48 = iVar1;
	if (iVar1 == -1)
	{
		return;
	}
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (iLocal_50[iVar3] != -1)
		{
			if (iVar3 == iVar1)
			{
				if (HUD::DOES_BLIP_EXIST(Global_60AC[iLocal_50[iVar3] /*23*/].f_13))
				{
					func_15(iLocal_50[iVar3]);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(Global_60AC[iLocal_50[iVar3] /*23*/].f_13))
			{
				func_11(iLocal_50[iVar3]);
			}
		}
		iVar3++;
	}
}

void func_11(int iParam0)//Position - 0xC1E
{
	func_14(iParam0, 0, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

void func_12(int iParam0, bool bParam1)//Position - 0xC3C
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 4))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 4);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_13(int iParam0, bool bParam1)//Position - 0xCC2
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 5))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 5);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_14(int iParam0, bool bParam1, bool bParam2)//Position - 0xD48
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 6))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 6);
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 11);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_15(int iParam0)//Position - 0xDF4
{
	func_14(iParam0, 1, 0);
	func_13(iParam0, 1);
	func_12(iParam0, 1);
}

Vector3 func_16(var uParam0)//Position - 0xE12
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_17(int iParam0)//Position - 0xE25
{
	int iVar0;
	
	if (iLocal_49 < 1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_50[iVar0] == iParam0)
		{
			iLocal_49 = (iLocal_49 - 1);
			iLocal_50[iVar0] = -1;
			if (iParam0 == iLocal_48)
			{
				iLocal_48 = -1;
			}
			return;
		}
		iVar0++;
	}
}

void func_18(int iParam0)//Position - 0xE70
{
	int iVar0;
	int iVar1;
	
	if (iLocal_49 == 7)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < iLocal_49)
	{
		if (iLocal_50[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iLocal_50[iVar0] == -1)
		{
			iVar1 = iVar0;
			iVar0 = 7;
		}
		iVar0++;
	}
	iLocal_50[iVar1] = iParam0;
	iLocal_49++;
}

void func_19(var uParam0, int iParam1)//Position - 0xED9
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	
	iVar0 = func_1();
	HUD::_SET_BLIP_DISPLAY_INDICATOR_ON_BLIP(uParam0, 1);
	HUD::SET_BLIP_PRIORITY(uParam0, 2);
	HUD::SET_BLIP_COLOUR(uParam0, func_21(iParam1));
	if (Global_60AC[iParam1 /*23*/].f_10 == 4 || Global_60AC[iParam1 /*23*/].f_10 == 8)
	{
		switch (iVar0)
		{
			case 0:
				HUD::SET_BLIP_COLOUR(uParam0, 42);
				break;
			
			case 1:
				HUD::SET_BLIP_COLOUR(uParam0, 43);
				break;
			
			case 2:
				HUD::SET_BLIP_COLOUR(uParam0, 44);
				break;
			}
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 28))
	{
		HUD::SET_BLIP_SCALE(uParam0, 1f);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_60AC[iParam1 /*23*/].f_14)))
	{
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_60AC[iParam1 /*23*/].f_14)))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0, &(Global_60AC[iParam1 /*23*/].f_14));
		}
	}
	bVar1 = MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 4);
	bVar2 = MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 5);
	bVar3 = MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 6);
	bVar4 = false;
	if (func_20(0))
	{
		bVar4 = MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 11);
	}
	if (bVar3 && !bVar4)
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, false);
	}
	else
	{
		HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, true);
	}
	if (bVar2 && bVar1)
	{
		HUD::SET_BLIP_DISPLAY(uParam0, 4);
	}
	else
	{
		if (bVar2)
		{
			HUD::SET_BLIP_DISPLAY(uParam0, 5);
		}
		if (bVar1)
		{
			HUD::SET_BLIP_DISPLAY(uParam0, 3);
		}
	}
	switch (Global_60AC[iParam1 /*23*/].f_10)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(uParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(uParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 1:
			HUD::SET_BLIP_PRIORITY(uParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
		
		case 9:
			HUD::SET_BLIP_PRIORITY(uParam0, 1);
			HUD::SET_BLIP_CATEGORY(uParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 0);
			break;
		
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			if (Global_60AC[iParam1 /*23*/].f_10 == 4)
			{
				HUD::SET_BLIP_PRIORITY(uParam0, 7);
			}
			else
			{
				HUD::SET_BLIP_PRIORITY(uParam0, 5);
			}
			if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 8))
			{
				if (!func_28(iParam1))
				{
					if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 28))
					{
						HUD::SET_BLIP_ALPHA(uParam0, 0);
					}
					else
					{
						if (Global_60AC[iParam1 /*23*/].f_11 == 0)
						{
							HUD::SET_BLIP_COLOUR(uParam0, 42);
						}
						if (Global_60AC[iParam1 /*23*/].f_11 == 1)
						{
							HUD::SET_BLIP_COLOUR(uParam0, 43);
						}
						if (Global_60AC[iParam1 /*23*/].f_11 == 2)
						{
							HUD::SET_BLIP_COLOUR(uParam0, 44);
						}
						if (Global_60AC[iParam1 /*23*/].f_10 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 5));
							HUD::SET_BLIP_PRIORITY(uParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(uParam0, true);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(uParam0, 1);
							HUD::SET_BLIP_SCALE(uParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(uParam0, 0.72f);
						}
					}
				}
				else
				{
					if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 28))
					{
						HUD::SET_BLIP_ALPHA(uParam0, 128);
					}
					if (Global_60AC[iParam1 /*23*/].f_10 == 8)
					{
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(uParam0, 0);
					}
				}
			}
			break;
		
		default:
			HUD::SET_BLIP_PRIORITY(uParam0, 5);
			break;
	}
	switch (iParam1)
	{
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			HUD::SET_BLIP_HIGH_DETAIL(uParam0, 1);
			break;
	}
	if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 19))
	{
		switch (iVar0)
		{
			case 1:
			case 0:
			case 2:
				HUD::SET_BLIP_COORDS(Global_60AC[iParam1 /*23*/].f_13, Global_60AC[iParam1 /*23*/][iVar0 /*3*/]);
				break;
			}
	}
	if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 17))
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 1);
	}
	else
	{
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(uParam0, 0);
	}
	if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 20))
	{
		HUD::SHOW_TICK_ON_BLIP(uParam0, 1);
	}
	else
	{
		HUD::SHOW_TICK_ON_BLIP(uParam0, 0);
	}
	if (MISC::IS_BIT_SET(Global_60AC[iParam1 /*23*/].f_B, 29))
	{
		HUD::SET_BLIP_COLOUR(uParam0, 39);
	}
}

int func_20(int iParam0)//Position - 0x12E7
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_29(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_21(int iParam0)//Position - 0x1309
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	uVar1 = MISC::GET_BITS_IN_RANGE(Global_60AC[iVar0 /*23*/].f_B, 21, 26);
	return uVar1;
}

void func_22()//Position - 0x134C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_23(iVar0);
		iVar0++;
	}
}

void func_23(int iParam0)//Position - 0x136C
{
	bool bVar0;
	
	if (iParam0 == 10)
	{
		return;
	}
	if (Global_14D9D[iParam0 /*10*/].f_7 == 262)
	{
		return;
	}
	bVar0 = false;
	if (MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0))
	{
		if (Global_14D9D[iParam0 /*10*/].f_9 != func_27())
		{
			bVar0 = true;
		}
		else if (!func_25(iParam0))
		{
			bVar0 = true;
		}
	}
	if (iParam0 == 5)
	{
		if (func_24(6))
		{
			bVar0 = false;
		}
	}
	if (func_20(14))
	{
		bVar0 = false;
	}
	func_7(Global_14D9D[iParam0 /*10*/].f_7, bVar0, 0);
}

bool func_24(int iParam0)//Position - 0x13F9
{
	return MISC::IS_BIT_SET(Global_17C49.f_156E[iParam0], 0);
}

int func_25(int iParam0)//Position - 0x1411
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (Global_15F9E.f_120 == 0)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (func_25(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_26(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_14D9D[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_15F9E.f_120 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_26(int iParam0, char* sParam1)//Position - 0x1496
{
	StringCopy(sParam1, "", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "v_michael", 32);
			break;
		
		case 5:
			StringCopy(sParam1, "v_franklins", 32);
			break;
		
		case 6:
			StringCopy(sParam1, "v_franklinshouse", 32);
			break;
		
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
			{
				StringCopy(sParam1, "v_trailer", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
			{
				StringCopy(sParam1, "V_TrailerTIDY", 32);
			}
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
			{
				StringCopy(sParam1, "V_TrailerTRASH", 32);
			}
			break;
		
		case 3:
			StringCopy(sParam1, "v_trevors", 32);
			break;
		
		case 4:
			StringCopy(sParam1, "v_strip3", 32);
			break;
		
		case 8:
		case 7:
		case 9:
			StringCopy(sParam1, "v_psycheoffice", 32);
			break;
	}
	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_27()//Position - 0x156A
{
	func_2();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

int func_28(int iParam0)//Position - 0x1583
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 8))
	{
		return 0;
	}
	if (Global_60AC[iVar0 /*23*/].f_11 == func_1())
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 10))
	{
		return 0;
	}
	if (Global_60AC[iVar0 /*23*/].f_12 == func_1())
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)//Position - 0x1609
{
	return func_30(iParam0, Global_8861);
}

int func_30(int iParam0, int iParam1)//Position - 0x161A
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

bool func_31(int iParam0)//Position - 0x17FB
{
	return Global_8861 == iParam0;
}

int func_32()//Position - 0x1809
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
	{
		return 1;
	}
	return 0;
}

int func_33(int iParam0)//Position - 0x1822
{
	if (iLocal_56 && MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 13))
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_57 && ((MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 7) || MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 11)) || MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 16)))
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_58 && MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 14))
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_53 && ((MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 10) || MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 8)) || MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 19)))
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (bLocal_54)
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if (iLocal_60 && MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 27))
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	if ((iLocal_61 && (MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 1) || MISC::IS_BIT_SET(Global_60AC[iParam0 /*23*/].f_B, 2))) || Global_60AC[iParam0 /*23*/].f_10 == 1)
	{
		MISC::SET_BIT(&(Global_60AC[iParam0 /*23*/].f_B), 18);
		return 1;
	}
	return 0;
}

int func_34()//Position - 0x19C2
{
	int iVar0;
	
	iVar0 = 0;
	if (func_40())
	{
		if (!iLocal_55)
		{
			iLocal_55 = 1;
			iVar0 = 1;
		}
	}
	if (func_39())
	{
		if (!iLocal_56)
		{
			iLocal_56 = 1;
			iVar0 = 1;
		}
	}
	if (func_38())
	{
		if (!iLocal_57)
		{
			iLocal_57 = 1;
			iVar0 = 1;
		}
	}
	if (func_37())
	{
		if (!iLocal_58)
		{
			iLocal_58 = 1;
			iVar0 = 1;
		}
	}
	bLocal_54 = false;
	if (Global_7838 != iLocal_59)
	{
		iLocal_59 = Global_7838;
		if (!bLocal_54)
		{
			bLocal_54 = true;
			iVar0 = 1;
		}
	}
	if (func_35())
	{
		if (!iLocal_61)
		{
			iLocal_61 = 1;
			iVar0 = 1;
		}
	}
	iLocal_52 = func_1();
	if (iLocal_52 != iLocal_51)
	{
		iLocal_51 = iLocal_52;
		iLocal_53 = 1;
		iVar0 = 1;
	}
	iLocal_41 = bLocal_40;
	if (func_9(130))
	{
		bLocal_40 = true;
	}
	if (func_9(131))
	{
		bLocal_40 = false;
	}
	if (bLocal_40 != iLocal_41)
	{
		if (!iLocal_60)
		{
			iVar0 = 1;
		}
		iLocal_60 = 1;
	}
	return iVar0;
}

int func_35()//Position - 0x1A90
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
	{
		return 0;
	}
	iVar0 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	if (iLocal_46 != iVar0)
	{
		iLocal_46 = iVar0;
		if (iVar0 == 0 || func_36(iVar0))
		{
			bLocal_45 = true;
		}
		else
		{
			bLocal_45 = false;
		}
		return 1;
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x1AE5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 60)
	{
		if (Global_1D[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_37()//Position - 0x1B14
{
	if (iLocal_47 != func_20(0))
	{
		iLocal_47 = func_20(0);
		return 1;
	}
	return 0;
}

bool func_38()//Position - 0x1B32
{
	bool bVar0;
	
	bVar0 = Global_7839;
	Global_7839 = 0;
	if (bVar0)
	{
	}
	return bVar0;
}

int func_39()//Position - 0x1B4A
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_44)
	{
		iLocal_44 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return 1;
	}
	return 0;
}

int func_40()//Position - 0x1B6E
{
	if (Global_8861 != 15)
	{
		return 0;
	}
	if (CLOCK::GET_CLOCK_HOURS() != iLocal_43)
	{
		iLocal_43 = CLOCK::GET_CLOCK_HOURS();
		return 1;
	}
	return 0;
}

void func_41()//Position - 0x1B96
{
	iLocal_53 = 0;
	bLocal_54 = false;
	iLocal_55 = 0;
	iLocal_56 = 0;
	iLocal_57 = 0;
	iLocal_58 = 0;
	iLocal_59 = 0;
	iLocal_60 = 0;
	iLocal_61 = 0;
}

void func_42()//Position - 0x1BB9
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(111, 1, 0);
		func_7(112, 1, 0);
		func_7(113, 1, 0);
	}
}

int func_43(int iParam0)//Position - 0x1BEE
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_17C49.f_1CAD.f_148[iParam0 /*6*/];
}

void func_44()//Position - 0x1C1A
{
	if (func_43(0) == 1 && !func_31(6))
	{
		func_7(155, 1, 0);
		func_7(156, 1, 0);
		func_7(160, 1, 0);
		func_7(159, 1, 0);
		func_7(157, 1, 0);
		func_11(157);
		func_7(158, 1, 0);
		func_11(158);
	}
}

void func_45(int iParam0, bool bParam1)//Position - 0x1C73
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	if (bParam1 == MISC::IS_BIT_SET(Global_60AC[iVar0 /*23*/].f_B, 2))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 2);
	}
	if (Global_60A9 == 1)
	{
		Global_60AA = 1;
	}
	Global_60A9 = 1;
	MISC::SET_BIT(&(Global_60AC[iVar0 /*23*/].f_B), 18);
}

void func_46(int iParam0, char* sParam1)//Position - 0x1CF9
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 262) || iParam0 == 262)
	{
		return;
	}
	StringCopy(&(Global_60AC[iVar0 /*23*/].f_14), sParam1, 8);
	if (HUD::DOES_BLIP_EXIST(Global_60AC[iVar0 /*23*/].f_13))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_60AC[iVar0 /*23*/].f_13, sParam1);
	}
}

char* func_47(int iParam0)//Position - 0x1D53
{
	switch (iParam0)
	{
		case 0:
			return "SB_SAL";
			break;
		
		case 1:
			return "SB_BAR";
			break;
		
		case 2:
			return "SB_BAR";
			break;
		
		case 3:
			return "SB_BAR";
			break;
		
		case 4:
			return "SB_BAR";
			break;
		
		case 5:
			return "SB_BAR";
			break;
		
		case 6:
			return "SB_BAR";
			break;
		
		case 7:
			return func_48(iParam0);
			break;
		
		case 8:
			return func_48(iParam0);
			break;
		
		case 9:
			return func_48(iParam0);
			break;
		
		case 10:
			return func_48(iParam0);
			break;
		
		case 11:
			return func_48(iParam0);
			break;
		
		case 12:
			return func_48(iParam0);
			break;
		
		case 13:
			return func_48(iParam0);
			break;
		
		case 14:
			return func_48(iParam0);
			break;
		
		case 15:
			return func_48(iParam0);
			break;
		
		case 16:
			return func_48(iParam0);
			break;
		
		case 17:
			return func_48(iParam0);
			break;
		
		case 18:
			return func_48(iParam0);
			break;
		
		case 19:
			return func_48(iParam0);
			break;
		
		case 20:
			return func_48(iParam0);
			break;
		
		case 21:
			return func_48(iParam0);
			break;
		
		case 22:
			return "SB_TAT";
			break;
		
		case 23:
			return "SB_TAT";
			break;
		
		case 24:
			return "SB_TAT";
			break;
		
		case 25:
			return "SB_TAT";
			break;
		
		case 26:
			return "SB_TAT";
			break;
		
		case 27:
			return "SB_TAT";
			break;
		
		case 28:
			return "SB_AMU2";
			break;
		
		case 29:
			return "SB_AMU";
			break;
		
		case 30:
			return "SB_AMU";
			break;
		
		case 31:
			return "SB_AMU";
			break;
		
		case 32:
			return "SB_AMU";
			break;
		
		case 33:
			return "SB_AMU";
			break;
		
		case 34:
			return "SB_AMU";
			break;
		
		case 35:
			return "SB_AMU";
			break;
		
		case 36:
			return "SB_AMU";
			break;
		
		case 37:
			return "SB_AMU";
			break;
		
		case 38:
			return "SB_AMU2";
			break;
		
		case 39:
			return func_48(iParam0);
			break;
		
		case 40:
			return func_48(iParam0);
			break;
		
		case 41:
			return func_48(iParam0);
			break;
		
		case 42:
			return func_48(iParam0);
			break;
		
		case 43:
			return func_48(iParam0);
			break;
	}
	return "SHOP_BLIP_INV";
}

char* func_48(int iParam0)//Position - 0x203F
{
	switch (iParam0)
	{
		case -1:
			return "S_N_EM";
			break;
		
		case 0:
			return "S_H_01";
			break;
		
		case 1:
			return "S_H_02";
			break;
		
		case 2:
			return "S_H_03";
			break;
		
		case 3:
			return "S_H_04";
			break;
		
		case 4:
			return "S_H_05";
			break;
		
		case 5:
			return "S_H_06";
			break;
		
		case 6:
			return "S_H_07";
			break;
		
		case 7:
			return "S_CL_01";
			break;
		
		case 8:
			return "S_CL_02";
			break;
		
		case 9:
			return "S_CL_03";
			break;
		
		case 10:
			return "S_CL_04";
			break;
		
		case 11:
			return "S_CL_05";
			break;
		
		case 12:
			return "S_CL_06";
			break;
		
		case 13:
			return "S_CL_07";
			break;
		
		case 14:
			return "S_CM_01";
			break;
		
		case 15:
			return "S_CM_03";
			break;
		
		case 16:
			return "S_CM_04";
			break;
		
		case 17:
			return "S_CM_05";
			break;
		
		case 18:
			return "S_CH_01";
			break;
		
		case 19:
			return "S_CH_02";
			break;
		
		case 20:
			return "S_CH_03";
			break;
		
		case 21:
			return "S_CA_01";
			break;
		
		case 22:
			return "S_T_01";
			break;
		
		case 23:
			return "S_T_02";
			break;
		
		case 24:
			return "S_T_03";
			break;
		
		case 25:
			return "S_T_04";
			break;
		
		case 26:
			return "S_T_05";
			break;
		
		case 27:
			return "S_T_06";
			break;
		
		case 28:
			return "S_G_01";
			break;
		
		case 29:
			return "S_G_02";
			break;
		
		case 30:
			return "S_G_03";
			break;
		
		case 31:
			return "S_G_04";
			break;
		
		case 32:
			return "S_G_05";
			break;
		
		case 33:
			return "S_G_06";
			break;
		
		case 34:
			return "S_G_07";
			break;
		
		case 35:
			return "S_G_08";
			break;
		
		case 36:
			return "S_G_09";
			break;
		
		case 37:
			return "S_G_10";
			break;
		
		case 38:
			return "S_G_11";
			break;
		
		case 39:
			return "S_MO_01";
			break;
		
		case 40:
			return "S_MO_05";
			break;
		
		case 41:
			return "S_MO_06";
			break;
		
		case 42:
			return "S_MO_07";
			break;
		
		case 43:
			return "S_MO_08";
			break;
	}
	return "SHOP_NAME_EMPTY";
}

int func_49(int iParam0)//Position - 0x2322
{
	switch (iParam0)
	{
		case -1:
			return 262;
			break;
		
		case 0:
			return 19;
			break;
		
		case 1:
			return 20;
			break;
		
		case 2:
			return 21;
			break;
		
		case 3:
			return 22;
			break;
		
		case 4:
			return 23;
			break;
		
		case 5:
			return 24;
			break;
		
		case 6:
			return 25;
			break;
		
		case 7:
			return 26;
			break;
		
		case 8:
			return 27;
			break;
		
		case 9:
			return 28;
			break;
		
		case 10:
			return 29;
			break;
		
		case 11:
			return 30;
			break;
		
		case 12:
			return 31;
			break;
		
		case 13:
			return 32;
			break;
		
		case 14:
			return 33;
			break;
		
		case 15:
			return 35;
			break;
		
		case 16:
			return 36;
			break;
		
		case 17:
			return 37;
			break;
		
		case 18:
			return 38;
			break;
		
		case 19:
			return 39;
			break;
		
		case 20:
			return 40;
			break;
		
		case 21:
			return 41;
			break;
		
		case 22:
			return 42;
			break;
		
		case 23:
			return 43;
			break;
		
		case 24:
			return 44;
			break;
		
		case 25:
			return 45;
			break;
		
		case 26:
			return 46;
			break;
		
		case 27:
			return 47;
			break;
		
		case 28:
			return 48;
			break;
		
		case 29:
			return 49;
			break;
		
		case 30:
			return 50;
			break;
		
		case 31:
			return 51;
			break;
		
		case 32:
			return 52;
			break;
		
		case 33:
			return 53;
			break;
		
		case 34:
			return 54;
			break;
		
		case 35:
			return 55;
			break;
		
		case 36:
			return 56;
			break;
		
		case 37:
			return 57;
			break;
		
		case 38:
			return 58;
			break;
		
		case 39:
			return 59;
			break;
		
		case 40:
			return 60;
			break;
		
		case 41:
			return 61;
			break;
		
		case 42:
			return 62;
			break;
		
		case 43:
			return 63;
			break;
		
		default:
			break;
	}
	return 262;
}

void func_50()//Position - 0x25AE
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

