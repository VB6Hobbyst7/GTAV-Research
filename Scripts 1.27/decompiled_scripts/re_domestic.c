#region Local Var
	var uLocal_0 = 0;
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
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	struct<3> Local_43 = { 0, 0, 0 } ;
	float fLocal_46 = 0f;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	struct<3> Local_50 = { 0, 0, 0 } ;
	bool bLocal_53 = 0;
	int iLocal_54 = 0;
	bool bLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	struct<3> Local_59 = { 0, 0, 0 } ;
	struct<3> Local_62 = { 0, 0, 0 } ;
	float fLocal_65 = 0f;
	float fLocal_66 = 0f;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	struct<6> Local_71 = { 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_77 = { 0, 0, 0, 0, 0, 0 } ;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	var uLocal_94 = 0;
	int iLocal_95 = 0;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101[2] = { 0, 0 };
	var uLocal_104 = 0;
	struct<3> Local_105 = { 0, 0, 0 } ;
	struct<3> Local_108 = { 0, 0, 0 } ;
	struct<3> Local_111 = { 0, 0, 0 } ;
	struct<3> Local_114 = { 0, 0, 0 } ;
	struct<3> Local_117 = { 0, 0, 0 } ;
	int iLocal_120[11] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	bool bLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	bool bLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	var uLocal_151 = 0;
	char* sLocal_152 = NULL;
	char* sLocal_153 = NULL;
	var uLocal_154 = 16;
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
	var uLocal_241 = 0;
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
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
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
	iLocal_18 = 3;
	sLocal_21 = "NULL";
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	fLocal_46 = -1f;
	StringCopy(&Local_71, "", 24);
	Local_117 = { -1034.6f, 4918.6f, 205.9f };
	iLocal_134 = -1;
	Local_50 = { ScriptParam_0.f_1[0 /*3*/] };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (PED::IS_PED_IN_GROUP(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
			}
		}
		func_217();
	}
	if (func_216(256, 1))
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (func_174(Local_50, -1, 0, 0, 0))
	{
		func_171(-1);
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	while (true)
	{
		SYSTEM::WAIT(0);
		if ((BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_48 == 4) || iLocal_67 > 18)
		{
			if (!func_170())
			{
				if (func_169())
				{
					func_217();
				}
			}
			RECORDING::_0x208784099002BC30("RE_DO", 0);
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				switch (iLocal_47)
				{
					case 0:
						if (!bLocal_49)
						{
							if (func_157())
							{
								func_217();
							}
							if (!bLocal_58)
							{
								func_156();
							}
							if (bLocal_58)
							{
								func_155();
							}
						}
						if (bLocal_49)
						{
							iLocal_47 = 1;
						}
						break;
					
					case 1:
						func_147();
						if (iLocal_68 > 3)
						{
							if (!iLocal_91 && !func_146())
							{
								func_145(&uLocal_154, "REDO2AU", "REDO2_THK", 4, 0, 0, 0);
								iLocal_91 = 1;
							}
						}
						switch (iLocal_48)
						{
							case 0:
								func_141();
								iLocal_48 = 1;
								break;
							
							case 1:
								if (!iLocal_98)
								{
									if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -467.0595f, 540.1724f, 125.3034f, 91.875f, 90.875f, 30f, 0, 1, 0) && CAM::IS_SPHERE_VISIBLE(Local_105, 1f)) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 20f, 20f, 20f, 0, 1, 0))
									{
										func_140();
										func_131(1);
										iLocal_98 = 1;
									}
								}
								else
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_105, 50f, 50f, 50f, 0, 1, 0))
									{
										func_129();
									}
									if (!PED::IS_PED_INJURED(iLocal_57))
									{
										if (!ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_62, 30f, 30f, 30f, 0, 1, 0))
										{
											iLocal_48 = 11;
										}
									}
								}
								break;
							
							case 3:
								func_127();
								if (iLocal_67 > 18)
								{
									func_126();
								}
								else if (!func_146())
								{
									func_126();
								}
								break;
							
							case 7:
								func_127();
								func_122();
								break;
							
							case 4:
								func_127();
								func_75();
								if (func_74(Local_111))
								{
									func_56(0);
									func_54();
									SYSTEM::WAIT(0);
									func_145(&uLocal_154, "REDO2AU", "REDO2_CULT", 4, 0, 0, 0);
								}
								if (func_52())
								{
									func_56(0);
									func_54();
									SYSTEM::WAIT(0);
									func_145(&uLocal_154, "REDO2AU", "REDO2_NEAR", 4, 0, 0, 0);
								}
								if (!iLocal_88)
								{
									if (func_51())
									{
										if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, 23f, 60f, 20f, 0, 1, 0))
										{
											func_56(0);
											func_54();
											SYSTEM::WAIT(0);
											if (!func_146())
											{
												func_145(&uLocal_154, "REDO2AU", "REDO2_DRP", 4, 0, 0, 0);
												iLocal_88 = 1;
											}
										}
									}
								}
								break;
							
							case 11:
								func_50();
								break;
						}
						if (!PED::IS_PED_INJURED(iLocal_56))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "f_attack_end", 3))
							{
								func_48(iLocal_56, "WHIMPER", "WAVELOAD_PAIN_FEMALE", 24);
							}
						}
						if ((func_47() && !func_46()) && iLocal_47 != 2)
						{
							if (!PED::IS_PED_INJURED(iLocal_57))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_117, 5f, 5f, 5f, 0, 1, 0))
								{
									if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
									{
										iLocal_120[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
										ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_57, PED::GET_PED_BONE_INDEX(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
									}
									func_45(0);
									SYSTEM::WAIT(0);
									func_54();
									iLocal_47 = 2;
								}
							}
						}
						if (func_44())
						{
							func_50();
						}
						break;
					
					case 2:
						if (func_43())
						{
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
							{
								PED::DELETE_PED(&iLocal_57);
							}
							func_14();
						}
						break;
					
					case 3:
						func_1();
						break;
					}
			}
		}
		else
		{
			func_217();
		}
	}
}

void func_1()//Position - 0x4A7
{
	int iVar0;
	
	if (iLocal_149 && !iLocal_148)
	{
		func_3(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_2();
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
		{
			uLocal_132 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_weapon_golfclub"), ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1), ENTITY::GET_ENTITY_ROTATION(iLocal_120[8], 2) + Vector(2.8157f, -159.5768f, -14.1956f), 0, -1, 2, 1, 0);
			OBJECT::DELETE_OBJECT(&(iLocal_120[8]));
		}
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 1, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_151, 1862763509);
		if (bLocal_58)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_104))
		{
			HUD::REMOVE_BLIP(&uLocal_104);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_101[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_57);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		iLocal_148 = 1;
	}
	if ((!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_62, 80f, 80f, 80f, 0, 1, 0) || OBJECT::HAS_PICKUP_BEEN_COLLECTED(uLocal_132)) || !(ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]) && !OBJECT::DOES_PICKUP_EXIST(uLocal_132)))
	{
		func_217();
	}
}

void func_2()//Position - 0x692
{
	Global_24678 = 0;
	Global_24679 = 0;
	Global_24681 = 0;
	Global_24682 = 0;
	Global_24683 = 0;
}

void func_3(bool bParam0)//Position - 0x6AE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		func_4(iVar0, bParam0);
		iVar0++;
	}
}

void func_4(int iParam0, bool bParam1)//Position - 0x6D1
{
	if (bParam1)
	{
		if (!func_13(iParam0, 2, 1))
		{
			func_12(iParam0, 2, 1);
		}
	}
	else if (func_13(iParam0, 2, 1))
	{
		func_5(iParam0, 2, 1);
	}
}

void func_5(int iParam0, int iParam1, bool bParam2)//Position - 0x708
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::CLEAR_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			MISC::CLEAR_BIT(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

void func_6(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x770
{
	int iVar0;
	
	iVar0 = Global_2454605[iParam0 /*6*/][func_7(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, uParam1, iParam3);
	}
}

int func_7(var uParam0)//Position - 0x79B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_8();
		if (iVar1 > -1)
		{
			Global_2454318 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2454318 = 1;
		}
	}
	return iVar0;
}

int func_8()//Position - 0x7CF
{
	return Global_1312737;
}

int func_9(int iParam0, int iParam1, int iParam2)//Position - 0x7DB
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2454605[iParam0 /*6*/][func_7(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x80D
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

int func_11()//Position - 0xAB6
{
	return Global_24444;
}

void func_12(int iParam0, int iParam1, bool bParam2)//Position - 0xAC1
{
	var uVar0;
	
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_90014.f_1267[iParam0]), iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			uVar0 = func_9(func_10(iParam0), -1, 0);
			MISC::SET_BIT(&uVar0, iParam1);
			func_6(func_10(iParam0), uVar0, -1, 1);
		}
	}
	else
	{
		MISC::SET_BIT(&(Global_97353.f_668[iParam0]), iParam1);
	}
}

int func_13(int iParam0, int iParam1, bool bParam2)//Position - 0xB29
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_90014.f_1267[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_11() == 0)
		{
			return MISC::IS_BIT_SET(func_9(func_10(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_97353.f_668[iParam0], iParam1);
	}
	return 0;
}

void func_14()//Position - 0xB89
{
	while (func_146())
	{
		SYSTEM::WAIT(0);
	}
	while (!func_42())
	{
		SYSTEM::WAIT(0);
	}
	Global_97353.f_16828.f_383 = func_41() + 1;
	func_18(-1, 0);
	func_15();
	iLocal_47 = 3;
}

void func_15()//Position - 0xBCD
{
	func_16();
}

int func_16()//Position - 0xBDA
{
	if (func_17(0))
	{
		return 0;
	}
	if (Global_90001.f_8)
	{
		if (Global_90001.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_90001.f_10 > 1)
	{
		return 0;
	}
	Global_90001.f_10++;
	return 1;
}

bool func_17(bool bParam0)//Position - 0xC25
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_68493, 0);
}

