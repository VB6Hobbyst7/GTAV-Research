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
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	var uLocal_35 = 0;
	struct<4> Local_36[10];
	bool bLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	var uLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	struct<8> Local_56 = { 5, 0, 0, 0, 0, 0, 0, -1 } ;
	var uLocal_57 = 0;
	var uLocal_58 = 16;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
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
	int iLocal_223 = 0;
	struct<2> Local_224 = { 0, 5 } ;
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
	var uLocal_240 = 5;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	struct<42> Var0;
	struct<3> Var1;
	int iVar2;
	
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
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_34 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	uLocal_48 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_49 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_51 = func_290(49);
	iLocal_52 = -1;
	MISC::_0x6F2135B6129620C1(1);
	func_289();
	Var0.f_11 = 2;
	Var0.f_1C = 6;
	Var0.f_23 = 5;
	Var0.f_29 = 6;
	Var1 = { 0f, 0f, 0f };
	func_288(&Var0);
	Var1 = { ScriptParam_224.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(83))
	{
		func_287("Force cleanup [TERMINATING]");
		if (Var0 != -1)
		{
			if (Global_178B8[Var0 /*10*/].f_9 != -1)
			{
				func_287("Relinquishing candidate id...");
				func_286(&(Global_178B8[Var0 /*10*/].f_9));
			}
		}
		func_269(&Var0, 1);
	}
	if (!func_266(&Var0, Var1, 1f))
	{
		func_265();
		func_287("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (!func_257(Var0))
	{
		func_265();
		func_287("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_256(Var0))
	{
		func_265();
		func_287("SCRIPT TERMINATED");
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (!func_234(&Var0))
	{
		SYSTEM::WAIT(0);
		if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
		{
			func_287("Player out of range [TERMINATING]");
			func_269(&Var0, 1);
		}
	}
	if (Var0 == 6)
	{
		uLocal_54 = func_233();
	}
	MISC::CLEAR_AREA(Var1, Var0.f_F, 1, 0, 0, 0);
	if (Var0 == 4)
	{
		func_232(&uLocal_58, 3, Var0.f_1C[0], "BARRY", 0, 1);
		iLocal_223 = MISC::GET_GAME_TIMER();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if (Var0 == 2 || Var0 == 3)
		{
			func_230(&Var0);
			func_228();
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("Barry", 1, 0, 0, 0);
			}
		}
		else if (Var0 == 4)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("BARRY", 1, 0, 0, 0);
			}
		}
		if (!func_190(&Var0, Var0 != 2))
		{
			func_269(&Var0, 1);
		}
		func_189(Var0);
		func_182(&iLocal_52, &(Var0.f_9), Var1);
		if (func_181(Var0.f_1C[0]))
		{
			if (Var0 == 2)
			{
				if (func_179(&Var0, ENTITY::GET_ENTITY_COORDS(Var0.f_1C[0], 1), "BARY1AU", "BARY1_PRELEA", 5, "BARRY", 10000, 23f))
				{
					func_178(&Var0, Local_56, 1, 0);
				}
			}
			else if (Var0 == 3)
			{
				if (func_179(&Var0, ENTITY::GET_ENTITY_COORDS(Var0.f_1C[0], 1), "BARY2AU", "BARY2_AMB", 3, "BARRY", 10000, 23f))
				{
				}
			}
			else if (Var0 == 4)
			{
				func_168(&uLocal_57, ENTITY::GET_ENTITY_COORDS(Var0.f_1C[0], 1), "BARR3AU", "BARRY3_AMB");
			}
		}
		iVar2 = 0;
		if (func_167(Var0))
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_53) > 5000)
			{
				iVar2 = 1;
				iLocal_53 = MISC::GET_GAME_TIMER();
			}
		}
		if (func_152(&Var0, iVar2))
		{
			if (func_151(Var0))
			{
				func_148(Var0, &uLocal_55);
			}
			if (!func_2(&Var0))
			{
				func_269(&Var0, 1);
			}
			if (func_1(&Var0))
			{
				func_269(&Var0, 0);
			}
		}
	}
}

int func_1(int iParam0)//Position - 0x32B
{
	while (!Global_178B8[*iParam0 /*10*/])
	{
		SYSTEM::WAIT(0);
	}
	return 1;
}

int func_2(int iParam0)//Position - 0x349
{
	struct<4> Var0;
	char* sVar1;
	
	if (!func_147())
	{
		while (!func_138(*iParam0))
		{
			if (func_137(*iParam0))
			{
				func_129();
			}
			if (!func_190(iParam0, *iParam0 != 2))
			{
				func_287("LAUNCH_RC_MISSION - NOT IS_RC_FINE_AND_IN_RANGE() [TERMINATING]");
				return 0;
			}
			SYSTEM::WAIT(0);
		}
	}
	if (func_128())
	{
		func_126();
	}
	if (!func_97(iParam0))
	{
		func_287("STEP_7_COMMON_LaunchMission - Trying to launch a null script string name");
		return 0;
	}
	func_94(*iParam0, &Var0);
	MemCopy(&sVar1, {func_93(*iParam0)}, 4);
	func_91(&sVar1, Var0.f_3, 0);
	func_90(*iParam0);
	if (!func_147())
	{
		if (iParam0->f_10 == 2)
		{
			func_22(&(iParam0->f_1), 0);
		}
		else
		{
			func_22(&(iParam0->f_1), 1);
		}
	}
	func_3(*iParam0, Var0);
	return 1;
}

void func_3(int iParam0, char* sParam1)//Position - 0x40A
{
	func_21(sParam1);
	MISC::CLEAR_BIT(&(Global_17C49.f_41BC[iParam0 /*6*/]), 5);
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		while (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
		{
			func_19();
			SYSTEM::WAIT(0);
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1)
	{
		Global_D5DF = 0;
		SCRIPT::REQUEST_SCRIPT("mission_stat_watcher");
		while (!SCRIPT::HAS_SCRIPT_LOADED("mission_stat_watcher"))
		{
			SYSTEM::WAIT(0);
		}
		SYSTEM::START_NEW_SCRIPT("mission_stat_watcher", 1828);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("mission_stat_watcher");
	}
	while (!MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 5))
	{
		if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
		{
			MISC::SET_BIT(&(Global_17C49.f_41BC[iParam0 /*6*/]), 5);
		}
	}
	func_4(iParam0);
}

void func_4(int iParam0)//Position - 0x4C9
{
	int iVar0;
	int iVar1;
	
	if (Global_D5DC == 1)
	{
		func_18();
		Global_D5DC = 0;
		if (Global_D5D7)
		{
			return;
		}
	}
	if (Global_3)
	{
		Global_D5DF = 1;
		func_10();
		return;
	}
	MemCopy(&Global_D5ED, {func_9(iParam0)}, 4);
	Global_D5E1 = 0;
	Global_D5E0 = 0;
	switch (iParam0)
	{
		case 1:
		case 9:
			Global_D5D4 = 1;
			Global_D5D7 = 1;
			Global_D5DA = 1;
			break;
		
		case 0:
		case 4:
		case 7:
		case 10:
		case 11:
		case 13:
		case 15:
		case 27:
		case 31:
		case 35:
		case 36:
		case 37:
		case 48:
		case 44:
		case 45:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			Global_D5DF = 1;
			Global_D5E0 = 1;
			func_10();
			func_19();
			return;
			break;
	}
	iVar0 = Global_105B3;
	Global_105B3 = 1;
	iVar1 = Global_105B4;
	Global_105B4 = iParam0;
	if (!Global_D5D4)
	{
		if ((Global_105B4 != iVar1 || Global_1051D == 0) || iVar0 != Global_105B3)
		{
			Global_6075 = 0;
			func_10();
			func_6(iParam0);
		}
		else
		{
			Global_D5D7 = 1;
		}
	}
	Global_D5FA = MISC::GET_GAME_TIMER();
	func_5();
	Global_D5DE = 0;
}

void func_5()//Position - 0x623
{
	int iVar0;
	
	if (!Global_D5DB)
	{
		return;
	}
	if (Global_1051D == 0)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		switch (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/])
		{
			case 1:
			case 9:
				Global_1051E[iVar0 /*9*/].f_3 = 1;
				break;
			
			case 4:
				if (Global_D5E6)
				{
					Global_1051E[iVar0 /*9*/].f_3 = 1;
				}
				break;
			
			case 6:
				if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/].f_3)
				{
					if (Global_1051E[iVar0 /*9*/].f_1 != 0)
					{
						Global_1051E[iVar0 /*9*/].f_3 = 1;
					}
				}
				break;
		}
		iVar0++;
	}
	Global_D5DB = 0;
}

void func_6(int iParam0)//Position - 0x6D6
{
	switch (iParam0)
	{
		case 2:
			func_7(741);
			func_7(742);
			return;
		
		case 3:
			func_7(743);
			func_7(744);
			return;
		
		case 5:
			func_7(745);
			func_7(746);
			return;
		
		case 6:
			func_7(747);
			func_7(748);
			return;
		
		case 8:
			func_7(749);
			return;
		
		case 12:
			func_7(750);
			return;
		
		case 14:
			func_7(751);
			func_7(752);
			return;
		
		case 16:
			func_7(753);
			func_7(754);
			return;
		
		case 17:
			func_7(755);
			func_7(756);
			func_7(757);
			return;
		
		case 18:
			func_7(758);
			func_7(759);
			return;
		
		case 19:
			func_7(760);
			func_7(761);
			return;
		
		case 20:
			func_7(762);
			return;
		
		case 21:
			func_7(763);
			return;
		
		case 22:
			func_7(764);
			func_7(765);
			return;
		
		case 23:
			func_7(766);
			return;
		
		case 25:
			func_7(767);
			func_7(768);
			func_7(769);
			return;
		
		case 26:
			func_7(770);
			func_7(771);
			return;
		
		case 28:
			func_7(772);
			func_7(773);
			return;
		
		case 29:
			func_7(774);
			func_7(775);
			return;
		
		case 30:
			func_7(776);
			func_7(777);
			return;
		
		case 32:
			func_7(778);
			func_7(779);
			return;
		
		case 33:
			func_7(780);
			func_7(781);
			func_7(782);
			return;
		
		case 34:
			func_7(783);
			func_7(784);
			return;
		
		case 38:
			func_7(785);
			func_7(786);
			return;
		
		case 39:
			func_7(787);
			func_7(788);
			return;
		
		case 40:
			func_7(789);
			return;
		
		case 41:
			func_7(790);
			func_7(791);
			func_7(792);
			return;
		
		case 42:
			func_7(793);
			func_7(794);
			func_7(795);
			return;
		
		case 43:
			func_7(796);
			func_7(797);
			return;
		
		case 46:
			func_7(798);
			func_7(799);
			return;
		
		default:
	}
	switch (iParam0)
	{
		case 47:
			func_7(800);
			func_7(801);
			return;
		
		case 49:
			func_7(802);
			func_7(803);
			return;
		
		case 50:
			func_7(804);
			func_7(805);
			return;
		
		case 51:
			func_7(806);
			return;
		
		case 57:
			func_7(807);
			func_7(808);
			func_7(809);
			return;
		
		case 58:
			func_7(828);
			func_7(829);
			func_7(830);
			return;
		
		case 59:
			func_7(831);
			func_7(832);
			func_7(833);
			return;
		
		case 60:
			func_7(834);
			func_7(835);
			func_7(836);
			return;
		
		case 61:
			func_7(837);
			func_7(838);
			func_7(839);
			return;
		
		case 62:
			func_7(840);
			func_7(841);
			func_7(842);
			return;
		
		case 24:
			func_7(843);
			func_7(844);
			func_7(845);
			return;
		
		default:
	}
}

void func_7(int iParam0)//Position - 0xABE
{
	Global_D5D7 = 1;
	Global_D5DA = 1;
	if (Global_1051D > 15)
	{
		return;
	}
	func_8(Global_1051D);
	Global_1051E[Global_1051D /*9*/] = iParam0;
	Global_1051D++;
	if (Global_D6BF[iParam0 /*13*/] == 16)
	{
		Global_105B5 = 1;
	}
}

void func_8(int iParam0)//Position - 0xB09
{
	Global_1051E[iParam0 /*9*/].f_1 = 0;
	Global_1051E[iParam0 /*9*/].f_2 = 0f;
	Global_1051E[iParam0 /*9*/].f_3 = 0;
	Global_1051E[iParam0 /*9*/].f_4 = 0;
}

struct<2> func_9(int iParam0)//Position - 0xB3D
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_93(iParam0) };
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

void func_10()//Position - 0xB75
{
	if (Global_D5DE)
	{
		return;
	}
	Global_D5E7 = 0;
	Global_1051D = 0;
	Global_D5E9 = 0;
	if (Global_D5E6)
	{
	}
	Global_D5E6 = 0;
	func_17(0);
	func_16();
	Global_105B5 = 0;
	Global_D5DD = 1;
	func_14();
	func_13();
	func_12();
	func_11();
	Global_D5D4 = 0;
	Global_D5F2 = 0;
	Global_D5FA = -1;
}

void func_11()//Position - 0xBCB
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_105D8[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_105E1 = 0;
}

void func_12()//Position - 0xBF8
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_105B6[iVar0 /*2*/] = 0;
		Global_105B6[iVar0 /*2*/].f_1 = -1;
		iVar0++;
	}
	Global_105D7 = 0;
}

void func_13()//Position - 0xC2F
{
	Global_D67D = 0;
}

void func_14()//Position - 0xC3B
{
	Global_D5F1 = 0;
	Global_D5F5 = func_15(joaat("sp0_shots"));
	Global_D5F4 = func_15(joaat("sp0_hits"));
	Global_D5F7 = func_15(joaat("sp1_shots"));
	Global_D5F6 = func_15(joaat("sp1_hits"));
	Global_D5F9 = func_15(joaat("sp2_shots"));
	Global_D5F8 = func_15(joaat("sp2_hits"));
}

var func_15(int iParam0)//Position - 0xC8F
{
	var uVar0;
	
	STATS::STAT_GET_INT(iParam0, &uVar0, -1);
	return uVar0;
}

void func_16()//Position - 0xCA3
{
	int iVar0;
	
	Global_D5FB = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 64)
	{
		Global_D5FC[iVar0 /*2*/] = 0;
		iVar0++;
	}
}

void func_17(int iParam0)//Position - 0xCCD
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

void func_18()//Position - 0xCE1
{
	int iVar0;
	
	Global_D5DC = 1;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		Global_1051E[iVar0 /*9*/].f_3 = 2;
		iVar0++;
	}
	if (Global_D5E6)
	{
	}
	Global_D5E6 = 0;
}

void func_19()//Position - 0xD1A
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) > 0)
	{
		if (func_20())
		{
			if (Global_D5D9 && !Global_D5D8)
			{
				Global_D5D9 = 0;
				MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
			}
		}
		else
		{
			MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("mission_stat_watcher");
		}
	}
}

int func_20()//Position - 0xD5C
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("mission_stat_watcher")) < 1)
	{
		return 0;
	}
	if (!Global_D5D7)
	{
		return 0;
	}
	return Global_D5E3;
}

void func_21(char* sParam0)//Position - 0xD86
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sParam0))
	{
	}
}

void func_22(char[4] cParam0, int iParam1)//Position - 0xD99
{
	MISC::CLEAR_BIT(&(Global_15F6A.f_14), 17);
	func_23(cParam0, iParam1, 0);
}

void func_23(char[4] cParam0, int iParam1, int iParam2)//Position - 0xDB6
{
	if (Global_15F6A != 10 && Global_15F6A != 9)
	{
		StringCopy(&Global_164CF, cParam0, 32);
		func_25(&Global_164D7, cParam0, 0, "Start", iParam1, iParam2);
		func_24();
		Global_14A41 = 0;
	}
}

