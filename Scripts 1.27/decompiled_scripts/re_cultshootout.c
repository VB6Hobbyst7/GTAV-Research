#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	struct<3> Local_42 = { 0, 0, 0 } ;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	struct<3> Local_45 = { 0, 0, 0 } ;
	struct<3> Local_46 = { 0, 0, 0 } ;
	struct<3> Local_47[6];
	struct<3> Local_48 = { 0, 0, 0 } ;
	struct<3> Local_49 = { 0, 0, 0 } ;
	float fLocal_50 = 0f;
	float fLocal_51[6] = { 0f, 0f, 0f, 0f, 0f, 0f };
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	bool bLocal_54 = 0;
	int iLocal_55[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	bool bLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_63[2] = { 0, 0 };
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	var uLocal_76 = 16;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	struct<2> Local_241 = { 0, 5 } ;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 5;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_46 = { 2194.135f, 5593.278f, 53.70383f };
	Local_48 = { 2203.27f, 5549.918f, 93.09485f };
	Local_49 = { 2199.629f, 5640.293f, 52.23926f };
	fLocal_50 = 81.5f;
	Local_45 = { ScriptParam_241.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		func_136();
	}
	if (func_109(Local_45, -1, 0, 0, 0))
	{
		func_106(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_59) || (func_105() && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_45, 500f, 500f, 500f, 0, 1, 0)))
		{
			if (!func_105())
			{
				if (func_104())
				{
					func_136();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DS", 0);
			switch (iLocal_43)
			{
				case 0:
					if (func_92())
					{
						func_136();
					}
					func_90();
					iLocal_53 = 1;
					break;
				
				case 1:
					func_24();
					break;
				
				case 2:
					func_1();
					break;
			}
		}
		else
		{
			func_136();
		}
	}
}

void func_1()//Position - 0x189
{
	if (iLocal_53 && !iLocal_52)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("RE20_FAIL");
		if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			func_23(0);
		}
		iLocal_70 = 0;
		while (iLocal_70 < 6)
		{
			if (!PED::IS_PED_INJURED(iLocal_62[iLocal_70]))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_67[iLocal_70]))
				{
					HUD::REMOVE_BLIP(&(uLocal_67[iLocal_70]));
				}
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_62[iLocal_70]));
			}
			iLocal_70++;
		}
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 1);
		if (bLocal_54)
		{
			func_3(18, 7, 0);
		}
		else
		{
			func_3(18, 1, 0);
		}
		iLocal_52 = 1;
	}
	if (SYSTEM::VDIST(func_2(PLAYER::PLAYER_ID()), Local_45) > 150f)
	{
		func_136();
	}
}

Vector3 func_2(var uParam0)//Position - 0x23A
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0), 0);
}

void func_3(int iParam0, int iParam1, int iParam2)//Position - 0x24D
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_22();
	func_13(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_12(iParam0, &uVar0);
	Var1 = { func_4(&uVar0) };
}

struct<16> func_4(var uParam0)//Position - 0x27C
{
	struct<16> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 64);
	iVar1 = func_11(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_10(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, ":", 64);
	iVar1 = func_9(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "  ", 64);
	iVar1 = func_8(*uParam0);
	if (iVar1 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1, 64);
	StringConCat(&Var0, "/", 64);
	iVar1 = func_7(*uParam0);
	if (iVar1 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar1 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_5(*uParam0), 64);
	return Var0;
}