void func_18(int iParam0, int iParam1)//Position - 0xC50
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam1 <= func_38(iParam0))
	{
		func_37(iParam0, iParam1);
		if (!func_36(51))
		{
			func_27("RE_REWARD", 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
		if (func_25(iParam0))
		{
			Global_97353.f_28192.f_2 = 3;
		}
		if (func_24(iParam0, iParam1) != 322)
		{
			func_20(func_24(iParam0, iParam1), Local_43.x, Local_43.f_1);
		}
		Global_97341 = iParam1;
		if (Global_97339 == 0)
		{
			if (((Global_97342 == 1 || Global_97342 == 5) || Global_97342 == 11) || Global_97342 == 25)
			{
				func_19(2);
			}
			else if ((Global_97342 == 26 || Global_97342 == 8) || Global_97342 == 17)
			{
				func_19(7);
			}
			else
			{
				func_19(1);
			}
		}
	}
}

void func_19(int iParam0)//Position - 0xD53
{
	Global_97339 = iParam0;
}

void func_20(int iParam0, var uParam1, var uParam2)//Position - 0xD61
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
		func_23((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_97353.f_8448[iParam0 /*12*/].f_6 == 11 || Global_97353.f_8448[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_97353.f_8448[iParam0 /*12*/].f_5 = 1;
		Global_97353.f_8448[iParam0 /*12*/].f_10 = uParam1;
		Global_97353.f_8448[iParam0 /*12*/].f_11 = uParam2;
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
		func_21();
	}
}

void func_21()//Position - 0xE49
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
	Global_97089 = 0;
	Global_97090 = 0;
	Global_97091 = 0;
	Global_97092 = 0;
	Global_97093 = 0;
	Global_97094 = 0;
	Global_97095 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_97353.f_8448.f_3853;
	Global_97353.f_8448.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_97353.f_8448[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_97353.f_8448[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_97089++;
					fVar1 = (fVar1 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_97090++;
					fVar2 = (fVar2 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_97091++;
					fVar3 = (fVar3 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_97092++;
					fVar4 = (fVar4 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_97093++;
					fVar5 = (fVar5 + (Global_97353.f_8448[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_97094++;
					fVar6 = (fVar6 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_97095++;
					fVar7 = (fVar7 + Global_97353.f_8448[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_97072 > 0)
	{
		if (Global_97089 == Global_97072)
		{
			fVar1 = 55f;
		}
	}
	if (Global_97073 > 0)
	{
		if (Global_97090 == Global_97073)
		{
			fVar2 = 10f;
		}
	}
	if (Global_97074 > 0)
	{
		if (Global_97091 == Global_97074)
		{
			fVar3 = 0f;
		}
	}
	if (Global_97075 > 0)
	{
		if (Global_97092 == Global_97075)
		{
			fVar4 = 10f;
		}
	}
	if (Global_97076 > 0)
	{
		if (((Global_97093 == Global_97076 || (Global_97076 * 10 / Global_97093) < 41) || Global_97093 > Global_97079) || Global_97093 == Global_97079)
		{
			if (!MISC::IS_BIT_SET(Global_97353.f_8448.f_3856, 14))
			{
				if (Global_97093 == Global_97076)
				{
					STATS::_UPDATE_STAT_INT(joaat("num_rndevents_completed"), Global_97076, 0);
					MISC::SET_BIT(&(Global_97353.f_8448.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_97077 > 0)
	{
		if (Global_97094 == Global_97077)
		{
			fVar6 = 15f;
		}
	}
	if (Global_97078 > 0)
	{
		if (Global_97095 == Global_97078)
		{
			fVar7 = 5f;
		}
	}
	Global_97353.f_8448.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_97093 > Global_97079 || Global_97093 == Global_97079)
	{
		iVar9 = Global_97079;
	}
	else
	{
		iVar9 = Global_97093;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_97089, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_97072, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_97090, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_97073, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_97091, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_97074, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_97092, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_97075, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_97079, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_97095 + Global_97094), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_97078 + Global_97077), 1);
	Global_97096 = (Global_97089 * 100 / Global_97072);
	Global_97098 = ((Global_97091 + Global_97090) * 100 / (Global_97074 + Global_97073));
	Global_97097 = ((Global_97092 + iVar9) * 100 / (Global_97075 + Global_97079));
	Global_97099 = ((Global_97094 + Global_97095) * 100 / (Global_97077 + Global_97078));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_97353.f_8448.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_97096, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_97097, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_97098, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_97353.f_8448.f_3853))
	{
		func_22(13, SYSTEM::FLOOR(Global_97353.f_8448.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_68245)
		{
			if (func_11() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_97087 = 0;
				}
				if (!Global_54750)
				{
					func_16();
				}
			}
		}
	}
}

int func_22(int iParam0, int iParam1)//Position - 0x130A
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

int func_23(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x135B
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
		iParam2 = func_8();
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

int func_24(int iParam0, int iParam1)//Position - 0x15B6
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

int func_25(int iParam0)//Position - 0x192A
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

void func_26(int iParam0)//Position - 0x1959
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
		MISC::SET_BIT(&(Global_97353.f_23635.f_150[iVar1]), iVar0);
	}
}

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x199B
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_28(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x19BB
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
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_97353.f_23635[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_97353.f_23635.f_145 < 9)
	{
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_4), sParam1, 16);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_9 = iParam5;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_11 = iParam6;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_12 = uParam2;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_13 = iParam7;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_14 = iParam8;
		Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_97353.f_23635[Global_97353.f_23635.f_145 /*16*/].f_10 = -1;
		}
		Global_97353.f_23635.f_145++;
		func_29();
	}
}

void func_29()//Position - 0x1B8D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_97353.f_23635.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_97353.f_23635.f_145)
	{
		if (MISC::IS_BIT_SET(Global_97353.f_23635[iVar0 /*16*/].f_11, 0))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[0])
			{
				Global_97353.f_23635.f_146[0] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_97353.f_23635[iVar0 /*16*/].f_11, 1))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[1])
			{
				Global_97353.f_23635.f_146[1] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_97353.f_23635[iVar0 /*16*/].f_11, 2))
		{
			if (Global_97353.f_23635[iVar0 /*16*/].f_12 > Global_97353.f_23635.f_146[2])
			{
				Global_97353.f_23635.f_146[2] = Global_97353.f_23635[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_30()//Position - 0x1CAD
{
	func_31();
	switch (Global_97353.f_1729.f_539.f_3213)
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

void func_31()//Position - 0x1CF3
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_97353.f_1729.f_539.f_3213) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_34(PLAYER::PLAYER_PED_ID());
			if (func_33(iVar0) && (!func_32(14) || Global_96306))
			{
				if (Global_97353.f_1729.f_539.f_3213 != iVar0 && func_33(Global_97353.f_1729.f_539.f_3213))
				{
					Global_97353.f_1729.f_539.f_3214 = Global_97353.f_1729.f_539.f_3213;
				}
				Global_97353.f_1729.f_539.f_3215 = iVar0;
				Global_97353.f_1729.f_539.f_3213 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_97353.f_1729.f_539.f_3213 != 145)
			{
				Global_97353.f_1729.f_539.f_3215 = Global_97353.f_1729.f_539.f_3213;
			}
			return;
		}
	}
	Global_97353.f_1729.f_539.f_3213 = 145;
}

bool func_32(int iParam0)//Position - 0x1DF0
{
	return Global_34913 == iParam0;
}

bool func_33(int iParam0)//Position - 0x1DFE
{
	return iParam0 < 3;
}

int func_34(int iParam0)//Position - 0x1E0A
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_35(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_35(int iParam0)//Position - 0x1E47
{
	if (func_33(iParam0))
	{
		return Global_97353.f_29774[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_36(int iParam0)//Position - 0x1E71
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
		return MISC::IS_BIT_SET(Global_97353.f_23635.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_37(int iParam0, int iParam1)//Position - 0x1EB4
{
	MISC::SET_BIT(&(Global_97353.f_28192.f_8[iParam0]), iParam1);
}

int func_38(int iParam0)//Position - 0x1ECF
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

int func_39()//Position - 0x1F80
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_40(Var0);
	return uVar16;
}

int func_40(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)//Position - 0x1F9D
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

int func_41()//Position - 0x2177
{
	return (Global_97353.f_8270.f_21 + Global_97353.f_16828.f_380);
}

int func_42()//Position - 0x2193
{
	return 1;
}

int func_43()//Position - 0x219C
{
	if (Global_24679)
	{
		func_19(4);
		return 1;
	}
	return 0;
}

int func_44()//Position - 0x21B4
{
	if (PED::IS_PED_INJURED(iLocal_56) && PED::IS_PED_INJURED(iLocal_57))
	{
		return 1;
	}
	return 0;
}

void func_45(int iParam0)//Position - 0x21D5
{
	Global_16703 = iParam0;
}

int func_46()//Position - 0x21E2
{
	if (Global_97353.f_28192.f_5 == 1000)
	{
		return 1;
	}
	return 0;
}

bool func_47()//Position - 0x21FE
{
	return Global_24678;
}

void func_48(int iParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0x2209
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(iParam0, sParam1, sParam2, func_49(iParam3), 0);
}

int func_49(int iParam0)//Position - 0x2222
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

void func_50()//Position - 0x2412
{
	iLocal_47 = 3;
}

int func_51()//Position - 0x241D
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iLocal_150 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_150, 0))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iLocal_57, iLocal_150))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_52()//Position - 0x2460
{
	if (func_53() == 2)
	{
		if (func_47())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				if (!Global_24683)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_24683 = 1;
					if (!Global_24682)
					{
						Global_24682 = 1;
						return 1;
					}
				}
			}
			else if (Global_24683)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_24683 = 0;
			}
		}
	}
	return 0;
}

int func_53()//Position - 0x24DB
{
	func_31();
	return Global_97353.f_1729.f_539.f_3213;
}

void func_54()//Position - 0x24F4
{
	Global_14558 = 0;
	func_55();
}

void func_55()//Position - 0x2504
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
	}
}

void func_56(bool bParam0)//Position - 0x2525
{
	if (bParam0)
	{
		if (iLocal_70)
		{
			if (func_63(&uLocal_154, "REDO2AU", &Local_77, &Local_71, 8, 0, 0))
			{
				iLocal_70 = 0;
			}
		}
	}
	else if ((!iLocal_70 && AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) && !func_61())
	{
		Local_77 = { func_60() };
		Local_71 = { func_59() };
		func_57();
		iLocal_70 = 1;
	}
}

void func_57()//Position - 0x2581
{
	Global_14558 = 0;
	func_58();
}

void func_58()//Position - 0x2591
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_16703 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

struct<6> func_59()//Position - 0x25B5
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		iVar6 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16702);
		if (iVar6 > -1)
		{
			return Global_14560[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

struct<6> func_60()//Position - 0x25FB
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15692 == 4)
	{
		return Global_15311;
	}
	return Var0;
}

int func_61()//Position - 0x261F
{
	if (((((((func_62("REDO2_DRP") || func_62("REDO2_UV")) || func_62("REDO2_UV2")) || func_62("REDO2_CULT")) || func_62("REDO2_NEAR")) || func_62("REDO2_GETOUT")) || func_62("REDO2_JACK")) || func_62("REDO2_SHOOT"))
	{
		return 1;
	}
	return 0;
}