void func_24()//Position - 0xDFB
{
	int iVar0;
	int iVar1;
	
	Global_16D94 = Global_164D7;
	Global_16D94.f_1 = Global_164D7.f_1;
	Global_16D94.f_6 = Global_164D7.f_6;
	Global_16D94.f_7 = Global_164D7.f_7;
	Global_16D94.f_8 = Global_164D7.f_8;
	Global_16D94.f_2 = Global_164D7.f_2;
	Global_16D94.f_3 = Global_164D7.f_3;
	Global_16D94.f_4 = Global_164D7.f_4;
	Global_16D94.f_5 = Global_164D7.f_5;
	iVar1 = 0;
	while (iVar1 < 3)
	{
		Global_16D94.f_9[iVar1] = Global_164D7.f_9[iVar1];
		Global_16D94.f_D[iVar1] = Global_164D7.f_D[iVar1];
		Global_16D94.f_11[iVar1] = Global_164D7.f_11[iVar1];
		Global_16D94.f_15[iVar1] = Global_164D7.f_15[iVar1];
		Global_16D94.f_19[0 /*223*/][iVar1 /*74*/] = { Global_164D7.f_19[0 /*223*/][iVar1 /*74*/] };
		Global_16D94.f_19[1 /*223*/][iVar1 /*74*/] = { Global_164D7.f_19[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 < 12)
		{
			Global_16D94.f_1D8[iVar1 /*65*/][iVar0] = Global_164D7.f_1D8[iVar1 /*65*/][iVar0];
			Global_16D94.f_1D8[iVar1 /*65*/].f_D[iVar0] = Global_164D7.f_1D8[iVar1 /*65*/].f_D[iVar0];
			Global_16D94.f_1D8[iVar1 /*65*/].f_1A[iVar0] = Global_164D7.f_1D8[iVar1 /*65*/].f_1A[iVar0];
			iVar0++;
		}
		Global_16D94.f_1D8[iVar1 /*65*/].f_3B = Global_164D7.f_1D8[iVar1 /*65*/].f_3B;
		Global_16D94.f_1D8[iVar1 /*65*/].f_3C = Global_164D7.f_1D8[iVar1 /*65*/].f_3C;
		Global_16D94.f_1D8[iVar1 /*65*/].f_3D = Global_164D7.f_1D8[iVar1 /*65*/].f_3D;
		Global_16D94.f_1D8[iVar1 /*65*/].f_3E = Global_164D7.f_1D8[iVar1 /*65*/].f_3E;
		Global_16D94.f_1D8[iVar1 /*65*/].f_3F = Global_164D7.f_1D8[iVar1 /*65*/].f_3F;
		Global_16D94.f_1D8[iVar1 /*65*/].f_40 = Global_164D7.f_1D8[iVar1 /*65*/].f_40;
		iVar0 = 0;
		while (iVar0 < 9)
		{
			Global_16D94.f_1D8[iVar1 /*65*/].f_27[iVar0] = Global_164D7.f_1D8[iVar1 /*65*/].f_27[iVar0];
			Global_16D94.f_1D8[iVar1 /*65*/].f_31[iVar0] = Global_164D7.f_1D8[iVar1 /*65*/].f_31[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			Global_16D94.f_29C[iVar1 /*284*/][iVar0 /*3*/] = { Global_164D7.f_29C[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			Global_16D94.f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/] = { Global_164D7.f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 4)
		{
			Global_16D94.f_5F1[iVar1 /*32*/][iVar0] = Global_164D7.f_5F1[iVar1 /*32*/][iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 10)
		{
			Global_16D94.f_5F1[iVar1 /*32*/].f_5[iVar0] = Global_164D7.f_5F1[iVar1 /*32*/].f_5[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 15)
		{
			Global_16D94.f_5F1[iVar1 /*32*/].f_10[iVar0] = Global_164D7.f_5F1[iVar1 /*32*/].f_10[iVar0];
			iVar0++;
		}
		Global_16D94.f_652[iVar1] = Global_164D7.f_652[iVar1];
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			Global_16D94.f_843[iVar1 /*15*/][iVar0] = Global_164D7.f_843[iVar1 /*15*/][iVar0];
			Global_16D94.f_843[iVar1 /*15*/].f_5[iVar0] = Global_164D7.f_843[iVar1 /*15*/].f_5[iVar0];
			Global_16D94.f_843[iVar1 /*15*/].f_A[iVar0] = Global_164D7.f_843[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			Global_16D94.f_656[iVar1 /*164*/][iVar0] = Global_164D7.f_656[iVar1 /*164*/][iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_4[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_4[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_8[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_8[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_10[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_10[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_14[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_14[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_18[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_18[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_1C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_1C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_20[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_20[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_24[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_24[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_28[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_28[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_2C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_2C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_30[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_30[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_34[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_34[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_38[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_38[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_3C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_3C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_40[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_40[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_44[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_44[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_48[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_48[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_4C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_4C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_50[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_50[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_54[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_54[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_58[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_58[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_5C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_5C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_60[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_60[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_64[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_64[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_68[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_68[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_6C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_6C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_70[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_70[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_74[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_74[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_78[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_78[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_7C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_7C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_80[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_80[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_84[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_84[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_88[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_88[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_8C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_8C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_90[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_90[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_94[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_94[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_98[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_98[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_9C[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_9C[iVar0];
			Global_16D94.f_656[iVar1 /*164*/].f_A0[iVar0] = Global_164D7.f_656[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	Global_16D94.f_871 = { Global_164D7.f_871 };
	Global_16D94.f_871.f_3 = Global_164D7.f_871.f_3;
	Global_16D94.f_877 = { Global_164D7.f_877 };
	Global_16D94.f_877.f_3 = { Global_164D7.f_877.f_3 };
	Global_16D94.f_877.f_6 = Global_164D7.f_877.f_6;
	Global_16D94.f_877.f_8 = Global_16D94.f_877.f_8;
	Global_16D94.f_877.f_7 = Global_164D7.f_877.f_7;
	Global_16D94.f_877.f_9 = Global_164D7.f_877.f_9;
	Global_16D94.f_877.f_B = Global_164D7.f_877.f_B;
	Global_16D94.f_877.f_A = Global_164D7.f_877.f_A;
	Global_16D94.f_877.f_C = Global_164D7.f_877.f_C;
	Global_16D94.f_877.f_C.f_1 = { Global_164D7.f_877.f_C.f_1 };
	Global_16D94.f_877.f_C.f_5 = Global_164D7.f_877.f_C.f_5;
	Global_16D94.f_877.f_C.f_6 = Global_164D7.f_877.f_C.f_6;
	Global_16D94.f_877.f_C.f_7 = Global_164D7.f_877.f_C.f_7;
	Global_16D94.f_877.f_C.f_8 = Global_164D7.f_877.f_C.f_8;
	Global_16D94.f_877.f_C.f_9 = { Global_164D7.f_877.f_C.f_9 };
	Global_16D94.f_877.f_C.f_23 = { Global_164D7.f_877.f_C.f_23 };
	Global_16D94.f_877.f_C.f_26 = Global_164D7.f_877.f_C.f_26;
	Global_16D94.f_877.f_C.f_27 = Global_164D7.f_877.f_C.f_27;
	Global_16D94.f_877.f_C.f_28 = Global_164D7.f_877.f_C.f_28;
	Global_16D94.f_877.f_C.f_29 = Global_164D7.f_877.f_C.f_29;
	Global_16D94.f_877.f_C.f_35 = Global_164D7.f_877.f_C.f_35;
	Global_16D94.f_877.f_C.f_2A = Global_164D7.f_877.f_C.f_2A;
	Global_16D94.f_877.f_C.f_2B = Global_164D7.f_877.f_C.f_2B;
	Global_16D94.f_877.f_C.f_2C = Global_164D7.f_877.f_C.f_2C;
	Global_16D94.f_877.f_C.f_2D = Global_164D7.f_877.f_C.f_2D;
	Global_16D94.f_877.f_C.f_2F = Global_164D7.f_877.f_C.f_2F;
	Global_16D94.f_877.f_C.f_30 = Global_164D7.f_877.f_C.f_30;
	Global_16D94.f_877.f_C.f_31 = Global_164D7.f_877.f_C.f_31;
	Global_16D94.f_877.f_C.f_32 = Global_164D7.f_877.f_C.f_32;
	Global_16D94.f_877.f_C.f_33 = Global_164D7.f_877.f_C.f_33;
	Global_16D94.f_877.f_C.f_34 = Global_164D7.f_877.f_C.f_34;
	Global_16D94.f_8B9 = Global_164D7.f_8B9;
	Global_16D94.f_8B9.f_1 = Global_164D7.f_8B9.f_1;
	Global_16D94.f_8B9.f_2 = Global_164D7.f_8B9.f_2;
	Global_16D94.f_8B9.f_3 = Global_164D7.f_8B9.f_3;
}

void func_25(var uParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1A8B
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_89();
	uParam0->f_1 = func_78();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_63(&(uParam0->f_871), 0);
		func_62(PLAYER::PLAYER_PED_ID());
		func_56(PLAYER::PLAYER_PED_ID(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_11[iVar1] = Global_17C49.f_6C1.f_21B.f_126[iVar1];
		if (iVar1 == func_53())
		{
			func_46(PLAYER::PLAYER_PED_ID(), &(uParam0->f_1D8[iVar1 /*65*/]), 1);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_1D8[iVar1 /*65*/][iVar0] = Global_15E98[iVar1 /*65*/][iVar0];
				uParam0->f_1D8[iVar1 /*65*/].f_D[iVar0] = Global_15E98[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_1D8[iVar1 /*65*/].f_3B = Global_15E98[iVar1 /*65*/].f_3B;
			uParam0->f_1D8[iVar1 /*65*/].f_3C = Global_15E98[iVar1 /*65*/].f_3C;
			uParam0->f_1D8[iVar1 /*65*/].f_3D = Global_15E98[iVar1 /*65*/].f_3D;
			uParam0->f_1D8[iVar1 /*65*/].f_3E = Global_15E98[iVar1 /*65*/].f_3E;
			uParam0->f_1D8[iVar1 /*65*/].f_3F = Global_15E98[iVar1 /*65*/].f_3F;
			uParam0->f_1D8[iVar1 /*65*/].f_40 = Global_15E98[iVar1 /*65*/].f_40;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_1D8[iVar1 /*65*/].f_27[iVar0] = Global_15E98[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_1D8[iVar1 /*65*/].f_31[iVar0] = Global_15E98[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_29C[iVar1 /*284*/][iVar0 /*3*/] = { Global_17C49.f_6C1.f_21B.f_12A[iVar1 /*284*/][iVar0 /*3*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_29C[iVar1 /*284*/].f_85[iVar0 /*3*/] = { Global_17C49.f_6C1.f_21B.f_12A[iVar1 /*284*/].f_85[iVar0 /*3*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[0]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[1]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[2]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[3]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[4]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[5]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[6]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[7]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[8]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[9]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[10]), -1);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[0]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[1]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[2]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[3]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[4]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[5]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[6]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[7]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[8]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[9]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[10]), -1);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[11]), -1);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/][0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/][1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_5[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[0]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[1]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[2]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[3]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[4]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[5]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[6]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[7]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[8]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[9]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[10]), -1);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_5F1[iVar1 /*32*/].f_10[11]), -1);
				break;
		}
		uParam0->f_9[iVar1] = Global_17C49.f_5CED.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_CAD5[iVar1];
		uParam0->f_19[0 /*223*/][iVar1 /*74*/] = { Global_17C49.f_6C1.f_21B.f_663[0 /*223*/][iVar1 /*74*/] };
		uParam0->f_19[1 /*223*/][iVar1 /*74*/] = { Global_17C49.f_6C1.f_21B.f_663[1 /*223*/][iVar1 /*74*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_843[iVar1 /*15*/][iVar0] = Global_17C49.f_6C1.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_843[iVar1 /*15*/].f_5[iVar0] = Global_17C49.f_6C1.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_843[iVar1 /*15*/].f_A[iVar0] = Global_17C49.f_6C1.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_656[iVar1 /*164*/][iVar0] = Global_17C49.f_6C1[iVar1 /*164*/][iVar0];
			uParam0->f_656[iVar1 /*164*/].f_4[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_8[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_10[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_14[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_18[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_1C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_20[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_24[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_28[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_2C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_30[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_34[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_38[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_3C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_40[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_44[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_48[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_4C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_50[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_54[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_58[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_5C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_60[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_64[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_68[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_6C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_70[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_74[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_78[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_7C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_80[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_84[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_88[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_8C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_90[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_94[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_98[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_9C[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_656[iVar1 /*164*/].f_A0[iVar0] = Global_17C49.f_6C1[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_652[0]), -1);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_652[1]), -1);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_652[2]), -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_27(&(uParam0->f_877), uParam0, iParam5, 1, 1, 0);
	}
	func_26(&(uParam0->f_8B9));
	sParam3 = sParam3;
	iParam2 = iParam2;
}

int func_26(var uParam0)//Position - 0x290F
{
	*uParam0 = Global_150C8;
	uParam0->f_1 = Global_150C9;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_27(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2931
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_44(iParam2);
	}
	if (func_41(iParam2, &iVar0, iParam3, iParam5))
	{
		func_28(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_28(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_28(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x29B8
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_30(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_29(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_29(int iParam0)//Position - 0x29F8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_15F6A.f_16[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_30(var uParam0, int iParam1, int iParam2)//Position - 0x2A26
{
	func_37(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_33(iParam1, 145, 0);
	uParam0->f_B = func_32(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_31(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_109CB == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_31(int iParam0)//Position - 0x2B02
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]))
		{
			if (iParam0 == Global_10642.f_1E4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_32(int iParam0)//Position - 0x2B44
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (Global_15692[iVar0] == iParam0)
			{
				return Global_1569C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_33(int iParam0, int iParam1, int iParam2)//Position - 0x2BA7
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (Global_15692[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_1569C[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_34(iParam1, iParam2))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_34(int iParam0, int iParam1)//Position - 0x2C35
{
	struct<58> Var0;
	
	if (func_36(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)//Position - 0x2C77
{
	int iVar0;
	struct<74> Var1;
	
	Var1.f_B = 12;
	Var1.f_1F = 25;
	Var1.f_39 = 2;
	Var1.f_40 = 1;
	Var1.f_3C = 255;
	Var1.f_3D = 255;
	Var1.f_3E = 255;
	Var1.f_49 = 1;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_17C49.f_1CAD.f_63.f_3A[128] && !Global_17C49.f_1CAD.f_63.f_3A[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					Var1 = iVar0;
					Var1.f_2 = 3f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					Var1.f_B[0] = 1;
					StringCopy(&(Var1.f_1B), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					Var1 = iVar0;
					Var1.f_2 = 14.9f;
					Var1.f_5 = 43;
					Var1.f_6 = 43;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					Var1 = iVar0;
					Var1.f_2 = 14f;
					Var1.f_5 = 32;
					Var1.f_6 = 0;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "BETTY 32", 16);
					if (Global_17C49.f_1CAD.f_63.f_3A[119])
					{
						Var1.f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_17C49.f_1CAD.f_63.f_3A[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					Var1 = iVar0;
					Var1.f_2 = 6f;
					Var1.f_5 = 53;
					Var1.f_6 = 0;
					Var1.f_7 = 59;
					Var1.f_8 = 156;
					StringCopy(&(Var1.f_1B), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 111;
					Var1.f_6 = 111;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_A = 1;
					StringCopy(&(Var1.f_1B), "FC1988", 16);
					Var1.f_B[0] = 1;
					Var1.f_B[1] = 1;
					Var1.f_B[2] = 1;
					Var1.f_B[3] = 1;
					Var1.f_B[4] = 1;
					Var1.f_B[5] = 1;
					Var1.f_B[6] = 1;
					Var1.f_B[7] = 1;
					Var1.f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

bool func_36(int iParam0)//Position - 0x2EEF
{
	return iParam0 < 3;
}

void func_37(int iParam0, var uParam1)//Position - 0x2EFB
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_40(uParam1);
		uParam1->f_2A = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_26), &(uParam1->f_27), &(uParam1->f_28));
		uParam1->f_29 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_2B = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_2D = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_2E = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_2F), &(uParam1->f_30), &(uParam1->f_31));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_32), &(uParam1->f_33), &(uParam1->f_34));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_35), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_35), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_35), 31);
		}
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			uParam1->f_29 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_2C = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 2:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_35), 23);
						MISC::SET_BIT(&(uParam1->f_35), 22);
						break;
					
					case 3:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_35), 23);
						MISC::CLEAR_BIT(&(uParam1->f_35), 22);
						break;
					
					case 4:
						MISC::SET_BIT(&(uParam1->f_35), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_35), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_2F), &(uParam1->f_30), &(uParam1->f_31));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 12);
		}
		func_39(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_38(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_35), 11);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_35), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_35), 27);
		}
		else
		{
			MISC::CLEAR_BIT(&(uParam1->f_35), 27);
		}
	}
}

int func_38(int iParam0)//Position - 0x31A7
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_39(int iParam0, var uParam1, var uParam2)//Position - 0x3257
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

void func_40(var uParam0)//Position - 0x3331
{
	int iVar0;
	
	uParam0->f_2A = 0;
	uParam0->f_35 = 0;
	uParam0->f_29 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	uParam0->f_32 = 0;
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_23[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2D = 0;
	uParam0->f_2E = 1;
	uParam0->f_2F = 0;
	uParam0->f_30 = 0;
	uParam0->f_31 = 0;
}

int func_41(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x33E2
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == PLAYER::PLAYER_PED_ID())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("taxi")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1) != 0)
							{
								return 0;
							}
						}
						if (func_42(*uParam1, func_89(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("blimp")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_42(int iParam0, int iParam1, bool bParam2)//Position - 0x350F
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_43(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || MISC::IS_BIT_SET(Global_17C49.f_156E[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_43(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3580
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_44(int iParam0)//Position - 0x3659
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_45(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_45(int iParam0)//Position - 0x3696
{
	if (func_36(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_46(int iParam0, var uParam1, int iParam2)//Position - 0x36C0
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_44(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_52(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_51(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_36(iVar0))
		{
			uParam1->f_3B = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_17C49.f_6C1.f_21B[iVar0 /*65*/].f_40;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_50(161, -1))
			{
				uParam1->f_3B = func_47(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_47(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_47(741, Global_10A08, 0);
			uParam1->f_3D = func_47(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_50(161, -1))
			{
				uParam1->f_3B = func_47(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_47(740, Global_10A08, 0);
			}
		}
	}
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x386A
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_48(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_48(var uParam0)//Position - 0x389C
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_49();
		if (iVar1 > -1)
		{
			Global_25732E = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_25732E = 1;
		}
	}
	return iVar0;
}

int func_49()//Position - 0x38D0
{
	return Global_1407E1;
}

int func_50(int iParam0, int iParam1)//Position - 0x38DC
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_48(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_51(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x3908
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(iParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}
}

void func_52(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x3E50
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_53()//Position - 0x4092
{
	func_54();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_54()//Position - 0x40AB
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_45(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_44(PLAYER::PLAYER_PED_ID());
			if (func_36(iVar0) && (!func_55(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_36(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_55(int iParam0)//Position - 0x41A8
{
	return Global_8861 == iParam0;
}

void func_56(int iParam0, bool bParam1)//Position - 0x41B6
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_57(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] = HUD::_HUD_WEAPON_WHEEL_GET_SLOT_HASH(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_HUD_WEAPON_WHEEL_GET_SELECTED_HASH();
					if (Global_17C49.f_6C1.f_21B.f_47F[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_17C49.f_6C1.f_21B.f_4A0 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &uVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), uVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), uVar3, 1);
			}
		}
	}
}

void func_57(int iParam0, var uParam1)//Position - 0x42A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<3> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*3*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_61(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_61(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				if (Var4.x != 0 && Var4.x != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (Var4.x == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*3*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_59(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_59(Var4.x, iVar1);
					}
				}
				*(uParam1[iVar0 /*3*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_85[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILES::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_58(Var7.f_1)) && iVar9 < 50)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(Var7))
				{
					Var4.x = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4.x);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						MISC::SET_BIT(&(Var4.f_2), (20 + WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4.x)));
					}
					else
					{
						MISC::SET_BIT(&(Var4.f_2), 20);
					}
					if (Var4.f_1 == -1)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4.x, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_85[iVar9 /*3*/].f_1 = Var4.f_1;
					iVar1 = 0;
					while (iVar1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, Var8.f_3))
							{
								MISC::SET_BIT(&(Var4.f_2), iVar1);
							}
						}
						iVar1++;
					}
				}
				if (Var4.x != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4.x, 0))
					{
						Var4.x = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_85[iVar9 /*3*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_58(int iParam0)//Position - 0x450D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_59(int iParam0, int iParam1)//Position - 0x4633
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<4> Var3;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 7:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_medium");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_60(iParam0, &uVar2);
				if (iVar1 != -1)
				{
					if (iParam1 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iParam1, &Var3))
						{
							return Var3.f_3;
						}
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_60(int iParam0, var uParam1)//Position - 0x4E4F
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILES::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_61(int iParam0)//Position - 0x4E8A
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = -690654591;
			break;
		
		case 4:
			iVar0 = -1459198205;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = -438797331;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = -1155528315;
			break;
		
		case 10:
			iVar0 = -515636489;
			break;
		
		case 11:
			iVar0 = -871913299;
			break;
		
		case 12:
			iVar0 = -1352759032;
			break;
		
		case 13:
			iVar0 = -542958961;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = -859470162;
			break;
		
		case 16:
			iVar0 = -2125426402;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = -538172856;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = -24829327;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = -1941230881;
			break;
		
		case 24:
			iVar0 = -1033554448;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = -695165975;
			break;
		
		case 27:
			iVar0 = -281028447;
			break;
		
		case 28:
			iVar0 = -686713772;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = -157212362;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = -47957369;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

void func_62(int iParam0)//Position - 0x50FE
{
	int iVar0;
	
	iVar0 = func_44(iParam0);
	if (func_36(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_63(var uParam0, int iParam1)//Position - 0x513A
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (MISC::IS_BIT_SET(Global_10B8D, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, 1, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_67(&iVar0))
		{
			if (func_65(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar3 = func_89();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, 1, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, 1, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, 1, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_64(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_64(struct<3> Param0, char* sParam1, struct<3> Param2)//Position - 0x5695
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param2, sParam1);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_65(int iParam0, var uParam1, var uParam2)//Position - 0x56D9
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	}
	return !func_66(*uParam1, 0f, 0f, 0f);
}

bool func_66(struct<3> Param0, struct<3> Param1)//Position - 0x5D2F
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_67(var uParam0)//Position - 0x5D58
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_77())
		{
			*uParam0 = func_73(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1);
			if (func_72(*uParam0) && !func_68(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_68(int iParam0)//Position - 0x5DB1
{
	return func_69(iParam0, 0, 1);
}

int func_69(int iParam0, int iParam1, bool bParam2)//Position - 0x5DC1
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_71() == 0)
		{
			return MISC::IS_BIT_SET(func_47(func_70(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_70(int iParam0)//Position - 0x5E21
{
	switch (iParam0)
	{
		case 0:
			return 815;
			break;
		
		case 1:
			return 816;
			break;
		
		case 2:
			return 817;
			break;
		
		case 3:
			return 818;
			break;
		
		case 4:
			return 819;
			break;
		
		case 5:
			return 820;
			break;
		
		case 6:
			return 821;
			break;
		
		case 7:
			return 822;
			break;
		
		case 8:
			return 823;
			break;
		
		case 9:
			return 824;
			break;
		
		case 10:
			return 825;
			break;
		
		case 11:
			return 826;
			break;
		
		case 12:
			return 827;
			break;
		
		case 13:
			return 828;
			break;
		
		case 14:
			return 829;
			break;
		
		case 15:
			return 831;
			break;
		
		case 16:
			return 832;
			break;
		
		case 17:
			return 833;
			break;
		
		case 18:
			return 834;
			break;
		
		case 19:
			return 835;
			break;
		
		case 20:
			return 836;
			break;
		
		case 21:
			return 837;
			break;
		
		case 22:
			return 838;
			break;
		
		case 23:
			return 839;
			break;
		
		case 24:
			return 840;
			break;
		
		case 25:
			return 841;
			break;
		
		case 26:
			return 842;
			break;
		
		case 27:
			return 843;
			break;
		
		case 28:
			return 844;
			break;
		
		case 29:
			return 845;
			break;
		
		case 30:
			return 846;
			break;
		
		case 31:
			return 847;
			break;
		
		case 32:
			return 848;
			break;
		
		case 33:
			return 849;
			break;
		
		case 34:
			return 850;
			break;
		
		case 35:
			return 851;
			break;
		
		case 36:
			return 852;
			break;
		
		case 37:
			return 853;
			break;
		
		case 38:
			return 854;
			break;
		
		case 39:
			return 855;
			break;
		
		case 40:
			return 859;
			break;
		
		case 41:
			return 860;
			break;
		
		case 42:
			return 861;
			break;
		
		case 43:
			return 862;
			break;
		
		default:
			break;
	}
	return 2903;
}

int func_71()//Position - 0x60CA
{
	return Global_5F7C;
}

int func_72(int iParam0)//Position - 0x60D5
{
	return func_69(iParam0, 5, 1);
}

int func_73(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x60E5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 43)
	{
		if (iParam1 == 5 || iParam1 == func_76(iVar0))
		{
			if (!bParam3 || func_75(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_74(iVar0), 1);
				if ((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == -1)) && (iParam4 || iVar0 != 21))
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_74(int iParam0)//Position - 0x617C
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_75(int iParam0)//Position - 0x664D
{
	return func_69(iParam0, 0, 0);
}

int func_76(int iParam0)//Position - 0x665D
{
	switch (iParam0)
	{
		case -1:
			return 5;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
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
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
	}
	return 5;
}

bool func_77()//Position - 0x68B6
{
	return Global_15F9E.f_122 > 0;
}

var func_78()//Position - 0x68C7
{
	var uVar0;
	
	func_88(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_87(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_86(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_81(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_80(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_79(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_79(var uParam0, int iParam1)//Position - 0x690D
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

void func_80(var uParam0, int iParam1)//Position - 0x6993
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_81(var uParam0, int iParam1)//Position - 0x69C6
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_85(*uParam0);
	iVar1 = func_83(*uParam0);
	if (iParam1 < 1 || iParam1 > func_82(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_82(int iParam0, int iParam1)//Position - 0x6A17
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

var func_83(var uParam0)//Position - 0x6AB9
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_84(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_84(bool bParam0, int iParam1, int iParam2)//Position - 0x6ADE
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_85(var uParam0)//Position - 0x6AF5
{
	return uParam0 & 15;
}

void func_86(var uParam0, int iParam1)//Position - 0x6B02
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_87(var uParam0, int iParam1)//Position - 0x6B3C
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_88(var uParam0, int iParam1)//Position - 0x6B77
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_89()//Position - 0x6BB3
{
	func_54();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_90(int iParam0)//Position - 0x6BCC
{
	var uVar0;
	char cVar1[24];
	
	if (MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK::NETWORK_SET_RICH_PRESENCE(9, &uVar0, 1, 1);
	}
	else if (MISC::IS_PS3_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPRC_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(9, &cVar1);
	}
}

void func_91(char* sParam0, var uParam1, int iParam2)//Position - 0x6C25
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_1558D))
	{
		STATS::PLAYSTATS_MISSION_OVER(&Global_1558D, 0, 0, 0, 1, 0);
		StringCopy(&Global_1558D, "", 64);
	}
	StringCopy(&Global_1558D, sParam0, 64);
	STATS::PLAYSTATS_MISSION_STARTED(sParam0, uParam1, iParam2, func_92(0));
}

bool func_92(bool bParam0)//Position - 0x6C67
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

struct<2> func_93(int iParam0)//Position - 0x6C92
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

void func_94(int iParam0, var uParam1)//Position - 0x70DF
{
	switch (iParam0)
	{
		case 0:
			func_95(uParam1, "Abigail1", func_9(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 1:
			func_95(uParam1, "Abigail2", func_9(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 2:
			func_95(uParam1, "Barry1", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 3:
			func_95(uParam1, "Barry2", func_9(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 4:
			func_95(uParam1, "Barry3", func_9(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 5:
			func_95(uParam1, "Barry3A", func_9(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 6:
			func_95(uParam1, "Barry3C", func_9(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 7:
			func_95(uParam1, "Barry4", func_9(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_96(iParam0), 0, 0);
			break;
		
		case 8:
			func_95(uParam1, "Dreyfuss1", func_9(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 9:
			func_95(uParam1, "Epsilon1", func_9(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 10:
			func_95(uParam1, "Epsilon2", func_9(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 11:
			func_95(uParam1, "Epsilon3", func_9(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 12:
			func_95(uParam1, "Epsilon4", func_9(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 13:
			func_95(uParam1, "Epsilon5", func_9(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 14:
			func_95(uParam1, "Epsilon6", func_9(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 15:
			func_95(uParam1, "Epsilon7", func_9(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 16:
			func_95(uParam1, "Epsilon8", func_9(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 17:
			func_95(uParam1, "Extreme1", func_9(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 18:
			func_95(uParam1, "Extreme2", func_9(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 19:
			func_95(uParam1, "Extreme3", func_9(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 20:
			func_95(uParam1, "Extreme4", func_9(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 21:
			func_95(uParam1, "Fanatic1", func_9(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 22:
			func_95(uParam1, "Fanatic2", func_9(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_96(iParam0), 1, 0);
			break;
		
		case 23:
			func_95(uParam1, "Fanatic3", func_9(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_96(iParam0), 0, 1);
			break;
		
		case 24:
			func_95(uParam1, "Hao1", func_9(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_96(iParam0), 0, 1);
			break;
		
		case 25:
			func_95(uParam1, "Hunting1", func_9(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 26:
			func_95(uParam1, "Hunting2", func_9(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 27:
			func_95(uParam1, "Josh1", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 28:
			func_95(uParam1, "Josh2", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 29:
			func_95(uParam1, "Josh3", func_9(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 30:
			func_95(uParam1, "Josh4", func_9(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 31:
			func_95(uParam1, "Maude1", func_9(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 32:
			func_95(uParam1, "Minute1", func_9(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 33:
			func_95(uParam1, "Minute2", func_9(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 34:
			func_95(uParam1, "Minute3", func_9(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 35:
			func_95(uParam1, "MrsPhilips1", func_9(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 36:
			func_95(uParam1, "MrsPhilips2", func_9(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 37:
			func_95(uParam1, "Nigel1", func_9(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 38:
			func_95(uParam1, "Nigel1A", func_9(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 39:
			func_95(uParam1, "Nigel1B", func_9(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 40:
			func_95(uParam1, "Nigel1C", func_9(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 41:
			func_95(uParam1, "Nigel1D", func_9(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_96(iParam0), 1, 1);
			break;
		
		case 42:
			func_95(uParam1, "Nigel2", func_9(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 43:
			func_95(uParam1, "Nigel3", func_9(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 1);
			break;
		
		case 44:
			func_95(uParam1, "Omega1", func_9(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 45:
			func_95(uParam1, "Omega2", func_9(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 46:
			func_95(uParam1, "Paparazzo1", func_9(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 47:
			func_95(uParam1, "Paparazzo2", func_9(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 48:
			func_95(uParam1, "Paparazzo3", func_9(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 49:
			func_95(uParam1, "Paparazzo3A", func_9(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 50:
			func_95(uParam1, "Paparazzo3B", func_9(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 51:
			func_95(uParam1, "Paparazzo4", func_9(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 52:
			func_95(uParam1, "Rampage1", func_9(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 54:
			func_95(uParam1, "Rampage3", func_9(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 55:
			func_95(uParam1, "Rampage4", func_9(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 56:
			func_95(uParam1, "Rampage5", func_9(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_96(iParam0), 0, 0);
			break;
		
		case 53:
			func_95(uParam1, "Rampage2", func_9(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_96(iParam0), 1, 0);
			break;
		
		case 57:
			func_95(uParam1, "TheLastOne", func_9(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 58:
			func_95(uParam1, "Tonya1", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 59:
			func_95(uParam1, "Tonya2", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 60:
			func_95(uParam1, "Tonya3", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 61:
			func_95(uParam1, "Tonya4", func_9(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		case 62:
			func_95(uParam1, "Tonya5", func_9(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_96(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_95(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x8329
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

int func_96(int iParam0)//Position - 0x83BA
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

int func_97(int iParam0)//Position - 0x8700
{
	var uVar0;
	
	if (func_125(&(iParam0->f_1)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_9)))
		{
			func_116(1);
			func_114(iParam0, 1, func_115(*iParam0));
		}
		if (iParam0->f_1B)
		{
			if (func_113(*iParam0))
			{
				while (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					func_129();
					SYSTEM::WAIT(0);
				}
			}
		}
		func_98(*iParam0);
		uVar0 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&(iParam0->f_1), iParam0, 61, 17000);
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(iParam0->f_1));
		if (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_287("Initial cutscene loaded and passing to RC mission.");
			CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
		}
		else
		{
			func_287("Initial cutscene wasn't loaded in time to pass to RC mission.");
			CUTSCENE::REMOVE_CUTSCENE();
		}
		return 1;
	}
	return 0;
}

void func_98(int iParam0)//Position - 0x87A4
{
	struct<2> Var0;
	
	func_112();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 250, 0);
	}
	if (func_111(iParam0))
	{
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), 0);
	}
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
	HUD::CLEAR_ADDITIONAL_TEXT(0, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(3, 1);
	HUD::CLEAR_ADDITIONAL_TEXT(2, 1);
	if (Global_8C75 == 1)
	{
		if (func_110(PLAYER::PLAYER_PED_ID()))
		{
			func_101(PLAYER::PLAYER_PED_ID());
		}
	}
	if (!func_147())
	{
		if (iParam0 < 63)
		{
			func_99(iParam0);
			Var0 = { func_9(iParam0) };
			HUD::SET_MISSION_NAME(1, &Var0);
		}
	}
}

void func_99(int iParam0)//Position - 0x883F
{
	if (iParam0 < 63)
	{
		func_100();
		Global_10B94 = iParam0;
		Global_10B93 = 0;
		Global_10B96 = 7;
	}
}

void func_100()//Position - 0x8865
{
	if (Global_10B93 != 6)
	{
	}
	if (Global_10B98)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_10B98 = 0;
		Global_4354.f_1C27 = 0;
	}
	Global_10B93 = 6;
	Global_10B95 = -1;
	Global_10B94 = -1;
}

void func_101(int iParam0)//Position - 0x889D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_109(iParam0);
	if (!iVar0 == -1)
	{
		iVar1 = Global_8BB0[iVar0 /*5*/];
		func_104(1, iVar1, 1);
		return;
	}
	iVar2 = func_103(iParam0);
	if (iVar2 == -1)
	{
		return;
	}
	func_102(iVar2);
}

void func_102(int iParam0)//Position - 0x88F6
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_8B96[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_8B96[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
		{
			Global_8C73 = 0;
		}
	}
	Global_8B96[iParam0 /*5*/] = 13;
	Global_8B96[iParam0 /*5*/].f_1 = 0;
	Global_8B96[iParam0 /*5*/].f_2 = 0;
	Global_8B96[iParam0 /*5*/].f_3 = 0;
	Global_8B96[iParam0 /*5*/].f_4 = 0;
	Global_8B95 = (Global_8B95 - 1);
	if (Global_8B95 < 0)
	{
		Global_8B95 = 0;
	}
}

int func_103(int iParam0)//Position - 0x8979
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_8B96[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_104(int iParam0, int iParam1, int iParam2)//Position - 0x89AA
{
	func_105(iParam0, iParam1, iParam2, 0, 0);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x89BE
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_107(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_106();
	if (iVar0 == -1)
	{
		return;
	}
	Global_8C01[iVar0 /*5*/] = iParam0;
	Global_8C01[iVar0 /*5*/].f_1 = iParam1;
	Global_8C01[iVar0 /*5*/].f_2 = iParam2;
	Global_8C01[iVar0 /*5*/].f_3 = iParam3;
	Global_8C01[iVar0 /*5*/].f_4 = iParam4;
}

int func_106()//Position - 0x8A35
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_8C01[iVar0 /*5*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_107(int iParam0, int iParam1, int iParam2)//Position - 0x8A66
{
	if (func_108(iParam0, iParam1, iParam2) == -1)
	{
		return 0;
	}
	return 1;
}

int func_108(int iParam0, int iParam1, int iParam2)//Position - 0x8A81
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_8C01[iVar0 /*5*/].f_2)
		{
			if (iParam0 == Global_8C01[iVar0 /*5*/])
			{
				if (iParam1 == Global_8C01[iVar0 /*5*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return -1;
}

int func_109(int iParam0)//Position - 0x8ACD
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_8BB0[iVar0 /*5*/] == -1)
		{
			if (iParam0 == Global_8BB0[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_110(int iParam0)//Position - 0x8B16
{
	if (func_181(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_111(int iParam0)//Position - 0x8B36
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 60:
		case 61:
			return 0;
			break;
	}
	return 1;
}

void func_112()//Position - 0x8B89
{
	if (Global_BFC[0 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[0 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[1 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[1 /*2811*/][0 /*281*/].f_103 = 0;
	}
	if (Global_BFC[2 /*2811*/][0 /*281*/].f_103 == 2)
	{
		Global_BFC[2 /*2811*/][0 /*281*/].f_103 = 0;
	}
	MISC::CLEAR_BIT(&Global_8D7, 25);
	MISC::SET_BIT(&Global_8D8, 11);
}

int func_113(int iParam0)//Position - 0x8C06
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 16:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
			return 0;
			break;
	}
	return 1;
}

void func_114(var uParam0, int iParam1, bool bParam2)//Position - 0x8C59
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_181(uParam0->f_1C[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_1C[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_181(uParam0->f_23[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_23[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_181(uParam0->f_29[iVar0]))
		{
			ENTITY::SET_ENTITY_PROOFS(uParam0->f_29[iVar0], iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		}
		iVar0++;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), iParam1, iParam1, iParam1, iParam1, iParam1, 0, 0, 0);
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), iParam1);
		if (bParam2)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), 1);
		}
	}
}

int func_115(int iParam0)//Position - 0x8D4D
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 14:
		case 38:
		case 39:
		case 40:
		case 41:
		case 49:
		case 50:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
			return 0;
			break;
	}
	return 1;
}

void func_116(bool bParam0)//Position - 0x8DB8
{
	var uVar0;
	
	uVar0 = PLAYER::GET_PLAYER_INDEX();
	if (!PLAYER::IS_PLAYER_DEAD(uVar0))
	{
		if (bParam0)
		{
		}
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 16);
		PLAYER::SET_PLAYER_CONTROL(uVar0, bParam0, 32);
	}
	func_117(1, 1, 0, 0);
}

void func_117(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x8DF4
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_124(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_123())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_122(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_124(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_122(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_118(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_118(int iParam0)//Position - 0x8EC5
{
	if (func_120(iParam0, 0))
	{
		return 1;
	}
	if (func_119())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_24D5B9[iParam0 /*254*/].f_C2, 2))
	{
		return 1;
	}
	return 0;
}

bool func_119()//Position - 0x8F06
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_120(int iParam0, int iParam1)//Position - 0x8F17
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_121(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_182604[iParam0 /*324*/].f_B4 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_121(int iParam0, bool bParam1)//Position - 0x8F62
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_49();
	}
	if (Global_141425[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DB[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_122(int iParam0, var uParam1, var uParam2)//Position - 0x8FA3
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, uParam1, 1);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_123()//Position - 0x8FD4
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_124(int iParam0)//Position - 0x8FFB
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 13);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 13);
	}
}

int func_125(char* sParam0)//Position - 0x901E
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0))
	{
		SCRIPT::REQUEST_SCRIPT(uParam0);
		while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0))
		{
			SCRIPT::REQUEST_SCRIPT(sParam0);
			SYSTEM::WAIT(0);
		}
		return 1;
	}
	func_287("Attempting to launch invalid script file [TERMINATING]");
	return 0;
}

void func_126()//Position - 0x905B
{
	Global_38DE = 0;
	func_127();
}

void func_127()//Position - 0x906B
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

int func_128()//Position - 0x90C2
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_129()//Position - 0x90E4
{
	func_133();
	func_132();
	func_130();
}

void func_130()//Position - 0x90F8
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (func_131(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 10.5f, 1, 1056964608, 0, 1))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -828834893) != 1)
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
				}
			}
		}
	}
}

int func_131(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x914F
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	if ((MISC::GET_GAME_TIMER() - Global_1C) > 500)
	{
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1C = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_132()//Position - 0x92D1
{
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 23, 1);
}

void func_133()//Position - 0x9322
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_136(0))
		{
			func_134(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_134(int iParam0)//Position - 0x934A
{
	if (Global_38D7)
	{
		func_135(0, 0);
	}
	if (Global_3839.f_1 == 10 || Global_3839.f_1 == 9)
	{
		MISC::SET_BIT(&Global_8D8, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_3D4C = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_8D7, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_8D7, 30);
	}
	if (!func_123())
	{
		Global_3839.f_1 = 3;
	}
}

void func_135(bool bParam0, bool bParam1)//Position - 0x93BA
{
	if (bParam0)
	{
		if (func_136(0))
		{
			Global_38D7 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_37FA);
			}
			Global_37F1 = { Global_3803[Global_3802 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
	else if (Global_38D7 == 1)
	{
		Global_38D7 = 0;
		Global_37F1 = { Global_380A[Global_3802 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37FA);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_37F1);
		}
	}
}

int func_136(int iParam0)//Position - 0x942E
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

int func_137(int iParam0)//Position - 0x9488
{
	if ((((iParam0 == 52 || iParam0 == 53) || iParam0 == 54) || iParam0 == 55) || iParam0 == 56)
	{
		return 1;
	}
	return 0;
}

int func_138(int iParam0)//Position - 0x94C9
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_140(&(Global_178B8[iParam0 /*10*/].f_9), 1, 4, 0, 0);
	if (!iVar0 == 1)
	{
		return 0;
	}
	func_139(iParam0);
	return 1;
}

void func_139(int iParam0)//Position - 0x950E
{
	Global_178B8[iParam0 /*10*/].f_4 = 1;
	Global_178B8[iParam0 /*10*/].f_5 = 0;
	Global_178B8[iParam0 /*10*/].f_6 = 0;
	Global_178B8[iParam0 /*10*/] = 0;
}

int func_140(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x9540
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
		if (func_144(0))
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
		if (!func_142(iParam2))
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
			func_141(uParam0, iParam4);
		}
	}
	return 2;
}

void func_141(var uParam0, int iParam1)//Position - 0x9677
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

bool func_142(int iParam0)//Position - 0x96C6
{
	return func_143(iParam0, Global_8861);
}

int func_143(int iParam0, int iParam1)//Position - 0x96D7
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

int func_144(int iParam0)//Position - 0x98B8
{
	if (Global_8861 == 15)
	{
		return 0;
	}
	if (func_142(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_145()//Position - 0x98DA
{
	return func_146(SCRIPT::GET_THIS_SCRIPT_NAME(), 0);
}

int func_146(var uParam0, int iParam1)//Position - 0x98EB
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(uParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_94(iVar0, &uVar1);
		if (MISC::GET_HASH_KEY(uVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return -1;
}

int func_147()//Position - 0x9934
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

void func_148(int iParam0, var uParam1)//Position - 0x9958
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = func_149(-1604.668f, 5239.1f, 3.01f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 66);
			HUD::SET_BLIP_COLOUR(*uParam1, 42);
			break;
		
		case 1:
			*uParam1 = func_149(-1592.84f, 5214.04f, 3.01f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 400);
			HUD::SET_BLIP_COLOUR(*uParam1, 42);
			break;
		
		case 2:
		case 3:
			*uParam1 = func_149(190.26f, -956.35f, 29.63f, 0);
			if ((MISC::IS_BIT_SET(Global_17C49.f_41BC[2 /*6*/], 3) || MISC::IS_BIT_SET(Global_17C49.f_41BC[4 /*6*/], 3)) || MISC::IS_BIT_SET(Global_17C49.f_41BC[4 /*6*/], 3))
			{
				HUD::SET_BLIP_SPRITE(*uParam1, 381);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(*uParam1, 66);
			}
			if (iParam0 == 2)
			{
				HUD::SET_BLIP_COLOUR(*uParam1, 42);
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*uParam1, 44);
			}
			break;
		
		case 4:
			*uParam1 = func_149(414f, -761f, 29f, 0);
			if (MISC::IS_BIT_SET(Global_17C49.f_41BC[2 /*6*/], 3) || MISC::IS_BIT_SET(Global_17C49.f_41BC[3 /*6*/], 3))
			{
				HUD::SET_BLIP_SPRITE(*uParam1, 381);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(*uParam1, 66);
			}
			HUD::SET_BLIP_COLOUR(*uParam1, 43);
			break;
		
		case 9:
			*uParam1 = func_149(-1622.89f, 4204.87f, 83.3f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 66);
			HUD::SET_BLIP_COLOUR(*uParam1, 42);
			break;
		
		case 11:
		case 12:
		case 13:
			if (iParam0 == 11)
			{
				*uParam1 = func_149(1835.53f, 4705.86f, 38.1f, 0);
			}
			else if (iParam0 == 12)
			{
				*uParam1 = func_149(1826.13f, 4698.88f, 38.92f, 0);
			}
			else
			{
				*uParam1 = func_149(637.02f, 119.7093f, 89.5f, 0);
			}
			HUD::SET_BLIP_SPRITE(*uParam1, 206);
			HUD::SET_BLIP_COLOUR(*uParam1, 42);
			break;
		
		case 18:
		case 19:
			if (iParam0 == 18)
			{
				*uParam1 = func_149(-954.19f, -2760.05f, 14.64f, 0);
			}
			else
			{
				*uParam1 = func_149(-63.8f, -809.5f, 321.8f, 0);
			}
			HUD::SET_BLIP_SPRITE(*uParam1, 382);
			HUD::SET_BLIP_COLOUR(*uParam1, 43);
			break;
		
		case 21:
		case 23:
			if (iParam0 == 21)
			{
				*uParam1 = func_149(-1877.82f, -440.649f, 45.05f, 0);
			}
			else
			{
				*uParam1 = func_149(-915.6f, 6139.2f, 5.5f, 0);
			}
			if ((MISC::IS_BIT_SET(Global_17C49.f_41BC[21 /*6*/], 3) || MISC::IS_BIT_SET(Global_17C49.f_41BC[22 /*6*/], 3)) || MISC::IS_BIT_SET(Global_17C49.f_41BC[23 /*6*/], 3))
			{
				HUD::SET_BLIP_SPRITE(*uParam1, 405);
			}
			else
			{
				HUD::SET_BLIP_SPRITE(*uParam1, 66);
			}
			if (iParam0 == 21)
			{
				HUD::SET_BLIP_COLOUR(*uParam1, 42);
			}
			else
			{
				HUD::SET_BLIP_COLOUR(*uParam1, 43);
			}
			break;
		
		case 27:
			*uParam1 = func_149(-1104.93f, 291.25f, 64.3f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 66);
			HUD::SET_BLIP_COLOUR(*uParam1, 44);
			break;
		
		case 30:
			*uParam1 = func_149(-1104.93f, 291.25f, 64.3f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 385);
			HUD::SET_BLIP_COLOUR(*uParam1, 44);
			break;
		
		case 34:
			*uParam1 = func_149(-303.82f, 6211.29f, 31.05f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 386);
			HUD::SET_BLIP_COLOUR(*uParam1, 44);
			break;
		
		case 43:
			*uParam1 = func_149(-44.75f, -1288.67f, 28.21f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 149);
			HUD::SET_BLIP_COLOUR(*uParam1, 44);
			break;
		
		case 46:
			*uParam1 = func_149(-149.75f, 285.81f, 93.67f, 0);
			HUD::SET_BLIP_SPRITE(*uParam1, 66);
			HUD::SET_BLIP_COLOUR(*uParam1, 43);
			break;
		
		case 47:
		case 48:
			if (iParam0 == 47)
			{
				*uParam1 = func_149(-70.71f, 301.43f, 106.79f, 0);
			}
			else
			{
				*uParam1 = func_149(-257.22f, 292.85f, 90.63f, 0);
			}
			HUD::SET_BLIP_SPRITE(*uParam1, 389);
			HUD::SET_BLIP_COLOUR(*uParam1, 43);
			break;
	}
}

var func_149(struct<3> Param0, int iParam1)//Position - 0x9DDF
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_150(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

float func_150(bool bParam0, float fParam1, float fParam2)//Position - 0x9E0B
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_151(int iParam0)//Position - 0x9E22
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 9:
		case 11:
		case 12:
		case 13:
		case 18:
		case 19:
		case 21:
		case 23:
		case 27:
		case 30:
		case 34:
		case 43:
		case 46:
		case 47:
		case 48:
			return 1;
			break;
	}
	return 0;
}

int func_152(int iParam0, int iParam1)//Position - 0x9EB1
{
	switch (iParam0->f_10)
	{
		case 0:
			if (*iParam0 == 12)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1826.631f, 4699.115f, 35.38089f, 1812.878f, 4710.457f, 42.05354f, 23.75f, 0, 1, 0))
				{
					if (func_181(iParam0->f_1C[0]))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0->f_1C[0], 1), 1) < 3f)
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_1B))
								{
									func_155(iParam0->f_1B, *iParam0);
									func_287("ARE_RC_TRIGGER_CONDITIONS_MET: RC_TRIG_CHAR - Used special case Eps 4 trigger.");
									return 1;
								}
							}
						}
					}
					else
					{
						return 0;
					}
				}
				else if (func_181(iParam0->f_1C[0]))
				{
					if (func_154(iParam0))
					{
						if (func_158(2))
						{
							if (func_156(iParam0->f_1B))
							{
								func_155(iParam0->f_1B, *iParam0);
								return 1;
							}
						}
					}
				}
				else
				{
					return 0;
				}
			}
			else if (*iParam0 == 21)
			{
				if ((((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1895.788f, -434.0192f, 40.30126f, -1883.038f, -444.0811f, 50.24509f, 8.5f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1883.576f, -443.6434f, 36.40581f, -1874.826f, -448.0797f, 49.15162f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1876.343f, -446.2214f, 35.64637f, -1866.952f, -456.5601f, 49.0442f, 8.5f, 0, 1, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1882.997f, -438.9922f, 44.17246f, -1874.079f, -443.342f, 48.69179f, 0.75f, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1878.822f, -441.7655f, 44.9175f, -1877.941f, -439.9522f, 47.28982f, 1.25f, 0, 1, 0))
				{
					if (func_181(iParam0->f_1C[0]))
					{
						if (func_154(iParam0))
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_1B))
								{
									func_155(iParam0->f_1B, *iParam0);
									return 1;
								}
							}
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
			else if (*iParam0 == 22)
			{
				if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 837.0731f, 1261.086f, 366.1592f, 780.8383f, 1260.829f, 351.405f, 17.75f, 0, 1, 0))
				{
					if (func_181(iParam0->f_1C[0]))
					{
						if (func_154(iParam0))
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_1B))
								{
									func_155(iParam0->f_1B, *iParam0);
									return 1;
								}
							}
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
			else if (func_181(iParam0->f_1C[0]))
			{
				if (func_154(iParam0))
				{
					if (func_158(2))
					{
						if (func_156(iParam0->f_1B))
						{
							func_155(iParam0->f_1B, *iParam0);
							return 1;
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			if (func_181(iParam0->f_23[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0->f_23[0], 0))
				{
					if (func_158(3))
					{
						func_155(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
				else if (iParam1 == 1)
				{
					func_153();
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_23[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_23[0]))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0->f_23[0], 1), 1) < iParam0->f_F)
					{
						if (func_158(2))
						{
							if (func_156(iParam0->f_1B))
							{
								func_155(iParam0->f_1B, *iParam0);
								return 1;
							}
						}
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 3:
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), iParam0->f_11[0 /*3*/], 1) < iParam0->f_F)
			{
				if (func_158(2))
				{
					if (func_156(iParam0->f_1B))
					{
						func_155(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 4:
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), iParam0->f_11[0 /*3*/], iParam0->f_11[1 /*3*/], 0, 1, 0))
			{
				if (func_158(2))
				{
					if (func_156(iParam0->f_1B))
					{
						func_155(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 5:
			if (*iParam0 == 6)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_181(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)))
					{
						if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("towtruck2")))
						{
							if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0->f_23[0]))
							{
								if (func_158(3))
								{
									return 1;
								}
							}
						}
						else if ((VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob")) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob2"))) || VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("cargobob3")))
						{
							if (VEHICLE::DOES_CARGOBOB_HAVE_PICK_UP_ROPE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) && VEHICLE::IS_VEHICLE_ATTACHED_TO_CARGOBOB(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0->f_23[0]))
							{
								if (func_158(3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
			else if (*iParam0 == 10)
			{
				if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID()) >= 2f)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 245.8885f, 371.9034f, 103.9884f, 241.5898f, 359.6458f, 107.3461f, 1.25f, 0, 1, 0))
					{
						if (func_158(2))
						{
							if (func_156(iParam0->f_1B))
							{
								func_155(iParam0->f_1B, *iParam0);
								func_287("RC5_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - Eps 2 special case trigger used");
								return 1;
							}
						}
					}
				}
			}
			else if (*iParam0 == 46)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -164.2046f, 277.4866f, 91.55322f, -153.6f, 277.4061f, 97.33813f, 10f, 0, 1, 0))
				{
					return 0;
				}
			}
			else if (*iParam0 == 31)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2728.948f, 4143.44f, 42.29295f, 2722.213f, 4144.521f, 45.43182f, 10f, 0, 1, 0))
				{
					if (func_158(2))
					{
						if (func_156(1))
						{
							func_155(1, *iParam0);
							func_287("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_MAUDE_1 special case vehicle launch area");
							return 1;
						}
					}
				}
			}
			else if (*iParam0 == 39)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -992.4995f, 358.7455f, 96.3735f, -1021.94f, 361.8888f, 65.36148f, 30f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.5426f, 369.1104f, 68.46017f, -1028.566f, 395.4613f, 94.57245f, 15f, 0, 1, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -983.875f, 346.7556f, 68.02096f, -1021.451f, 336.3458f, 93.18714f, 14.5f, 0, 1, 0))
						{
							if (func_158(2))
							{
								if (func_156(iParam0->f_1B))
								{
									func_155(iParam0->f_1B, *iParam0);
									func_287("RC_IN_ACTIVATION_RANGE: RC_TRIG_LOCATE_NONAXIS - RC_NIGEL_1B special case vehicle launch area");
									return 1;
								}
							}
						}
					}
				}
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), iParam0->f_11[0 /*3*/], iParam0->f_11[1 /*3*/], iParam0->f_18, 0, 1, 0))
			{
				if (*iParam0 == 45)
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2338.697f, 2597.037f, 45.39052f, 2324.003f, 2597.185f, 47.74961f, 8.5f, 0, 1, 0))
					{
						return 0;
					}
				}
				if (func_158(2))
				{
					if (func_156(iParam0->f_1B))
					{
						func_155(iParam0->f_1B, *iParam0);
						return 1;
					}
				}
			}
			else
			{
				return 0;
			}
			break;
		
		case 6:
			break;
	}
	return 0;
}

void func_153()//Position - 0xA693
{
	func_27(&(Global_164D7.f_877), &Global_164D7, 0, 1, 1, 0);
}

int func_154(var uParam0)//Position - 0xA6AE
{
	float fVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && uParam0->f_1B)
	{
		if (*uParam0 == 27 || *uParam0 == 30)
		{
			fVar0 = 1f;
		}
		else
		{
			fVar0 = 5f;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_1C[0], 1), 1) < (uParam0->f_F + fVar0))
		{
			return 1;
		}
	}
	else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(uParam0->f_1C[0], 1), 1) < uParam0->f_F)
	{
		return 1;
	}
	return 0;
}

void func_155(int iParam0, int iParam1)//Position - 0xA73C
{
	if (iParam0 == 1)
	{
		if (!func_113(iParam1))
		{
			return;
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			func_287("RC_STOP_PLAYER_VEHICLE_CHECK: Stopping player's vehicle.");
			if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				func_287("RC_STOP_PLAYER_VEHICLE_CHECK: Turning off engine for plane or helicopter.");
				VEHICLE::SET_VEHICLE_ENGINE_ON(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0, 1);
			}
			func_129();
		}
	}
}

int func_156(bool bParam0)//Position - 0xA79F
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
		else if (bParam0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (func_157(iVar0))
				{
					if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					{
						if ((!ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && !ENTITY::IS_ENTITY_IN_AIR(iVar0)) && ENTITY::GET_ENTITY_SPEED(iVar0) < 1f)
						{
							return 1;
						}
					}
					else if (!ENTITY::IS_ENTITY_IN_AIR(iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_157(int iParam0)//Position - 0xA836
{
	if (func_181(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_158(int iParam0)//Position - 0xA860
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_89();
				if (!func_36(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_166()) || Global_17890) || Global_5F7E) || func_165()) || func_164(8, -1)) || func_77()) || func_163()) || func_162()) || func_161()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_166()) || Global_5F7E) || func_165()) || func_164(8, -1)) || func_162()) || func_77()) || func_163()) || func_161()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_166()) || Global_17890) || Global_5F7E) || func_165()) || func_164(8, -1)) || func_162()) || func_77()) || func_163()) || func_161()) || Global_17C49.f_1738.f_397[iVar0] == 5) || Global_8A84 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_166()) || Global_17890) || Global_5F7E) || func_165()) || func_164(8, -1)) || func_77()) || func_163()) || func_161()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_166() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_164(8, -1)) || func_161()) || func_160()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_164(8, -1) || func_77()) || func_163()) || func_160()) || func_159())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_166()) || Global_5F7E) || func_165()) || func_164(8, -1)) || func_163()) || func_162()) || func_161()) || Global_17C49.f_1738.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_166()) || func_163()) || Global_17890) || Global_5F7E) || func_165()) || Global_8C75) || func_164(8, -1)) || func_162()) || func_160()) || func_161()) || Global_17C49.f_1738.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_166()) || Global_17890) || Global_5F7E) || func_165()) || func_164(8, -1)) || func_162()) || func_160()) || func_77()) || func_163()) || func_161())
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

var func_159()//Position - 0xAF7D
{
	return Global_15F91.f_1;
}

int func_160()//Position - 0xAF8B
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 13);
	}
	return 0;
}

int func_161()//Position - 0xAFB1
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_162()//Position - 0xAFCB
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

bool func_163()//Position - 0xAFF5
{
	return Global_15F9E.f_123 > 0;
}

bool func_164(int iParam0, int iParam1)//Position - 0xB006
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

var func_165()//Position - 0xB041
{
	return Global_14143C;
}

int func_166()//Position - 0xB04D
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_15725.f_2C == 1;
	}
	return 0;
}