int func_5(int iParam0)//Position - 0x347
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_6(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_6(bool bParam0, int iParam1, int iParam2)//Position - 0x36C
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_7(int iParam0)//Position - 0x383
{
	return iParam0 & 15;
}

int func_8(int iParam0)//Position - 0x390
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_9(int iParam0)//Position - 0x3A2
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_10(int iParam0)//Position - 0x3B5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_11(int iParam0)//Position - 0x3C8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_12(int iParam0, var uParam1)//Position - 0x3DB
{
	Global_17C49.f_6E20.f_2B[iParam0] = *uParam1;
}

void func_13(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x3F3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_5(*uParam0);
	iVar1 = func_7(*uParam0);
	iVar2 = func_8(*uParam0);
	iVar3 = func_11(*uParam0);
	iVar4 = func_10(*uParam0);
	iVar5 = func_9(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_21(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_21(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_14(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_14(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x575
{
	func_20(uParam0, iParam1);
	func_19(uParam0, iParam2);
	func_18(uParam0, iParam3);
	func_17(uParam0, iParam4);
	func_16(uParam0, iParam5);
	func_15(uParam0, iParam6);
}

void func_15(var uParam0, int iParam1)//Position - 0x5AD
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_16(var uParam0, int iParam1)//Position - 0x633
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_17(var uParam0, int iParam1)//Position - 0x666
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_7(*uParam0);
	iVar1 = func_5(*uParam0);
	if (iParam1 < 1 || iParam1 > func_21(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_18(var uParam0, int iParam1)//Position - 0x6B7
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_19(var uParam0, int iParam1)//Position - 0x6F1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_20(var uParam0, int iParam1)//Position - 0x72C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_21(int iParam0, int iParam1)//Position - 0x768
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_22()//Position - 0x80A
{
	var uVar0;
	
	func_20(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_19(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_18(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_17(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_16(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_15(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_23(int iParam0)//Position - 0x850
{
	Global_17C49.f_6E20.f_7 = iParam0;
}

void func_24()//Position - 0x863
{
	func_70();
	func_69();
	switch (iLocal_44)
	{
		case 0:
			if (OBJECT::DOES_PICKUP_EXIST(uLocal_64))
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_65))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_48, Local_49, fLocal_50, 0, 1, 0))
					{
						func_66();
						if (!bLocal_60)
						{
							AUDIO::TRIGGER_MUSIC_EVENT("RE20_FADE_RADIO_OUT");
							iLocal_75 = MISC::GET_GAME_TIMER();
							bLocal_60 = true;
						}
						if (!func_105())
						{
							func_57(1);
						}
					}
				}
			}
			if (bLocal_60)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_75) > 6000)
				{
					if (!iLocal_61)
					{
						AUDIO::TRIGGER_MUSIC_EVENT("RE20_START");
						iLocal_61 = 1;
					}
				}
			}
			break;
		
		case 1:
			if ((((PED::IS_PED_INJURED(iLocal_62[0]) && PED::IS_PED_INJURED(iLocal_62[1])) && PED::IS_PED_INJURED(iLocal_62[2])) && PED::IS_PED_INJURED(iLocal_62[3])) && PED::IS_PED_INJURED(iLocal_62[4]))
			{
				func_25();
			}
			else if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_45, 100f, 100f, 100f, 0, 1, 0))
			{
				func_25();
			}
			break;
	}
	iLocal_70 = 0;
	while (iLocal_70 < 6)
	{
		if (PED::IS_PED_INJURED(iLocal_62[iLocal_70]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_67[iLocal_70]))
			{
				HUD::REMOVE_BLIP(&(uLocal_67[iLocal_70]));
			}
		}
		iLocal_70++;
	}
}

void func_25()//Position - 0x9A9
{
	func_56("DRUG_BLIP_END", -1);
	AUDIO::TRIGGER_MUSIC_EVENT("RE20_END");
	func_23(1);
	while (func_55())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_54())
	{
		SYSTEM::WAIT(0);
	}
	bLocal_54 = true;
	func_29(-1, 0);
	func_26();
	iLocal_43 = 2;
}

void func_26()//Position - 0x9F5
{
	func_27();
}

int func_27()//Position - 0xA02
{
	if (func_28(0))
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

bool func_28(bool bParam0)//Position - 0xA4D
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_29(int iParam0, int iParam1)//Position - 0xA78
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_51(iParam0))
	{
		func_50(iParam0, iParam1);
		if (!func_49(51))
		{
			func_40("RE_REWARD", 1, 0, 4000, 10000, func_43(), 0, 138, 0);
			func_39(51);
		}
		if (func_38(iParam0))
		{
			Global_17C49.f_6E20.f_2 = 3;
		}
		if (func_37(iParam0, iParam1) != 322)
		{
			func_31(func_37(iParam0, iParam1), Local_42.x, Local_42.f_1);
		}
		Global_17C3D = iParam1;
		if (Global_17C3B == 0)
		{
			if (((Global_17C3E == 1 || Global_17C3E == 5) || Global_17C3E == 11) || Global_17C3E == 25)
			{
				func_30(2);
			}
			else if ((Global_17C3E == 26 || Global_17C3E == 8) || Global_17C3E == 17)
			{
				func_30(7);
			}
			else
			{
				func_30(1);
			}
		}
	}
}

void func_30(int iParam0)//Position - 0xB7B
{
	Global_17C3B = iParam0;
}

void func_31(int iParam0, var uParam1, var uParam2)//Position - 0xB89
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_35((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_17C49.f_2100[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_17C49.f_2100[iParam0 /*12*/].f_6 == 11 || Global_17C49.f_2100[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_17C49.f_2100[iParam0 /*12*/].f_5 = 1;
		Global_17C49.f_2100[iParam0 /*12*/].f_A = uParam1;
		Global_17C49.f_2100[iParam0 /*12*/].f_B = uParam2;
		if (iParam0 == 287)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_UPDATE_STAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_32();
	}
}

void func_32()//Position - 0xC71
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_17B41 = 0;
	Global_17B42 = 0;
	Global_17B43 = 0;
	Global_17B44 = 0;
	Global_17B45 = 0;
	Global_17B46 = 0;
	Global_17B47 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_17C49.f_2100.f_F0D;
	Global_17C49.f_2100.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_17C49.f_2100[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_17C49.f_2100[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_17B41++;
					fVar1 = (fVar1 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_17B42++;
					fVar2 = (fVar2 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_17B43++;
					fVar3 = (fVar3 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_17B44++;
					fVar4 = (fVar4 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_17B45++;
					fVar5 = (fVar5 + (Global_17C49.f_2100[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_17B46++;
					fVar6 = (fVar6 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_17B47++;
					fVar7 = (fVar7 + Global_17C49.f_2100[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_17B30 > 0)
	{
		if (Global_17B41 == Global_17B30)
		{
			fVar1 = 55f;
		}
	}
	if (Global_17B31 > 0)
	{
		if (Global_17B42 == Global_17B31)
		{
			fVar2 = 10f;
		}
	}
	if (Global_17B32 > 0)
	{
		if (Global_17B43 == Global_17B32)
		{
			fVar3 = 0f;
		}
	}
	if (Global_17B33 > 0)
	{
		if (Global_17B44 == Global_17B33)
		{
			fVar4 = 10f;
		}
	}
	if (Global_17B34 > 0)
	{
		if (((Global_17B45 == Global_17B34 || (Global_17B34 * 10 / Global_17B45) < 41) || Global_17B45 > Global_17B37) || Global_17B45 == Global_17B37)
		{
			if (!MISC::IS_BIT_SET(Global_17C49.f_2100.f_F10, 14))
			{
				if (Global_17B45 == Global_17B34)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_17B34, 0);
					MISC::SET_BIT(&(Global_17C49.f_2100.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_17B35 > 0)
	{
		if (Global_17B46 == Global_17B35)
		{
			fVar6 = 15f;
		}
	}
	if (Global_17B36 > 0)
	{
		if (Global_17B47 == Global_17B36)
		{
			fVar7 = 5f;
		}
	}
	Global_17C49.f_2100.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_17B45 > Global_17B37 || Global_17B45 == Global_17B37)
	{
		iVar9 = Global_17B37;
	}
	else
	{
		iVar9 = Global_17B45;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_17B41, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_17B30, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_17B42, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_17B31, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_17B43, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_17B32, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_17B44, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_17B33, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_17B37, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_17B47 + Global_17B46), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_17B36 + Global_17B35), 1);
	Global_17B48 = (Global_17B41 * 100 / Global_17B30);
	Global_17B4A = ((Global_17B43 + Global_17B42) * 100 / (Global_17B32 + Global_17B31));
	Global_17B49 = ((Global_17B44 + iVar9) * 100 / (Global_17B33 + Global_17B37));
	Global_17B4B = ((Global_17B46 + Global_17B47) * 100 / (Global_17B35 + Global_17B36));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_17C49.f_2100.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_17B48, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_17B49, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_17B4A, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D))
	{
		func_34(13, SYSTEM::FLOOR(Global_17C49.f_2100.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_10A95)
		{
			if (func_33() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_17B3F = 0;
				}
				if (!Global_D5DE)
				{
					func_27();
				}
			}
		}
	}
}

int func_33()//Position - 0x1132
{
	return Global_5F7C;
}

int func_34(int iParam0, int iParam1)//Position - 0x113D
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 61)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

int func_35(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x118E
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	
	if (iParam2 == -1)
	{
		iParam2 = func_36();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = STATS::GET_PACKED_BOOL_STAT_KEY((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = STATS::GET_PACKED_TU_BOOL_STAT_KEY((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_STAT_GET_PACKED_BOOL_MASK((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_36()//Position - 0x13E9
{
	return Global_1407E1;
}

int func_37(int iParam0, int iParam1)//Position - 0x13F5
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (iParam1 == 1)
			{
				return 281;
			}
			if (iParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (iParam1 == 1)
			{
				return 271;
			}
			if (iParam1 == 2)
			{
				return 272;
			}
			if (iParam1 == 3)
			{
				return 273;
			}
			if (iParam1 == 4)
			{
				return 274;
			}
			if (iParam1 == 5)
			{
				return 275;
			}
			if (iParam1 == 6)
			{
				return 276;
			}
			if (iParam1 == 7)
			{
				return 277;
			}
			if (iParam1 == 8)
			{
				return 278;
			}
			if (iParam1 == 9)
			{
				return 279;
			}
			if (iParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (iParam1 == 1)
			{
				return 246;
			}
			if (iParam1 == 2)
			{
				return 247;
			}
			if (iParam1 == 3)
			{
				return 248;
			}
			if (iParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (iParam1 == 1)
			{
				return 260;
			}
			if (iParam1 == 2)
			{
				return 261;
			}
			if (iParam1 == 3)
			{
				return 262;
			}
			if (iParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (iParam1 == 1)
			{
				return 224;
			}
			if (iParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (iParam1 == 1)
			{
				return 244;
			}
			if (iParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (iParam1 == 1)
			{
				return 221;
			}
			if (iParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (iParam1 == 1)
			{
				return 213;
			}
			if (iParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (iParam1 == 1)
			{
				return 267;
			}
			if (iParam1 == 2)
			{
				return 268;
			}
			if (iParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (iParam1 == 1)
			{
				return 227;
			}
			if (iParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (iParam1 == 1)
			{
				return 257;
			}
			if (iParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (iParam1 == 1)
			{
				return 229;
			}
			if (iParam1 == 2)
			{
				return 230;
			}
			if (iParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_38(int iParam0)//Position - 0x1769
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_39(int iParam0)//Position - 0x1798
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_17C49.f_5C53.f_96[iVar1]), iVar0);
	}
}

void func_40(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x17DA
{
	func_41(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_41(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x17FB
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_17C49.f_5C53[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_17C49.f_5C53.f_91 < 9)
	{
		StringCopy(&(Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_4), sParam1, 16);
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_9 = iParam5;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_B = iParam6;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_C = uParam2;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_D = iParam7;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_E = iParam8;
		Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != -1)
		{
			Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_17C49.f_5C53[Global_17C49.f_5C53.f_91 /*16*/].f_A = -1;
		}
		Global_17C49.f_5C53.f_91++;
		func_42();
	}
}

void func_42()//Position - 0x19CE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_17C49.f_5C53.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_17C49.f_5C53.f_91)
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 0))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[0])
			{
				Global_17C49.f_5C53.f_92[0] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 1))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[1])
			{
				Global_17C49.f_5C53.f_92[1] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		if (MISC::IS_BIT_SET(Global_17C49.f_5C53[iVar0 /*16*/].f_B, 2))
		{
			if (Global_17C49.f_5C53[iVar0 /*16*/].f_C > Global_17C49.f_5C53.f_92[2])
			{
				Global_17C49.f_5C53.f_92[2] = Global_17C49.f_5C53[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

int func_43()//Position - 0x1AEE
{
	func_44();
	switch (Global_17C49.f_6C1.f_21B.f_C8D)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

void func_44()//Position - 0x1B34
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_48(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_47(PLAYER::PLAYER_PED_ID());
			if (func_46(iVar0) && (!func_45(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_46(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_45(int iParam0)//Position - 0x1C31
{
	return Global_8861 == iParam0;
}

bool func_46(int iParam0)//Position - 0x1C3F
{
	return iParam0 < 3;
}

int func_47(var uParam0)//Position - 0x1C4B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_48(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_48(int iParam0)//Position - 0x1C88
{
	if (func_46(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_49(int iParam0)//Position - 0x1CB2
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5C53.f_96[iVar1], iVar0);
	}
	return 0;
}

void func_50(int iParam0, int iParam1)//Position - 0x1CF5
{
	MISC::SET_BIT(&(Global_17C49.f_6E20.f_8[iParam0]), iParam1);
}

int func_51(int iParam0)//Position - 0x1D10
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_52()//Position - 0x1DC1
{
	struct<16> Var0;
	var uVar1;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar1 = func_53(Var0);
	return uVar1;
}

int func_53(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1DDE
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_54()//Position - 0x1FB8
{
	return 1;
}

int func_55()//Position - 0x1FC1
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_56(char* sParam0, int iParam1)//Position - 0x1FE3
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_57(int iParam0)//Position - 0x1FFA
{
	if (func_60())
	{
		Global_17C3F = 1;
		Global_17C3C = MISC::GET_GAME_TIMER();
		if (func_38(Global_17C3E))
		{
			func_58(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_38(Global_17C3E))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_58(int iParam0)//Position - 0x204C
{
	switch (iParam0)
	{
		case 0:
			if (Global_17C49.f_6E20.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_56(func_59(iParam0), -1);
					Global_17C49.f_6E20.f_2++;
					MISC::SET_BIT(&Global_17C45, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_17C45, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_56(func_59(iParam0), -1);
					Global_17C49.f_6E20.f_3++;
					MISC::SET_BIT(&Global_17C45, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_17C45, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_56(func_59(iParam0), -1);
					Global_17C49.f_6E20.f_4++;
					MISC::SET_BIT(&Global_17C45, 2);
				}
			}
			break;
	}
}

char* func_59(int iParam0)//Position - 0x212D
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_60()//Position - 0x216D
{
	switch (func_61(&Global_5FB7, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_61(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x21A3
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_15725.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_65(0))
		{
			return 0;
		}
		Global_883D++;
		*uParam0 = Global_883D;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_42CA.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8861 = iParam2;
		Global_883B = *uParam0;
		Global_883C = iParam4;
		Global_883A = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_883A > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_883A)
			{
				if (Global_8840[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_883B == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_63(iParam2))
		{
			return 0;
		}
		if (Global_883A == 8)
		{
			return 0;
		}
		Global_883D++;
		*uParam0 = Global_883D;
		Global_8840[Global_883A /*4*/] = Global_883D;
		Global_8840[Global_883A /*4*/].f_1 = iParam1;
		Global_8840[Global_883A /*4*/].f_2 = iParam2;
		Global_8840[Global_883A /*4*/].f_3 = 0;
		Global_883A++;
		if (iParam4 != 0)
		{
			func_62(uParam0, iParam4);
		}
	}
	return 2;
}

void func_62(var uParam0, int iParam1)//Position - 0x22DA
{
	int iVar0;
	
	if (Global_883A == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_883A)
	{
		if (Global_8840[iVar0 /*4*/] == *uParam0)
		{
			Global_8840[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_63(int iParam0)//Position - 0x2329
{
	return func_64(iParam0, Global_8861);
}

int func_64(int iParam0, int iParam1)//Position - 0x233A
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

int func_65(int iParam0)//Position - 0x251B
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_63(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_66()//Position - 0x253D
{
	if (HUD::DOES_BLIP_EXIST(uLocal_65))
	{
		HUD::REMOVE_BLIP(&uLocal_65);
		if (OBJECT::DOES_PICKUP_EXIST(uLocal_64))
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_66))
			{
				uLocal_66 = func_67(uLocal_64);
			}
		}
	}
}

int func_67(var uParam0)//Position - 0x256F
{
	var uVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_PICKUP(uParam0);
	HUD::SET_BLIP_SCALE(uVar0, func_68(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return uVar0;
}

float func_68(bool bParam0, float fParam1, float fParam2)//Position - 0x25A7
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_69()//Position - 0x25BE
{
	if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_64))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_65))
		{
			HUD::REMOVE_BLIP(&uLocal_65);
		}
		SYSTEM::SETTIMERA(0);
		iLocal_59 = 1;
		iLocal_72 = 2;
		iLocal_44 = 1;
	}
}

void func_70()//Position - 0x25EC
{
	int iVar0;
	int iVar1;
	
	iLocal_70 = 0;
	while (iLocal_70 < 6)
	{
		if (PED::IS_PED_INJURED(iLocal_62[iLocal_70]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_67[iLocal_70]))
			{
				HUD::REMOVE_BLIP(&(uLocal_67[iLocal_70]));
			}
			iLocal_72 = 2;
		}
		else
		{
			if ((func_89() && iLocal_72 != 2) || (iLocal_72 == 1 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
			{
				func_87();
				SYSTEM::WAIT(0);
				if (func_86())
				{
					func_85(&uLocal_76, 4, iLocal_62[iLocal_70], "DRUGFARMGOON", 0, 1);
					func_73(&uLocal_76, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
				}
				iLocal_72 = 2;
			}
			switch (iLocal_72)
			{
				case 0:
					if (!iLocal_55[iLocal_70])
					{
						if ((ENTITY::IS_ENTITY_AT_ENTITY(iLocal_62[iLocal_70], PLAYER::PLAYER_PED_ID(), 15f, 15f, 40f, 0, 1, 0) && PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_62[iLocal_70])) || PED::CAN_PED_SEE_HATED_PED(iLocal_62[iLocal_70], PLAYER::PLAYER_PED_ID()))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_48, Local_49, fLocal_50, 0, 1, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2205.918f, 5633.455f, 55.7472f, 15f, 15f, 40f, 0, 1, 0))
							{
								if (!func_55())
								{
									func_85(&uLocal_76, 3, iLocal_62[iLocal_70], "SalvadorGang", 0, 1);
									func_73(&uLocal_76, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								}
								iVar0 = 0;
								while (iVar0 < iLocal_62)
								{
									PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_62[iLocal_70]);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
									TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
									TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
									TASK::TASK_PERFORM_SEQUENCE(iLocal_62[iVar0], uLocal_69);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
									PED::SET_PED_USING_ACTION_MODE(iLocal_62[iVar0], 1, -1, 0);
									iVar0++;
								}
								iLocal_55[iLocal_70] = 1;
								iLocal_75 = MISC::GET_GAME_TIMER();
								iLocal_72 = 1;
							}
						}
					}
					break;
				
				case 1:
					iVar1 = 0;
					while (iVar1 < iLocal_62)
					{
						if (!iLocal_55[iVar1])
						{
							PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_62[iLocal_70]);
							TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
							TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, 0, 4f, 1082130432, 1, 0, -957453492);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_62[iVar1], uLocal_69);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
							PED::SET_PED_USING_ACTION_MODE(iLocal_62[iVar1], 1, -1, 0);
							iLocal_55[iVar1] = 1;
						}
						iVar1++;
					}
					if (!PED::IS_PED_INJURED(iLocal_62[iLocal_70]))
					{
						if (!PED::IS_PED_FACING_PED(iLocal_62[iLocal_70], PLAYER::PLAYER_PED_ID(), 50f))
						{
							TASK::TASK_LOOK_AT_ENTITY(iLocal_62[iLocal_70], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
							PED::SET_PED_KEEP_TASK(iLocal_62[iLocal_70], 1);
						}
					}
					if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_73 == 0)
						{
							iLocal_73 = MISC::GET_GAME_TIMER();
						}
						else
						{
							iLocal_74 = MISC::GET_GAME_TIMER();
						}
					}
					else
					{
						iLocal_74 = 0;
						iLocal_73 = 0;
					}
					if (iLocal_55[iLocal_70] && !iLocal_56)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_75) > 6000)
						{
							if (!func_55())
							{
								func_85(&uLocal_76, 3, iLocal_62[iLocal_70], "SalvadorGang", 0, 1);
								func_73(&uLocal_76, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_56 = 1;
							}
						}
					}
					if (iLocal_55[iLocal_70] && !iLocal_57)
					{
						if ((MISC::GET_GAME_TIMER() - iLocal_75) > 12000)
						{
							if (!func_55())
							{
								func_85(&uLocal_76, 3, iLocal_62[iLocal_70], "SalvadorGang", 0, 1);
								func_73(&uLocal_76, "RECSHAU", "RECSH_GOAW", 4, 0, 0, 0);
								iLocal_57 = 1;
							}
						}
					}
					if (iLocal_55[iLocal_70])
					{
						if (((MISC::GET_GAME_TIMER() - iLocal_75) > 18000 || (iLocal_74 - iLocal_73) > 5000) || PED::IS_PED_IN_COMBAT(iLocal_62[iLocal_70], 0))
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_48, Local_49, fLocal_50, 0, 1, 0) || ENTITY::IS_ENTITY_AT_ENTITY(iLocal_62[iLocal_70], PLAYER::PLAYER_PED_ID(), 15f, 15f, 5f, 0, 1, 0))
							{
								func_87();
								SYSTEM::WAIT(0);
								if (func_86())
								{
									func_85(&uLocal_76, 4, iLocal_62[iLocal_70], "DRUGFARMGOON", 0, 1);
									func_73(&uLocal_76, "RECSHAU", "RECSH_BACK", 4, 0, 0, 0);
								}
								else
								{
									func_85(&uLocal_76, 3, iLocal_62[iLocal_70], "SalvadorGang", 0, 1);
									func_73(&uLocal_76, "RECSHAU", "RECSH_FIRE", 4, 0, 0, 0);
								}
								iLocal_72 = 2;
							}
							else
							{
								if (!PED::IS_PED_IN_COMBAT(iLocal_62[iLocal_70], 0))
								{
									TASK::CLEAR_PED_TASKS(iLocal_62[iLocal_70]);
									if (!PED::IS_PED_INJURED(iLocal_62[0]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2214.833f, 5635.627f, 55.0029f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2222.259f, 5613.22f, 53.5576f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2221.951f, 5593.625f, 52.9483f, 10000);
										TASK::SET_SEQUENCE_TO_REPEAT(uLocal_69, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_62[0], uLocal_69);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
										PED::SET_PED_USING_ACTION_MODE(iLocal_62[0], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_62[1]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2205.466f, 5583.631f, 52.8682f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2199.498f, 5560.702f, 52.8606f, 10000);
										TASK::SET_SEQUENCE_TO_REPEAT(uLocal_69, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_62[1], uLocal_69);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
										PED::SET_PED_USING_ACTION_MODE(iLocal_62[1], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_62[2]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2199.679f, 5590.673f, 52.7784f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2210.646f, 5593.576f, 52.8312f, 8000);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2232.761f, 5593.563f, 53.0542f, 1f, -1, 1048576000, 0, 1193033728);
										TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2237.916f, 5599.589f, 53.2311f, 12000);
										TASK::SET_SEQUENCE_TO_REPEAT(uLocal_69, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_62[2], uLocal_69);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
										PED::SET_PED_USING_ACTION_MODE(iLocal_62[2], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_62[3]) && !PED::IS_PED_INJURED(iLocal_62[4]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
										TASK::TASK_GO_TO_ENTITY(0, iLocal_62[4], -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_62[4], 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_62[3], uLocal_69);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
										PED::SET_PED_USING_ACTION_MODE(iLocal_62[3], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_62[4]))
									{
										TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
										TASK::TASK_GO_TO_ENTITY(0, iLocal_62[3], -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_62[3], 0);
										TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
										TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
										TASK::TASK_PERFORM_SEQUENCE(iLocal_62[4], uLocal_69);
										TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
										PED::SET_PED_USING_ACTION_MODE(iLocal_62[4], 0, -1, 0);
									}
									if (!PED::IS_PED_INJURED(iLocal_62[5]))
									{
										TASK::TASK_GUARD_CURRENT_POSITION(iLocal_62[5], 0f, 3f, 1);
										PED::SET_PED_USING_ACTION_MODE(iLocal_62[5], 0, -1, 0);
									}
								}
								iVar1 = 0;
								while (iVar1 < iLocal_55)
								{
									iLocal_55[iVar1] = 0;
									iVar1++;
								}
								iLocal_55[iLocal_70] = 0;
								iLocal_72 = 0;
							}
						}
					}
					break;
				
				case 2:
					func_66();
					iLocal_70 = 0;
					while (iLocal_70 < 6)
					{
						if (!PED::IS_PED_INJURED(iLocal_62[iLocal_70]))
						{
							if (!PED::IS_PED_IN_COMBAT(iLocal_62[iLocal_70], 0))
							{
								PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_62[iLocal_70]);
								TASK::TASK_COMBAT_PED(iLocal_62[iLocal_70], PLAYER::PLAYER_PED_ID(), 0, 16);
								PED::SET_PED_KEEP_TASK(iLocal_62[iLocal_70], 1);
								if (!HUD::DOES_BLIP_EXIST(uLocal_67[iLocal_70]))
								{
									uLocal_67[iLocal_70] = func_71(iLocal_62[iLocal_70], 1, 145);
								}
							}
						}
						if (!iLocal_58)
						{
							if (!func_55())
							{
								func_85(&uLocal_76, 3, iLocal_62[iLocal_70], "SalvadorGang", 0, 1);
								func_73(&uLocal_76, "RECSHAU", "RECSH_STASH", 4, 0, 0, 0);
								iLocal_58 = 1;
							}
						}
						iLocal_70++;
					}
					break;
				}
		}
		iLocal_70++;
	}
}

var func_71(var uParam0, bool bParam1, int iParam2)//Position - 0x2E40
{
	var uVar0;
	
	uVar0 = func_72(uParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_17C49.f_744E[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_17C49.f_744E[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_72(var uParam0, bool bParam1, bool bParam2)//Position - 0x2E92
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(uParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_68(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(uParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_68(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(uParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_68(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

int func_73(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2F36
{
	func_84(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D55 = 0;
	Global_3D5A = 0;
	Global_412B = 0;
	Global_412D = 0;
	Global_4131 = 0;
	Global_280001 = 0;
	return func_74(sParam2, iParam3, 0);
}

int func_74(char* sParam0, int iParam1, bool bParam2)//Position - 0x2F84
{
	Global_3D4D = 0;
	if (Global_3D4C == 0 || Global_3D4E == 2)
	{
		if (Global_3D4C != 0)
		{
			if (iParam1 > Global_3D4E)
			{
				if (Global_3D53 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_3839.f_1 = 3;
					Global_3D4C = 0;
					Global_3D4D = 1;
					Global_3D81 = 0;
					Global_3D48 = 0;
					Global_3D49 = 0;
					Global_3D57 = 0;
					Global_3D56 = 0;
					Global_3838 = 0;
				}
				else
				{
					func_83();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_82(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_81();
		Global_3A85 = { Global_3B2A };
		Global_3D52 = Global_3D53;
		Global_3D59 = Global_3D5A;
		Global_280002 = Global_280001;
		Global_3D5B = { Global_3D6B };
		Global_3D54 = Global_3D55;
		Global_412A = Global_412B;
		Global_4132 = { Global_4138 };
		Global_412C = Global_412D;
		Global_412E = Global_412F;
		Global_4130 = Global_4131;
		Global_3BCF.f_172 = Global_4129;
		Global_3BCF.f_170 = Global_4127;
		Global_3BCF.f_171 = Global_4128;
		Global_3D48 = Global_3D49;
		if (Global_3D52)
		{
			MISC::CLEAR_BIT(&Global_8D7, 20);
			MISC::CLEAR_BIT(&Global_8D8, 17);
			MISC::CLEAR_BIT(&Global_8D9, 0);
			if (bParam2)
			{
				func_79();
				if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_3839.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_3817 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_78())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_10A95)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_77())
			{
				return 0;
			}
			else
			{
				switch (Global_3839.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (MISC::IS_BIT_SET(Global_8D7, 9))
				{
					return 0;
				}
			}
			func_76();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_75();
		return 1;
	}
	if (Global_3D4C == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3D4E || iParam1 == Global_3D4E)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_83();
	}
	return 0;
}

void func_75()//Position - 0x3250
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_38E0[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_3D4C = 1;
}

void func_76()//Position - 0x3281
{
	Global_3D81 = Global_3D80;
	Global_3D7B = Global_3D7C;
	Global_3DAA = { Global_3D9E };
	Global_3DB0 = { Global_3DA4 };
	Global_3D83 = Global_3D82;
	Global_3DC8 = { Global_3DB6 };
	Global_3DCE = { Global_3DBC };
	Global_3DD4 = { Global_3DC2 };
	Global_3DDA = { Global_3DE0 };
	Global_62A = Global_62B;
	Global_62C = Global_62D;
	Global_3D57 = Global_3D58;
	Global_3D59 = Global_3D5A;
	Global_3D5B = { Global_3D6B };
	Global_3D50 = Global_3D51;
	Global_4144 = 0;
	Global_3D7D = 0;
	Global_3D7E = 0;
	MISC::CLEAR_BIT(&Global_8D8, 16);
}

int func_77()//Position - 0x3316
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_78()//Position - 0x333D
{
	int iVar0;
	int iVar1;
	
	if (Global_10A95)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_79()//Position - 0x33D6
{
	if (func_45(14))
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
		Global_3839 = func_80();
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

int func_80()//Position - 0x3477
{
	func_44();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_81()//Position - 0x3490
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3A85[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3A85[iVar0 /*10*/].f_1), "", 24);
		Global_3A85[iVar0 /*10*/].f_7 = 0;
		Global_3A85[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3A85.f_A1 = -99;
	Global_3A85.f_A2 = { 0f, 0f, 0f };
}

bool func_82(int iParam0, int iParam1)//Position - 0x34E7
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1441E9.f_CB[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1441E9.f_3B5, iParam0);
}

void func_83()//Position - 0x3522
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_3839.f_1 == 9) || Global_3838 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
		Global_3839.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_3D4C = 6;
		return;
	}
}

void func_84(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x3579
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = uParam5;
	if (iParam3 == 0)
	{
		Global_4127 = 1;
		Global_4125 = 0;
	}
	else
	{
		Global_4127 = 0;
		Global_4125 = 1;
	}
	if (iParam4 == 0)
	{
		Global_4128 = 1;
		Global_4126 = 0;
	}
	else
	{
		Global_4128 = 0;
		Global_4126 = 1;
	}
}

void func_85(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x35CF
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

bool func_86()//Position - 0x366A
{
	return Global_17C49.f_6E20.f_7;
}

void func_87()//Position - 0x367B
{
	Global_38DE = 0;
	func_88();
}

void func_88()//Position - 0x368B
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

int func_89()//Position - 0x36AC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_63)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_63[iVar0], 0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_63[iVar0], PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_62)
	{
		if (!PED::IS_PED_INJURED(iLocal_62[iVar0]))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_62[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_62[iVar0]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_62[iVar0]))
				{
					return 1;
				}
			}
			if ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1), 5f, 1) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_62[iVar0], PLAYER::PLAYER_PED_ID(), 1)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_62[iVar0])) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_smokegrenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenade"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_grenadelauncher"), 1)) || MISC::IS_PROJECTILE_TYPE_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) - Vector(15f, 15f, 15f), ENTITY::GET_ENTITY_COORDS(iLocal_62[iVar0], 1) + Vector(15f, 15f, 15f), joaat("weapon_stickybomb"), 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_48, Local_49, fLocal_50))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_48, Local_49, fLocal_50, 0, 1, 0))
	{
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2202.498f, 5603.424f, 52.7476f, 20f, 20f, 20f, 0, 1, 0))
	{
		if (ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 15f)
		{
			return 1;
		}
	}
	return 0;
}

void func_90()//Position - 0x391F
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(joaat("g_m_y_salvagoon_01"));
	STREAMING::REQUEST_MODEL(joaat("bobcatxl"));
	STREAMING::REQUEST_MODEL(joaat("prop_cash_case_01"));
	if ((STREAMING::HAS_MODEL_LOADED(joaat("g_m_y_salvagoon_01")) && STREAMING::HAS_MODEL_LOADED(joaat("bobcatxl"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cash_case_01")))
	{
		PED::ADD_SCENARIO_BLOCKING_AREA(Local_45 - Vector(20f, 50f, 50f), Local_45 + Vector(20f, 50f, 50f), 0, 1, 1, 1);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("bobcatxl"), 1);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(3, 0);
		iLocal_63[0] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 2209.17f, 5572.897f, 52.7565f, 255.5161f, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[0], 1, 0);
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_63[0]);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_63[0], 1, 1);
		iLocal_63[1] = VEHICLE::CREATE_VEHICLE(joaat("bobcatxl"), 2195.473f, 5607.506f, 52.5648f, 168.4012f, 1, 1);
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[1], 1, 0);
		VEHICLE::SET_VEHICLE_EXTRA(iLocal_63[1], 1, 0);
		iVar0 = 0;
		MISC::SET_BIT(&iVar0, 1);
		uLocal_64 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_case"), Local_46, -1.368082f, 0.230633f, 176.8749f, iVar0, MISC::GET_RANDOM_INT_IN_RANGE(40000, 100000), 2, 1, joaat("prop_cash_case_01"));
		Local_47[0 /*3*/] = { 2205.769f, 5631.985f, 55.553f };
		fLocal_51[0] = 352.2203f;
		Local_47[1 /*3*/] = { 2210.584f, 5580.684f, 52.8132f };
		fLocal_51[1] = 300.5012f;
		Local_47[2 /*3*/] = { 2201.302f, 5589.279f, 52.9354f };
		fLocal_51[2] = 53.1602f;
		Local_47[3 /*3*/] = { 2202.535f, 5613.367f, 52.6781f };
		fLocal_51[3] = 70f;
		Local_47[4 /*3*/] = { 2200.764f, 5614.076f, 52.6852f };
		fLocal_51[4] = 53f;
		Local_47[5 /*3*/] = { 2193.714f, 5595.456f, 52.7615f };
		fLocal_51[5] = 338.8346f;
		PED::ADD_RELATIONSHIP_GROUP("DrugCult", &iLocal_68);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, iLocal_68, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, joaat("COP"), iLocal_68);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_68, 1862763509);
		iLocal_70 = 0;
		while (iLocal_70 < 6)
		{
			iLocal_62[iLocal_70] = PED::CREATE_PED(26, joaat("g_m_y_salvagoon_01"), Local_47[iLocal_70 /*3*/], fLocal_51[iLocal_70], 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_62[iLocal_70], 1);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_62[iLocal_70], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_62[iLocal_70], 50, 1);
			PED::SET_PED_COMBAT_RANGE(iLocal_62[iLocal_70], 0);
			PED::SET_PED_ACCURACY(iLocal_62[iLocal_70], 13);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_62[iLocal_70], iLocal_68);
			iLocal_71 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iLocal_71 == 0)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_62[iLocal_70], joaat("weapon_sawnoffshotgun"), -1, 1, 1);
			}
			else if (iLocal_71 == 1)
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_62[iLocal_70], joaat("weapon_microsmg"), -1, 1, 1);
			}
			else
			{
				WEAPON::GIVE_WEAPON_TO_PED(iLocal_62[iLocal_70], joaat("weapon_assaultrifle"), -1, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(iLocal_62[iLocal_70], 42, 1);
			func_85(&uLocal_76, 3, iLocal_62[iLocal_70], "SalvadorGang", 0, 1);
			iLocal_70++;
		}
		if (!PED::IS_PED_INJURED(iLocal_62[0]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2205.769f, 5631.985f, 55.553f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2214.833f, 5635.627f, 55.0029f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2215.993f, 5613.299f, 53.6157f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2221.951f, 5593.625f, 52.9483f, 10000);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_69, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62[0], uLocal_69);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_62[0], "piDrugCult[0]");
		if (!PED::IS_PED_INJURED(iLocal_62[1]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2210.584f, 5580.684f, 52.8132f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2205.466f, 5583.631f, 52.8682f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2203.039f, 5567.408f, 52.7996f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2199.498f, 5560.702f, 52.8606f, 10000);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_69, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62[1], uLocal_69);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_62[1], "piDrugCult[1]");
		if (!PED::IS_PED_INJURED(iLocal_62[2]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2201.014f, 5589.357f, 52.9573f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2210.646f, 5593.576f, 52.8312f, 8000);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 2229.667f, 5598.368f, 53.2195f, 1f, -1, 1048576000, 0, 1193033728);
			TASK::TASK_TURN_PED_TO_FACE_COORD(0, 2237.916f, 5599.589f, 53.2311f, 12000);
			TASK::SET_SEQUENCE_TO_REPEAT(uLocal_69, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62[2], uLocal_69);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_62[2], "piDrugCult[2]");
		if (!PED::IS_PED_INJURED(iLocal_62[3]) && !PED::IS_PED_INJURED(iLocal_62[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_62[4], -1, 2f, 1f, 1073741824, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_62[4], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62[3], uLocal_69);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_62[3], "piDrugCult[3]");
		if (!PED::IS_PED_INJURED(iLocal_62[4]))
		{
			TASK::OPEN_SEQUENCE_TASK(&uLocal_69);
			TASK::TASK_GO_TO_ENTITY(0, iLocal_62[3], -1, 2f, 1f, 1073741824, 0);
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_62[3], 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_69);
			TASK::TASK_PERFORM_SEQUENCE(iLocal_62[4], uLocal_69);
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_69);
		}
		PED::SET_PED_NAME_DEBUG(iLocal_62[4], "piDrugCult[4]");
		TASK::TASK_GUARD_CURRENT_POSITION(iLocal_62[5], 0f, 3f, 1);
		PED::SET_PED_NAME_DEBUG(iLocal_62[5], "piDrugCult[5]");
		uLocal_65 = func_91(Local_46, 0);
		HUD::SET_BLIP_SPRITE(uLocal_65, 140);
		func_56("DRUG_BLIP_START", -1);
		iLocal_43 = 1;
	}
}

var func_91(struct<3> Param0, int iParam1)//Position - 0x3F51
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_68(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

int func_92()//Position - 0x3F7D
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_42) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_103())
		{
			return 0;
		}
	}
	if (func_99())
	{
		return 1;
	}
	if (func_93(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_93(float fParam0, bool bParam1)//Position - 0x4004
{
	struct<27> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	iVar2 = -1;
	fVar3 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_46(func_80()))
		{
			iVar5 = func_43();
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 63)
			{
				iVar1 = iVar6;
				if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 2) && !MISC::IS_BIT_SET(Global_17C49.f_41BC[iVar1 /*6*/], 3))
				{
					func_94(iVar1, &Var0);
					fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar4 < fVar3)
					{
						bVar7 = true;
						if (bParam1)
						{
							if (iVar5 != Var0.f_1A)
							{
								bVar7 = false;
							}
						}
						if (bVar7)
						{
							iVar2 = iVar1;
							fVar3 = fVar4;
						}
					}
				}
				iVar6++;
			}
		}
	}
	return iVar2;
}

void func_94(int iParam0, var uParam1)//Position - 0x40BB
{
	switch (iParam0)
	{
		case 0:
			func_95(uParam1, "Abigail1", func_97(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 1:
			func_95(uParam1, "Abigail2", func_97(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 2:
			func_95(uParam1, "Barry1", func_97(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 3:
			func_95(uParam1, "Barry2", func_97(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 4:
			func_95(uParam1, "Barry3", func_97(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 5:
			func_95(uParam1, "Barry3A", func_97(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 6:
			func_95(uParam1, "Barry3C", func_97(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 7:
			func_95(uParam1, "Barry4", func_97(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
			break;
		
		case 8:
			func_95(uParam1, "Dreyfuss1", func_97(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 9:
			func_95(uParam1, "Epsilon1", func_97(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 10:
			func_95(uParam1, "Epsilon2", func_97(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 11:
			func_95(uParam1, "Epsilon3", func_97(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 12:
			func_95(uParam1, "Epsilon4", func_97(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 13:
			func_95(uParam1, "Epsilon5", func_97(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 14:
			func_95(uParam1, "Epsilon6", func_97(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 15:
			func_95(uParam1, "Epsilon7", func_97(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 16:
			func_95(uParam1, "Epsilon8", func_97(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 17:
			func_95(uParam1, "Extreme1", func_97(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 18:
			func_95(uParam1, "Extreme2", func_97(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 19:
			func_95(uParam1, "Extreme3", func_97(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 20:
			func_95(uParam1, "Extreme4", func_97(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 21:
			func_95(uParam1, "Fanatic1", func_97(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 22:
			func_95(uParam1, "Fanatic2", func_97(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 23:
			func_95(uParam1, "Fanatic3", func_97(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_96(iParam0), 0, 1);
			break;
		
		case 24:
			func_95(uParam1, "Hao1", func_97(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
			break;
		
		case 25:
			func_95(uParam1, "Hunting1", func_97(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 26:
			func_95(uParam1, "Hunting2", func_97(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 27:
			func_95(uParam1, "Josh1", func_97(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 28:
			func_95(uParam1, "Josh2", func_97(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 29:
			func_95(uParam1, "Josh3", func_97(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 30:
			func_95(uParam1, "Josh4", func_97(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 31:
			func_95(uParam1, "Maude1", func_97(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 32:
			func_95(uParam1, "Minute1", func_97(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 33:
			func_95(uParam1, "Minute2", func_97(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 34:
			func_95(uParam1, "Minute3", func_97(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 35:
			func_95(uParam1, "MrsPhilips1", func_97(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 36:
			func_95(uParam1, "MrsPhilips2", func_97(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 37:
			func_95(uParam1, "Nigel1", func_97(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 38:
			func_95(uParam1, "Nigel1A", func_97(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 39:
			func_95(uParam1, "Nigel1B", func_97(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 40:
			func_95(uParam1, "Nigel1C", func_97(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 41:
			func_95(uParam1, "Nigel1D", func_97(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 42:
			func_95(uParam1, "Nigel2", func_97(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 43:
			func_95(uParam1, "Nigel3", func_97(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 44:
			func_95(uParam1, "Omega1", func_97(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 45:
			func_95(uParam1, "Omega2", func_97(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 46:
			func_95(uParam1, "Paparazzo1", func_97(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 47:
			func_95(uParam1, "Paparazzo2", func_97(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 48:
			func_95(uParam1, "Paparazzo3", func_97(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 49:
			func_95(uParam1, "Paparazzo3A", func_97(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 50:
			func_95(uParam1, "Paparazzo3B", func_97(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 51:
			func_95(uParam1, "Paparazzo4", func_97(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 52:
			func_95(uParam1, "Rampage1", func_97(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 54:
			func_95(uParam1, "Rampage3", func_97(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 55:
			func_95(uParam1, "Rampage4", func_97(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 56:
			func_95(uParam1, "Rampage5", func_97(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 53:
			func_95(uParam1, "Rampage2", func_97(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 57:
			func_95(uParam1, "TheLastOne", func_97(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 58:
			func_95(uParam1, "Tonya1", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 59:
			func_95(uParam1, "Tonya2", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 60:
			func_95(uParam1, "Tonya3", func_97(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 61:
			func_95(uParam1, "Tonya4", func_97(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 62:
			func_95(uParam1, "Tonya5", func_97(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_95(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x5270
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { Param6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_96(int iParam0)//Position - 0x5301
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_97(int iParam0)//Position - 0x5647
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_98(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_98(int iParam0)//Position - 0x567E
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_99()//Position - 0x5ACA
{
	if (func_102() && !func_103())
	{
		return 1;
	}
	if (func_101() && func_100())
	{
		return 1;
	}
	return 0;
}

bool func_100()//Position - 0x5AFC
{
	return Global_17B2F > 0;
}

int func_101()//Position - 0x5B0A
{
	if (Global_154F9 != -1)
	{
		return 1;
	}
	return 0;
}

int func_102()//Position - 0x5B1F
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_103()//Position - 0x5B45
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::_0xD10282B6E3751BA0() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_104()//Position - 0x5B62
{
	if (!func_63(5))
	{
		return 1;
	}
	if (func_99())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_103())
		{
			return 0;
		}
	}
	if (func_93(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_105()//Position - 0x5BC4
{
	if ((Global_17C3E == func_52() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_17C3F)
	{
		return 1;
	}
	return 0;
}

void func_106(int iParam0)//Position - 0x5BEF
{
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_108(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_17C3B = 0;
	func_107();
}

void func_107()//Position - 0x5C25
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)), 1);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
}

void func_108(int iParam0)//Position - 0x5C62
{
	Global_17C3E = iParam0;
}

int func_109(struct<3> Param0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x5C70
{
	bool bVar0;
	struct<3> Var1;
	int iVar2;
	struct<3> Var3;
	int iVar4;
	
	if (!Global_2015C)
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = func_52();
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	if (iParam1 == 31 || iParam1 == 32)
	{
		if (!func_135())
		{
			return 0;
		}
	}
	Local_42 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_103())
			{
				return 0;
			}
		}
		if (!Global_17C49.f_1CAD)
		{
			return 0;
		}
		if (func_28(0))
		{
			return 0;
		}
		if (func_99())
		{
			return 0;
		}
		if (func_134())
		{
			return 0;
		}
		if (Global_17C3E != -1)
		{
			return 0;
		}
		if (func_46(func_80()))
		{
			if (func_93(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam4)
		{
			if ((Var1.f_2 - Local_42.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_133(iParam1))
		{
			return 0;
		}
		if (func_46(func_80()))
		{
			if (func_132(func_80()) == 4 || func_132(func_80()) == 5)
			{
				return 0;
			}
		}
		if (func_46(func_80()))
		{
			if (!func_131(iParam1, iParam2, 145))
			{
				return 0;
			}
		}
		if (!func_130(Global_17C49.f_6E20.f_2B[iParam1]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_17C40) < 150000)
		{
			if (iParam1 != 30)
			{
				return 0;
			}
		}
		if (func_129())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_120(4))
		{
			return 0;
		}
		if (!func_63(5))
		{
			return 0;
		}
		if (func_119(iParam1, iParam2) && !bParam3)
		{
			return 0;
		}
		if (Global_3 && iParam1 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam1 == 9 && (iParam2 == 2 || iParam2 == 5)) && !func_119(0, 0))
		{
			return 0;
		}
		if (Global_600E)
		{
			return 0;
		}
		if (func_133(30) && !func_119(30, 0))
		{
			if (iParam1 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_46(func_80()))
		{
			iVar2 = 0;
			while (iVar2 < 3)
			{
				Var3 = { Global_17C49.f_6C1.f_21B.f_5F8[iVar2 /*3*/] };
				iVar4 = Global_17C49.f_6C1.f_21B.f_5F4[iVar2];
				if (func_118(iVar4))
				{
					if (func_111(iVar2))
					{
						if (!func_110(Var3, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var3) < (210f * 210f))
							{
								if (func_80() != iVar2)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return 1;
}

bool func_110(struct<3> Param0, struct<3> Param1)//Position - 0x6009
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

bool func_111(int iParam0)//Position - 0x6032
{
	int iVar0;
	
	iVar0 = Global_17C49.f_6C1.f_21B.f_5F4[iParam0];
	return func_112(iVar0);
}

int func_112(int iParam0)//Position - 0x6053
{
	return func_113(iParam0, 1);
}

int func_113(int iParam0, int iParam1)//Position - 0x6062
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_118(iParam0))
	{
		return 0;
	}
	func_114(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_114(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x60B5
{
	func_115(func_22(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_115(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x60D3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_117(iParam0, iParam1))
	{
		iVar0 = func_7(iParam1);
		iVar1 = func_5(iParam0);
		iVar2 = (func_5(iParam0) - func_5(iParam1));
		iVar3 = (func_7(iParam0) - func_7(iParam1));
		iVar4 = (func_8(iParam0) - func_8(iParam1));
		iVar5 = (func_11(iParam0) - func_11(iParam1));
		iVar6 = (func_10(iParam0) - func_10(iParam1));
		iVar7 = (func_9(iParam0) - func_9(iParam1));
	}
	else
	{
		iVar0 = func_7(iParam0);
		iVar1 = func_5(iParam1);
		iVar2 = (func_5(iParam1) - func_5(iParam0));
		iVar3 = (func_7(iParam1) - func_7(iParam0));
		iVar4 = (func_8(iParam1) - func_8(iParam0));
		iVar5 = (func_11(iParam1) - func_11(iParam0));
		iVar6 = (func_10(iParam1) - func_10(iParam0));
		iVar7 = (func_9(iParam1) - func_9(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_21(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_116(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_116(float fParam0, float fParam1, float fParam2)//Position - 0x62D4
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_117(int iParam0, int iParam1)//Position - 0x6316
{
	int iVar0;
	int iVar1;
	
	if (!func_118(iParam1) || !func_118(iParam0))
	{
		return 1;
	}
	iVar0 = func_5(iParam0);
	iVar1 = func_5(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_7(iParam0);
	iVar1 = func_7(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_8(iParam0);
	iVar1 = func_8(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_11(iParam0);
	iVar1 = func_11(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_10(iParam0);
	iVar1 = func_10(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	iVar1 = func_9(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_118(int iParam0)//Position - 0x6422
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_9(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_10(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_11(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_5(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_7(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_8(iParam0);
	if (iVar5 < 1 || iVar5 > func_21(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_119(int iParam0, int iParam1)//Position - 0x64FE
{
	if (MISC::IS_BIT_SET(Global_17C49.f_6E20.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_120(int iParam0)//Position - 0x6521
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_80();
				if (!func_46(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_128()) || Global_17890) || Global_5F7E) || func_127()) || func_82(8, -1)) || func_126()) || func_125()) || func_124()) || func_123()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_128()) || Global_5F7E) || func_127()) || func_82(8, -1)) || func_124()) || func_126()) || func_125()) || func_123()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_128()) || Global_17890) || Global_5F7E) || func_127()) || func_82(8, -1)) || func_124()) || func_126()) || func_125()) || func_123()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_128()) || Global_17890) || Global_5F7E) || func_127()) || func_82(8, -1)) || func_126()) || func_125()) || func_123()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_128() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_82(8, -1)) || func_123()) || func_122()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_82(8, -1) || func_126()) || func_125()) || func_122()) || func_121())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_128()) || Global_5F7E) || func_127()) || func_82(8, -1)) || func_125()) || func_124()) || func_123()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_128()) || func_125()) || Global_17890) || Global_5F7E) || func_127()) || Global_8C75) || func_82(8, -1)) || func_124()) || func_122()) || func_123()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_128()) || Global_17890) || Global_5F7E) || func_127()) || func_82(8, -1)) || func_124()) || func_122()) || func_126()) || func_125()) || func_123())
						{
							return 0;
						}
						break;
				}
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
	else
	{
		return 0;
	}
	return 1;
}

var func_121()//Position - 0x6C3E
{
	return Global_15F91.f_1;
}

int func_122()//Position - 0x6C4C
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_123()//Position - 0x6C72
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_124()//Position - 0x6C8C
{
	if (Global_10B99)
	{
		return 1;
	}
	else if (Global_D5D8 && !Global_D5DE)
	{
		return 1;
	}
	return 0;
}

bool func_125()//Position - 0x6CB6
{
	return Global_15F9E.f_123 > 0;
}

bool func_126()//Position - 0x6CC7
{
	return Global_15F9E.f_122 > 0;
}

var func_127()//Position - 0x6CD8
{
	return Global_14143C;
}

int func_128()//Position - 0x6CE4
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_129()//Position - 0x6D00
{
	func_79();
	if (Global_BFC[Global_3839 /*2811*/][0 /*281*/].f_103 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_130(int iParam0)//Position - 0x6D28
{
	return func_117(func_22(), iParam0);
}

int func_131(int iParam0, int iParam1, int iParam2)//Position - 0x6D3A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_80();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_132(int iParam0)//Position - 0x6E1E
{
	if (!func_46(iParam0))
	{
		return 7;
	}
	return Global_17C49.f_1738.f_397[iParam0];
}

bool func_133(int iParam0)//Position - 0x6E42
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_135())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_17C49.f_6E20, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_17C49.f_6E20.f_1, iVar0);
	}
	return bVar1;
}

int func_134()//Position - 0x6EA0
{
	var uVar0;
	
	if (Global_6012)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(uVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_135()//Position - 0x6ED7
{
	var uVar0;
	
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_29C.f_2AB, 7))
		{
			return 1;
		}
	}
	if (Global_20258 == 2)
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24())
			{
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					uVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&uVar0, 0);
					STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(uVar0);
				}
				return 1;
			}
		}
	}
	return 0;
}

void func_136()//Position - 0x6F5A
{
	if (iLocal_53)
	{
		if (!iLocal_52)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("RE20_FAIL");
			if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				func_23(0);
			}
			iLocal_70 = 0;
			while (iLocal_70 < 6)
			{
				if (!PED::IS_PED_INJURED(iLocal_62[iLocal_70]))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_67[iLocal_70]))
					{
						HUD::REMOVE_BLIP(&(uLocal_67[iLocal_70]));
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_62[iLocal_70]));
				}
				iLocal_70++;
			}
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
			MISC::ENABLE_DISPATCH_SERVICE(3, 1);
			if (bLocal_54)
			{
				func_3(18, 7, 0);
			}
			else
			{
				func_3(18, 1, 0);
			}
		}
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_137(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_137(int iParam0)//Position - 0x6FF6
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_52();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_105())
	{
		func_141(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_17C40 = MISC::GET_GAME_TIMER();
		func_140(30000);
		StringCopy(&cVar0, func_139(Global_17C3E, 1), 64);
		if (func_51(Global_17C3E) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_17C3D, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_17C3B, (MISC::GET_GAME_TIMER() - Global_17C3C), 0);
	}
	else if (MISC::IS_BIT_SET(Global_17C45, 0) && Global_17C49.f_6E20.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_17C45, 0);
	}
	func_138(&Global_5FB7);
	Global_17C3F = 0;
	func_108(-1);
}

void func_138(var uParam0)//Position - 0x70AB
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_883B)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_883A = 0;
	Global_883C = 0;
	Global_8861 = 15;
	Global_D5DB = 0;
	Global_D5DC = 0;
}

char* func_139(int iParam0, bool bParam1)//Position - 0x70E8
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_140(int iParam0)//Position - 0x7331
{
	Global_8A88 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_141(int iParam0)//Position - 0x7343
{
	func_3(iParam0, 0, func_142(iParam0));
}

int func_142(int iParam0)//Position - 0x7358
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