int func_62(char* sParam0)//Position - 0x2696
{
	var uVar0;
	
	if (func_146())
	{
		MemCopy(&uVar0, {func_60()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_63(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x26BE
{
	func_73(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15699 = 0;
	Global_15706 = 0;
	Global_15701 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 1;
	StringCopy(&Global_16696, sParam3, 24);
	Global_2621441 = 0;
	return func_64(sParam2, iParam4, 0);
}

int func_64(char* sParam0, int iParam1, bool bParam2)//Position - 0x2712
{
	Global_15693 = 0;
	if (Global_15692 == 0 || Global_15694 == 2)
	{
		if (Global_15692 != 0)
		{
			if (iParam1 > Global_15694)
			{
				if (Global_15699 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(0);
					Global_14393.f_1 = 3;
					Global_15692 = 0;
					Global_15693 = 1;
					Global_15745 = 0;
					Global_15688 = 0;
					Global_15689 = 0;
					Global_15703 = 0;
					Global_15702 = 0;
					Global_14392 = 0;
				}
				else
				{
					func_72();
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
		if (func_71(8, -1))
		{
			return 0;
		}
		Global_15768 = { Global_15762 };
		func_70();
		Global_14981 = { Global_15146 };
		Global_15698 = Global_15699;
		Global_15705 = Global_15706;
		Global_2621442 = Global_2621441;
		Global_15707 = { Global_15723 };
		Global_15700 = Global_15701;
		Global_16682 = Global_16683;
		Global_16690 = { Global_16696 };
		Global_16684 = Global_16685;
		Global_16686 = Global_16687;
		Global_16688 = Global_16689;
		Global_15311.f_370 = Global_16681;
		Global_15311.f_368 = Global_16679;
		Global_15311.f_369 = Global_16680;
		Global_15688 = Global_15689;
		if (Global_15698)
		{
			MISC::CLEAR_BIT(&Global_2263, 20);
			MISC::CLEAR_BIT(&Global_2264, 17);
			MISC::CLEAR_BIT(&Global_2265, 0);
			if (bParam2)
			{
				func_69();
				if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14393.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14359 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_68())
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
				if (!Global_68245)
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
			if (func_67())
			{
				return 0;
			}
			else
			{
				switch (Global_14393.f_1)
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
				if (MISC::IS_BIT_SET(Global_2263, 9))
				{
					return 0;
				}
			}
			func_66();
			Global_15702 = bParam2;
		}
		Global_15694 = iParam1;
		StringCopy(&Global_15311, sParam0, 24);
		Global_14558 = 0;
		func_65();
		return 1;
	}
	if (Global_15692 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15694 || iParam1 == Global_15694)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_72();
	}
	return 0;
}

void func_65()//Position - 0x29DE
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14560[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(0);
	Global_15692 = 1;
}

void func_66()//Position - 0x2A0E
{
	Global_15745 = Global_15744;
	Global_15739 = Global_15740;
	Global_15786 = { Global_15774 };
	Global_15792 = { Global_15780 };
	Global_15747 = Global_15746;
	Global_15816 = { Global_15798 };
	Global_15822 = { Global_15804 };
	Global_15828 = { Global_15810 };
	Global_15834 = { Global_15840 };
	Global_1578 = Global_1579;
	Global_1580 = Global_1581;
	Global_15703 = Global_15704;
	Global_15705 = Global_15706;
	Global_15707 = { Global_15723 };
	Global_15696 = Global_15697;
	Global_16708 = 0;
	Global_15741 = 0;
	Global_15742 = 0;
	MISC::CLEAR_BIT(&Global_2264, 16);
}

int func_67()//Position - 0x2AA3
{
	if (Global_14393.f_1 == 1 || Global_14393.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_68()//Position - 0x2ACA
{
	int iVar0;
	int iVar1;
	
	if (Global_68245)
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

void func_69()//Position - 0x2B63
{
	if (func_32(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_97353.f_29774[0 /*29*/])
			{
				Global_14393 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_97353.f_29774[1 /*29*/])
			{
				Global_14393 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_97353.f_29774[2 /*29*/])
			{
				Global_14393 = 2;
			}
			else
			{
				Global_14393 = 0;
			}
		}
	}
	else
	{
		Global_14393 = func_53();
		if (Global_14393 == 145)
		{
			Global_14393 = 3;
		}
		if (Global_68245)
		{
			Global_14393 = 3;
		}
		if (Global_14393 > 3)
		{
			Global_14393 = 3;
		}
	}
}

void func_70()//Position - 0x2C04
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_14981[iVar0 /*10*/] = 0;
		StringCopy(&(Global_14981[iVar0 /*10*/].f_1), "", 24);
		Global_14981[iVar0 /*10*/].f_7 = 0;
		Global_14981[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_14981.f_161 = -99;
	Global_14981.f_162 = { 0f, 0f, 0f };
}

bool func_71(int iParam0, int iParam1)//Position - 0x2C5A
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1327593.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1327593.f_949, iParam0);
}

void func_72()//Position - 0x2C95
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16703 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14393.f_1 == 9) || Global_14392 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(0);
		Global_15692 = 6;
		Global_14393.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(1);
		Global_15692 = 6;
		return;
	}
}

void func_73(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2CEC
{
	Global_15146 = { *uParam0 };
	Global_1579 = iParam1;
	StringCopy(&Global_15762, sParam2, 24);
	Global_16681 = iParam5;
	if (iParam3 == 0)
	{
		Global_16679 = 1;
		Global_16677 = 0;
	}
	else
	{
		Global_16679 = 0;
		Global_16677 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16680 = 1;
		Global_16678 = 0;
	}
	else
	{
		Global_16680 = 0;
		Global_16678 = 1;
	}
}

int func_74(struct<3> Param0)//Position - 0x2D42
{
	if (func_53() == 2)
	{
		if (func_47() && !Global_24681)
		{
			if (fLocal_46 == -1f)
			{
				fLocal_46 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0);
			}
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Param0) > (fLocal_46 + 200f) || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.154f, 4881.411f, 245.0001f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 0), 1) < 400f)
			{
				Global_24681 = 1;
				return 1;
			}
		}
	}
	return 0;
}

void func_75()//Position - 0x2DCF
{
	switch (iLocal_69)
	{
		case 0:
			if (iLocal_67 > 18)
			{
				iLocal_69++;
			}
			else if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_57, 1f);
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, 0, 1, 0))
				{
					if (iLocal_67 < 19)
					{
						if (func_145(&uLocal_154, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
						{
							iLocal_69++;
						}
					}
					else
					{
						iLocal_69++;
					}
				}
			}
			break;
		
		case 1:
			func_118();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 0))
					{
						if (PED::IS_PED_GETTING_INTO_A_VEHICLE(iLocal_57))
						{
							OBJECT::DELETE_OBJECT(&(iLocal_120[8]));
						}
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iLocal_57))
					{
						func_116();
						func_110();
						if (func_145(&uLocal_154, "REDO2AU", "REDO2_TO", 4, 0, 0, 0))
						{
							SYSTEM::SETTIMERB(0);
							iLocal_69++;
						}
					}
					else
					{
						PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_57, 1f);
					}
				}
			}
			break;
		
		case 2:
			func_110();
			func_109();
			func_118();
			func_108();
			if (SYSTEM::TIMERB() > 1500)
			{
				func_107();
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_111, 10f, 10f, 10f, 0, 1, 0))
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_111, Global_18, 1, 1, 0) && func_106(1, 0, 1))
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_99))
						{
							HUD::REMOVE_BLIP(&uLocal_99);
						}
						if (HUD::DOES_BLIP_EXIST(uLocal_100))
						{
							HUD::REMOVE_BLIP(&uLocal_100);
						}
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
						{
							VEHICLE::BRING_VEHICLE_TO_HALT(PED::GET_VEHICLE_PED_IS_IN(iLocal_57, 0), 10.5f, 3, 0);
							iLocal_69++;
						}
						else
						{
							iLocal_69 = 4;
						}
					}
				}
			}
			break;
		
		case 3:
			func_105();
			if (bLocal_144)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				func_14();
			}
			break;
		
		case 4:
			func_76();
			if (bLocal_144)
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
				func_14();
			}
			break;
	}
}