int func_167(int iParam0)//Position - 0xB069
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
			break;
	}
	return 0;
}

void func_168(var uParam0, struct<3> Param1, char[4] cParam2, char* sParam3)//Position - 0xB08C
{
	switch (*uParam0)
	{
		case 0:
			if ((MISC::GET_GAME_TIMER() - iLocal_223) > 5000)
			{
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (func_177(PLAYER::PLAYER_PED_ID(), Param1, 1) <= 20f)
			{
				if (func_169(&uLocal_58, cParam2, sParam3, 8, 0, 0, 0))
				{
					*uParam0 = 2;
				}
			}
			break;
		
		case 2:
			if (!func_128())
			{
				iLocal_223 = MISC::GET_GAME_TIMER();
				*uParam0 = 0;
			}
			else if (func_177(PLAYER::PLAYER_PED_ID(), Param1, 1) >= 25f)
			{
				func_126();
				*uParam0 = 0;
			}
			break;
	}
}

bool func_169(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB129
{
	func_176(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_170(sParam2, iParam3, 0);
}

int func_170(char* sParam0, int iParam1, bool bParam2)//Position - 0xB177
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
					func_127();
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
		if (func_164(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_175();
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
				func_174();
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
				if (func_173())
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
			if (func_123())
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
			func_172();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_171();
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
		func_127();
	}
	return 0;
}

void func_171()//Position - 0xB443
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

void func_172()//Position - 0xB475
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

int func_173()//Position - 0xB50A
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

void func_174()//Position - 0xB5A3
{
	if (func_55(14))
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
		Global_3839 = func_89();
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

void func_175()//Position - 0xB644
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

void func_176(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB69C
{
	Global_3B2A = { *uParam0 };
	Global_62B = iParam1;
	StringCopy(&Global_3D92, sParam2, 24);
	Global_4129 = iParam5;
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

float func_177(int iParam0, struct<3> Param1, int iParam2)//Position - 0xB6F2
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, iParam2);
}

void func_178(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, int iParam10)//Position - 0xB72B
{
	var uVar0;
	int iVar1;
	
	iVar1 = 32768;
	if (!func_181(iParam0->f_1C[iParam10]))
	{
		return;
	}
	if (bParam9)
	{
		iVar1 |= 512;
	}
	uParam1.f_7 = MISC::GET_RANDOM_INT_IN_RANGE(0, uParam1.f_6);
	TASK::OPEN_SEQUENCE_TASK(&uVar0);
	TASK::TASK_PLAY_ANIM(0, iParam0->f_30, uParam1[uParam1.f_7], 4f, -4f, -1, 0 | iVar1, 0, 0, 0, 0);
	TASK::TASK_PLAY_ANIM(0, iParam0->f_30, iParam0->f_30.f_1, 8f, -8f, -1, 1 | iVar1, 0, 0, 0, 0);
	TASK::CLOSE_SEQUENCE_TASK(uVar0);
	TASK::TASK_PERFORM_SEQUENCE(iParam0->f_1C[iParam10], uVar0);
	TASK::CLEAR_SEQUENCE_TASK(&uVar0);
}

int func_179(int iParam0, struct<3> Param1, char[4] cParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, float fParam7)//Position - 0xB7C8
{
	var uVar0;
	
	if ((((func_181(PLAYER::PLAYER_PED_ID()) && func_181(iParam0->f_1C[0])) && !func_128()) && (MISC::GET_GAME_TIMER() - iParam0->f_3C) > iParam6) && func_177(PLAYER::PLAYER_PED_ID(), Param1, 1) < fParam7)
	{
		uVar0 = 16;
		func_232(&uVar0, iParam4, iParam0->f_1C[0], sParam5, 0, 1);
		func_180(&uVar0, cParam2, sParam3, 7, 0, 0);
		iParam0->f_3C = MISC::GET_GAME_TIMER();
		return 1;
	}
	return 0;
}

void func_180(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0xB850
{
	func_176(uParam0, 145, sParam1, iParam4, iParam5, 0);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	MISC::SET_BIT(&Global_38DE, 0);
	Global_3D4F = iParam3;
	StringCopy(&Global_3D42, sParam2, 24);
}

int func_181(int iParam0)//Position - 0xB88B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_182(int iParam0, char* sParam1, struct<3> Param2)//Position - 0xB8AB
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (Global_8861 == 17)
			{
				if (*iParam0 != -1)
				{
					func_187(iParam0);
				}
			}
			else if (func_186())
			{
				if (*iParam0 != -1)
				{
					func_187(iParam0);
				}
			}
			else if (*iParam0 == -1)
			{
				if (func_177(PLAYER::PLAYER_PED_ID(), Param2, 1) <= 100f)
				{
					func_185(iParam0, 1);
				}
			}
			else
			{
				switch (func_184(*iParam0))
				{
					case 1:
						if (MISC::ARE_STRINGS_EQUAL(sParam1, "JOSH_1_INT_CONCAT"))
						{
							CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(sParam1, 14, 8);
						}
						else
						{
							CUTSCENE::REQUEST_CUTSCENE(sParam1, 8);
						}
						STREAMING::_0xF8155A7F03DDFC8E(2);
						func_183(*iParam0, 1);
						break;
					
					case 2:
						CUTSCENE::STOP_CUTSCENE(0);
						CUTSCENE::REMOVE_CUTSCENE();
						STREAMING::_0xF8155A7F03DDFC8E(0);
						func_183(*iParam0, 0);
						break;
				}
				if (func_177(PLAYER::PLAYER_PED_ID(), Param2, 1) > 120f)
				{
					func_187(iParam0);
				}
			}
		}
	}
}

void func_183(int iParam0, bool bParam1)//Position - 0xB99C
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (Global_10A91 == iParam0)
		{
			Global_10A92 = iParam0;
		}
	}
	else if (Global_10A92 == iParam0)
	{
		Global_10A92 = -1;
	}
}

