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
	int iLocal_19 = 0;
	int iLocal_20 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_20 = 0;
	if (iLocal_19 == 0)
	{
		func_10();
		func_9();
		iLocal_19 = 1;
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Global_14393.f_1 != 9)
		{
			switch (Global_14393.f_1)
			{
				case 7:
					if (iLocal_20 == 1)
					{
						if (func_8(2, Global_14362, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "Lester_Laugh_Phone", "DLC_HEIST_HACKING_SNAKE_SOUNDS", 1);
							Global_14371 = 1;
							func_10();
							func_5();
							SYSTEM::SETTIMERA(0);
							SYSTEM::SETTIMERB(0);
						}
					}
					if (iLocal_20 == 2)
					{
						if (SYSTEM::TIMERB() > 499)
						{
							SYSTEM::SETTIMERB(0);
						}
						if (SYSTEM::TIMERA() > 2200)
						{
							iLocal_20 = 3;
						}
					}
					if (iLocal_20 == 3)
					{
						Global_1573285 = 1;
					}
					break;
				
				case 8:
					if (func_8(2, Global_14361, 0))
					{
						func_4();
						Global_14371 = 1;
						if (Global_14393.f_1 > 3)
						{
							Global_14393.f_1 = 7;
						}
					}
					break;
				
				default:
					break;
			}
			if (func_3())
			{
				func_2();
			}
		}
		else
		{
			Global_14395 = 6;
			func_2();
		}
		if (func_1())
		{
			func_2();
		}
	}
}

int func_1()//Position - 0x123
{
	if (((Global_14393.f_1 == 1 || Global_14393.f_1 == 3) || Global_14393.f_1 == 0) || Global_14337 == 1)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x166
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE");
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_3()//Position - 0x179
{
	if (Global_2869 == 1 || Global_14393.f_1 < 7)
	{
		Global_14380 = 1;
		return 1;
	}
	return 0;
}

void func_4()//Position - 0x1A2
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Menu_Back", &Global_14382, 1);
	}
}

void func_5()//Position - 0x1C2
{
	if (Global_14381)
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 0f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}

void func_6(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x254
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_7(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam8))
	{
		func_7(iParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam9))
	{
		func_7(iParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam10))
	{
		func_7(iParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iParam11))
	{
		func_7(iParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_7(var uParam0)//Position - 0x307
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_8(int iParam0, var uParam1, int iParam2)//Position - 0x319
{
	if (PAD::IS_CONTROL_JUST_PRESSED(iParam0, uParam1) || (iParam2 == 1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(iParam0, uParam1)))
	{
		if (MISC::IS_PC_VERSION())
		{
			if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE() && PAD::_IS_USING_KEYBOARD(2)))
			{
				return 0;
			}
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_9()//Position - 0x38B
{
	if (Global_14381)
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, "CELL_201", 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, "CELL_213", 0, 0, 0, 0);
	}
	else
	{
		func_6(Global_14374, "SET_SOFT_KEYS", 2f, 1f, 13f, -1f, -1f, 0, 0, 0, 0, 0);
		func_6(Global_14374, "SET_SOFT_KEYS", 3f, 1f, 14f, -1f, -1f, 0, 0, 0, 0, 0);
	}
	func_6(Global_14374, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
	MISC::CLEAR_BIT(&Global_2263, 17);
}

void func_10()//Position - 0x41D
{
	if (iLocal_20 == 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE", 0);
		while (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_MPHEIST/HEIST_HACK_SNAKE", 0) == 0)
		{
			SYSTEM::WAIT(0);
		}
		func_11(Global_14374, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		if (MISC::IS_BIT_SET(Global_2265, 1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_11(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 1;
	}
	else if (iLocal_20 == 1)
	{
		func_11(Global_14374, "SET_DATA_SLOT_EMPTY", 23f, -1082130432, -1082130432, -1082130432, -1082130432);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_14374, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(23);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-99);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
		if (MISC::IS_BIT_SET(Global_2265, 1))
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_11(Global_14374, "DISPLAY_VIEW", 23f, SYSTEM::TO_FLOAT(1), -1082130432, -1082130432, -1082130432);
		iLocal_20 = 2;
	}
}

void func_11(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x56F
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