void func_76()//Position - 0x2FD4
{
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_57();
			if (func_145(&uLocal_154, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_142++;
			}
			break;
		
		case 1:
			iLocal_142++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_114, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				PED::SET_PED_KEEP_TASK(iLocal_57, 1);
				iLocal_143 = MISC::GET_GAME_TIMER() + 4000;
				iLocal_142++;
			}
			break;
		
		case 3:
			if (iLocal_143 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_142++;
			}
			break;
		
		case 4:
			if (!func_146())
			{
				func_104("DOM_GOLF", -1);
				func_103(&(Global_97353.f_17233), 16);
				if (func_53() == 0)
				{
					func_102(&(Global_97353.f_17233.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_102(&(Global_97353.f_17233.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_102(&(Global_97353.f_17233.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_142++;
			}
			break;
		
		case 5:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_144 = true;
			}
			break;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3160
{
	int iVar0;
	int iVar1;
	
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_97353.f_29774[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_78(Global_97353.f_29774[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STATS::STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3247
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_101();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_100(99, 1);
					func_99(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_86(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_85(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_85(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 97:
				case 98:
				case 99:
				case 100:
				case 102:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
					switch (iParam0)
					{
						case 0:
							func_99(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_99(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_99(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_85(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_99(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_99(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_99(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_84(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_100(95, iParam3);
					break;
				
				case 1:
					func_100(97, iParam3);
					break;
				
				case 2:
					func_100(96, iParam3);
					break;
			}
			func_100(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_81(iVar1);
	}
	iVar5 = (Global_51925[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_51925[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_51925[iVar2] = 2147483647;
				}
				else
				{
					Global_51925[iVar2] = (Global_51925[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_99(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_99(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_99(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_51925[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_51925[iVar2];
			Global_51925[iVar2] = (Global_51925[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_2[Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_97353.f_23789.f_233[iVar2 /*69*/]++;
		Global_97353.f_23789.f_233[iVar2 /*69*/].f_1++;
		if (Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_97353.f_23789.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_80(iParam0);
	if (Global_34913 == 15)
	{
		func_79(0);
	}
	return 1;
}

void func_79(bool bParam0)//Position - 0x3846
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_97353.f_23789.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_51933[iVar0 /*3*/][0] = Global_97353.f_23789[iVar0];
		Global_51933.f_31[iVar0 /*3*/][0] = Global_97353.f_23789.f_11[iVar0];
		Global_51933.f_62[iVar0 /*3*/][0] = Global_97353.f_23789.f_22[iVar0];
		Global_51933.f_93[iVar0 /*3*/][0] = Global_97353.f_23789.f_33[iVar0];
		Global_51933.f_124[iVar0 /*3*/][0] = Global_97353.f_23789.f_44[iVar0];
		Global_51933.f_155[iVar0 /*3*/][0] = Global_97353.f_23789.f_55[iVar0];
		Global_51933.f_186[iVar0 /*3*/][0] = Global_97353.f_23789.f_66[iVar0];
		Global_51933.f_217[iVar0 /*3*/][0] = Global_97353.f_23789.f_77[iVar0];
		Global_51933.f_248[iVar0 /*3*/][0] = Global_97353.f_23789.f_88[iVar0];
		if (!bParam0)
		{
			Global_51933[iVar0 /*3*/][1] = Global_97353.f_23789[iVar0];
			Global_51933.f_31[iVar0 /*3*/][1] = Global_97353.f_23789.f_11[iVar0];
			Global_51933.f_62[iVar0 /*3*/][1] = Global_97353.f_23789.f_22[iVar0];
			Global_51933.f_93[iVar0 /*3*/][1] = Global_97353.f_23789.f_33[iVar0];
			Global_51933.f_124[iVar0 /*3*/][1] = Global_97353.f_23789.f_44[iVar0];
			Global_51933.f_155[iVar0 /*3*/][1] = Global_97353.f_23789.f_55[iVar0];
			Global_51933.f_186[iVar0 /*3*/][1] = Global_97353.f_23789.f_66[iVar0];
			Global_51933.f_217[iVar0 /*3*/][1] = Global_97353.f_23789.f_77[iVar0];
			Global_51933.f_248[iVar0 /*3*/][1] = Global_97353.f_23789.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_80(int iParam0)//Position - 0x3AC8
{
	int iVar0;
	
	iVar0 = Global_51925[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_81(int iParam0)//Position - 0x3B22
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_97353.f_23789.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_97353.f_23789.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_97353.f_23789.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_83() /*8053*/].f_5756.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_97353.f_23789.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_83() /*8053*/].f_5756.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_82(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_82(int iParam0)//Position - 0x3BE3
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		default:
	}
	return "";
}

int func_83()//Position - 0x3C5C
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0)//Position - 0x3C69
{
	func_100(93, iParam0);
	func_100(29, iParam0);
	func_100(30, iParam0);
}

bool func_85(int iParam0)//Position - 0x3C89
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_97353.f_23789.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_83() /*8053*/].f_5756.f_10, iParam0);
}

int func_86(bool bParam0)//Position - 0x3CC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_22(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_87(27, 1);
	return 1;
}

int func_87(int iParam0, int iParam1)//Position - 0x3D7C
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_88(iParam0, iParam1);
}

int func_88(int iParam0, int iParam1)//Position - 0x3D97
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_24690 != 0 && !Global_68245)
	{
		return 0;
	}
	if (func_98(&Global_2544859))
	{
		if (func_96(&Global_2544859, iParam0))
		{
			return 0;
		}
		if (func_89(&Global_2544859, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_89(var uParam0, int iParam1)//Position - 0x3E1B
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	func_92(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_90(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_90(var uParam0, int iParam1)//Position - 0x3EA1
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_96(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_91(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_91(var uParam0, int iParam1)//Position - 0x3EF1
{
	return (*uParam0)[iParam1] == 61;
}

void func_92(var uParam0)//Position - 0x3F02
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_95(uParam0, iVar0);
		iVar0++;
	}
	func_93(&(uParam0->f_62), (8f - 0.5f));
}

void func_93(var uParam0, float fParam1)//Position - 0x3F39
{
	uParam0->f_1 = (func_94(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_94(bool bParam0)//Position - 0x3F67
{
	int iVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(iVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_95(var uParam0, int iParam1)//Position - 0x3FAF
{
	(*uParam0)[iParam1] = 61;
}

bool func_96(var uParam0, int iParam1)//Position - 0x3FBF
{
	return func_97(uParam0, iParam1) != -1;
}

int func_97(var uParam0, int iParam1)//Position - 0x3FD1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_98(var uParam0)//Position - 0x3FFE
{
	return uParam0->f_68 == 1;
}

void func_99(int iParam0, int iParam1)//Position - 0x400E
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_100(int iParam0, int iParam1)//Position - 0x4031
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_50493[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_50493[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_50493[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_101()//Position - 0x408E
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_51925[0] == iVar0)
		{
			Global_51925[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_51925[1] == iVar0)
		{
			Global_51925[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_51925[2] == iVar0)
		{
			Global_51925[2] = iVar0;
		}
	}
}

void func_102(var uParam0, int iParam1)//Position - 0x4103
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_103(var uParam0, int iParam1)//Position - 0x4114
{
	uParam0->f_23 = (uParam0->f_23 || iParam1);
}

void func_104(char* sParam0, int iParam1)//Position - 0x4127
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_105()//Position - 0x413E
{
	switch (iLocal_142)
	{
		case 0:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			func_57();
			if (func_145(&uLocal_154, "REDO2AU", "REDO2_BY", 4, 0, 0, 0))
			{
				iLocal_142++;
			}
			break;
		
		case 1:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_142++;
			break;
		
		case 2:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			iLocal_142++;
			break;
		
		case 3:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 7000, 2048, 2);
				TASK::TASK_PAUSE(0, 300);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_114, 1f, -1, 0.25f, 0, 311.3569f);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING", 0, 1);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				PED::SET_PED_KEEP_TASK(iLocal_57, 1);
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
				{
					iLocal_120[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_57, PED::GET_PED_BONE_INDEX(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
				}
				iLocal_143 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_142++;
			}
			break;
		
		case 4:
			HUD::CLEAR_ALL_HELP_MESSAGES();
			if (iLocal_143 < MISC::GET_GAME_TIMER())
			{
				if (!PED::IS_PED_INJURED(iLocal_57))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
					iLocal_143 = MISC::GET_GAME_TIMER() + 3000;
					iLocal_142++;
				}
			}
			break;
		
		case 5:
			if (iLocal_143 < MISC::GET_GAME_TIMER())
			{
				HUD::CLEAR_ALL_HELP_MESSAGES();
				iLocal_142++;
			}
			break;
		
		case 6:
			if (!func_146())
			{
				func_104("DOM_GOLF", -1);
				func_103(&(Global_97353.f_17233), 16);
				if (func_53() == 0)
				{
					func_102(&(Global_97353.f_17233.f_24), 1);
				}
				else if (func_53() == 1)
				{
					func_102(&(Global_97353.f_17233.f_24), 4);
				}
				else if (func_53() == 2)
				{
					func_102(&(Global_97353.f_17233.f_24), 2);
				}
				func_77(func_53(), 1, 80, 0, 1);
				SYSTEM::SETTIMERA(0);
				iLocal_142++;
			}
			break;
		
		case 7:
			if (SYSTEM::TIMERA() > 5000)
			{
				bLocal_144 = true;
			}
			break;
	}
}

int func_106(bool bParam0, bool bParam1, bool bParam2)//Position - 0x4387
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_107()//Position - 0x4467
{
	if (!func_61())
	{
		func_56(1);
	}
	if (!func_146())
	{
		switch (iLocal_140)
		{
			case 0:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHTM", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHTF", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHTT", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 1:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT2", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 2:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT2M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT2F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT2T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 3:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT3", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 4:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT3M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT3F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT3T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 5:
				func_145(&uLocal_154, "REDO2AU", "REDO_CHT4", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 6:
				iLocal_141 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_140++;
				break;
			
			case 7:
				if (iLocal_141 < MISC::GET_GAME_TIMER())
				{
					if (func_53() == 0)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO_CHT4M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO_CHT4F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO_CHT4T", 4, 0, 0, 0);
					}
					iLocal_140++;
				}
				break;
			
			case 8:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT5", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 9:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT5M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT5F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT5T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 10:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT6", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 11:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT6M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT6F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT6T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 12:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT7", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 13:
				iLocal_141 = MISC::GET_GAME_TIMER() + 600;
				iLocal_140++;
				break;
			
			case 14:
				if (iLocal_141 < MISC::GET_GAME_TIMER())
				{
					if (func_53() == 0)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_CHT7M", 4, 0, 0, 0);
					}
					else if (func_53() == 1)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_CHT7F", 4, 0, 0, 0);
					}
					else if (func_53() == 2)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_CHT7T", 4, 0, 0, 0);
					}
					iLocal_140++;
				}
				break;
			
			case 15:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT8", 4, 0, 0, 0);
				iLocal_140++;
				break;
			
			case 16:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT8M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT8F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT8T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 17:
				iLocal_141 = MISC::GET_GAME_TIMER() + 800;
				iLocal_140++;
				break;
			
			case 18:
				if (iLocal_141 < MISC::GET_GAME_TIMER())
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT9", 4, 0, 0, 0);
					iLocal_140++;
				}
				break;
			
			case 19:
				if (func_53() == 0)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT9M", 4, 0, 0, 0);
				}
				else if (func_53() == 1)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT9F", 4, 0, 0, 0);
				}
				else if (func_53() == 2)
				{
					func_145(&uLocal_154, "REDO2AU", "REDO2_CHT9T", 4, 0, 0, 0);
				}
				iLocal_140++;
				break;
			
			case 20:
				func_145(&uLocal_154, "REDO2AU", "REDO2_CHT10", 4, 0, 0, 0);
				iLocal_140++;
				break;
			}
	}
}

void func_108()//Position - 0x4992
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (!iLocal_83)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) && PED::IS_PED_IN_VEHICLE(iLocal_57, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
				{
					func_56(0);
					func_54();
					SYSTEM::WAIT(0);
					func_145(&uLocal_154, "REDO2AU", "REDO2_GETOUT", 4, 0, 0, 0);
					iLocal_83 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0) && PED::IS_PED_IN_VEHICLE(iLocal_57, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 0))
			{
				iLocal_83 = 0;
			}
		}
		if (!iLocal_84)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_56(0);
				func_54();
				SYSTEM::WAIT(0);
				func_145(&uLocal_154, "REDO2AU", "REDO2_JACK", 4, 0, 0, 0);
				iLocal_84 = 1;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_84 = 0;
		}
		if (!iLocal_85)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_56(0);
				func_54();
				SYSTEM::WAIT(0);
				func_145(&uLocal_154, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
				iLocal_85 = 1;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			iLocal_85 = 0;
		}
	}
}

void func_109()//Position - 0x4AB7
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_135 == 0)
		{
			iLocal_135 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iLocal_136 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		iLocal_136 = 0;
		iLocal_135 = 0;
	}
	if ((iLocal_136 - iLocal_135) > 60000)
	{
		func_54();
		SYSTEM::WAIT(0);
		func_145(&uLocal_154, "REDO2AU", "REDO2_TX", 4, 0, 0, 0);
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iLocal_57, Local_114, 200f, 200f, 200f, 0, 1, 0))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_57, Local_114, 1f, -1, 0.25f, 0, 1193033728);
			}
			else
			{
				TASK::TASK_WANDER_STANDARD(iLocal_57, 1193033728, 0);
			}
			PED::SET_PED_KEEP_TASK(iLocal_57, 1);
			PED::REMOVE_PED_FROM_GROUP(iLocal_57);
		}
		func_50();
	}
}

void func_110()//Position - 0x4B6F
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 8f, 8f, 8f, 0, 1, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if ((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0)) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(uLocal_101[0]))
				{
					uLocal_101[0] = func_114(iLocal_57, 0, 145);
				}
				if (HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					HUD::REMOVE_BLIP(&uLocal_99);
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_101[0]));
				}
				if (!HUD::DOES_BLIP_EXIST(uLocal_99))
				{
					uLocal_99 = func_112(Local_111, 1);
				}
				if (func_53() == 2 && !func_46())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_100))
					{
						uLocal_100 = func_112(Local_117, 0);
						HUD::SET_BLIP_SPRITE(uLocal_100, 269);
						func_111();
					}
				}
			}
		}
		else
		{
			if (!HUD::DOES_BLIP_EXIST(uLocal_101[0]))
			{
				uLocal_101[0] = func_114(iLocal_57, 0, 145);
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_99))
			{
				HUD::REMOVE_BLIP(&uLocal_99);
			}
		}
	}
}

void func_111()//Position - 0x4C8E
{
	if (func_53() == 2)
	{
		if (!Global_24680)
		{
			func_104("CULT_BLIP_HELP", -1);
			Global_24680 = 1;
		}
	}
}

var func_112(struct<3> Param0, int iParam3)//Position - 0x4CB2
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

float func_113(bool bParam0, float fParam1, float fParam2)//Position - 0x4CDE
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_114(int iParam0, bool bParam1, int iParam2)//Position - 0x4CF5
{
	var uVar0;
	
	uVar0 = func_115(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(uVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_97353.f_29774[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uVar0, &(Global_97353.f_29774[iParam2 /*29*/].f_3));
	}
	return uVar0;
}

int func_115(int iParam0, bool bParam1, bool bParam2)//Position - 0x4D47
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_113(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_116()//Position - 0x4DEB
{
	int iVar0;
	
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
	func_117(&uLocal_154, 4);
	iVar0 = 0;
	while (iVar0 < iLocal_120)
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(iLocal_120[iVar0]));
		iVar0++;
	}
	STREAMING::REMOVE_ANIM_DICT("random@domestic");
}

void func_117(var uParam0, int iParam1)//Position - 0x4E24
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_118()//Position - 0x4E41
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (!func_121())
			{
				if (PED::IS_PED_IN_GROUP(iLocal_57))
				{
					PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) != 0)
				{
					TASK::TASK_GO_TO_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
				}
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_57, 0, 0);
				}
				if (!iLocal_90)
				{
					func_56(0);
					func_54();
					SYSTEM::WAIT(0);
					if (!func_146())
					{
						if (!func_120())
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_90 = 1;
					}
				}
			}
			else
			{
				iLocal_90 = 0;
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) == 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_57, 1227113341) == 0)
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
				}
			}
		}
		else if (!PED::IS_PED_IN_GROUP(iLocal_57))
		{
			PED::SET_PED_AS_GROUP_MEMBER(iLocal_57, func_119());
			PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_57, 1);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_57, 0);
		}
	}
}

var func_119()//Position - 0x4F62
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