int func_184(int iParam0)//Position - 0xB9D8
{
	if (Global_10A91 == iParam0)
	{
		if (Global_10A92 == -1)
		{
			if (Global_10A90 < MISC::GET_FRAME_COUNT())
			{
				return 1;
			}
		}
	}
	else if (Global_10A92 == iParam0)
	{
		return 2;
	}
	return 0;
}

void func_185(int iParam0, int iParam1)//Position - 0xBA11
{
	bool bVar0;
	int iVar1;
	
	if (Global_10A8E < 5)
	{
		Global_10A83[Global_10A8E /*2*/] = 0;
		Global_10A83[Global_10A8E /*2*/].f_1 = iParam1;
		bVar0 = false;
		while (!bVar0)
		{
			bVar0 = true;
			iVar1 = 0;
			while (iVar1 < Global_10A8E)
			{
				if (Global_10A83[iVar1 /*2*/] == Global_10A83[Global_10A8E /*2*/])
				{
					Global_10A83[Global_10A8E /*2*/]++;
					bVar0 = false;
				}
				iVar1++;
			}
		}
		*iParam0 = Global_10A83[Global_10A8E /*2*/];
		Global_10A8E++;
		Global_10A8F = 1;
	}
	else
	{
		*iParam0 = -1;
	}
}