int func_120()//Position - 0x4F72
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), 1))
		{
			if ((VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1)))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 1))))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_121()//Position - 0x4FDD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 0))
		{
			if (((((!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("rhino")))
			{
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) >= 1)
				{
					return 1;
				}
			}
		}
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), 0))
		{
			if ((((!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("rhino"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_122()//Position - 0x50FF
{
	switch (iLocal_68)
	{
		case 0:
			if (!func_146())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (func_121())
					{
						if (func_53() == 0)
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_GLM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_GLF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_GLT", 4, 0, 0, 0);
						}
						iLocal_68 = 2;
					}
					else
					{
						if (func_53() == 0)
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
						}
						if (func_53() == 1)
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
						}
						if (func_53() == 2)
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
						}
						iLocal_68++;
					}
				}
				else
				{
					if (func_53() == 0)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_NCM", 4, 0, 0, 0);
					}
					if (func_53() == 1)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_NCF", 4, 0, 0, 0);
					}
					if (func_53() == 2)
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_NCT", 4, 0, 0, 0);
					}
					iLocal_68++;
				}
			}
			break;
		
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (!func_121())
				{
					if (!func_146())
					{
						func_145(&uLocal_154, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
						iLocal_138 = MISC::GET_GAME_TIMER();
						iLocal_68++;
					}
				}
				else
				{
					iLocal_68++;
				}
			}
			else if (!func_146())
			{
				func_145(&uLocal_154, "REDO2AU", "REDO2_WT", 4, 0, 0, 0);
				iLocal_138 = MISC::GET_GAME_TIMER();
				iLocal_68++;
			}
			break;
		
		case 2:
			iLocal_139 = MISC::GET_GAME_TIMER();
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 12f, 12f, 5f, 0, 1, 2))
				{
					if (func_121())
					{
						PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_151, 1862763509);
						if (func_125("REDO2_WT"))
						{
							func_54();
							SYSTEM::WAIT(0);
						}
						iLocal_68++;
					}
					else if (!func_146() && !iLocal_86)
					{
						if (!func_120())
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_UV", 4, 0, 0, 0);
						}
						else
						{
							func_145(&uLocal_154, "REDO2AU", "REDO2_UV2", 4, 0, 0, 0);
						}
						iLocal_86 = 1;
					}
				}
			}
			if (iLocal_138 != 0)
			{
				if ((iLocal_139 - iLocal_138) > 60000)
				{
					if (func_145(&uLocal_154, "REDO2AU", "REDO2_TX", 4, 0, 0, 0))
					{
						SYSTEM::WAIT(2000);
						if (!PED::IS_PED_INJURED(iLocal_57))
						{
							TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
							TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 2000);
							TASK::TASK_USE_MOBILE_PHONE_TIMED(0, -1);
							TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
							TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
							TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
							PED::SET_PED_KEEP_TASK(iLocal_57, 1);
							SYSTEM::WAIT(3000);
							iLocal_48 = 11;
						}
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_57) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				if (iLocal_67 > 18)
				{
				}
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1) + Vector(0f, 0.39f, 0.35f), 1f, -1, 0f, 512, func_124(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1)));
				TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
				TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				SYSTEM::SETTIMERB(0);
				iLocal_68++;
			}
			break;
		
		case 4:
		case 5:
			if (!PED::IS_PED_INJURED(iLocal_57) && !ENTITY::IS_ENTITY_DEAD(iLocal_120[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_57, iLocal_120[8], 0);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_57, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_68 = 7;
					}
				}
				else if (SYSTEM::TIMERB() > 10000 || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_120[8], 1), 1.5f, 1.5f, 3f, 0, 1, 0))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_120[8]))
					{
						TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
						TASK::TASK_PLAY_ANIM(0, "random@domestic", "pickup_low", 2f, -2f, -1, 0, 0, 0, 0, 0);
						TASK::TASK_PLAY_ANIM(0, "random@security_van", "sec_hand_override", 8f, -4f, -1, 33, 0, 0, 0, 0);
						TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
						TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
						iLocal_68 = 6;
					}
				}
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_57) && !ENTITY::IS_ENTITY_DEAD(iLocal_120[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_57, "random@domestic", "pickup_low", 3))
				{
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_57, iLocal_120[8], 0);
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_57, "random@domestic", "pickup_low") > 0.388f)
					{
						iLocal_68++;
					}
				}
			}
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 20f, 20f, 20f, 0, 1, 0))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_57, PED::GET_PED_BONE_INDEX(iLocal_57, 57005), 0f, -0.15f, -0.05f, 70f, 110f, 200f, 1, 0, 0, 0, 2, 1);
					PED::SET_PED_AS_GROUP_MEMBER(iLocal_57, PLAYER::GET_PLAYER_GROUP(PLAYER::PLAYER_ID()));
					PED::SET_PED_NEVER_LEAVES_GROUP(iLocal_57, 1);
					PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(iLocal_57, 0);
					func_123();
					iLocal_48 = 4;
				}
			}
			break;
	}
}

void func_123()//Position - 0x5669
{
	if (!func_46())
	{
		if (func_53() == 2)
		{
			Global_24678 = 1;
		}
	}
}

var func_124(struct<2> Param0, Vector3 vParam2, struct<2> Param3, Vector3 vParam5)//Position - 0x5685
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_125(char* sParam0)//Position - 0x569F
{
	var uVar0;
	
	if (func_146())
	{
		MemCopy(&uVar0, {func_59()}, 4);
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &uVar0))
		{
			return 1;
		}
	}
	return 0;
}

void func_126()//Position - 0x56C7
{
	if (!iLocal_97)
	{
		if (!PED::IS_PED_INJURED(iLocal_57))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
			{
				TASK::CLEAR_PED_TASKS(iLocal_57);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 18000, 0, 2);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 15000, 0, 2);
				iLocal_97 = 1;
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, 0, 1, 0))
		{
			if (!bLocal_137)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
					bLocal_137 = true;
				}
				else
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
					TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1);
					TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
					TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
					bLocal_137 = true;
				}
			}
			if (bLocal_137)
			{
				if (bLocal_53)
				{
					func_57();
					SYSTEM::WAIT(0);
					if (!PED::IS_PED_INJURED(iLocal_57))
					{
						if (!func_146())
						{
							if (PED::IS_PED_FACING_PED(iLocal_57, PLAYER::PLAYER_PED_ID(), 90f))
							{
								if (func_145(&uLocal_154, "REDO2AU", "REDO2_LFT2", 4, 0, 0, 0))
								{
									SYSTEM::SETTIMERA(0);
									iLocal_48 = 7;
								}
							}
						}
					}
				}
				else if (!func_146())
				{
					if (func_145(&uLocal_154, "REDO2AU", "REDO2_LFT", 4, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_48 = 7;
					}
				}
			}
		}
	}
}

void func_127()//Position - 0x586A
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 15f, 15f, 15f, 0, 1, 0))
		{
			if (func_128())
			{
				func_45(0);
				iLocal_89 = 0;
			}
		}
		else if (func_146() && !iLocal_89)
		{
			func_45(1);
			iLocal_89 = 1;
		}
	}
}

int func_128()//Position - 0x58C3
{
	if (Global_16703 == 1)
	{
		return 1;
	}
	return 0;
}

void func_129()//Position - 0x58DA
{
	switch (iLocal_67)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_57) && !PED::IS_PED_INJURED(iLocal_56))
			{
				if (CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iLocal_56, 1), 3f))
				{
					if (!func_146())
					{
						if (func_145(&uLocal_154, "REDO2AU", "REDO2_ARMA", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(iLocal_57, "random@domestic", "balcony_fight_male", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							TASK::TASK_PLAY_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 2f, -2f, -1, 0, 0.3f, 0, 0, 0);
							iLocal_67++;
						}
					}
				}
			}
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[8], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
				iLocal_67++;
			}
			break;
		
		case 2:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.335f)
					{
						ENTITY::DETACH_ENTITY(iLocal_120[8], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_120[8], 1, 0f, 6f, 4f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 3:
			if (!iLocal_87 && ENTITY::DOES_ENTITY_EXIST(iLocal_120[8]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_120[8]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_120[8], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!func_146() || func_128())
			{
				func_145(&uLocal_154, "REDO2AU", "REDO2_ARFA", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.473f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[9], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 5:
			if (!func_146() || func_128())
			{
				func_145(&uLocal_154, "REDO2AU", "REDO2_ARMB", 4, 0, 0, 0);
				iLocal_67++;
			}
			break;
		
		case 6:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[9]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.55f)
					{
						ENTITY::DETACH_ENTITY(iLocal_120[9], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_120[9], 1, 1f, 2f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 7:
			if (!iLocal_87 && ENTITY::DOES_ENTITY_EXIST(iLocal_120[9]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_120[9]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_120[9], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!func_146() || func_128())
			{
				func_145(&uLocal_154, "REDO2AU", "REDO2_ARFB", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 8:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.705f)
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_120[10], iLocal_56, PED::GET_PED_BONE_INDEX(iLocal_56, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 1, 0, 0, 0, 2, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(iLocal_56) && ENTITY::DOES_ENTITY_EXIST(iLocal_120[10]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.838f)
					{
						ENTITY::DETACH_ENTITY(iLocal_120[10], 0, 1);
						ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_120[10], 1, 1f, 3f, 3f, 0f, 0f, 0f, 0, 0, 0, 1, 0, 1);
						iLocal_67++;
					}
				}
			}
			break;
		
		case 10:
			if (!iLocal_87 && ENTITY::DOES_ENTITY_EXIST(iLocal_120[10]))
			{
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_120[10]))
				{
					AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CLOTHES_THROWN", iLocal_120[10], "RE_DOMESTIC_SOUNDSET", 0, 0);
					iLocal_87 = 1;
				}
			}
			if (!func_146() || func_128())
			{
				func_145(&uLocal_154, "REDO2AU", "REDO2_ARMC", 4, 0, 0, 0);
				iLocal_87 = 0;
				iLocal_67++;
			}
			break;
		
		case 11:
			if (!PED::IS_PED_INJURED(iLocal_56) && !PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_56, "random@domestic", "balcony_fight_female", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_56, "random@domestic", "balcony_fight_female") > 0.94f)
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_56, iLocal_57, 0);
					}
				}
			}
			if (!func_146() || func_128())
			{
				func_145(&uLocal_154, "REDO2AU", "REDO2_ARFC", 4, 0, 0, 0);
				iLocal_67 = 14;
			}
			break;
		
		case 14:
			if (!func_146())
			{
				if (func_145(&uLocal_154, "REDO2AU", "REDO2_ARFF", 4, 0, 0, 0))
				{
					func_130();
					iLocal_67++;
				}
			}
			break;
		
		case 15:
			if (!func_146())
			{
				if (func_145(&uLocal_154, "REDO2AU", "REDO2_ARMI", 4, 0, 0, 0))
				{
					iLocal_67++;
				}
			}
			break;
		
		case 16:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_COORD(0, Local_108, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
				iLocal_67++;
			}
			break;
		
		case 17:
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_56))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(iLocal_56, Local_108, 1f, 1f, 5f, 0, 1, 0) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_56))
					{
						PED::DELETE_PED(&iLocal_56);
					}
				}
			}
			if (iLocal_92 < MISC::GET_GAME_TIMER())
			{
				if (!func_146())
				{
					if (func_145(&uLocal_154, "REDO2AU", "REDO2_INS1", 4, 0, 0, 0))
					{
						iLocal_92 = MISC::GET_GAME_TIMER() + 5000;
						iLocal_93++;
					}
				}
			}
			if (iLocal_93 > 0)
			{
				iLocal_67++;
			}
			break;
		
		case 18:
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (!func_146())
				{
					if (func_145(&uLocal_154, "REDO2AU", "REDO2_LV", 4, 0, 0, 0))
					{
						TASK::TASK_WANDER_STANDARD(iLocal_57, 1193033728, 0);
						iLocal_67++;
					}
				}
			}
			break;
	}
	if (!bLocal_53)
	{
		if (iLocal_67 > 2 && iLocal_67 < 8)
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 6f, 4f, 5f, 0, 1, 0) || (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 12f, 12f, 5f, 0, 1, 2) && PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID())))
				{
					TASK::CLEAR_PED_TASKS(iLocal_57);
					func_130();
					if (iLocal_67 > 18)
					{
						iLocal_48 = 3;
					}
					else
					{
						func_57();
						while (func_146())
						{
							SYSTEM::WAIT(0);
						}
						if (func_145(&uLocal_154, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_53 = true;
							iLocal_48 = 3;
						}
					}
				}
			}
		}
		else if (iLocal_67 > 7)
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 6f, 8f, 5f, 0, 1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
					{
						HUD::SHOW_HEIGHT_ON_BLIP(uLocal_101[0], 1);
					}
					TASK::CLEAR_PED_TASKS(iLocal_57);
					func_130();
					if (iLocal_67 > 18)
					{
						iLocal_48 = 3;
					}
					else
					{
						func_54();
						while (func_146())
						{
							SYSTEM::WAIT(0);
						}
						if (func_145(&uLocal_154, "REDO2AU", "REDO2_FUCK", 4, 0, 0, 0))
						{
							bLocal_53 = true;
							iLocal_48 = 3;
						}
					}
				}
			}
		}
	}
	if (bLocal_55)
	{
		if (iLocal_54 < MISC::GET_GAME_TIMER())
		{
			func_57();
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
			{
				func_130();
			}
			iLocal_48 = 3;
		}
	}
}