bool func_186()//Position - 0xBAAF
{
	return Global_1567C;
}

void func_187(int iParam0)//Position - 0xBABB
{
	CUTSCENE::STOP_CUTSCENE(0);
	CUTSCENE::REMOVE_CUTSCENE();
	func_188(iParam0);
}

void func_188(int iParam0)//Position - 0xBAD2
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	if (*iParam0 == -1)
	{
		return;
	}
	if (Global_10A92 == *iParam0)
	{
		func_183(*iParam0, 0);
	}
	if (Global_10A91 == *iParam0)
	{
		Global_10A91 = -1;
	}
	bVar0 = false;
	iVar1 = 0;
	while (!bVar0 && iVar1 < Global_10A8E)
	{
		if (Global_10A83[iVar1 /*2*/] == *iParam0)
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (!bVar0)
	{
		return;
	}
	iVar2 = iVar1;
	while (iVar2 <= (Global_10A8E - 2))
	{
		Global_10A83[iVar2 /*2*/] = Global_10A83[iVar2 + 1 /*2*/];
		Global_10A83[iVar2 /*2*/].f_1 = Global_10A83[iVar2 + 1 /*2*/].f_1;
		iVar2++;
	}
	Global_10A83[(Global_10A8E - 1) /*2*/] = -1;
	Global_10A83[(Global_10A8E - 1) /*2*/].f_1 = 3;
	Global_10A8E = (Global_10A8E - 1);
	Global_10A8F = 1;
	Global_10A90 = MISC::GET_FRAME_COUNT();
	*iParam0 = -1;
}

void func_189(int iParam0)//Position - 0xBBBA
{
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return;
	}
	Global_178B8[iParam0 /*10*/].f_1 = 1;
}

int func_190(int iParam0, bool bParam1)//Position - 0xBBE2
{
	struct<27> Var0;
	
	if (Global_10A95)
	{
		func_287("IS_RC_FINE_AND_IN_RANGE(): The game is running Multiplayer [TERMINATING]");
		return 0;
	}
	func_94(*iParam0, &Var0);
	if ((func_227(*iParam0) || func_225(*iParam0)) || Global_10B8A == 1)
	{
		return 1;
	}
	if (!BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
	{
		func_287("IS_RC_FINE_AND_IN_RANGE(): Player out of range [TERMINATING]");
		return 0;
	}
	if (func_221(*iParam0))
	{
		if (*iParam0 == 19)
		{
			func_220(iParam0->f_1C[0]);
		}
		func_287("IS_RC_FINE_AND_IN_RANGE(): Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (iParam0->f_19 == 1)
	{
		if (!func_200(iParam0, 1, 0))
		{
			return 0;
		}
	}
	else if (iParam0->f_10 == 0)
	{
		if (!func_200(iParam0, 0, 0))
		{
			return 0;
		}
	}
	if (((((*iParam0 == 16 || *iParam0 == 9) || *iParam0 == 18) || *iParam0 == 22) || *iParam0 == 32) || *iParam0 == 51)
	{
		if (!func_198(iParam0, 1, 1))
		{
			if (*iParam0 == 16)
			{
				func_197(iParam0);
			}
			else
			{
				func_195(iParam0);
			}
			return 0;
		}
	}
	else if (*iParam0 == 24)
	{
		if (!func_198(iParam0, 0, 1))
		{
			func_195(iParam0);
			return 0;
		}
	}
	else if (*iParam0 == 6)
	{
		if (!func_198(iParam0, 0, 1))
		{
			return 0;
		}
	}
	else if (iParam0->f_1A == 1)
	{
		if (!func_198(iParam0, 1, 0))
		{
			func_195(iParam0);
			return 0;
		}
	}
	else if (iParam0->f_10 == 2 || iParam0->f_10 == 1)
	{
		if (!func_198(iParam0, 0, 0))
		{
			func_195(iParam0);
			return 0;
		}
	}
	if (iParam0->f_10 == 2 || iParam0->f_10 == 1)
	{
		if (func_181(iParam0->f_23[0]))
		{
			if (!ENTITY::IS_ENTITY_AT_COORD(iParam0->f_23[0], Var0.f_6, 8f, 8f, 8f, 0, 1, 0))
			{
				return 0;
			}
		}
	}
	if (*iParam0 == 10)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, iParam0->f_11[0 /*3*/], 8f))
		{
			func_287("IS_RC_FINE_AND_IN_RANGE(): Explosion near mission trigger [TERMINATING]");
			return 0;
		}
	}
	if (Var0.f_4 != 17)
	{
		if (!MISC::IS_BIT_SET(Var0.f_1A, func_89()))
		{
			func_287("IS_RC_FINE_AND_IN_RANGE(): No longer a valid player character to launch mission");
			return 0;
		}
	}
	if (func_194(&(iParam0->f_30)) && bParam1)
	{
		func_191(iParam0->f_1C[0], &(iParam0->f_30), *iParam0);
	}
	return 1;
}

void func_191(int iParam0, var uParam1, int iParam2)//Position - 0xBE55
{
	var uVar0;
	var uVar1;
	
	if (func_181(iParam0))
	{
		switch (uParam1->f_3)
		{
			case 1:
				if (func_194(uParam1))
				{
					if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam1))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
						if (iParam2 != 21)
						{
							if (func_66(uParam1->f_5, 0f, 0f, 0f))
							{
								TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
							}
							else
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar0);
								if (func_193(uParam1))
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								else
								{
									TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 1000f, -8f, -1, 262152, 0, 2, 0);
								}
								TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar0);
								TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
								TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							}
						}
						else
						{
							TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 3);
						}
						uParam1->f_3 = 2;
					}
					else
					{
						uParam1->f_3 = 0;
					}
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 2:
				if (!func_193(uParam1) || !ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, *uParam1, uParam1->f_2, 3))
				{
					if (func_192(iParam2) && !PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 25f))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 0);
						uParam1->f_3 = 5;
					}
					else if ((func_193(uParam1) && uParam1->f_4 == 0) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iParam0, 1), 1) < 20f)
					{
						uParam1->f_3 = 3;
					}
				}
				break;
			
			case 3:
				TASK::OPEN_SEQUENCE_TASK(&uVar1);
				if (func_66(uParam1->f_5, 0f, 0f, 0f))
				{
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_2, 4f, -4f, -1, 262144, 0, 0, 0, 0);
					TASK::TASK_PLAY_ANIM(0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_2, uParam1->f_5, uParam1->f_8, 4f, -4f, -1, 262152, 0, 2, 0);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
				}
				TASK::CLOSE_SEQUENCE_TASK(uVar1);
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar1);
				TASK::CLEAR_SEQUENCE_TASK(&uVar1);
				uParam1->f_4 = 1;
				if (func_192(iParam2))
				{
					uParam1->f_3 = 2;
				}
				else
				{
					uParam1->f_3 = 0;
				}
				break;
			
			case 5:
				if (!func_192(iParam2) || PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 10f))
				{
					if (func_66(uParam1->f_5, 0f, 0f, 0f))
					{
						TASK::TASK_PLAY_ANIM(iParam0, *uParam1, uParam1->f_1, 8f, -8f, -1, 262153, 0, 0, 0, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iParam0, *uParam1, uParam1->f_1, uParam1->f_5, uParam1->f_8, 8f, -8f, -1, 262153, 0, 2, 0);
					}
					uParam1->f_3 = 2;
				}
				break;
			}
	}
}

int func_192(int iParam0)//Position - 0xC1AC
{
	if (iParam0 == 17 || iParam0 == 20)
	{
		return 1;
	}
	return 0;
}

int func_193(var uParam0)//Position - 0xC1CC
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	return 1;
}

int func_194(var uParam0)//Position - 0xC1E4
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0) || MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	return 1;
}

void func_195(var uParam0)//Position - 0xC209
{
	int iVar0;
	var uVar1;
	
	if (*uParam0 == 52)
	{
		func_196(&(uParam0->f_29[1]));
		func_196(&(uParam0->f_29[2]));
	}
	if (func_181(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_1C - 1))
		{
			if (func_110(uParam0->f_1C[iVar0]))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_1C[iVar0], 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_1C[iVar0], 1, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1C[0], 0);
				}
				PED::SET_PED_KEEP_TASK(uParam0->f_1C[iVar0], 1);
				if (*uParam0 == 34)
				{
					if (func_181(uParam0->f_29[0]))
					{
						ENTITY::SET_ENTITY_COLLISION(uParam0->f_29[0], 1, 0);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[0], 0);
					}
				}
				switch (*uParam0)
				{
					case 19:
						func_220(uParam0->f_1C[iVar0]);
						break;
					
					case 8:
						STREAMING::REQUEST_ANIM_DICT("rcmcollect_paperleadinout@");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmcollect_paperleadinout@"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmcollect_paperleadinout@", "meditate_getup", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1C[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 0:
					case 1:
						STREAMING::REQUEST_ANIM_DICT("rcmabigail");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmabigail"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "rcmabigail", "breakout_base", 8f, -8f, -1, 8, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1C[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 32:
						STREAMING::REQUEST_ANIM_DICT("rcmminute1");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmminute1"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						if (iVar0 == 0)
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_joe", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, "rcmminute1", "base_to_idle_josef", 8f, -8f, -1, 32776, 0, 0, 0, 0);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1C[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					case 24:
						STREAMING::REQUEST_ANIM_DICT("special_ped@hao@base");
						while (!STREAMING::HAS_ANIM_DICT_LOADED("special_ped@hao@base"))
						{
							SYSTEM::WAIT(0);
						}
						TASK::OPEN_SEQUENCE_TASK(&uVar1);
						TASK::TASK_PLAY_ANIM(0, "special_ped@hao@base", "hao_exit", 8f, -8f, -1, 520, 0, 0, 0, 0);
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uVar1);
						TASK::TASK_PERFORM_SEQUENCE(uParam0->f_1C[iVar0], uVar1);
						TASK::CLEAR_SEQUENCE_TASK(&uVar1);
						break;
					
					default:
						TASK::CLEAR_PED_SECONDARY_TASK(uParam0->f_1C[iVar0]);
						TASK::TASK_SMART_FLEE_PED(uParam0->f_1C[iVar0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
						break;
					}
			}
			iVar0++;
		}
	}
}

void func_196(var uParam0)//Position - 0xC50D
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		OBJECT::DELETE_OBJECT(uParam0);
	}
}

void func_197(var uParam0)//Position - 0xC538
{
	int iVar0;
	
	if (func_181(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= (uParam0->f_1C - 1))
		{
			if (func_110(uParam0->f_1C[iVar0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_1C[iVar0], 1, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1C[iVar0], 0);
				PED::SET_PED_KEEP_TASK(uParam0->f_1C[iVar0], 1);
				TASK::TASK_COMBAT_PED(uParam0->f_1C[iVar0], PLAYER::PLAYER_PED_ID(), 0, 16);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_1C[iVar0]));
			}
			iVar0++;
		}
	}
}

int func_198(var uParam0, bool bParam1, bool bParam2)//Position - 0xC5B8
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_23 - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (func_110(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[iVar0]))
			{
				if (ENTITY::IS_ENTITY_DEAD(uParam0->f_23[iVar0]))
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is dead [TERMINATING]");
					return 0;
				}
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_23[iVar0], 0))
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is not driveable [TERMINATING]");
					return 0;
				}
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0->f_23[iVar0], PLAYER::PLAYER_PED_ID(), 0))
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has been damaged by player [TERMINATING]");
					return 0;
				}
				if (ENTITY::GET_ENTITY_HEALTH(uParam0->f_23[iVar0]) < 850)
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle health is less than 850 [TERMINATING]");
					return 0;
				}
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_23[iVar0], PLAYER::PLAYER_PED_ID()) && ENTITY::GET_ENTITY_SPEED(PLAYER::PLAYER_PED_ID()) > 5f)
						{
							func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player vehicle at speed [TERMINATING]");
							return 0;
						}
						uVar2 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_157(uVar2))
						{
							if (ENTITY::GET_ENTITY_MODEL(uVar2) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar2) == joaat("towtruck2"))
							{
								if (func_157(uParam0->f_23[iVar0]))
								{
									if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar2, uParam0->f_23[iVar0]))
									{
										func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle is being towed by player [TERMINATING]");
										return 0;
									}
								}
							}
						}
					}
					else
					{
						iVar3 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
						if (func_157(iVar3))
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(uParam0->f_23[iVar0], iVar3) && ENTITY::GET_ENTITY_SPEED(iVar3) > 6f)
							{
								func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Random character vehicle has collided with the player's last known vehicle at speed (player bailed out?) [TERMINATING]");
								return 0;
							}
						}
						if (*uParam0 == 16)
						{
							if (func_199(PLAYER::PLAYER_PED_ID(), uParam0->f_23[iVar0]))
							{
								func_287("STEP_5_COMMON_RCfineAndInRange - CHECK_VEHICLES_OK() - Player attempting to jack Epsilon vehicle [TERMINATING]");
								return 0;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_199(int iParam0, int iParam1)//Position - 0xC775
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_200(var uParam0, bool bParam1, int iParam2)//Position - 0xC7A5
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = (uParam0->f_1C - 1);
	}
	else
	{
		iVar1 = 0;
	}
	if (*uParam0 == 16)
	{
		iParam2 = 1;
	}
	if (*uParam0 == 30)
	{
		iParam2 = 1;
	}
	if (func_110(PLAYER::PLAYER_PED_ID()))
	{
		iVar0 = 0;
		while (iVar0 <= iVar1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1C[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_1C[iVar0]))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0->f_1C[iVar0]))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							if (func_128())
							{
								func_126();
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Random character is being pushed by car [TERMINATING]");
							return 0;
						}
					}
					if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(uParam0->f_1C[iVar0]) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_1C[iVar0])) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(uParam0->f_1C[iVar0]))
					{
						if (iParam2 == 0)
						{
							func_195(uParam0);
						}
						else
						{
							func_197(uParam0);
						}
						func_287("STEP_5_COMMON_RCfineAndInRange - Random character has been damaged by something [TERMINATING]");
						return 0;
					}
					if (PED::IS_PED_RAGDOLL(uParam0->f_1C[iVar0]))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_1C[iVar0], PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, 0, 1, 0))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Random character is in ragdoll [TERMINATING]");
							return 0;
						}
					}
					if (func_219(*uParam0))
					{
						if (!func_137(*uParam0))
						{
							if (func_214(uParam0->f_1C[iVar0], 1, 0, 0, 0))
							{
								if (iParam2 == 0)
								{
									func_195(uParam0);
								}
								else
								{
									func_197(uParam0);
								}
								func_287("STEP_5_COMMON_RCfineAndInRange - Player is shooting near the Random Character [TERMINATING]");
								return 0;
							}
						}
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1C[iVar0], 1), 15f))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (func_202(uParam0->f_1C[iVar0], 1126825984))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Random character is in combat [TERMINATING]");
							return 0;
						}
					}
					if (!func_201(*uParam0))
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1C[iVar0], 1), 5f))
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - There was an explosion near the Random Character [TERMINATING]");
							return 0;
						}
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
						{
							if (iParam2 == 0)
							{
								func_195(uParam0);
							}
							else
							{
								func_197(uParam0);
							}
							func_287("STEP_5_COMMON_RCfineAndInRange - Player has a wanted level [TERMINATING]");
							return 0;
						}
					}
				}
				else
				{
					func_287("STEP_5_COMMON_RCfineAndInRange - Random character injured / dead [TERMINATING]");
					if (*uParam0 == 34)
					{
						if (func_181(uParam0->f_29[0]))
						{
							ENTITY::SET_ENTITY_COLLISION(uParam0->f_29[0], 1, 0);
							ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[0], 0);
						}
					}
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_201(int iParam0)//Position - 0xCA61
{
	if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 52) || iParam0 == 53)
	{
		return 1;
	}
	return 0;
}

int func_202(int iParam0, float fParam1)//Position - 0xCA95
{
	float fVar0;
	
	if (func_181(PLAYER::PLAYER_PED_ID()) && func_181(iParam0))
	{
		if (func_213(iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
			{
				fVar0 = 40f;
			}
			else
			{
				fVar0 = 3f;
			}
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, fVar0, fVar0, fVar0, 0, 1, 0))
			{
				if (func_203(iParam0, fParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_203(int iParam0, float fParam1)//Position - 0xCB0B
{
	return func_204(iParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

bool func_204(int iParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5)//Position - 0xCB23
{
	var uVar0;
	struct<3> Var1;
	int iVar2;
	
	iVar2 = func_212(iParam0, iParam1);
	if (!func_181(iParam0) || !func_181(iParam1))
	{
		if (iVar2 != -1)
		{
			func_211(&(Local_36[iVar2 /*4*/]));
		}
		return 0;
	}
	if (!func_208(iParam0, iParam1, fParam2, iParam3))
	{
		return 0;
	}
	if (iVar2 == -1)
	{
		iVar2 = func_207();
		if (iVar2 == -1)
		{
			return 0;
		}
		Local_36[iVar2 /*4*/].f_1 = iParam0;
		Local_36[iVar2 /*4*/].f_2 = iParam1;
	}
	Var1 = { PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f) };
	uVar0 = func_205(&(Local_36[iVar2 /*4*/]), Var1, iParam1, &(Local_36[iVar2 /*4*/].f_3), iParam0, iParam5);
	return (uVar0 || (MISC::GET_GAME_TIMER() - Local_36[iVar2 /*4*/].f_3) < iParam4);
}

int func_205(var uParam0, struct<3> Param1, int iParam2, var uParam3, int iParam4, int iParam5)//Position - 0xCBE4
{
	var uVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	iVar3 = 0;
	if (!func_181(iParam2))
	{
		*uParam0 = 0;
		return 0;
	}
	if (*uParam0 == 0)
	{
		Var1 = { func_206(iParam2, iParam5) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(Param1, Var1 + Var1 - Param1 * Vector(0.1f, 0.1f, 0.1f), 511, iParam4, 7);
		return 0;
	}
	iVar4 = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &uVar0, &Var1, &uVar2, &iVar3);
	if (iVar4 == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (iVar4 == 1)
	{
		return 0;
	}
	*uParam0 = 0;
	if (ENTITY::IS_ENTITY_A_PED(iVar3))
	{
		func_181(iVar3);
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3) == iParam2)
		{
			if (bLocal_37)
			{
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
			}
			*uParam3 = MISC::GET_GAME_TIMER();
			return 1;
		}
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar3))
	{
		func_181(iVar3);
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam2, 0))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3) == PED::GET_VEHICLE_PED_IS_IN(iParam2, 0))
			{
				if (bLocal_37)
				{
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(Param1, ENTITY::GET_ENTITY_COORDS(iParam2, 1), 255, 0, 0, 255, 0, 0, 255, 255);
				}
				*uParam3 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
		return 0;
	}
	return 0;
}

Vector3 func_206(int iParam0, int iParam1)//Position - 0xCD10
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = iVar0;
	}
	if (iParam1 == 0)
	{
		return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
	}
	else if (iParam1 == 1)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f);
	}
	else if (iParam1 == 2)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 39317, 0f, 0f, 0f);
	}
	else if (iParam1 == 3)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 18905, 0f, 0f, 0f);
	}
	else if (iParam1 == 4)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 57005, 0f, 0f, 0f);
	}
	else if (iParam1 == 5)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 63931, 0f, 0f, 0f);
	}
	else if (iParam1 == 6)
	{
		return PED::GET_PED_BONE_COORDS(iParam0, 36864, 0f, 0f, 0f);
	}
	return ENTITY::GET_ENTITY_COORDS(iParam0, 1);
}