void func_130()//Position - 0x6092
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_GO_STRAIGHT_TO_COORD(0, Local_108, 1f, -1, 1193033728, 1056964608);
		TASK::TASK_PLAY_ANIM(0, "random@domestic", "f_attack_end", 2f, -2f, -1, 1, 0, 0, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_56, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_56, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_131(int iParam0)//Position - 0x611D
{
	if (func_134())
	{
		Global_97343 = 1;
		Global_97340 = MISC::GET_GAME_TIMER();
		if (func_25(Global_97342))
		{
			func_132(0);
		}
		HUD::SET_MISSION_NAME(1, "RE_TITLE");
		if (iParam0 && func_25(Global_97342))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_132(int iParam0)//Position - 0x6170
{
	switch (iParam0)
	{
		case 0:
			if (Global_97353.f_28192.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_104(func_133(iParam0), -1);
					Global_97353.f_28192.f_2++;
					MISC::SET_BIT(&Global_97349, 0);
				}
			}
			break;
		
		case 1:
			if (!MISC::IS_BIT_SET(Global_97349, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_104(func_133(iParam0), -1);
					Global_97353.f_28192.f_3++;
					MISC::SET_BIT(&Global_97349, 1);
				}
			}
			break;
		
		case 2:
			if (!MISC::IS_BIT_SET(Global_97349, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_104(func_133(iParam0), -1);
					Global_97353.f_28192.f_4++;
					MISC::SET_BIT(&Global_97349, 2);
				}
			}
			break;
	}
}

char* func_133(int iParam0)//Position - 0x6251
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

int func_134()//Position - 0x6293
{
	switch (func_135(&Global_24503, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
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

int func_135(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x62C9
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_87845.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_139(0))
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_17098.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_34913 = iParam2;
		Global_34875 = *uParam0;
		Global_34876 = iParam4;
		Global_34874 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_34874 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_34874)
			{
				if (Global_34880[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_34875 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_137(iParam2))
		{
			return 0;
		}
		if (Global_34874 == 8)
		{
			return 0;
		}
		Global_34877++;
		*uParam0 = Global_34877;
		Global_34880[Global_34874 /*4*/] = Global_34877;
		Global_34880[Global_34874 /*4*/].f_1 = iParam1;
		Global_34880[Global_34874 /*4*/].f_2 = iParam2;
		Global_34880[Global_34874 /*4*/].f_3 = 0;
		Global_34874++;
		if (iParam4 != 0)
		{
			func_136(uParam0, iParam4);
		}
	}
	return 2;
}

void func_136(var uParam0, int iParam1)//Position - 0x6400
{
	int iVar0;
	
	if (Global_34874 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_34874)
	{
		if (Global_34880[iVar0 /*4*/] == *uParam0)
		{
			Global_34880[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_137(int iParam0)//Position - 0x644F
{
	return func_138(iParam0, Global_34913);
}

int func_138(int iParam0, int iParam1)//Position - 0x6460
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

int func_139(int iParam0)//Position - 0x6641
{
	if (Global_34913 == 15)
	{
		return 0;
	}
	if (func_137(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_140()//Position - 0x6663
{
	if (HUD::DOES_BLIP_EXIST(uLocal_104))
	{
		HUD::REMOVE_BLIP(&uLocal_104);
	}
	if (!HUD::DOES_BLIP_EXIST(uLocal_101[0]))
	{
		uLocal_101[0] = func_114(iLocal_57, 0, 145);
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_101[0], 0);
	}
}

void func_141()//Position - 0x669F
{
	func_4(39, 1);
	func_4(40, 1);
	func_4(41, 1);
	func_4(42, 1);
	func_4(43, 1);
	MISC::CLEAR_AREA(Local_62, 2f, 1, 0, 0, 0);
	MISC::CLEAR_AREA(Local_59, 2f, 1, 0, 0, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 0, 1);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 0, 0, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Local_111 - Vector(3f, 2f, 2f), Local_111 + Vector(3f, 2f, 2f), 0, 1, 1, 1);
	PED::ADD_SCENARIO_BLOCKING_AREA(Vector(53.1038f, 56.6649f, -1366.481f) - Vector(1f, 1f, 1f), Vector(53.1038f, 56.6649f, -1366.481f) + Vector(1f, 1f, 1f), 0, 1, 1, 1);
	PED::ADD_RELATIONSHIP_GROUP("rghDomestic", &uLocal_151);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_151, 1862763509);
	iLocal_56 = PED::CREATE_PED(26, iLocal_95, Local_59, fLocal_65, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_56, 17, 1);
	PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_56, 8, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 1, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 2, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_56, 8, 0);
	TASK::TASK_PLAY_ANIM(iLocal_56, "random@domestic", "balcony_fight_idle_female", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_56, uLocal_151);
	func_144(iLocal_56, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
	PED::SET_PED_CONFIG_FLAG(iLocal_56, 185, 1);
	iLocal_57 = PED::CREATE_PED(26, iLocal_96, Local_62, fLocal_66, 1, 1);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 1, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 2, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 128, 1);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 8, 0);
	PED::SET_PED_FLEE_ATTRIBUTES(iLocal_57, 65536, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 185, 1);
	PED::SET_PED_CONFIG_FLAG(iLocal_57, 206, 1);
	PED::SET_PED_HELMET(iLocal_57, 0);
	PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 0);
	TASK::TASK_PLAY_ANIM(iLocal_57, "random@domestic", "balcony_fight_idle_male", 8f, -4f, -1, 1, 0, 0, 0, 0);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_57, uLocal_151);
	func_144(iLocal_57, "GENERIC_WHATEVER", 24);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_57, iLocal_56, -1, 0, 2);
	TASK::TASK_LOOK_AT_ENTITY(iLocal_56, iLocal_57, -1, 0, 2);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 0, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 2, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 3, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_56, 4, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 0, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 2, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 3, 1, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 4, 1, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_57, 8, 0, 0, 0);
	func_143();
	MISC::SET_BIT(&uLocal_133, 5);
	if (func_53() == 0)
	{
		func_142(&uLocal_154, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (func_53() == 1)
	{
		func_142(&uLocal_154, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (func_53() == 2)
	{
		func_142(&uLocal_154, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_142(&uLocal_154, 3, iLocal_57, "REDOCastro", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_57, sLocal_152);
	func_142(&uLocal_154, 4, iLocal_56, "NATHALIA", 0, 1);
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_56, sLocal_153);
	SYSTEM::SETTIMERA(0);
	iLocal_149 = 1;
}

void func_142(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x69F3
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_68245)
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

void func_143()//Position - 0x6A8E
{
	iLocal_120[0] = OBJECT::CREATE_OBJECT(joaat("prop_ld_tshirt_02"), -470.3661f, 541.385f, 120.0205f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[0], -13.7262f, 0.5001f, -0.5886f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[0], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_tshirt_02"));
	iLocal_120[1] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_02"), -470.8998f, 540.7595f, 120.169f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[1], -7.3906f, -12.8136f, -63.733f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[1], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_02"));
	iLocal_120[2] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_01"), -468.3266f, 540.7725f, 120.1762f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[2], -7.041683f, 10.17298f, 45.7617f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[2], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_01"));
	iLocal_120[3] = OBJECT::CREATE_OBJECT(joaat("prop_ld_jeans_01"), -468.7787f, 541.864f, 119.9098f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[3], -8.5884f, 12.6893f, 57.1792f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[3], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_jeans_01"));
	iLocal_120[4] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shoe_02"), -470.9009f, 541.2538f, 120.0578f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[4], -16.4886f, 2.4979f, -3.8769f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[4], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shoe_02"));
	iLocal_120[5] = OBJECT::CREATE_OBJECT(joaat("prop_ld_shirt_01"), -472.0366f, 542.0591f, 119.8243f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[5], -3.5946f, -15.0978f, -75.5026f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[5], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_shirt_01"));
	iLocal_120[6] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_03"), -472.7543f, 542.3022f, 119.7628f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[6], 6.402527f, -15.68665f, -104.1308f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[6], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_03"));
	iLocal_120[7] = OBJECT::CREATE_OBJECT(joaat("prop_porn_mag_01"), -471.8675f, 543.6655f, 119.4991f, 1, 1, 0);
	ENTITY::SET_ENTITY_ROTATION(iLocal_120[7], -8.3642f, 1.9344f, 2.6889f, 2, 1);
	ENTITY::FREEZE_ENTITY_POSITION(iLocal_120[7], 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_porn_mag_01"));
	iLocal_120[8] = OBJECT::CREATE_OBJECT(joaat("prop_golf_iron_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	iLocal_120[9] = OBJECT::CREATE_OBJECT(joaat("prop_cs_rub_binbag_01"), -473.195f, 537.2585f, 123.3303f, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_rub_binbag_01"));
	iLocal_120[10] = OBJECT::CREATE_OBJECT(joaat("prop_golf_bag_01"), -473.4f, 536.8035f, 123.2482f, 1, 1, 0);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_golf_bag_01"));
}

void func_144(var uParam0, char* sParam1, int iParam2)//Position - 0x6D73
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(uParam0, sParam1, func_49(iParam2), 1);
}

bool func_145(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x6D8A
{
	func_73(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15699 = 0;
	Global_15701 = 0;
	Global_15706 = 0;
	Global_16683 = 0;
	Global_16685 = 0;
	Global_16689 = 0;
	Global_2621441 = 0;
	return func_64(sParam2, iParam3, 0);
}

int func_146()//Position - 0x6DD8
{
	if (Global_15692 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_147()//Position - 0x6DFA
{
	if (!PED::IS_PED_INJURED(iLocal_57) && !PED::IS_PED_INJURED(iLocal_56))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_57, PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_56, PLAYER::PLAYER_PED_ID()))
			{
				if (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_57) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_57)) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_56)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_56))
				{
					if (iLocal_134 == -1)
					{
						iLocal_134 = MISC::GET_GAME_TIMER();
					}
				}
				else
				{
					iLocal_134 = -1;
				}
			}
			if ((iLocal_134 != -1 && MISC::GET_GAME_TIMER() > iLocal_134 + 500) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_154();
			}
		}
	}
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		func_154();
	}
	if (iLocal_48 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (func_153(iLocal_57))
			{
				func_152();
			}
		}
	}
	if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -471.1757f, 535.356f, 124.8557f, 3f, 2.5f, 1.5f, 0, 1, 0))
	{
		func_151();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (func_150(iLocal_56))
		{
			func_148();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
	{
		if (func_150(iLocal_57) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_57, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_148();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
	{
		if (func_150(iLocal_56) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_56, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_148();
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_57, 250f, 250f, 250f, 0, 1, 0) || ENTITY::IS_ENTITY_IN_WATER(iLocal_57))
		{
			iLocal_48 = 11;
		}
	}
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_148();
	}
}

void func_148()//Position - 0x6FBD
{
	func_54();
	SYSTEM::WAIT(0);
	if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_145(&uLocal_154, "REDO2AU", "REDO2_SHOOT", 4, 0, 0, 0);
	}
	else
	{
		func_145(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	}
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
		SYSTEM::WAIT(3000);
	}
	func_149();
	SYSTEM::WAIT(0);
	func_50();
	iLocal_48 = 11;
}

void func_149()//Position - 0x705A
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_56))
	{
		TASK::TASK_COWER(iLocal_56, -1);
		PED::SET_PED_KEEP_TASK(iLocal_56, 1);
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
	}
}