int func_207()//Position - 0xCDD5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if ((Local_36[iVar0 /*4*/] == 0 && Local_36[iVar0 /*4*/].f_1 == 0) && Local_36[iVar0 /*4*/].f_2 == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_208(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xCE1F
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_210(ENTITY::GET_ENTITY_COORDS(iParam1, 1) - ENTITY::GET_ENTITY_COORDS(iParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var1 = { func_210(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_209(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

float func_209(struct<3> Param0, struct<3> Param1)//Position - 0xCEB0
{
	return (((Param0.x * Param1.x) + (Param0.f_1 * Param1.f_1)) + (Param0.f_2 * Param1.f_2));
}

Vector3 func_210(struct<3> Param0)//Position - 0xCED1
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.x = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

void func_211(var uParam0)//Position - 0xCF10
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

int func_212(int iParam0, int iParam1)//Position - 0xCF2B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Local_36)
	{
		if (Local_36[iVar0 /*4*/].f_1 == iParam0 && Local_36[iVar0 /*4*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_213(var uParam0)//Position - 0xCF6A
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), uParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xCF92
{
	float fVar0;
	float fVar1;
	int iVar2;
	
	fVar0 = 8f;
	fVar1 = 15f;
	if (bParam1 == 0)
	{
		fVar0 = 1.86f;
		fVar1 = 1.86f;
	}
	if (bParam2)
	{
		fVar0 = 2f;
	}
	if (func_181(PLAYER::PLAYER_PED_ID()) && func_181(uParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, 1);
		if (iVar2 == joaat("weapon_petrolcan"))
		{
			fVar0 = 3f;
			fVar1 = 3f;
		}
		if (!bParam2)
		{
			if (func_218(uParam0, bParam1, fVar0, fVar1))
			{
				return 1;
			}
			if (func_215(uParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
		else
		{
			if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(uParam0, 1), fVar0, 1))
					{
						return 1;
					}
				}
			}
			else
			{
				if (bParam1)
				{
					fVar0 = 1.86f;
					fVar1 = 1.86f;
				}
				if (func_218(iParam0, bParam1, fVar0, fVar1))
				{
					return 1;
				}
			}
			if (func_215(iParam0, fVar1, bParam3, bParam4))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_215(int iParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0xD08D
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { ENTITY::GET_ENTITY_COORDS(uParam0, 1) };
	Var1 = { Var0 };
	Var0.x = (Var0.x - fParam1);
	Var0.f_1 = (Var0.f_1 - fParam1);
	Var0.f_2 = (Var0.f_2 - fParam1);
	Var1.x = (Var1.x + fParam1);
	Var1.f_1 = (Var1.f_1 + fParam1);
	Var1.f_2 = (Var1.f_2 + fParam1);
	if (bParam2)
	{
		if (((MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_grenade"), fParam1, 1) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_molotov"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_smokegrenade"), fParam1, 1)) || MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iParam0, 1), joaat("weapon_stickybomb"), 5f, 1))
		{
			if (bParam3)
			{
				if (func_216(iParam0, fParam1))
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
	}
	else
	{
		if (bParam3)
		{
			if (func_216(iParam0, fParam1))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		if (MISC::IS_PROJECTILE_IN_AREA(Var0, Var1, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_216(var uParam0, float fParam1)//Position - 0xD199
{
	var uVar0;
	struct<3> Var1;
	
	if ((((MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_grenade"), fParam1, &Var1, &uVar0, 0) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_smokegrenade"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_bzgas"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_stickybomb"), fParam1, &Var1, &uVar0, 0)) || MISC::_GET_PROJECTILE_NEAR_PED(uParam0, joaat("weapon_molotov"), fParam1, &Var1, &uVar0, 0))
	{
		if (func_217(uParam0, Var1, 90f, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_217(int iParam0, struct<3> Param1, float fParam2, int iParam3)//Position - 0xD22E
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	Var0 = { func_210(Param1 - ENTITY::GET_ENTITY_COORDS(uParam0, 1)) };
	if (fParam2 < 0.1f || fParam2 > 360f)
	{
		return 1;
	}
	if (iParam3 == 0)
	{
		Var1 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	else
	{
		Var1 = { func_210(PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(iParam0, 31086, 0f, 0f, 0f)) };
	}
	fVar2 = func_209(Var1, Var0);
	if (fVar2 <= SYSTEM::COS((fParam2 / 2f)))
	{
		return 0;
	}
	return 1;
}

int func_218(int iParam0, bool bParam1, float fParam2, float fParam3)//Position - 0xD2BC
{
	if (bParam1)
	{
		if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), uParam0, fParam3, fParam3, fParam3, 0, 1, 0))
			{
				return 1;
			}
		}
	}
	if (MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, 1), fParam2, 1))
	{
		return 1;
	}
	return 0;
}

int func_219(int iParam0)//Position - 0xD304
{
	if (((((iParam0 == 2 || iParam0 == 3) || iParam0 == 34) || iParam0 == 11) || iParam0 == 52) || iParam0 == 53)
	{
		return 0;
	}
	return 1;
}

void func_220(int iParam0)//Position - 0xD34E
{
	var uVar0;
	
	if (func_181(PLAYER::PLAYER_PED_ID()) && func_181(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT("rcmextreme3");
		while (!STREAMING::HAS_ANIM_DICT_LOADED("rcmextreme3"))
		{
			SYSTEM::WAIT(0);
		}
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 1000f, -8f, -1, 8, 0, 0, 0, 0);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 1);
		TASK::TASK_PARACHUTE_TO_TARGET(0, 64.6f, -737.8f, 44.2f);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(uParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

int func_221(int iParam0)//Position - 0xD3EB
{
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return 1;
	}
	if (func_227(iParam0))
	{
		return 0;
	}
	if (!func_142(4))
	{
		if (func_225(iParam0))
		{
		}
		else
		{
			return 1;
		}
	}
	if (func_224() && !func_223())
	{
		return 1;
	}
	if (!func_222(iParam0))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
			{
				return 1;
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 2))
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0xD483
{
	if ((((iParam0 == 5 || iParam0 == 6) || iParam0 == 41) || iParam0 == 60) || iParam0 == 61)
	{
		return 1;
	}
	return 0;
}

int func_223()//Position - 0xD4C2
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

int func_224()//Position - 0xD4DF
{
	if (Global_154F9 != -1)
	{
		return MISC::IS_BIT_SET(Global_13D03[Global_154F9 /*34*/].f_F, 20);
	}
	return 0;
}

int func_225(int iParam0)//Position - 0xD505
{
	if ((func_226() && Global_15F6A.f_B == 6) && iParam0 == func_146(&(Global_15F6A.f_3), 0))
	{
		return 1;
	}
	return 0;
}

int func_226()//Position - 0xD539
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0)//Position - 0xD577
{
	if (func_92(0))
	{
		if (Global_10B8B.f_1 == 7)
		{
			if (Global_10B8B == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_228()//Position - 0xD59F
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { 190.2424f, -956.479f, 29.08f };
	fVar1 = 12f;
	if (func_181(PLAYER::PLAYER_PED_ID()))
	{
		if (func_229(PLAYER::PLAYER_PED_ID(), Var0, fVar1))
		{
			func_132();
		}
	}
}

bool func_229(int iParam0, struct<3> Param1, float fParam2)//Position - 0xD5E1
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(uParam0, 1), Param1) <= (fParam2 * fParam2);
}

void func_230(int iParam0)//Position - 0xD5FE
{
	if (func_181(iParam0->f_1C[0]))
	{
		PED::SET_PED_RESET_FLAG(iParam0->f_1C[0], 64, 1);
		PED::SET_PED_RESET_FLAG(iParam0->f_1C[0], 249, 1);
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iParam0->f_1C[0], 1), 5.1f))
		{
			func_231(iParam0);
			if (func_181(iParam0->f_1C[0]))
			{
				PED::APPLY_DAMAGE_TO_PED(iParam0->f_1C[0], 1000, 1);
			}
		}
	}
}

void func_231(var uParam0)//Position - 0xD66C
{
	int iVar0;
	
	if (*uParam0 == 2 || *uParam0 == 3)
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (func_181(uParam0->f_29[iVar0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[iVar0], 0);
			}
			iVar0++;
		}
		if (func_181(uParam0->f_1C[0]))
		{
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1C[0], 0);
			PED::SET_PED_TO_RAGDOLL(uParam0->f_1C[0], 100, 500, 0, 1, 1, 0);
			TASK::TASK_SMART_FLEE_PED(uParam0->f_1C[0], PLAYER::PLAYER_PED_ID(), 10000f, -1, 0, 0);
		}
		func_196(&(uParam0->f_29[2]));
	}
}

void func_232(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xD706
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
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

var func_233()//Position - 0xD7A1
{
	return PED::ADD_SCENARIO_BLOCKING_AREA(-564f, -1758.1f, 16.5f, -419.31f, -1649f, 23f, 0, 1, 1, 1);
}

int func_234(int iParam0)//Position - 0xD7CF
{
	switch (*iParam0)
	{
		case 2:
			if (!func_255(iParam0))
			{
				return 0;
			}
			break;
		
		case 3:
			if (!func_252(iParam0))
			{
				return 0;
			}
			break;
		
		case 4:
			if (!func_246(iParam0))
			{
				return 0;
			}
			break;
		
		case 5:
			if (!func_243(iParam0))
			{
				return 0;
			}
			break;
		
		case 6:
			if (!func_238(iParam0))
			{
				return 0;
			}
			break;
		
		case 7:
			if (!func_237(iParam0))
			{
				return 0;
			}
			break;
	}
	if (*iParam0 == 2)
	{
		func_236(&Local_56);
		func_235(&Local_56, "democ_only_works");
		func_235(&Local_56, "gift_from_god");
		func_235(&Local_56, "rigged_vote");
		func_235(&Local_56, "suck_my");
		func_235(&Local_56, "tyranny");
	}
	func_287("Created initial scene");
	return 1;
}

void func_235(var uParam0, char* sParam1)//Position - 0xD8B1
{
	if (uParam0->f_6 >= *uParam0)
	{
		return;
	}
	(*uParam0)[uParam0->f_6] = sParam1;
	uParam0->f_6++;
}

void func_236(var uParam0)//Position - 0xD8DA
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_6 = 0;
	uParam0->f_7 = -1;
}

int func_237(var uParam0)//Position - 0xD907
{
	uParam0->f_10 = 3;
	uParam0->f_11[0 /*3*/] = { 237.65f, -385.41f, 44.4f };
	uParam0->f_1B = 1;
	return 1;
}

int func_238(var uParam0)//Position - 0xD932
{
	int iVar0[3];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	
	Var1 = { -468.9f, -1713.06f, 18.21f };
	Var2 = { -426.56f, -1717.89f, 18.2f };
	Var3 = { -0.1f, -0.85f, 0.23f };
	Var4 = { 8f, 0.5f, 0f };
	fVar5 = -76.2f;
	fVar6 = 43.5f;
	iVar0[0] = joaat("emperor2");
	iVar0[1] = joaat("prop_weed_tub_01");
	iVar0[2] = joaat("towtruck");
	switch (iLocal_50)
	{
		case 0:
			uParam0->f_10 = 5;
			uParam0->f_11[0 /*3*/] = { -480.9929f, -1712.65f, 17.4524f };
			uParam0->f_11[1 /*3*/] = { -443.6129f, -1705.886f, 27.62214f };
			uParam0->f_18 = 31f;
			uParam0->f_1B = 1;
			uParam0->f_1A = 1;
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar7]);
				iVar7++;
			}
			iLocal_50 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0))
			{
				return 0;
			}
			iLocal_50 = 2;
			break;
		
		case 2:
			bVar8 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
			{
				func_240(&(uParam0->f_23[0]), iVar0[0], Var1, fVar5);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
				{
					VEHICLE::SET_VEHICLE_ALARM(uParam0->f_23[0], 0);
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
					VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_23[0], "WEED STASH VEHICLE");
					VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_23[0], 0);
					VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_23[0], 0);
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_23[0], 1);
					VEHICLE::SET_VEHICLE_UNDRIVEABLE(uParam0->f_23[0], 1);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]))
			{
				func_239(&(uParam0->f_29[0]), iVar0[1], Var1 + Var3, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_29[0], uParam0->f_23[0], 0, Var3, Var4, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar8 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[1]))
			{
				func_240(&(uParam0->f_23[1]), iVar0[2], Var2, fVar6);
				VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_23[1], 39, 43);
			}
			if (bVar8)
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			iVar7 = 0;
			while (iVar7 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar7]);
				iVar7++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_239(var uParam0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xDBB7
{
	func_196(uParam0);
	*uParam0 = OBJECT::CREATE_OBJECT(uParam1, Param2, 1, 1, 0);
	ENTITY::SET_ENTITY_HEADING(*uParam0, fParam3);
}

void func_240(var uParam0, var uParam1, struct<3> Param2, float fParam3)//Position - 0xDBDE
{
	func_241(uParam0);
	*uParam0 = VEHICLE::CREATE_VEHICLE(uParam1, Param2, fParam3, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0);
		ENTITY::SET_ENTITY_HEALTH(*uParam0, 1000);
	}
}

void func_241(var uParam0)//Position - 0xDC19
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		if (func_157(*uParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
			{
				if (func_181(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
						return;
					}
				}
				VEHICLE::DELETE_VEHICLE(uParam0);
			}
		}
		else
		{
			if (func_181(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *uParam0, 0))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
					return;
				}
			}
			VEHICLE::DELETE_VEHICLE(uParam0);
		}
	}
}

int func_242(int iParam0)//Position - 0xDCB5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (!STREAMING::HAS_MODEL_LOADED((*iParam0)[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

int func_243(var uParam0)//Position - 0xDCE6
{
	int iVar0[4];
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	float fVar4;
	float fVar5;
	int iVar6;
	bool bVar7;
	
	Var1 = { 1199.8f, -1259.22f, 34.23f };
	Var2 = { 0f, -1f, 0.64f };
	Var3 = { 1195.3f, -1312.74f, 34.75f };
	fVar4 = 174.7f;
	fVar5 = 282.4f;
	iVar0[0] = joaat("dloader");
	iVar0[1] = joaat("prop_weed_tub_01b");
	iVar0[2] = joaat("police4");
	iVar0[3] = joaat("a_m_y_business_01");
	switch (iLocal_50)
	{
		case 0:
			uParam0->f_10 = 5;
			uParam0->f_11[0 /*3*/] = { 1198.367f, -1326.095f, 33.9683f };
			uParam0->f_11[1 /*3*/] = { 1202.237f, -1235.374f, 43.97641f };
			uParam0->f_18 = 31f;
			uParam0->f_1B = 1;
			uParam0->f_1A = 1;
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar6]);
				iVar6++;
			}
			iLocal_50 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0))
			{
				return 0;
			}
			iLocal_50 = 2;
			break;
		
		case 2:
			bVar7 = true;
			func_240(&(uParam0->f_23[0]), iVar0[0], Var1, fVar4);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(uParam0->f_23[0], 1);
				VEHICLE::SET_VEHICLE_ALARM(uParam0->f_23[0], 0);
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iVar0[0], 1);
				VEHICLE::SET_VEHICLE_NAME_DEBUG(uParam0->f_23[0], "WEED STASH VEHICLE");
				VEHICLE::SET_VEHICLE_CAN_LEAK_OIL(uParam0->f_23[0], 0);
				VEHICLE::SET_VEHICLE_CAN_LEAK_PETROL(uParam0->f_23[0], 0);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_23[0], 1, 1);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_23[0], 2, 1);
				VEHICLE::SET_VEHICLE_EXTRA(uParam0->f_23[0], 3, 1);
			}
			else
			{
				bVar7 = false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]))
			{
				func_239(&(uParam0->f_29[0]), iVar0[1], Var1 + Var2, 0f);
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_29[0], uParam0->f_23[0], 0, Var2, 0f, 0f, 0f, 0, 0, 1, 0, 2, 1);
				}
				else
				{
					bVar7 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[1]))
			{
				func_240(&(uParam0->f_23[1]), iVar0[2], Var3, fVar5);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1C[0]))
			{
				func_244(&(uParam0->f_1C[0]), iVar0[3], Var3, fVar5, 6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1C[1]))
			{
				func_244(&(uParam0->f_1C[1]), iVar0[3], Var3, fVar5, 6);
			}
			if (bVar7)
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			if (func_181(uParam0->f_23[1]))
			{
				if (func_181(uParam0->f_1C[0]))
				{
					PED::SET_PED_AS_COP(uParam0->f_1C[0], 1);
					PED::SET_PED_INTO_VEHICLE(uParam0->f_1C[0], uParam0->f_23[1], -1);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0->f_1C[0], joaat("weapon_pistol"), 100, 1);
				}
				if (func_181(uParam0->f_1C[1]))
				{
					PED::SET_PED_AS_COP(uParam0->f_1C[1], 1);
					PED::SET_PED_INTO_VEHICLE(uParam0->f_1C[1], uParam0->f_23[1], 0);
					WEAPON::GIVE_DELAYED_WEAPON_TO_PED(uParam0->f_1C[1], joaat("weapon_pistol"), 100, 1);
				}
			}
			iVar6 = 0;
			while (iVar6 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar6]);
				iVar6++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_244(var uParam0, var uParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0xE035
{
	func_245(uParam0);
	*uParam0 = PED::CREATE_PED(iParam4, uParam1, Param2, fParam3, 0, 0);
}

void func_245(var uParam0)//Position - 0xE056
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
		}
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*uParam0, 1, 0);
		}
		PED::DELETE_PED(uParam0);
	}
}

int func_246(var uParam0)//Position - 0xE095
{
	int iVar0[2];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	
	Var1 = { 417.78f, -765.71f, 29.39f };
	fVar2 = 87.3f;
	iVar0[0] = uLocal_51;
	iVar0[1] = joaat("p_cs_clipboard");
	switch (iLocal_50)
	{
		case 0:
			uParam0->f_10 = 5;
			uParam0->f_1B = 0;
			uParam0->f_11[0 /*3*/] = { 415.4587f, -773.3615f, 27.8549f };
			uParam0->f_11[1 /*3*/] = { 415.5205f, -758.5715f, 31.34455f };
			uParam0->f_18 = 14.5f;
			StringCopy(&(uParam0->f_9), "BAR_5_RCM_P2", 24);
			uParam0->f_19 = 1;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			func_251(&(uParam0->f_30), "rcm_barry3", "bar_3_rcm_barry_standing_on_street_base", "bar_3_rcm_barry_standing_on_street_fidget");
			iLocal_50 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0) || !func_250(&(uParam0->f_30)))
			{
				return 0;
			}
			iLocal_50 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1C[0]))
			{
				if (func_247(&(uParam0->f_1C[0]), 49, Var1, fVar2, "RC LAUNCHER: BARRY 3", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_1C[0], 1, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]))
			{
				func_239(&(uParam0->f_29[0]), iVar0[1], Var1 + Vector(0f, 0f, 5f), -115.18f);
				if (func_181(uParam0->f_29[0]) && func_181(uParam0->f_1C[0]))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_29[0], uParam0->f_1C[0], PED::GET_PED_BONE_INDEX(uParam0->f_1C[0], 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_247(var uParam0, int iParam1, struct<3> Param2, float fParam3, char* sParam4, int iParam5)//Position - 0xE28B
{
	if (func_248(uParam0, iParam1, Param2, fParam3, 1))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 1);
				PED::SET_PED_MONEY(*uParam0, 0);
				if (iParam5 == 1)
				{
					PED::SET_PED_CAN_BE_TARGETTED(*uParam0, 0);
				}
			}
			PED::SET_PED_NAME_DEBUG(*uParam0, sParam4);
		}
		return 1;
	}
	return 0;
}

int func_248(var uParam0, int iParam1, struct<3> Param2, float fParam3, bool bParam4)//Position - 0xE2E6
{
	int iVar0;
	
	if (!func_36(iParam1))
	{
		iVar0 = func_290(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				PED::DELETE_PED(uParam0);
			}
			*uParam0 = PED::CREATE_PED(26, iVar0, Param2, uParam3, 0, 0);
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*uParam0);
			if (iVar0 == joaat("ig_lamardavis"))
			{
				if (PED::GET_PED_DRAWABLE_VARIATION(*uParam0, 3) == 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(*uParam0, 5, 2, 0, 0);
				}
			}
			func_249(*uParam0, iParam1);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

int func_249(var uParam0, int iParam1)//Position - 0xE374
{
	int iVar0;
	
	iVar0 = 7;
	if (iParam1 == 19)
	{
		iVar0 = 3;
	}
	else if (iParam1 == 14)
	{
		iVar0 = 4;
	}
	else if (iParam1 == 17)
	{
		iVar0 = 5;
	}
	else
	{
		iVar0 = 7;
		return 0;
	}
	Global_150B9[(iVar0 - 3)] = uParam0;
	return 1;
}

int func_250(var uParam0)//Position - 0xE3BA
{
	if (func_194(uParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(*uParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_251(var uParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0xE3E4
{
	*uParam0 = sParam1;
	uParam0->f_1 = sParam2;
	uParam0->f_2 = sParam3;
	STREAMING::REQUEST_ANIM_DICT(*uParam0);
	uParam0->f_5 = { 0f, 0f, 0f };
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_3 = 1;
	uParam0->f_4 = 0;
}

int func_252(var uParam0)//Position - 0xE420
{
	int iVar0[5];
	struct<3> Var1;
	float fVar2;
	int iVar3;
	bool bVar4;
	
	Var1 = { 190.2424f, -956.479f, 29.08f };
	fVar2 = 69.171f;
	iVar0[0] = uLocal_51;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("prop_protest_sign_01");
	switch (iLocal_50)
	{
		case 0:
			uParam0->f_10 = 5;
			StringCopy(&(uParam0->f_9), "BAR_3_RCM", 24);
			uParam0->f_19 = 1;
			uParam0->f_1B = 0;
			uParam0->f_11[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_11[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_18 = 23f;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			func_251(&(uParam0->f_30), "rcm_barry2", "lead_in_loop", "lead_in_loop");
			iLocal_50 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0) || !func_250(&(uParam0->f_30)))
			{
				return 0;
			}
			iLocal_50 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1C[0]))
			{
				if (func_247(&(uParam0->f_1C[0]), 49, Var1, fVar2, "RC LAUNCHER: BARRY 2", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_1C[0], 1, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 2f, 0);
				func_239(&(uParam0->f_29[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, func_254(-2.01f));
				if (func_181(uParam0->f_29[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[0], 1);
					func_239(&(uParam0->f_29[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, func_254(-2.01f));
					if (func_181(uParam0->f_29[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[2], 1);
					}
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[1]))
			{
				func_239(&(uParam0->f_29[1]), iVar0[2], 190.417f, -956.511f, 29.09179f, -99.157f);
				if (func_181(uParam0->f_29[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[1], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_29[1], 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			if (func_181(uParam0->f_1C[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1C[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_1C[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1C[0], 208, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1C[0], 1862763509);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_1C[0], Var1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_1C[0], fVar2);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1C[0], 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_1C[0], uParam0->f_30, uParam0->f_30.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_1C[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (func_181(uParam0->f_29[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[0], 1);
			}
			if (func_181(uParam0->f_29[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[1], 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_29[1], 1, 0);
			}
			func_253(&(uParam0->f_29[3]), iVar0[4]);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

void func_253(var uParam0, var uParam1)//Position - 0xE7BE
{
	struct<3> Var0;
	float fVar1;
	
	Var0 = { 192.4462f, -953.5946f, 29.0919f };
	fVar1 = 23.45f;
	func_239(uParam0, uParam1, Var0, fVar1);
}

float func_254(float fParam0)//Position - 0xE7EE
{
	return (fParam0 * 57.29578f);
}

int func_255(var uParam0)//Position - 0xE7FE
{
	int iVar0[7];
	struct<3> Var1;
	var uVar2;
	int iVar3;
	bool bVar4;
	
	Var1 = { 190.2424f, -956.379f, 28.63f };
	uVar2 = func_254(1.12f);
	iVar0[0] = uLocal_51;
	iVar0[1] = joaat("prop_protest_table_01");
	iVar0[2] = joaat("prop_chair_08");
	iVar0[3] = joaat("p_a4_sheets_s");
	iVar0[4] = joaat("p_cs_lighter_01");
	iVar0[5] = joaat("p_cs_joint_01");
	iVar0[6] = joaat("prop_protest_sign_01");
	switch (iLocal_50)
	{
		case 0:
			uParam0->f_10 = 5;
			StringCopy(&(uParam0->f_9), "BAR_1_RCM_P2", 24);
			uParam0->f_19 = 1;
			uParam0->f_1B = 0;
			uParam0->f_11[0 /*3*/] = { 190.0315f, -956.3355f, 29.09192f };
			uParam0->f_11[1 /*3*/] = { 178.0458f, -950.6594f, 31.09358f };
			uParam0->f_18 = 23f;
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::REQUEST_MODEL(iVar0[iVar3]);
				iVar3++;
			}
			func_251(&(uParam0->f_30), "RCMBarryLeadInOut", "idle", "fidget");
			iLocal_50 = 1;
			break;
		
		case 1:
			if (!func_242(&iVar0) || !func_250(&(uParam0->f_30)))
			{
				return 0;
			}
			iLocal_50 = 2;
			break;
		
		case 2:
			bVar4 = true;
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1C[0]))
			{
				if (func_247(&(uParam0->f_1C[0]), 49, Var1, uVar2, "RC LAUNCHER: BARRY 1", 1))
				{
					PED::SET_PED_PROP_INDEX(uParam0->f_1C[0], 1, 0, 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[0]))
			{
				MISC::CLEAR_AREA_OF_OBJECTS(189.5964f, -956.0344f, 29.09179f, 5f, 0);
				func_239(&(uParam0->f_29[0]), iVar0[1], 189.5964f, -956.0344f, 29.09179f, func_254(-2.01f));
				if (func_181(uParam0->f_29[0]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[0], 1);
					func_239(&(uParam0->f_29[2]), iVar0[3], 189.7901f, -956.1675f, 29.8229f, func_254(-2.01f));
					if (func_181(uParam0->f_29[2]))
					{
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[2], 1);
					}
				}
				else
				{
					bVar4 = false;
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29[1]))
			{
				func_239(&(uParam0->f_29[1]), iVar0[2], 190.2574f, -956.3513f, 29.09179f, func_254(-1.68f));
				if (func_181(uParam0->f_29[1]))
				{
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[1], 1);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_29[1], 0, 0);
				}
				else
				{
					bVar4 = false;
				}
			}
			if (bVar4)
			{
				iLocal_50 = 3;
			}
			break;
		
		case 3:
			if (func_181(uParam0->f_1C[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_1C[0], 1);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_1C[0], 0);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_1C[0], 208, 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1C[0], 1862763509);
				ENTITY::SET_ENTITY_COORDS(uParam0->f_1C[0], Var1, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(uParam0->f_1C[0], uVar2);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1C[0], 1);
				TASK::TASK_PLAY_ANIM(uParam0->f_1C[0], uParam0->f_30, uParam0->f_30.f_1, 8f, -8f, -1, 9, 0, 0, 0, 0);
				TASK::TASK_LOOK_AT_ENTITY(uParam0->f_1C[0], PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
			if (func_181(uParam0->f_29[0]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[0], 1);
			}
			if (func_181(uParam0->f_29[1]))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[1], 1);
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_29[1], 1, 0);
			}
			func_239(&(uParam0->f_29[4]), iVar0[5], 189.895f, -955.945f, 29.818f, 0f);
			if (func_181(uParam0->f_29[4]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_29[4], -90f, 0f, -30.8f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[4], 1);
			}
			func_239(&(uParam0->f_29[3]), iVar0[4], 189.783f, -956.015f, 29.79f, 0f);
			if (func_181(uParam0->f_29[3]))
			{
				ENTITY::SET_ENTITY_ROTATION(uParam0->f_29[3], -90f, 0f, 75f, 2, 1);
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_29[3], 1);
			}
			func_253(&(uParam0->f_29[5]), iVar0[6]);
			iVar3 = 0;
			while (iVar3 <= (iVar0 - 1))
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0[iVar3]);
				iVar3++;
			}
			return 1;
			break;
	}
	return 0;
}

int func_256(int iParam0)//Position - 0xEC5C
{
	struct<27> Var0;
	int iVar1;
	
	func_94(iParam0, &Var0);
	iVar1 = func_89();
	if (iVar1 == 145)
	{
		return 1;
	}
	else if ((iVar1 != 1 && iVar1 != 0) && iVar1 != 2)
	{
		return 1;
	}
	if (!MISC::IS_BIT_SET(Var0.f_1A, iVar1))
	{
		return 1;
	}
	return 0;
}

int func_257(int iParam0)//Position - 0xECB0
{
	char* sVar0;
	
	if (Global_10A95)
	{
		func_287("STEP_3_COMMON_CanRCLaunch - Script denied. Multiplayer is running [TERMINATING]");
		return 0;
	}
	if (!func_258(iParam0))
	{
		Global_178B8[iParam0 /*10*/].f_1 = 1;
		func_287("STEP_3_COMMON_CanRCLaunch - Script denied by RC Controller [TERMINATING]");
		return 0;
	}
	if (Global_15F6A.f_B == 6)
	{
		if (Global_15F6A < 9)
		{
			func_94(iParam0, &sVar0);
			if (MISC::ARE_STRINGS_EQUAL(&(Global_15F6A.f_3), sVar0))
			{
				func_287("STEP_3_COMMON_CanRCLaunch - Script denied as a replay for this RC is being configured. [TERMINATING]");
				return 0;
			}
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("candidate_controller")) == 0)
	{
		Global_178B8[iParam0 /*10*/].f_1 = 1;
		func_287("STEP_3_COMMON_CanRCLaunch - Script denied as candidate_controller is not running. [TERMINATING]");
		return 0;
	}
	return 1;
}

int func_258(int iParam0)//Position - 0xED47
{
	var uVar0;
	
	func_94(iParam0, &uVar0);
	if (!func_142(4))
	{
		if (func_225(iParam0))
		{
		}
		else
		{
			return 0;
		}
	}
	if (func_224() && !func_223())
	{
		return 0;
	}
	if (func_264(iParam0))
	{
		return 0;
	}
	if (iParam0 == -1)
	{
		iParam0 = func_145();
	}
	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_227(iParam0))
	{
		if (!func_263(iParam0))
		{
			return 0;
		}
		if (!func_262(iParam0))
		{
			return 0;
		}
		if (func_261(iParam0))
		{
			return 0;
		}
	}
	if (iParam0 == 58)
	{
		if (func_259(5))
		{
			Global_178B8[iParam0 /*10*/].f_3 = 0;
		}
	}
	if (Global_178B8[iParam0 /*10*/].f_3 == 1)
	{
		return 0;
	}
	return 1;
}

int func_259(int iParam0)//Position - 0xEE08
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
			if (func_259(iVar0))
			{
				return 1;
			}
			iVar0++;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_260(iParam0, &sVar1);
		iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_14D9D[iParam0 /*10*/].f_3, &sVar1);
		if (iVar2 != 0 && Global_15F9E.f_120 == iVar2)
		{
			return 1;
		}
	}
	return 0;
}

bool func_260(int iParam0, char* sParam1)//Position - 0xEE8D
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

bool func_261(int iParam0)//Position - 0xEF6F
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 3);
}

bool func_262(int iParam0)//Position - 0xEF9D
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 2);
}

bool func_263(int iParam0)//Position - 0xEFCB
{
	if (iParam0 == 63 || iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 0);
}

int func_264(int iParam0)//Position - 0xEFF9
{
	if (func_222(iParam0))
	{
		return 0;
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_265()//Position - 0xF02E
{
	func_287("Running end routines.");
	Global_17B2F = (Global_17B2F - 1);
}

int func_266(int iParam0, struct<3> Param1, float fParam2)//Position - 0xF048
{
	int iVar0[4];
	int iVar1;
	
	if (func_89() == 0)
	{
		if (func_267(2, Param1, fParam2, iParam0))
		{
			return 1;
		}
	}
	else if (func_89() == 2)
	{
		if (func_267(3, Param1, fParam2, iParam0))
		{
			return 1;
		}
	}
	iVar0[0] = 4;
	iVar0[1] = 5;
	iVar0[2] = 6;
	iVar0[3] = 7;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_267(iVar0[iVar1], Param1, fParam2, iParam0))
		{
			iVar1 = iVar0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_267(int iParam0, struct<3> Param1, float fParam2, var uParam3)//Position - 0xF0D9
{
	int iVar0;
	struct<7> Var1;
	
	iVar0 = 0;
	func_94(iParam0, &Var1);
	if (func_268(Var1.f_6, Param1, fParam2))
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 0))
		{
			if (!MISC::IS_BIT_SET(Global_17C49.f_41BC[iParam0 /*6*/], 3))
			{
				iVar0 = 1;
			}
		}
		if (func_227(iParam0))
		{
			iVar0 = 1;
		}
	}
	if (iVar0 == 1)
	{
		*uParam3 = iParam0;
		StringCopy(&(uParam3->f_1), Var1, 32);
		return 1;
	}
	return 0;
}

int func_268(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xF156
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (MISC::ABSF((Param0.x - Param1.x)) <= fParam2)
	{
		if (MISC::ABSF((Param0.f_1 - Param1.f_1)) <= fParam2)
		{
			if (MISC::ABSF((Param0.f_2 - Param1.f_2)) <= fParam2)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_269(int iParam0, bool bParam1)//Position - 0xF1A2
{
	char* sVar0;
	
	if (bParam1)
	{
		func_287("SCRIPT TERMINATING: Cleaning up entities in Launcher");
		func_231(iParam0);
		func_276(iParam0, 0, 0, 0);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_55))
	{
		HUD::REMOVE_BLIP(&uLocal_55);
	}
	if (iLocal_52 != -1)
	{
		func_287("SCRIPT TERMINATING: Ending off-mission cutscene request");
		func_188(&iLocal_52);
	}
	if (*iParam0 == 6)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_54, 0);
	}
	func_275(&(iParam0->f_30));
	switch (*iParam0)
	{
		case 4:
			sVar0 = "BARRY3_AMB";
			break;
	}
	func_270(sVar0);
	if (bParam1)
	{
		func_189(*iParam0);
	}
	func_265();
	func_287("SCRIPT TERMINATED");
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_270(char* sParam0)//Position - 0xF237
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (func_273(sParam0))
		{
			func_271();
		}
	}
}

void func_271()//Position - 0xF256
{
	Global_38DE = 0;
	func_272();
}

void func_272()//Position - 0xF266
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_413F = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_3D4C = 6;
	}
}

int func_273(char* sParam0)//Position - 0xF287
{
	struct<6> Var0;
	
	Var0 = { func_274() };
	if (MISC::ARE_STRINGS_EQUAL(&Var0, uParam0))
	{
		return 1;
	}
	return 0;
}

struct<6> func_274()//Position - 0xF2A7
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

int func_275(var uParam0)//Position - 0xF2CB
{
	if (func_194(uParam0))
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(*uParam0))
		{
			STREAMING::REMOVE_ANIM_DICT(*uParam0);
			*uParam0 = "";
			uParam0->f_1 = "";
			return 1;
		}
	}
	return 0;
}

void func_276(var uParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0xF301
{
	func_283(uParam0, iParam1);
	func_280(uParam0, bParam2);
	func_277(uParam0, bParam3);
}

void func_277(var uParam0, bool bParam1)//Position - 0xF321
{
	func_278(&(uParam0->f_29), bParam1);
}

void func_278(var uParam0, bool bParam1)//Position - 0xF333
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_196(uParam0[iVar0]);
		}
		else
		{
			func_279(uParam0[iVar0], 0);
		}
		iVar0++;
	}
}

void func_279(var uParam0, bool bParam1)//Position - 0xF371
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(*uParam0))
		{
			ENTITY::DETACH_ENTITY(*uParam0, 1, 1);
		}
		if (!bParam1)
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(uParam0);
		}
		else
		{
			OBJECT::_MARK_OBJECT_FOR_DELETION(*uParam0);
		}
	}
}

void func_280(var uParam0, bool bParam1)//Position - 0xF3AC
{
	func_281(&(uParam0->f_23), bParam1);
}

void func_281(var uParam0, bool bParam1)//Position - 0xF3BE
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_241(uParam0[iVar0]);
		}
		else
		{
			func_282(uParam0[iVar0]);
		}
		iVar0++;
	}
}

void func_282(var uParam0)//Position - 0xF3FB
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*uParam0);
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*uParam0, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_283(var uParam0, int iParam1)//Position - 0xF432
{
	func_284(&(uParam0->f_1C), iParam1);
}

void func_284(var uParam0, int iParam1)//Position - 0xF444
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (iParam1 == 1)
		{
			func_245(uParam0[iVar0]);
		}
		else
		{
			func_285(uParam0[iVar0], 0, 1, 0);
		}
		iVar0++;
	}
}

void func_285(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xF485
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (!PED::IS_PED_INJURED(*uParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*uParam0, 0);
			if (iParam3 == 0)
			{
				TASK::CLEAR_PED_SECONDARY_TASK(*uParam0);
			}
			PED::SET_PED_KEEP_TASK(*uParam0, iParam1);
			if (iParam2 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, 0);
			}
		}
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
	}
}

void func_286(var uParam0)//Position - 0xF4D4
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

void func_287(char* sParam0)//Position - 0xF511
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
	}
}

void func_288(var uParam0)//Position - 0xF523
{
	*uParam0 = -1;
	StringCopy(&(uParam0->f_1), "", 32);
	uParam0->f_F = 12f;
	uParam0->f_10 = 6;
	uParam0->f_19 = 0;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
}

void func_289()//Position - 0xF556
{
	func_287("Running start routines.");
	Global_17B2F++;
}

int func_290(int iParam0)//Position - 0xF570
{
	if (!func_36(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