int func_150(int iParam0)//Position - 0x70A6
{
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_151()//Position - 0x70D3
{
	func_149();
	func_54();
	SYSTEM::WAIT(0);
	func_145(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
		SYSTEM::WAIT(3000);
	}
	func_50();
	iLocal_48 = 11;
}

void func_152()//Position - 0x714B
{
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::CLEAR_PED_TASKS(iLocal_57);
		TASK::TASK_SMART_FLEE_COORD(iLocal_57, ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 1), 150f, -1, 0, 0);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
	}
	iLocal_48 = 11;
}

int func_153(int iParam0)//Position - 0x718A
{
	if (!PED::IS_PED_INJURED(uParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0, 1.5f, 1.5f, 8f, 0, 1, 2))
		{
			if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0)) > 4f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_154()//Position - 0x71DF
{
	func_54();
	SYSTEM::WAIT(0);
	func_145(&uLocal_154, "REDO2AU", "REDO2_CRAZY", 4, 0, 0, 0);
	if (!PED::IS_PED_INJURED(iLocal_57))
	{
		TASK::OPEN_SEQUENCE_TASK(&uLocal_94);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 4096);
		TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 250f, -1, 0, 0);
		TASK::CLOSE_SEQUENCE_TASK(uLocal_94);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_57, uLocal_94);
		TASK::CLEAR_SEQUENCE_TASK(&uLocal_94);
		PED::SET_PED_KEEP_TASK(iLocal_57, 1);
		SYSTEM::WAIT(3000);
	}
	func_50();
	iLocal_48 = 11;
}

void func_155()//Position - 0x7256
{
	STREAMING::REQUEST_MODEL(iLocal_95);
	STREAMING::REQUEST_MODEL(iLocal_96);
	STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
	STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
	STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
	STREAMING::REQUEST_ANIM_DICT("random@domestic");
	STREAMING::REQUEST_ANIM_DICT("random@security_van");
	if ((((((((((((((STREAMING::HAS_MODEL_LOADED(iLocal_95) && STREAMING::HAS_MODEL_LOADED(iLocal_96)) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_iron_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_rub_binbag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_golf_bag_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_tshirt_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_jeans_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shoe_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_shirt_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_03"))) && STREAMING::HAS_MODEL_LOADED(joaat("prop_porn_mag_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("random@domestic")) && STREAMING::HAS_ANIM_DICT_LOADED("random@security_van"))
	{
		bLocal_49 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(iLocal_95);
		STREAMING::REQUEST_MODEL(iLocal_96);
		STREAMING::REQUEST_MODEL(joaat("prop_golf_iron_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_cs_rub_binbag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_golf_bag_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_tshirt_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_jeans_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shoe_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_shirt_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_03"));
		STREAMING::REQUEST_MODEL(joaat("prop_porn_mag_01"));
		STREAMING::REQUEST_ANIM_DICT("random@domestic");
		STREAMING::REQUEST_ANIM_DICT("random@security_van");
	}
}

void func_156()//Position - 0x7427
{
	Local_105 = { -470.4934f, 540.0073f, 120.3715f };
	iLocal_95 = joaat("a_f_y_business_02");
	iLocal_96 = joaat("a_m_y_golfer_01");
	sLocal_152 = "REDOCastro";
	sLocal_153 = "A_F_Y_VINEWOOD_04_WHITE_MINI_02";
	Local_59 = { -472.6554f, 536.469f, 123.3555f };
	fLocal_65 = 348.9152f;
	Local_62 = { -470.1328f, 542.9949f, 119.6873f };
	fLocal_66 = 156.0666f;
	Local_108 = { -469.082f, 535.0479f, 123.3553f };
	Local_111 = { -1378.273f, 40.2254f, 52.6774f };
	Local_114 = { -1368.188f, 57.2309f, 52.7045f };
	bLocal_58 = true;
}

int func_157()//Position - 0x74CC
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_43) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_168())
		{
			return 0;
		}
	}
	if (func_164())
	{
		return 1;
	}
	if (func_158(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_158(float fParam0, bool bParam1)//Position - 0x7552
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_33(func_53()))
		{
			iVar36 = func_30();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (MISC::IS_BIT_SET(Global_97353.f_16828[iVar32 /*6*/], 2) && !MISC::IS_BIT_SET(Global_97353.f_16828[iVar32 /*6*/], 3))
				{
					func_159(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var0.f_6, 1);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_159(int iParam0, var uParam1)//Position - 0x7609
{
	switch (iParam0)
	{
		case 0:
			func_160(uParam1, "Abigail1", func_162(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 1:
			func_160(uParam1, "Abigail2", func_162(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 2:
			func_160(uParam1, "Barry1", func_162(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 3:
			func_160(uParam1, "Barry2", func_162(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_161(iParam0), 1, 1);
			break;
		
		case 4:
			func_160(uParam1, "Barry3", func_162(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 5:
			func_160(uParam1, "Barry3A", func_162(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 6:
			func_160(uParam1, "Barry3C", func_162(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 7:
			func_160(uParam1, "Barry4", func_162(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_161(iParam0), 0, 0);
			break;
		
		case 8:
			func_160(uParam1, "Dreyfuss1", func_162(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 9:
			func_160(uParam1, "Epsilon1", func_162(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 10:
			func_160(uParam1, "Epsilon2", func_162(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 11:
			func_160(uParam1, "Epsilon3", func_162(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 12:
			func_160(uParam1, "Epsilon4", func_162(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 13:
			func_160(uParam1, "Epsilon5", func_162(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 14:
			func_160(uParam1, "Epsilon6", func_162(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 15:
			func_160(uParam1, "Epsilon7", func_162(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 16:
			func_160(uParam1, "Epsilon8", func_162(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 17:
			func_160(uParam1, "Extreme1", func_162(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 18:
			func_160(uParam1, "Extreme2", func_162(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 19:
			func_160(uParam1, "Extreme3", func_162(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 20:
			func_160(uParam1, "Extreme4", func_162(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 21:
			func_160(uParam1, "Fanatic1", func_162(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_161(iParam0), 1, 0);
			break;
		
		case 22:
			func_160(uParam1, "Fanatic2", func_162(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_161(iParam0), 1, 0);
			break;
		
		case 23:
			func_160(uParam1, "Fanatic3", func_162(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_161(iParam0), 0, 1);
			break;
		
		case 24:
			func_160(uParam1, "Hao1", func_162(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_161(iParam0), 0, 1);
			break;
		
		case 25:
			func_160(uParam1, "Hunting1", func_162(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 26:
			func_160(uParam1, "Hunting2", func_162(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 27:
			func_160(uParam1, "Josh1", func_162(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 28:
			func_160(uParam1, "Josh2", func_162(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_161(iParam0), 1, 1);
			break;
		
		case 29:
			func_160(uParam1, "Josh3", func_162(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_161(iParam0), 1, 1);
			break;
		
		case 30:
			func_160(uParam1, "Josh4", func_162(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 31:
			func_160(uParam1, "Maude1", func_162(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 32:
			func_160(uParam1, "Minute1", func_162(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 33:
			func_160(uParam1, "Minute2", func_162(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 34:
			func_160(uParam1, "Minute3", func_162(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 35:
			func_160(uParam1, "MrsPhilips1", func_162(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 36:
			func_160(uParam1, "MrsPhilips2", func_162(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 37:
			func_160(uParam1, "Nigel1", func_162(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 38:
			func_160(uParam1, "Nigel1A", func_162(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_161(iParam0), 1, 1);
			break;
		
		case 39:
			func_160(uParam1, "Nigel1B", func_162(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_161(iParam0), 1, 1);
			break;
		
		case 40:
			func_160(uParam1, "Nigel1C", func_162(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_161(iParam0), 1, 1);
			break;
		
		case 41:
			func_160(uParam1, "Nigel1D", func_162(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_161(iParam0), 1, 1);
			break;
		
		case 42:
			func_160(uParam1, "Nigel2", func_162(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_161(iParam0), 1, 1);
			break;
		
		case 43:
			func_160(uParam1, "Nigel3", func_162(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_161(iParam0), 1, 1);
			break;
		
		case 44:
			func_160(uParam1, "Omega1", func_162(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 45:
			func_160(uParam1, "Omega2", func_162(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 46:
			func_160(uParam1, "Paparazzo1", func_162(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 47:
			func_160(uParam1, "Paparazzo2", func_162(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 48:
			func_160(uParam1, "Paparazzo3", func_162(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 49:
			func_160(uParam1, "Paparazzo3A", func_162(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 50:
			func_160(uParam1, "Paparazzo3B", func_162(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 51:
			func_160(uParam1, "Paparazzo4", func_162(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 52:
			func_160(uParam1, "Rampage1", func_162(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 54:
			func_160(uParam1, "Rampage3", func_162(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 55:
			func_160(uParam1, "Rampage4", func_162(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 56:
			func_160(uParam1, "Rampage5", func_162(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_161(iParam0), 0, 0);
			break;
		
		case 53:
			func_160(uParam1, "Rampage2", func_162(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_161(iParam0), 1, 0);
			break;
		
		case 57:
			func_160(uParam1, "TheLastOne", func_162(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 58:
			func_160(uParam1, "Tonya1", func_162(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 59:
			func_160(uParam1, "Tonya2", func_162(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 60:
			func_160(uParam1, "Tonya3", func_162(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 61:
			func_160(uParam1, "Tonya4", func_162(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		case 62:
			func_160(uParam1, "Tonya5", func_162(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_161(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_160(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)//Position - 0x877F
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_161(int iParam0)//Position - 0x8810
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

struct<2> func_162(int iParam0)//Position - 0x8B56
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_163(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_163(int iParam0)//Position - 0x8B8C
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

int func_164()//Position - 0x8FD7
{
	if (func_167() && !func_168())
	{
		return 1;
	}
	if (func_166() && func_165())
	{
		return 1;
	}
	return 0;
}

bool func_165()//Position - 0x9009
{
	return Global_97071 > 0;
}

int func_166()//Position - 0x9017
{
	if (Global_87289 != -1)
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0x902C
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 20);
	}
	return 0;
}

int func_168()//Position - 0x9052
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

int func_169()//Position - 0x906F
{
	if (!func_137(5))
	{
		return 1;
	}
	if (func_164())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_168())
		{
			return 0;
		}
	}
	if (func_158(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_170()//Position - 0x90D1
{
	if ((Global_97342 == func_39() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_97343)
	{
		return 1;
	}
	return 0;
}

void func_171(int iParam0)//Position - 0x90FC
{
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_173(iParam0);
	MISC::_0x65D2EBB47E1CEC21(0);
	MISC::SET_RANDOM_EVENT_FLAG(1);
	Global_97339 = 0;
	func_172();
}

void func_172()//Position - 0x9132
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

void func_173(int iParam0)//Position - 0x916F
{
	Global_97342 = iParam0;
}

int func_174(struct<3> Param0, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x917D
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_131420)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_39();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_215())
		{
			return 0;
		}
	}
	Local_43 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_168())
			{
				return 0;
			}
		}
		if (!Global_97353.f_7341)
		{
			return 0;
		}
		if (func_17(0))
		{
			return 0;
		}
		if (func_164())
		{
			return 0;
		}
		if (func_214())
		{
			return 0;
		}
		if (Global_97342 != -1)
		{
			return 0;
		}
		if (func_33(func_53()))
		{
			if (func_158(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_43.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_213(iParam3))
		{
			return 0;
		}
		if (func_33(func_53()))
		{
			if (func_212(func_53()) == 4 || func_212(func_53()) == 5)
			{
				return 0;
			}
		}
		if (func_33(func_53()))
		{
			if (!func_211(iParam3, iParam4, 145))
			{
				return 0;
			}
		}
		if (!func_210(Global_97353.f_28192.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_97344) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_209())
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
		if (!func_200(4))
		{
			return 0;
		}
		if (!func_137(5))
		{
			return 0;
		}
		if (func_199(iParam3, iParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_3 && iParam3 != 10)
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
		if ((iParam3 == 9 && (iParam4 == 2 || iParam4 == 5)) && !func_199(0, 0))
		{
			return 0;
		}
		if (Global_24590)
		{
			return 0;
		}
		if (func_213(30) && !func_199(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_33(func_53()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_97353.f_1729.f_539.f_1528[iVar4 /*3*/] };
				iVar8 = Global_97353.f_1729.f_539.f_1524[iVar4];
				if (func_198(iVar8))
				{
					if (func_176(iVar4))
					{
						if (!func_175(Var5, 0f, 0f, 0f))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), Var5) < (210f * 210f))
							{
								if (func_53() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_175(struct<3> Param0, struct<3> Param3)//Position - 0x9516
{
	return ((Param0.x == Param3.x && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

bool func_176(int iParam0)//Position - 0x953F
{
	int iVar0;
	
	iVar0 = Global_97353.f_1729.f_539.f_1524[iParam0];
	return func_177(iVar0);
}

int func_177(int iParam0)//Position - 0x9560
{
	return func_178(iParam0, 1);
}

int func_178(int iParam0, int iParam1)//Position - 0x956F
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_198(iParam0))
	{
		return 0;
	}
	func_179(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_179(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x95C2
{
	func_180(func_191(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_180(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x95E0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_190(iParam0, iParam1))
	{
		iVar0 = func_189(iParam1);
		iVar1 = func_187(iParam0);
		iVar2 = (func_187(iParam0) - func_187(iParam1));
		iVar3 = (func_189(iParam0) - func_189(iParam1));
		iVar4 = (func_186(iParam0) - func_186(iParam1));
		iVar5 = (func_185(iParam0) - func_185(iParam1));
		iVar6 = (func_184(iParam0) - func_184(iParam1));
		iVar7 = (func_183(iParam0) - func_183(iParam1));
	}
	else
	{
		iVar0 = func_189(iParam0);
		iVar1 = func_187(iParam1);
		iVar2 = (func_187(iParam1) - func_187(iParam0));
		iVar3 = (func_189(iParam1) - func_189(iParam0));
		iVar4 = (func_186(iParam1) - func_186(iParam0));
		iVar5 = (func_185(iParam1) - func_185(iParam0));
		iVar6 = (func_184(iParam1) - func_184(iParam0));
		iVar7 = (func_183(iParam1) - func_183(iParam0));
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
		iVar4 = (iVar4 + func_182(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_181(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
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

float func_181(float fParam0, float fParam1, float fParam2)//Position - 0x97E1
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

int func_182(int iParam0, int iParam1)//Position - 0x9823
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

int func_183(int iParam0)//Position - 0x98C5
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_184(int iParam0)//Position - 0x98D8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_185(int iParam0)//Position - 0x98EB
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_186(int iParam0)//Position - 0x98FE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_187(int iParam0)//Position - 0x9910
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_188(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_188(bool bParam0, int iParam1, int iParam2)//Position - 0x9935
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_189(int iParam0)//Position - 0x994C
{
	return iParam0 & 15;
}

int func_190(int iParam0, int iParam1)//Position - 0x9959
{
	int iVar0;
	int iVar1;
	
	if (!func_198(iParam1) || !func_198(iParam0))
	{
		return 1;
	}
	iVar0 = func_187(iParam0);
	iVar1 = func_187(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_189(iParam0);
	iVar1 = func_189(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_186(iParam0);
	iVar1 = func_186(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_185(iParam0);
	iVar1 = func_185(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_184(iParam0);
	iVar1 = func_184(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_183(iParam0);
	iVar1 = func_183(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_191()//Position - 0x9A65
{
	var uVar0;
	
	func_197(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_196(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_195(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_194(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_193(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_192(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_192(var uParam0, int iParam1)//Position - 0x9AAB
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

void func_193(var uParam0, int iParam1)//Position - 0x9B31
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_194(var uParam0, int iParam1)//Position - 0x9B64
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_189(*uParam0);
	iVar1 = func_187(*uParam0);
	if (iParam1 < 1 || iParam1 > func_182(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_195(var uParam0, int iParam1)//Position - 0x9BB5
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_196(var uParam0, int iParam1)//Position - 0x9BEF
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_197(var uParam0, int iParam1)//Position - 0x9C2A
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_198(int iParam0)//Position - 0x9C66
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
	iVar0 = func_183(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_184(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_185(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_187(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_189(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_186(iParam0);
	if (iVar5 < 1 || iVar5 > func_182(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_199(int iParam0, int iParam1)//Position - 0x9D42
{
	if (MISC::IS_BIT_SET(Global_97353.f_28192.f_8[iParam0], iParam1))
	{
		return 1;
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x9D65
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_53();
				if (!func_33(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_208()) || Global_96400) || Global_24446) || func_207()) || func_71(8, -1)) || func_206()) || func_205()) || func_204()) || func_203()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1) || func_208()) || Global_24446) || func_207()) || func_71(8, -1)) || func_204()) || func_206()) || func_205()) || func_203()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_208()) || Global_96400) || Global_24446) || func_207()) || func_71(8, -1)) || func_204()) || func_206()) || func_205()) || func_203()) || Global_97353.f_5944.f_919[iVar0] == 5) || Global_35460 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_208()) || Global_96400) || Global_24446) || func_207()) || func_71(8, -1)) || func_206()) || func_205()) || func_203()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_208() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_71(8, -1)) || func_203()) || func_202()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_71(8, -1) || func_206()) || func_205()) || func_202()) || func_201())
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
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_208()) || Global_24446) || func_207()) || func_71(8, -1)) || func_205()) || func_204()) || func_203()) || Global_97353.f_5944.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || func_208()) || func_205()) || Global_96400) || Global_24446) || func_207()) || Global_35957) || func_71(8, -1)) || func_204()) || func_202()) || func_203()) || Global_97353.f_5944.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_208()) || Global_96400) || Global_24446) || func_207()) || func_71(8, -1)) || func_204()) || func_202()) || func_206()) || func_205()) || func_203())
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

var func_201()//Position - 0xA482
{
	return Global_90001.f_1;
}

int func_202()//Position - 0xA490
{
	if (Global_87289 != -1)
	{
		return MISC::IS_BIT_SET(Global_81155[Global_87289 /*34*/].f_15, 13);
	}
	return 0;
}

int func_203()//Position - 0xA4B6
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_204()//Position - 0xA4D0
{
	if (Global_68505)
	{
		return 1;
	}
	else if (Global_54744 && !Global_54750)
	{
		return 1;
	}
	return 0;
}

bool func_205()//Position - 0xA4FA
{
	return Global_90014.f_291 > 0;
}

bool func_206()//Position - 0xA50B
{
	return Global_90014.f_290 > 0;
}

var func_207()//Position - 0xA51C
{
	return Global_1315900;
}

int func_208()//Position - 0xA528
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_87845.f_44 == 1;
	}
	return 0;
}

int func_209()//Position - 0xA544
{
	func_69();
	if (Global_3068[Global_14393 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_210(int iParam0)//Position - 0xA56C
{
	return func_190(func_191(), iParam0);
}

int func_211(int iParam0, int iParam1, int iParam2)//Position - 0xA57E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_53();
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

int func_212(int iParam0)//Position - 0xA662
{
	if (!func_33(iParam0))
	{
		return 7;
	}
	return Global_97353.f_5944.f_919[iParam0];
}

bool func_213(int iParam0)//Position - 0xA686
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_215())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		bVar1 = MISC::IS_BIT_SET(Global_97353.f_28192, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		bVar1 = MISC::IS_BIT_SET(Global_97353.f_28192.f_1, iVar0);
	}
	return bVar1;
}

int func_214()//Position - 0xA6E4
{
	var uVar0;
	
	if (Global_24594)
	{
		uVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_215()//Position - 0xA71B
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
		if (MISC::IS_BIT_SET(Global_97353.f_668.f_683, 7))
		{
			return 1;
		}
	}
	if (Global_131672 == 2)
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

int func_216(int iParam0, int iParam1)//Position - 0xA79E
{
	if (Global_97353.f_8448[iParam0 /*12*/].f_5 == 1)
	{
		if (iParam1 == 1)
		{
		}
		return 1;
	}
	return 0;
}

void func_217()//Position - 0xA7C5
{
	int iVar0;
	
	if (iLocal_149 && !iLocal_148)
	{
		func_3(0);
		if (Global_24682)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
		}
		func_2();
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Local_62 - Vector(10f, 10f, 10f), Local_62 + Vector(10f, 10f, 10f), 1, 1);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, uLocal_151, 1862763509);
		if (bLocal_58)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_95);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_96);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_56))
		{
			if (!PED::IS_PED_INJURED(iLocal_56))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_56, 317, 1);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_56, 0);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_56);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_104))
		{
			HUD::REMOVE_BLIP(&uLocal_104);
		}
		if (HUD::DOES_BLIP_EXIST(uLocal_101[0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_101[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_57))
		{
			if (!PED::IS_PED_INJURED(iLocal_57))
			{
				PED::SET_PED_CONFIG_FLAG(iLocal_57, 317, 1);
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_57, 0))
				{
					PED::RESET_PED_LAST_VEHICLE(iLocal_57);
				}
				PED::REMOVE_PED_FROM_GROUP(iLocal_57);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_57, 0);
				PED::SET_PED_CAN_BE_TARGETTED(iLocal_57, 1);
			}
		}
		iVar0 = 0;
		while (iVar0 < iLocal_120)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_120[iVar0]))
			{
				ENTITY::DETACH_ENTITY(iLocal_120[iVar0], 1, 1);
			}
			iVar0++;
		}
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-499.9164f, 575.6557f, 124.5584f, -346.8641f, 483.3948f, 111.7201f, 74.0625f, 1);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	}
	func_218(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_218(int iParam0)//Position - 0xA92E
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_39();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_170())
	{
		func_222(iParam0);
		HUD::SET_MISSION_NAME(0, 0);
		Global_97344 = MISC::GET_GAME_TIMER();
		func_221(30000);
		StringCopy(&cVar0, func_220(Global_97342, 1), 64);
		if (func_38(Global_97342) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_97341, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_97339, (MISC::GET_GAME_TIMER() - Global_97340), 0);
	}
	else if (MISC::IS_BIT_SET(Global_97349, 0) && Global_97353.f_28192.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_97349, 0);
	}
	func_219(&Global_24503);
	Global_97343 = 0;
	func_173(-1);
}

void func_219(var uParam0)//Position - 0xA9E3
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_34875)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_34874 = 0;
	Global_34876 = 0;
	Global_34913 = 15;
	Global_54747 = 0;
	Global_54748 = 0;
}

char* func_220(int iParam0, bool bParam1)//Position - 0xAA20
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

void func_221(int iParam0)//Position - 0xAC69
{
	Global_35464 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_222(int iParam0)//Position - 0xAC7B
{
	func_223(iParam0, 0, func_228(iParam0));
}

void func_223(int iParam0, int iParam1, int iParam2)//Position - 0xAC90
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_191();
	func_226(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_225(iParam0, &uVar0);
	Var1 = { func_224(&uVar0) };
}

struct<16> func_224(var uParam0)//Position - 0xACBF
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_185(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_184(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_183(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_186(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_189(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_187(*uParam0), 64);
	return Var0;
}

void func_225(int iParam0, var uParam1)//Position - 0xAD8E
{
	Global_97353.f_28192.f_43[iParam0] = *uParam1;
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xADA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_187(*uParam0);
	iVar1 = func_189(*uParam0);
	iVar2 = func_186(*uParam0);
	iVar3 = func_185(*uParam0);
	iVar4 = func_184(*uParam0);
	iVar5 = func_183(*uParam0);
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
	iVar6 = func_182(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_182(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_227(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_227(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAF28
{
	func_197(uParam0, iParam1);
	func_196(uParam0, iParam2);
	func_195(uParam0, iParam3);
	func_194(uParam0, iParam4);
	func_193(uParam0, iParam5);
	func_192(uParam0, iParam6);
}

int func_228(int iParam0)//Position - 0xAF60
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

