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
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	struct<3> Local_44 = { 0, 0, 0 } ;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	struct<39> Local_54 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_55 = 0;
	var uLocal_56 = 16;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
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
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	int iLocal_227 = 0;
	int iLocal_228 = 0;
	float fLocal_229 = 0f;
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
	var uLocal_240 = 21;
	var uLocal_241 = 6;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 1132396544;
	var uLocal_248 = 1132396544;
	var uLocal_249 = 1132396544;
	var uLocal_250 = 0;
	var uLocal_251 = -1082130432;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 8;
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
	var uLocal_311 = -1;
	var uLocal_312 = 1092616192;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	bool bLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	struct<7> Local_319 = { 0, 0, 1097859072, 1500, 45, 1103626240, 5 } ;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	int iLocal_324 = 0;
	float fLocal_325 = 0f;
	float fLocal_326 = 0f;
	float fLocal_327 = 0f;
	bool bLocal_328 = 0;
	bool bLocal_329 = 0;
	int iLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 3;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 1;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 2;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 13;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 13;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 13;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 13;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 13;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 13;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 13;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	struct<55> Local_917 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931[3] = { 0, 0, 0 };
	int iLocal_932[2] = { 0, 0 };
	int iLocal_933 = 0;
	int iLocal_934[2] = { 0, 0 };
	int iLocal_935 = 0;
	int iLocal_936 = 0;
	int iLocal_937 = 0;
	int iLocal_938[2] = { 0, 0 };
	var uLocal_939[3] = { 0, 0, 0 };
	var uLocal_940[2] = { 0, 0 };
	int iLocal_941 = 0;
	int iLocal_942 = 0;
	int iLocal_943 = 0;
	struct<8> Local_944[3];
	struct<8> Local_945[2];
	struct<8> Local_946[2];
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949[3] = { 0, 0, 0 };
	var uLocal_950[2] = { 0, 0 };
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	bool bLocal_958 = 0;
	int iLocal_959 = 0;
	bool bLocal_960 = 0;
	int iLocal_961 = 0;
	bool bLocal_962 = 0;
	bool bLocal_963 = 0;
	bool bLocal_964 = 0;
	bool bLocal_965 = 0;
	int iLocal_966 = 0;
	bool bLocal_967 = 0;
	bool bLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	int iLocal_971 = 0;
	bool bLocal_972 = 0;
	bool bLocal_973 = 0;
	bool bLocal_974 = 0;
	bool bLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	bool bLocal_978 = 0;
	int iLocal_979 = 0;
	bool bLocal_980 = 0;
	int iLocal_981 = 0;
	bool bLocal_982 = 0;
	int iLocal_983 = 0;
	bool bLocal_984 = 0;
	int iLocal_985 = 0;
	int iLocal_986 = 0;
	bool bLocal_987 = 0;
	int iLocal_988 = 0;
	int iLocal_989 = 0;
	bool bLocal_990 = 0;
	int iLocal_991 = 0;
	bool bLocal_992 = 0;
	int iLocal_993 = 0;
	int iLocal_994 = 0;
	int iLocal_995 = 0;
	int iLocal_996 = 0;
	int iLocal_997 = 0;
	bool bLocal_998 = 0;
	int iLocal_999 = 0;
	int iLocal_1000 = 0;
	int iLocal_1001 = 0;
	int iLocal_1002 = 0;
	int iLocal_1003 = 0;
	bool bLocal_1004 = 0;
	int iLocal_1005 = 0;
	int iLocal_1006 = 0;
	int iLocal_1007 = 0;
	bool bLocal_1008 = 0;
	int iLocal_1009 = 0;
	int iLocal_1010 = 0;
	int iLocal_1011 = 0;
	bool bLocal_1012 = 0;
	int iLocal_1013 = 0;
	int iLocal_1014 = 0;
	int iLocal_1015 = 0;
	int iLocal_1016 = 0;
	int iLocal_1017 = 0;
	int iLocal_1018 = 0;
	var uLocal_1019[5] = { 0, 0, 0, 0, 0 };
	int iLocal_1020 = 0;
	var uLocal_1021 = 0;
	int iLocal_1022 = 0;
	int iLocal_1023 = 0;
	int iLocal_1024 = 0;
	int iLocal_1025 = 0;
	int iLocal_1026 = 0;
	int iLocal_1027 = 0;
	int iLocal_1028 = 0;
	int iLocal_1029 = 0;
	var uLocal_1030 = 0;
	int iLocal_1031 = 0;
	int iLocal_1032 = 0;
	int iLocal_1033 = 0;
	int iLocal_1034 = 0;
	int iLocal_1035 = 0;
	float fLocal_1036 = 0f;
	float fLocal_1037 = 0f;
	float fLocal_1038 = 0f;
	float fLocal_1039[5] = { 0f, 0f, 0f, 0f, 0f };
	var uLocal_1040[5] = { 0, 0, 0, 0, 0 };
	float fLocal_1041 = 0f;
	float fLocal_1042 = 0f;
	float fLocal_1043[3] = { 0f, 0f, 0f };
	var uLocal_1044[3] = { 0, 0, 0 };
	float fLocal_1045 = 0f;
	float fLocal_1046 = 0f;
	float fLocal_1047 = 0f;
	int iLocal_1048 = 0;
	float fLocal_1049 = 0f;
	struct<3> Local_1050[3];
	struct<3> Local_1051[3];
	struct<3> Local_1052[5];
	struct<3> Local_1053 = { 0, 0, 0 } ;
	struct<3> Local_1054 = { 0, 0, 0 } ;
	struct<3> Local_1055 = { 0, 0, 0 } ;
	struct<3> Local_1056 = { 0, 0, 0 } ;
	struct<3> Local_1057 = { 0, 0, 0 } ;
	struct<3> Local_1058 = { 0, 0, 0 } ;
	struct<3> Local_1059 = { 0, 0, 0 } ;
	struct<3> Local_1060 = { 0, 0, 0 } ;
	struct<3> Local_1061 = { 0, 0, 0 } ;
	float fLocal_1062 = 0f;
	int iLocal_1063 = 0;
	int iLocal_1064 = 0;
	int iLocal_1065 = 0;
	int iLocal_1066 = 0;
	var uLocal_1067[2] = { 0, 0 };
	int iLocal_1068 = 0;
	int iLocal_1069[3] = { 0, 0, 0 };
	var uLocal_1070 = 0;
	int iLocal_1071 = 0;
	int iLocal_1072 = 0;
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	int iLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	bool bLocal_1109 = 0;
	var uLocal_1110 = 16;
	var uLocal_1111 = 0;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 0;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 0;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = -1;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 1000;
	var uLocal_1285 = 1000;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 8;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 4;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 0;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 4;
	var uLocal_1309 = 0;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 0;
	var uLocal_1323 = 4;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 0;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 4;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 0;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 4;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 4;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 0;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 4;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 0;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 4;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 0;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	struct<3> Local_1411 = { 0, 0, 0 } ;
	float fLocal_1412 = 0f;
	struct<3> Local_1413 = { 0, 0, 0 } ;
	float fLocal_1414 = 0f;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	struct<3> Local_1417 = { 0, 0, 0 } ;
	struct<3> Local_1418 = { 0, 0, 0 } ;
	struct<3> Local_1419 = { 0, 0, 0 } ;
	struct<3> Local_1420 = { 0, 0, 0 } ;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	int iLocal_1424 = 0;
	struct<12> Local_1425 = { 2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
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
	iLocal_27 = 3;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_38 = 1;
	iLocal_39 = 65;
	iLocal_40 = 49;
	iLocal_41 = 64;
	Local_44 = { 500f, 500f, 500f };
	uLocal_51 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	uLocal_52 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	iLocal_227 = -1;
	fLocal_229 = 1f;
	iLocal_336 = 100;
	iLocal_337 = 3;
	iLocal_929 = 3;
	iLocal_1028 = 37000;
	iLocal_1034 = -1;
	fLocal_1036 = 90000f;
	fLocal_1045 = 135f;
	fLocal_1047 = 0f;
	fLocal_1049 = 0f;
	Local_1056 = { -1162.985f, -161.715f, -38.221f };
	Local_1057 = { -1327.63f, -266.202f, 38.221f };
	Local_1058 = { -1236.661f, -197.316f, 39.6313f };
	Local_1059 = { -1266.027f, -218.9829f, 41.44594f };
	Local_1061 = { -1237.731f, -189.5452f, 40.63728f };
	fLocal_1062 = 40f;
	iLocal_1071 = joaat("a_m_y_beachvesp_02");
	iLocal_1072 = joaat("fbi2");
	iLocal_1073 = joaat("s_m_m_highsec_01");
	iLocal_1074 = joaat("s_m_m_highsec_02");
	iLocal_1075 = joaat("washington");
	Local_1411 = { -1263.677f, -222.2767f, 41.446f };
	fLocal_1412 = 304.201f;
	Local_1413 = { -1507.252f, -934.3307f, 8.6562f };
	fLocal_1414 = 137.9228f;
	Local_1417 = { -1510.733f, -935.96f, 10.90214f };
	Local_1418 = { 15.07491f, -0.024198f, -71.86189f };
	Local_1419 = { -1510.878f, -936.1155f, 9.798549f };
	Local_1420 = { 4.686822f, -0.024198f, -72.45972f };
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		func_477(&(Global_17C49.f_4729.f_1), 1024);
		func_475();
		func_470();
	}
	MISC::SET_MISSION_FLAG(1);
	iLocal_936 = PLAYER::PLAYER_PED_ID();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	}
	if (func_469())
	{
		if (func_468())
		{
			iLocal_976 = 1;
		}
		bLocal_965 = true;
	}
	else
	{
		bLocal_965 = false;
	}
	func_467();
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, 0);
	}
	func_466();
	iLocal_228 = 0;
	Local_54 = { func_464(iLocal_228) };
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1073, 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1074, 1);
	CAM::INVALIDATE_IDLE_CAM();
	if (func_469())
	{
		bLocal_329 = true;
		iLocal_1027 = func_463();
		if (Global_14A40)
		{
			if (iLocal_1027 <= 1)
			{
				iLocal_1027++;
			}
		}
		func_462();
		if (iLocal_1027 == 0)
		{
			if (iLocal_976)
			{
				func_460();
				while (!func_459())
				{
					SYSTEM::WAIT(0);
				}
				iVar0 = func_422(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0))) && !VEHICLE::IS_BIG_VEHICLE(iVar0))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar0);
				}
			}
			func_421(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1027 == 1)
		{
			if (iLocal_976)
			{
				func_460();
				while (!func_459())
				{
					SYSTEM::WAIT(0);
				}
				iVar1 = func_422(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar1))) && !VEHICLE::IS_BIG_VEHICLE(iVar1))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar1);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar1);
				}
			}
			func_421(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1027 == 2)
		{
			if (iLocal_976)
			{
				func_460();
				while (!func_459())
				{
					SYSTEM::WAIT(0);
				}
				iVar2 = func_422(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (((!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar2)) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar2))) && !VEHICLE::IS_BIG_VEHICLE(iVar2))
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2);
				}
				else
				{
					VEHICLE::DELETE_VEHICLE(&iVar2);
				}
			}
			func_421(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_ASS1", 0);
		if (iLocal_966)
		{
			if (func_420())
			{
				func_419();
			}
		}
		else if (!PED::IS_PED_INJURED(iLocal_936))
		{
			func_412();
			if (iLocal_929 < 10)
			{
				Local_319.f_6 = 1;
			}
			else
			{
				Local_319.f_6 = 5;
			}
			func_141();
			func_89();
			if (iLocal_981)
			{
				func_84();
			}
			if (!bLocal_964)
			{
				if (iLocal_929 >= 9 && iLocal_929 < 11)
				{
					func_80(&uLocal_1021, &fLocal_1036, &bLocal_963, &bLocal_964);
				}
			}
			func_55();
			func_53();
			if (((iLocal_957 || bLocal_962) && iLocal_929 < 11) || (bLocal_992 && iLocal_929 < 11))
			{
				if (!func_52(&uLocal_1100) && iLocal_929 > 8)
				{
					func_49(&uLocal_1100);
				}
				else if (iLocal_929 < 8 || func_46(&uLocal_1100) > 5f)
				{
					if (iLocal_935 == 1)
					{
						func_31(1);
					}
					else if (iLocal_935 == 5)
					{
						func_31(5);
					}
					else
					{
						func_31(2);
					}
				}
				else if (func_46(&uLocal_1100) > 2.5f)
				{
					if (!iLocal_993)
					{
						if (!bLocal_1012)
						{
							iLocal_941 = func_30(70f, 0);
						}
						else
						{
							iLocal_941 = func_30(70f, 1);
						}
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_INJURED(iLocal_941))
							{
								TASK::CLEAR_PED_TASKS(iLocal_941);
								if (iLocal_935 == 1)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1065))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_941, 0))
										{
											TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_941, iLocal_1065, iLocal_1065, 2f, 0, 0.5f, 1082130432, 1, 0, -957453492);
										}
									}
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_941) && !PED::IS_PED_INJURED(iLocal_941))
									{
										func_28(iLocal_941, 6, "OJAvaGUARD2");
										func_27(&uLocal_1110, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_935 == 8)
								{
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
									{
										TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_941, iLocal_1063, iLocal_1063, 2f, 0, 0.5f, 1082130432, 1, 0, -957453492);
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1110, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else
								{
									TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_941, PLAYER::PLAYER_PED_ID(), -1, 0);
									func_2(iLocal_941);
								}
							}
						}
						iLocal_993 = 1;
					}
				}
			}
			func_1();
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x710
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_936, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_936, 0);
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck") || ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("towtruck2"))
		{
			bLocal_967 = true;
		}
	}
	else
	{
		bLocal_967 = false;
	}
	if (bLocal_967)
	{
		if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1063))
		{
			VEHICLE::DETACH_VEHICLE_FROM_TOW_TRUCK(iVar0, iLocal_1063);
		}
	}
}

void func_2(int iParam0)//Position - 0x774
{
	struct<6> Var0;
	
	if (!iLocal_1003)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_23(iParam0, 1) < 50f)
		{
			if (!func_22())
			{
				if (iLocal_935 == 4)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1110, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_935 == 8)
				{
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1110, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1110, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1003 = 1;
			}
			else
			{
				Var0 = { func_5() };
				if (!MISC::ARE_STRINGS_EQUAL(&Var0, "OJAS_FEED"))
				{
					func_3();
				}
			}
		}
	}
}

void func_3()//Position - 0x847
{
	Global_38DE = 0;
	func_4();
}

void func_4()//Position - 0x857
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

struct<6> func_5()//Position - 0x8AE
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_3D4C == 4)
	{
		return Global_3BCF;
	}
	return Var0;
}

bool func_6(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x8D2
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_7(sParam2, iParam3, 0);
}

int func_7(char* sParam0, int iParam1, bool bParam2)//Position - 0x920
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
					func_4();
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
		if (func_20(8, -1))
		{
			return 0;
		}
		Global_3D98 = { Global_3D92 };
		func_19();
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
				func_12();
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
				if (func_11())
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
			if (func_10())
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
			func_9();
			Global_3D56 = bParam2;
		}
		Global_3D4E = iParam1;
		StringCopy(&Global_3BCF, sParam0, 24);
		Global_38DE = 0;
		func_8();
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
		func_4();
	}
	return 0;
}

void func_8()//Position - 0xBEC
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

void func_9()//Position - 0xC1D
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

int func_10()//Position - 0xCB2
{
	if (Global_3839.f_1 == 1 || Global_3839.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_11()//Position - 0xCD9
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

void func_12()//Position - 0xD72
{
	if (func_18(14))
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
		Global_3839 = func_13();
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

int func_13()//Position - 0xE13
{
	func_14();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_14()//Position - 0xE2C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_17(Global_17C49.f_6C1.f_21B.f_C8D) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_16(PLAYER::PLAYER_PED_ID());
			if (func_15(iVar0) && (!func_18(14) || Global_17832))
			{
				if (Global_17C49.f_6C1.f_21B.f_C8D != iVar0 && func_15(Global_17C49.f_6C1.f_21B.f_C8D))
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

bool func_15(int iParam0)//Position - 0xF29
{
	return iParam0 < 3;
}

int func_16(int iParam0)//Position - 0xF35
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_17(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_17(int iParam0)//Position - 0xF72
{
	if (func_15(iParam0))
	{
		return Global_17C49.f_744E[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_18(int iParam0)//Position - 0xF9C
{
	return Global_8861 == iParam0;
}

void func_19()//Position - 0xFAA
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

bool func_20(int iParam0, int iParam1)//Position - 0x1001
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

void func_21(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x103C
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

int func_22()//Position - 0x1092
{
	if (Global_3D4C != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

float func_23(int iParam0, int iParam1)//Position - 0x10B4
{
	return func_24(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), iParam0, iParam1);
}

float func_24(int iParam0, int iParam1, int iParam2)//Position - 0x10CC
{
	struct<3> Var0;
	struct<3> Var1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Var1, iParam2);
}

int func_25(float fParam0)//Position - 0x1128
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(uLocal_939[iVar0]))
		{
			if (func_26(uLocal_939[iVar0], Local_1055, 1) < fParam0)
			{
				return uLocal_939[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_940[iVar0]))
		{
			if (func_26(uLocal_940[iVar0], Local_1055, 1) < fParam0)
			{
				return uLocal_940[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

float func_26(int iParam0, struct<3> Param1, int iParam2)//Position - 0x11B5
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), Param1, iParam2);
}

int func_27(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x11DE
{
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3D53 = 0;
	Global_3D5A = 0;
	Global_3D55 = 0;
	Global_412B = 1;
	Global_412D = 0;
	Global_4131 = 0;
	StringCopy(&Global_4138, sParam3, 24);
	Global_280001 = 0;
	return func_7(sParam2, iParam4, 0);
}

void func_28(int iParam0, int iParam1, char* sParam2)//Position - 0x1232
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		func_29(&uLocal_1110, iParam1, iParam0, sParam2, 0, 1);
	}
}

void func_29(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1253
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_10A95)
	{
		if (!PED::IS_PED_INJURED(iParam2))
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

int func_30(int iParam0, bool bParam1)//Position - 0x12EE
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	
	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!PED::IS_PED_INJURED(uLocal_939[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_939[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_939[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_939[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(uLocal_940[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_940[iVar0], 0)))
			{
				fVar1 = func_23(uLocal_940[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = uLocal_940[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_938[iVar0]))
		{
			if (bParam1 || (!bParam1 && !PED::IS_PED_IN_ANY_VEHICLE(uLocal_940[iVar0], 0)))
			{
				fVar1 = func_23(iLocal_938[iVar0], 1);
				if (fVar1 < fVar2)
				{
					fVar2 = fVar1;
					uVar3 = iLocal_938[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

void func_31(int iParam0)//Position - 0x1428
{
	char* sVar0;
	
	if (iLocal_966 == 0)
	{
		iLocal_935 = iParam0;
		func_3();
		HUD::CLEAR_PRINTS();
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_FAIL");
		if (func_45())
		{
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			Global_15F6A.f_C[0] = 1;
		}
		else
		{
			Global_15F6A.f_C[0] = 0;
		}
		switch (iLocal_935)
		{
			case 0:
				sVar0 = "ASS_VA_FAILED";
				break;
			
			case 1:
				sVar0 = "ASS_VA_VEHICLE";
				break;
			
			case 2:
			case 5:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 8:
				sVar0 = "ASS_VA_COVER";
				break;
			
			case 3:
				sVar0 = "ASS_VA_WANTED";
				break;
			
			case 6:
				sVar0 = "ASS_VA_ESCAPED";
				break;
			
			case 7:
				sVar0 = "ASS_VA_ABAND";
				break;
			
			case 9:
				sVar0 = "ASS_VA_LATTACK";
				break;
		}
		iLocal_966 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

void func_32(int iParam0)//Position - 0x151A
{
	int iVar0;
	
	if (Global_17C49.f_1CAD || func_40(0))
	{
		iVar0 = func_39();
		if (!func_33(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
		Global_15F8E = iParam0;
	}
}

int func_33(int iParam0)//Position - 0x155F
{
	int iVar0;
	int iVar1;
	
	func_38();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_13CDF[iParam0 /*5*/];
	iVar1 = Global_10BA2.f_6D[iVar0 /*4*/];
	func_37(iVar1, 1);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
	func_34(&(Global_17C49.f_6C1.f_21B), iVar1);
	if (Global_14A3E == Global_15F8F)
	{
		Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1++;
	}
	if (!MISC::IS_BIT_SET(Global_13D03[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_2++;
	Global_14A3E = Global_15F8F;
	if (iParam0 == -1)
	{
		if (Global_17C49.f_1CAD)
		{
		}
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_13CDF[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_34(var uParam0, int iParam1)//Position - 0x1676
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_17C49.f_4193[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !MISC::IS_BIT_SET(Global_17C49.f_1CAD.f_63.f_D9[0], 9))
		{
		}
		else
		{
			Var2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_36(Global_17C49.f_4193[iVar0], &Var2, &fVar3))
			{
				Global_17C49.f_4193[iVar0] = 318;
				func_35(&(uParam0->f_5F4[iVar0]));
				uParam0->f_5F8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_602[iVar0] = 0f;
				uParam0->f_606[iVar0] = 0;
				uParam0->f_60A[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_614[iVar0] = 0;
				Global_156CD[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_9 = 0f;
				Global_156CD[iVar0 /*29*/].f_C = 0f;
				Global_156CD[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_A = 0f;
				Global_156CD[iVar0 /*29*/].f_D = 0f;
				Global_156CD[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_B = 0f;
				Global_156CD[iVar0 /*29*/].f_E = 0f;
				Global_156CD[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1A = 0f;
				Global_156CD[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1B = 0f;
				Global_156CD[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_156CD[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_35(var uParam0)//Position - 0x183F
{
	*uParam0 = -15;
}

int func_36(int iParam0, var uParam1, float fParam2)//Position - 0x184D
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_36(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

void func_37(int iParam0, bool bParam1)//Position - 0x21BC
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_14980[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_14980[iParam0 /*2*/] = 0;
	}
}

void func_38()//Position - 0x21FA
{
	Global_15F8D = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_10B7D))
		{
			switch (func_13())
			{
				case 0:
					StringCopy(&Global_10B7D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_10B7D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_10B7D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_10B81, "", 16);
		}
		Global_15F8D = 0;
		MISC::SET_BIT(&(Global_15F6A.f_14), 25);
	}
}

int func_39()//Position - 0x22E5
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_40(bool bParam0)//Position - 0x231A
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_10B8D, 0);
}

void func_41(char* sParam0)//Position - 0x2345
{
	func_477(&(Global_17C49.f_4729.f_1), 1024);
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		func_42(sParam0);
	}
}

void func_42(char* sParam0)//Position - 0x236D
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_10B7D, sParam0, 16);
			StringCopy(&Global_10B81, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

void func_43(struct<3> Param0, float fParam1)//Position - 0x23AC
{
	if (func_44(Global_10B85, 0f, 0f, 0f))
	{
		Global_10B85 = { Param0 };
		Global_10B88 = fParam1;
	}
}

bool func_44(struct<3> Param0, struct<3> Param1)//Position - 0x23D7
{
	return ((Param0.x == Param1.x && Param0.f_1 == Param1.f_1) && Param0.f_2 == Param1.f_2);
}

int func_45()//Position - 0x2400
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_46(var uParam0)//Position - 0x2432
{
	if (func_52(uParam0))
	{
		if (func_48(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_47(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

float func_47(bool bParam0)//Position - 0x2471
{
	var uVar0;
	
	if (bParam0)
	{
		return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar0 = NETWORK::GET_NETWORK_TIME();
		return (SYSTEM::TO_FLOAT(uVar0) / 1000f);
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_48(var uParam0)//Position - 0x24B9
{
	return MISC::IS_BIT_SET(*uParam0, 2);
}

void func_49(var uParam0)//Position - 0x24C9
{
	if (!func_52(uParam0))
	{
		func_50(uParam0);
	}
}

void func_50(var uParam0)//Position - 0x24E1
{
	func_51(uParam0, 0f);
}

void func_51(var uParam0, float fParam1)//Position - 0x24F0
{
	uParam0->f_1 = (func_47(MISC::IS_BIT_SET(*uParam0, 4)) - fParam1);
	MISC::SET_BIT(uParam0, 1);
	MISC::CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_52(var uParam0)//Position - 0x251E
{
	return MISC::IS_BIT_SET(*uParam0, 1);
}

void func_53()//Position - 0x252E
{
	if (func_54(&iLocal_935))
	{
		func_31(6);
	}
}

int func_54(int iParam0)//Position - 0x2545
{
	float fVar0;
	bool bVar1;
	
	if (iLocal_929 > 11)
	{
		if (!PED::IS_PED_INJURED(iLocal_937))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_937, iLocal_1063, 0))
				{
					bVar1 = true;
				}
			}
		}
		if (bLocal_987)
		{
			fVar0 = 100f;
		}
		else
		{
			fVar0 = 200f;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
		{
			if (!PED::IS_PED_INJURED(iLocal_937))
			{
				if (func_24(iLocal_936, iLocal_937, 1) >= fVar0)
				{
					if (bVar1)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
						{
							if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_1063) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1063))
							{
								*iParam0 = 6;
								return 1;
							}
						}
					}
					else if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_937))
					{
						*iParam0 = 6;
						return 1;
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_948))
				{
					if (func_24(iLocal_936, iLocal_937, 1) >= (fVar0 * 0.5f))
					{
						if (!HUD::IS_BLIP_FLASHING(uLocal_948))
						{
							HUD::SET_BLIP_FLASHES(uLocal_948, 1);
						}
					}
					else if (HUD::IS_BLIP_FLASHING(uLocal_948))
					{
						HUD::SET_BLIP_FLASHES(uLocal_948, 0);
					}
				}
			}
		}
	}
	return 0;
}

void func_55()//Position - 0x264B
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
	{
		if (!PED::IS_PED_INJURED(iLocal_937))
		{
			func_56(&uLocal_1275, iLocal_937, 0, 0, 1, 1, 1);
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x2677
{
	func_57(uParam0, iParam1, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_57(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6)//Position - 0x2691
{
	func_58(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

void func_58(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x26AE
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		func_79(uParam0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_59(uParam0, iParam1, Param2, sParam3, iParam4, bParam5, uParam6, bParam7);
}

void func_59(var uParam0, int iParam1, struct<3> Param2, char* sParam3, int iParam4, bool bParam5, var uParam6, bool bParam7)//Position - 0x26E6
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam3;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_78(iVar0))
	{
		func_77();
	}
	if (func_76(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 1);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_71(uParam0, bParam5, bParam7, 0))
			{
				func_68(uParam0, iParam1, Param2, iParam4);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_64(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
						{
							if (!func_78(iVar0))
							{
								func_63(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam6)
					{
						if (!func_78(iVar0))
						{
							func_63(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_62(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam3))
			{
				if (func_78(sParam3))
				{
					HUD::CLEAR_HELP(1);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_79(uParam0, iVar0, 1);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_79(uParam0, iVar0, 1);
				}
			}
			if (!func_71(uParam0, bParam5, bParam7, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_61(uParam0))
				{
					func_60(uParam0);
				}
			}
		}
	}
	else
	{
		func_79(uParam0, iVar0, 0);
	}
}

void func_60(var uParam0)//Position - 0x2A53
{
	if (func_76(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
		CAM::STOP_GAMEPLAY_HINT(0);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_61(var uParam0)//Position - 0x2ABC
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_A / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_62(bool bParam0)//Position - 0x2AE7
{
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_17C49.f_206F.f_64++;
			}
			return Global_17C49.f_206F.f_64;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_17C49.f_206F.f_65++;
			}
			return Global_17C49.f_206F.f_65;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_17C49.f_206F.f_66++;
			}
			return Global_17C49.f_206F.f_66;
			break;
		
		default:
			break;
	}
	return 3;
}

void func_63(char* sParam0, int iParam1)//Position - 0x2B91
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_64(char* sParam0)//Position - 0x2BA8
{
	if (!func_65(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_78(sParam0)) || func_78("CMN_HINT"))
		{
			HUD::CLEAR_HELP(1);
		}
		return 0;
	}
	switch (Global_8861)
	{
		case 0:
		case 3:
			if (func_62(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_62(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_65(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2C41
{
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_67(0))
	{
		return 0;
	}
	if (func_66())
	{
		return 0;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return 0;
	}
	if (Global_105F2)
	{
		return 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_CADC)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_66()//Position - 0x2DBD
{
	return MISC::GET_GAME_TIMER() <= Global_4354.f_140A + 100;
}

int func_67(int iParam0)//Position - 0x2DD2
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

void func_68(var uParam0, int iParam1, struct<3> Param2, int iParam3)//Position - 0x2E2C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		func_79(uParam0, 0, 0);
	}
	if (func_44(Param2, 0f, 0f, 0f))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, 0))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_69())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_A;
	if (iParam3 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, 1, -1, iVar1, iVar2, iParam3);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, 0);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", 1);
	uParam0->f_B = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_69()//Position - 0x2F2F
{
	return func_70(PLAYER::PLAYER_ID());
}

int func_70(int iParam0)//Position - 0x2F3F
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

int func_71(var uParam0, bool bParam1, bool bParam2, bool bParam3)//Position - 0x2F5E
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_75(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_61(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (!func_75(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_74(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_74(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					if (!func_75(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_74(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_74(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_75(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
					{
						if (func_73(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_72(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || func_72(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_73(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_61(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_65(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_77();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_72(bool bParam0, bool bParam1, bool bParam2)//Position - 0x32CA
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73(bool bParam0, bool bParam1, bool bParam2)//Position - 0x331C
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_74(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3365
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
			PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_60)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(bool bParam0, bool bParam1, bool bParam2)//Position - 0x33C4
{
	if (!func_65(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_60)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(0);
				return 1;
			}
		}
	}
	return 0;
}

int func_76(int iParam0)//Position - 0x341A
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), 0))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_77()//Position - 0x3475
{
	MISC::SET_BIT(&Global_8D8, 4);
}

bool func_78(char* sParam0)//Position - 0x3485
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_79(var uParam0, int iParam1, int iParam2)//Position - 0x3498
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_2554DA.f_112D, 25))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(iParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_B)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, 0);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", 1);
			uParam0->f_B = 0;
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(1);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_78(uParam0->f_3))
		{
			HUD::CLEAR_HELP(1);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_78(sVar0))
		{
			HUD::CLEAR_HELP(1);
		}
	}
}

void func_80(var uParam0, float fParam1, bool bParam2, bool bParam3)//Position - 0x3575
{
	float fVar0;
	
	if (!*bParam2)
	{
		*uParam0 = MISC::GET_GAME_TIMER();
		*fParam1 = (*fParam1 / 1000f);
		if (!func_52(&uLocal_1097))
		{
			func_49(&uLocal_1097);
		}
		*bParam2 = 1;
	}
	if (func_52(&uLocal_1097))
	{
		fVar0 = func_46(&uLocal_1097);
		if (fVar0 >= *fParam1)
		{
			*bParam3 = 1;
		}
	}
	iLocal_1031 = SYSTEM::ROUND((*fParam1 - fVar0));
	iLocal_1031 *= 1000;
	if (iLocal_1031 < 63000)
	{
		iLocal_970 = 1;
	}
	if (iLocal_1031 < 65000)
	{
		iLocal_977 = 1;
	}
	if (iLocal_1031 < iLocal_1028)
	{
		iLocal_1000 = 1;
	}
	if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI", 0))
	{
		bLocal_1109 = false;
	}
	else
	{
		bLocal_1109 = true;
	}
	if (iLocal_1031 < 30000)
	{
		iLocal_991 = 1;
		if (bLocal_1109)
		{
			if (func_52(&uLocal_1106))
			{
				if (func_46(&uLocal_1106) > 1f)
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&uLocal_1106);
				}
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&uLocal_1106);
			}
		}
		func_81(iLocal_1031, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0);
	}
	else
	{
		func_81(iLocal_1031, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
	}
}

void func_81(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x36AB
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		if (iVar0 == -1)
		{
			if (func_83(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1446E8.f_1 = 1;
		func_82(7, iVar0);
		Global_1446E8.f_C3C[iVar0] = iParam0;
		StringCopy(&(Global_1446E8.f_C3C.f_9[iVar0 /*16*/]), sParam1, 64);
		Global_1446E8.f_C3C.f_8A[iVar0] = iParam2;
		Global_1446E8.f_C3C.f_AE[iVar0] = iParam3;
		Global_1446E8.f_C3C.f_93[iVar0] = iParam4;
		Global_1446E8.f_C3C.f_9C[iVar0] = iParam5;
		Global_1446E8.f_C3C.f_C9[iVar0] = iParam6;
		Global_1446E8.f_C3C.f_D2[iVar0] = iParam7;
		Global_1446E8.f_C3C.f_A5[iVar0] = iParam8;
		Global_1446E8.f_C3C.f_FE[iVar0] = iParam9;
		Global_1446E8.f_C3C.f_107[iVar0] = iParam10;
		Global_1446E8.f_C3C.f_121[iVar0] = iParam11;
		Global_1446E8.f_C3C.f_C0[iVar0] = iParam12;
		Global_1446E8.f_C3C.f_DB[iVar0] = iParam13;
	}
}

void func_82(int iParam0, int iParam1)//Position - 0x37C5
{
	MISC::SET_BIT(&(Global_1446E8.f_E1D[iParam0]), iParam1);
}

bool func_83(int iParam0, int iParam1)//Position - 0x37DE
{
	return MISC::IS_BIT_SET(Global_1446E8.f_E1D[iParam0], iParam1);
}

void func_84()//Position - 0x37F7
{
	int iVar0;
	
	switch (iLocal_1025)
	{
		case 0:
			if (!func_22())
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_939[0]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_939[0]);
				}
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_939[1]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_939[1]);
				}
				iVar0 = func_88();
				if (bLocal_980)
				{
					if (!iLocal_996)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1110, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
						{
							iLocal_996 = 1;
						}
					}
				}
				else if (!bLocal_987 && PED::IS_PED_INJURED(iLocal_937))
				{
					if (!iLocal_996)
					{
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1110, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
						{
							iLocal_996 = 1;
						}
					}
				}
				if (!func_52(&uLocal_1085))
				{
					func_49(&uLocal_1085);
				}
				else
				{
					func_50(&uLocal_1085);
				}
				iLocal_1025 = 1;
			}
			break;
		
		case 1:
			iLocal_1025 = 2;
			break;
		
		case 2:
			if (iLocal_996 || !PED::IS_PED_INJURED(iLocal_937))
			{
				if (!func_22() && !bLocal_980)
				{
					if (!iLocal_994)
					{
						iVar0 = func_88();
						func_28(iVar0, 3, "OJAvaGUARD");
						if (func_6(&uLocal_1110, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0))
						{
							iLocal_994 = 1;
						}
					}
					else if (!bLocal_1004 && PED::IS_PED_INJURED(iLocal_937))
					{
						iVar0 = func_88();
						func_87(iVar0);
					}
				}
			}
			else if (bLocal_980)
			{
				if (!iLocal_996)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1110, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0))
					{
						iLocal_996 = 1;
					}
				}
			}
			else if (!bLocal_987)
			{
				if (!iLocal_996)
				{
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1110, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0))
					{
						iLocal_996 = 1;
					}
				}
			}
			if (func_86(iLocal_936))
			{
				fLocal_1046 = 2.5f;
			}
			else
			{
				fLocal_1046 = 5f;
			}
			if (func_52(&uLocal_1085))
			{
				if ((func_46(&uLocal_1085) > fLocal_1046 && func_85()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
					func_3();
					if (!iLocal_957)
					{
						iLocal_957 = 1;
						iLocal_1001 = 1;
					}
					iLocal_981 = 0;
				}
			}
			break;
		
		case 3:
			break;
	}
}

int func_85()//Position - 0x3A3F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_939[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_939[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_939[iVar0], 85, 1);
			if (PED::CAN_PED_SEE_HATED_PED(uLocal_939[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_940[iVar0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_940[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(uLocal_940[iVar0], 85, 1);
			if (PED::CAN_PED_SEE_HATED_PED(uLocal_940[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_938[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_938[iVar0]))
		{
			PED::SET_PED_RESET_FLAG(iLocal_938[iVar0], 85, 1);
			if (PED::CAN_PED_SEE_HATED_PED(iLocal_938[iVar0], PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_86(int iParam0)//Position - 0x3B47
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f, 45.32541f, 51f, 0, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f, 45.02535f, 12.8f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0)//Position - 0x3BBF
{
	if (!bLocal_1004)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_937) && PED::IS_PED_INJURED(iLocal_937))
		{
			if (!func_22())
			{
				if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0)) && func_23(iParam0, 1) < 75f)
				{
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1110, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					bLocal_1004 = true;
				}
			}
		}
	}
}

int func_88()//Position - 0x3C34
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_939[iVar1]) && !PED::IS_PED_INJURED(uLocal_939[iVar1]))
		{
			iVar0 = uLocal_939[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_940[iVar1]) && !PED::IS_PED_INJURED(uLocal_940[iVar1]))
			{
				iVar0 = uLocal_940[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_938[iVar1]) && !PED::IS_PED_INJURED(iLocal_938[iVar1]))
			{
				iVar0 = iLocal_938[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_89()//Position - 0x3CF8
{
	func_96();
	if (!iLocal_981)
	{
		if (!iLocal_957)
		{
			if (func_90(&iLocal_935))
			{
				iLocal_957 = 1;
			}
		}
	}
}

int func_90(int iParam0)//Position - 0x3D20
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!iLocal_957)
	{
		if (iLocal_991 && !bLocal_960)
		{
			if (func_95(&iLocal_935))
			{
				*iParam0 = 8;
				return 1;
			}
		}
		if (WEAPON::IS_PED_ARMED(iLocal_936, 4))
		{
			if (PED::IS_PED_SHOOTING(iLocal_936))
			{
				fVar1 = func_26(PLAYER::PLAYER_PED_ID(), -1230.599f, -196.5408f, 38.1528f, 1);
				WEAPON::GET_CURRENT_PED_WEAPON(iLocal_936, &iVar2, 1);
				if ((((fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle")) || iVar2 == joaat("weapon_heavysniper")) || iVar2 == joaat("weapon_remotesniper")) || iVar2 == joaat("weapon_marksmanrifle"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
					{
						iLocal_981 = 1;
						iLocal_979 = 1;
					}
				}
				else if (fVar1 < 50f)
				{
					return 1;
				}
			}
		}
		if ((func_94(iLocal_1063) || func_93(iLocal_1063)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1063) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1063, iLocal_936, 1)))
		{
			return 1;
		}
		if (func_94(iLocal_1064) || (ENTITY::DOES_ENTITY_EXIST(iLocal_1064) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1064, iLocal_936, 1)))
		{
			return 1;
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063) && !ENTITY::IS_ENTITY_DEAD(iLocal_1063))
		{
			if (PED::IS_PED_IN_VEHICLE(iLocal_936, iLocal_1063, 0))
			{
				VEHICLE::SET_VEHICLE_ALARM(iLocal_1063, 1);
				VEHICLE::START_VEHICLE_ALARM(iLocal_1063);
				return 1;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_936, 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iLocal_936, 0);
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_1063) || (bLocal_967 && VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(iVar0, iLocal_1063)))
					{
						*iParam0 = 4;
						return 1;
					}
				}
			}
		}
		if (iLocal_929 == 12)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				if (func_24(iLocal_936, iLocal_1063, 1) <= 15f)
				{
					return 1;
				}
			}
		}
		if ((iLocal_931[0] == 2 || iLocal_931[1] == 2) || iLocal_931[2] == 2)
		{
			if (func_92())
			{
				return 1;
			}
		}
		if (iLocal_929 < 11)
		{
			if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_1061, fLocal_1062))
			{
				return 1;
			}
		}
		else if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, Local_1061, fLocal_1062))
		{
			if (func_91())
			{
				iLocal_1011 = 1;
			}
			else
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_91()//Position - 0x3F80
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1272.181f, -241.2545f, 62.90406f, -1300.203f, -201.3968f, 40.40408f, 44.5f, 0, 0, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1270.125f, -253.9321f, 62.90407f, -1311.414f, -193.6588f, 38.23291f, 44.5f, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

int func_92()//Position - 0x3FF2
{
	int iVar0;
	
	if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
	{
		if (iVar0 == joaat("weapon_stickybomb"))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
			{
				if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_93(int iParam0)//Position - 0x4056
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0) == 3 && PED::GET_VEHICLE_PED_IS_ENTERING(iLocal_936) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_94(int iParam0)//Position - 0x4090
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1) != 0)
			{
				if (WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_24(PLAYER::PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1))
							{
								if ((ENTITY::IS_ENTITY_A_VEHICLE(iVar1) && ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam0) || (ENTITY::IS_ENTITY_A_PED(iVar1) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1)))
								{
									if ((PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && PAD::IS_CONTROL_PRESSED(0, 24)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && PAD::IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_95(int iParam0)//Position - 0x415C
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
	{
		if (WEAPON::HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(PLAYER::PLAYER_PED_ID(), iLocal_1063, joaat("weapon_stickybomb"), -1))
		{
			if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f, 40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f, 40.42538f, 4.5f, joaat("weapon_stickybomb"), 0))
			{
				*iParam0 = 8;
				return 1;
			}
		}
	}
	return 0;
}

void func_96()//Position - 0x41F0
{
	int iVar0;
	
	func_137();
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_939[iVar0]))
		{
			if (iLocal_957 && !bLocal_990)
			{
				func_136(uLocal_939[iVar0], &(Local_944[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_940[iVar0]))
		{
			if (iLocal_957 && !bLocal_990)
			{
				func_136(uLocal_940[iVar0], &(Local_945[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_938[iVar0]))
		{
			if (iLocal_957 && !bLocal_990)
			{
				func_136(iLocal_938[iVar0], &(Local_946[iVar0 /*8*/]), -1, 0, 0, 0, 150f, 0);
			}
			if (!PED::IS_PED_INJURED(iLocal_938[iVar0]))
			{
				if (iLocal_934[iVar0] == 4)
				{
					PED::SET_PED_RESET_FLAG(iLocal_938[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1022 == 0)
	{
		func_134(0);
	}
	else if (iLocal_1022 == 1)
	{
		func_134(1);
	}
	else if (iLocal_1022 == 2)
	{
		if (iLocal_929 >= 9)
		{
			func_123(0);
		}
	}
	else if (iLocal_1022 == 3)
	{
		if (iLocal_929 >= 9)
		{
			func_123(1);
		}
	}
	else if (iLocal_1022 == 4)
	{
		if (iLocal_929 >= 9)
		{
			func_123(2);
			func_122(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1022 == 5)
	{
		func_97(0);
		func_122(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1022 == 6)
	{
		func_97(1);
		func_122(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1022++;
	if (iLocal_1022 > 6)
	{
		iLocal_1022 = 0;
	}
	if (iLocal_957)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
		{
			PED::SET_PED_RESET_FLAG(iLocal_937, 120, 1);
		}
	}
}

void func_97(int iParam0)//Position - 0x441D
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	iVar0 = uLocal_940[iParam0];
	switch (iLocal_932[iParam0])
	{
		case 0:
			if (iLocal_970)
			{
				iLocal_932[iParam0] = 1;
			}
			else if (bLocal_968)
			{
				iLocal_932[iParam0] = 3;
			}
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0))
			{
				if (func_121())
				{
					if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1064))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1064, -1) == uLocal_940[iParam0])
						{
							TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(uLocal_940[iParam0], iLocal_1064, "OJASva_104", 948, 0, 16, 18, 6f, 0, 1073741824);
						}
					}
					iLocal_932[iParam0] = 2;
				}
				else
				{
					func_120(iParam0);
				}
			}
			break;
		
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1064))
				{
					Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1064, 1) };
					uVar2 = ENTITY::GET_ENTITY_HEADING(iLocal_1064);
					iLocal_970 = 0;
					iLocal_932[iParam0] = 0;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_940[iParam0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_940[iParam0], iLocal_1064, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
					{
						if (!iLocal_957)
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1064, -1) == uLocal_940[iParam0])
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_940[iParam0], -1273030092) != 1)
								{
									TASK::TASK_VEHICLE_ESCORT(uLocal_940[iParam0], iLocal_1064, iLocal_1063, -1, 45f, 786981, 10f, -1, 10f);
								}
							}
						}
						else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1064, -1) == uLocal_940[iParam0])
						{
							if (!iLocal_971)
							{
								if (ENTITY::IS_ENTITY_DEAD(iLocal_937))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
									}
									else
									{
										iLocal_932[iParam0] = 8;
									}
								}
								else
								{
									TASK::TASK_VEHICLE_ESCORT(uLocal_940[iParam0], iLocal_1064, iLocal_1063, -1, 45f, 786981, 10f, -1, 10f);
									TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iVar0, PLAYER::PLAYER_PED_ID());
									iLocal_971 = 1;
								}
							}
						}
						else if (!bLocal_987)
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_940[iParam0], 780511057) != 1)
							{
								if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (ENTITY::GET_ENTITY_SPEED(iLocal_1064) < 5f)
									{
										iLocal_932[iParam0] = 8;
									}
								}
								TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
						else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_940[iParam0], 780511057) != 1)
						{
							TASK::TASK_COMBAT_PED(iVar0, PLAYER::PLAYER_PED_ID(), 0, 16);
						}
					}
					else if (!iLocal_981)
					{
						iLocal_932[iParam0] = 8;
					}
				}
			}
			break;
		
		case 4:
			if (!func_52(&uLocal_1079))
			{
				func_50(&uLocal_1079);
			}
			func_117(&(uLocal_940[iParam0]));
			iLocal_932[iParam0] = 5;
			break;
		
		case 5:
			if (!func_86(iLocal_936))
			{
				if (func_46(&uLocal_1079) >= 27f || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_936, iVar0, 5f, 5f, 3f, 0, 1, 0))
						{
							func_116(iVar0, 5f, 5f, 3f);
						}
						else
						{
							func_120(iParam0);
						}
					}
				}
			}
			else
			{
				iLocal_932[iParam0] = 0;
			}
			break;
		
		case 6:
			if (bLocal_982)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(10000, 11000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				if (!PED::IS_PED_INJURED(uLocal_940[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_940[iParam0], uLocal_1070);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 1, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), -1, 0, 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				if (!PED::IS_PED_INJURED(uLocal_940[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_940[iParam0], uLocal_1070);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			}
			iLocal_932[iParam0] = 7;
			break;
		
		case 7:
			if (!PED::IS_PED_INJURED(uLocal_940[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_940[iParam0], 1435919172) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_940[iParam0], iLocal_936, iLocal_936, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 8:
			if (iLocal_935 != 4 && iLocal_935 != 5)
			{
				func_114(iVar0);
			}
			else
			{
				func_113(iVar0);
			}
			iLocal_932[iParam0] = 9;
			break;
		
		case 9:
			if (iParam0 == 0)
			{
				if (iLocal_935 != 4)
				{
					func_112(iLocal_1064, iVar0, 1112014848, 1112014848, 1092616192);
				}
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (!iLocal_957)
	{
		if (iLocal_981)
		{
			if (iLocal_932[iParam0] != 6 && iLocal_932[iParam0] != 7)
			{
				iLocal_932[iParam0] = 6;
			}
		}
		else if (func_105(iVar0, iLocal_1064, &Local_319, &iLocal_324, 0, 0, 0, 1, 1) || func_104(iLocal_1064))
		{
			iVar3 = func_30(1116471296, 1);
			if (iVar3 != 0)
			{
				func_103(ENTITY::GET_ENTITY_COORDS(iVar3, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_957 = 1;
			}
		}
		else if (!bLocal_960)
		{
			if (func_101(iVar0, 10f))
			{
				if (iLocal_932[iParam0] != 4 && iLocal_932[iParam0] != 5)
				{
					if (!bLocal_958)
					{
						func_99(&Local_319, 4);
						iLocal_932[iParam0] = 4;
					}
					else if (!func_86(iLocal_936))
					{
						iLocal_957 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_937))
						{
							iLocal_935 = 5;
						}
						iLocal_932[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!PED::IS_PED_INJURED(iVar0))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1064, 0))
		{
			if (((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0)) || iLocal_969) || !bLocal_960)
			{
				if (iLocal_932[iParam0] < 8)
				{
					iLocal_932[iParam0] = 8;
				}
			}
		}
		else if (iLocal_932[iParam0] < 8)
		{
			iLocal_932[iParam0] = 8;
		}
	}
	func_98(iVar0, uLocal_950[iParam0]);
}

void func_98(int iParam0, var uParam1)//Position - 0x4AD0
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (PED::IS_PED_INJURED(iParam0))
		{
			if (HUD::DOES_BLIP_EXIST(uParam1))
			{
				HUD::REMOVE_BLIP(&uParam1);
			}
		}
	}
}

void func_99(var uParam0, int iParam1)//Position - 0x4AF9
{
	func_100(uParam0, iParam1);
}

void func_100(var uParam0, var uParam1)//Position - 0x4B09
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_101(int iParam0, float fParam1)//Position - 0x4B1E
{
	if (!iLocal_957)
	{
		if (!func_86(iLocal_936))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iParam0))
			{
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_23(iParam0, 0) <= fParam1)
					{
						if (PED::IS_PED_FACING_PED(iParam0, iLocal_936, 120f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_936, 17))
							{
								if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1251.791f, -147.043f, 42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1, 1, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1259.282f, -204.172f, -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1, 1, 0))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_936, iParam0, 5f, 5f, 1f, 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(iParam0, iLocal_936, 120f))
					{
						if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_936, 17))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_102()//Position - 0x4C33
{
	if (iLocal_981 || bLocal_982)
	{
		return 1;
	}
	return 0;
}

void func_103(struct<3> Param0, float fParam1, float fParam2)//Position - 0x4C4F
{
	int iVar0;
	float fVar1;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_937))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1063))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iLocal_1063) || iLocal_1011)
	{
		bLocal_980 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
	{
		if (((WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_937, joaat("weapon_sniperrifle"), 0) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_937, joaat("weapon_heavysniper"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_937, joaat("weapon_remotesniper"), 0)) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(iLocal_937, joaat("weapon_marksmanrifle"), 0))
		{
			iLocal_979 = 1;
			iLocal_930 = 1;
		}
	}
	if (iLocal_324 == 4 || iLocal_324 == 8)
	{
		if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1063))
		{
			fParam1 = (fParam1 * 2f);
			iVar0 = 1;
		}
	}
	if (!iLocal_957)
	{
		if ((iLocal_979 || bLocal_980) || iVar0)
		{
			fVar1 = func_26(PLAYER::PLAYER_PED_ID(), Param0, 1);
			if (fVar1 > fParam1)
			{
				iLocal_981 = 1;
				if (fVar1 > fParam2)
				{
					bLocal_982 = true;
				}
			}
		}
	}
}

int func_104(int iParam0)//Position - 0x4D55
{
	int iVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						fVar1 = ENTITY::GET_ENTITY_SPEED(iVar0);
						if (fVar1 > 7f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iParam0, 1))
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_105(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)//Position - 0x4DD6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!func_111(*uParam2, 1))
		{
			if (func_110(iParam0, uParam2))
			{
				*iParam3 = 1;
				return 1;
			}
		}
		if (!func_111(*uParam2, 2))
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				*iParam3 = 2;
				return 1;
			}
		}
		if (!func_111(*uParam2, 4))
		{
			if (func_109(iVar0, iParam0, uParam2, bParam5))
			{
				*iParam3 = 4;
				return 1;
			}
		}
		if (!func_111(*uParam2, 8))
		{
			if (func_108(iVar0, iParam0, uParam2))
			{
				*iParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_111(*uParam2, 128);
		if (bParam4)
		{
			if (func_106(iParam0, iParam1, 1, bParam6, bVar1, 1))
			{
				*iParam3 = 32;
				return 1;
			}
		}
		else if (!func_111(*uParam2, 16))
		{
			if (func_106(iParam0, iParam1, 0, bParam6, bVar1, bParam8))
			{
				*iParam3 = 16;
				return 1;
			}
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (iParam7 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
		{
			*iParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x4EFE
{
	int iVar0;
	int iVar1;
	
	if (bParam3)
	{
		if (!bLocal_315)
		{
			iLocal_316 = ENTITY::GET_ENTITY_HEALTH(iParam0);
			bLocal_315 = true;
		}
		iLocal_317 = ENTITY::GET_ENTITY_HEALTH(iParam0);
		iLocal_318 = (iLocal_316 - iLocal_317);
		iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, 1))
			{
				if (IntToFloat(iLocal_318) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_315)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_318) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (!ENTITY::IS_ENTITY_DEAD(iVar1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			if (PED::IS_PED_BEING_JACKED(iParam0))
			{
				if (PED::GET_PEDS_JACKER(iParam0) == PLAYER::PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (PLAYER::HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (PED::IS_PED_PERFORMING_STEALTH_KILL(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::WAS_PED_KILLED_BY_STEALTH(iParam0))
		{
			return 1;
		}
	}
	if (func_107(PLAYER::PLAYER_PED_ID(), iParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (PED::IS_PED_RAGDOLL(iParam0) && func_23(iParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(iParam0, 0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			return 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_107(int iParam0, int iParam1)//Position - 0x50CC
{
	int iVar0;
	
	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(iParam1, 1)) < 2.5f)
			{
				if (PED::IS_PED_FACING_PED(iParam0, iParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_108(int iParam0, int iParam1, var uParam2)//Position - 0x5121
{
	if (WEAPON::IS_PED_ARMED(iParam0, 4))
	{
		if (PED::IS_PED_SHOOTING(iParam0) && !WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_109(int iParam0, int iParam1, var uParam2, bool bParam3)//Position - 0x516F
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	if (MISC::IS_BULLET_IN_AREA(Var0, 4f, 1))
	{
		return 1;
	}
	if (MISC::HAS_BULLET_IMPACTED_IN_AREA(Var0, SYSTEM::TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (WEAPON::IS_PED_ARMED(iParam0, 2))
	{
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_IN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), 0);
			}
			if (PED::IS_PED_PLANTING_BOMB(iParam0) || func_94(iVar1))
			{
				if (ENTITY::IS_ENTITY_AT_COORD(iParam1, ENTITY::GET_ENTITY_COORDS(iParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (PED::IS_PED_FACING_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), iParam0, 120f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (MISC::IS_PROJECTILE_IN_AREA((Var0.x - IntToFloat(uParam2->f_6)), (Var0.f_1 - IntToFloat(uParam2->f_6)), (Var0.f_2 - IntToFloat(uParam2->f_6)), (Var0.x + IntToFloat(uParam2->f_6)), (Var0.f_1 + IntToFloat(uParam2->f_6)), (Var0.f_2 + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(int iParam0, var uParam1)//Position - 0x52E7
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		{
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, PLAYER::PLAYER_PED_ID(), 90f))
				{
					if (func_23(iParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

bool func_111(var uParam0, int iParam1)//Position - 0x536B
{
	return (uParam0 && iParam1) != 0;
}

void func_112(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4)//Position - 0x537A
{
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3)
				{
					if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1794415470) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION(iParam1, iParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 6, 35f, 786469, -1f, -1f, 1);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (!PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
					}
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iParam1, iParam0, 0))
			{
				if (func_23(iParam1, 1) > fParam4)
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, -1273030092) != 1)
					{
						TASK::TASK_VEHICLE_MISSION_PED_TARGET(iParam1, iParam0, PLAYER::PLAYER_PED_ID(), 6, 35f, 786469, -1f, -1f, 1);
						TASK::ADD_VEHICLE_SUBTASK_ATTACK_PED(iParam1, PLAYER::PLAYER_PED_ID());
					}
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
				}
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam1, 780511057) != 1)
		{
			TASK::TASK_COMBAT_PED(iParam1, PLAYER::PLAYER_PED_ID(), 0, 16);
		}
	}
}

void func_113(int iParam0)//Position - 0x54E1
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iLocal_936) && !PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
		}
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		TASK::OPEN_SEQUENCE_TASK(&uVar0);
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, iLocal_936, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(uVar0);
		TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
		TASK::CLEAR_SEQUENCE_TASK(&uVar0);
	}
}

void func_114(int iParam0)//Position - 0x5545
{
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_936))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_936, 0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, 1);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
			TASK::TASK_COMBAT_PED(0, iLocal_936, 0, 16);
			TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				TASK::TASK_PERFORM_SEQUENCE(iParam0, uLocal_1070);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
		}
		else if (!PED::IS_PED_INJURED(iParam0))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 780511057) != 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0);
				TASK::TASK_COMBAT_PED(iParam0, iLocal_936, 0, 16);
			}
		}
	}
}

Vector3 func_115()//Position - 0x55E7
{
	struct<3> Var0;
	int iVar1;
	
	iVar1 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 3);
	switch (iVar1)
	{
		case 0:
			Var0 = { -1270.206f, -200.3586f, 40.8333f };
			break;
		
		case 1:
			Var0 = { -1268.439f, -215.9683f, 59.654f };
			break;
		
		case 2:
			Var0 = { -1241.558f, -239.3237f, 38.7884f };
			break;
	}
	return Var0;
}

void func_116(int iParam0, struct<3> Param1)//Position - 0x565B
{
	if (!iLocal_957)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_936, iParam0, Param1, 0, 1, 0))
			{
				if (PED::IS_PED_FACING_PED(iParam0, iLocal_936, 160f))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iLocal_936, 17))
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_936, iLocal_936, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
						iLocal_935 = 5;
						iLocal_957 = 1;
					}
				}
			}
			else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_936, iLocal_936, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

void func_117(int iParam0)//Position - 0x5701
{
	var uVar0;
	struct<3> Var1;
	
	if (iLocal_941 == 0)
	{
		iLocal_941 = func_30(70f, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam0))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(*iParam0, 0))
		{
			if (!iLocal_959)
			{
				if (*iParam0 == iLocal_941)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_GO_TO_ENTITY(0, iLocal_936, 20000, 2f, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_936, -1);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					TASK::TASK_PERFORM_SEQUENCE(*iParam0, uVar0);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					iLocal_959 = 1;
					Var1 = { ENTITY::GET_ENTITY_COORDS(*iParam0, 1) };
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_936, -1);
				}
			}
			else if (*iParam0 != iLocal_941)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(*iParam0, 1227113341) != 1)
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(*iParam0, iLocal_936, -1);
				}
			}
		}
		PED::SET_PED_CAN_BE_TARGETTED(*iParam0, 1);
		func_118();
	}
}

void func_118()//Position - 0x57E8
{
	int iVar0;
	
	if (!iLocal_961)
	{
		if (!bLocal_972)
		{
			if (!func_22())
			{
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_119())
				{
					func_6(&uLocal_1110, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_961 = 1;
				}
				else
				{
					func_27(&uLocal_1110, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_961 = 1;
				}
			}
		}
	}
}

int func_119()//Position - 0x5859
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1063))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_1063, 1) };
		}
		fVar2 = SYSTEM::VDIST2(Var0, Var1);
		if (fVar2 <= 25f)
		{
			return 1;
		}
	}
	return 0;
}

void func_120(int iParam0)//Position - 0x58AF
{
	int iVar0;
	
	bLocal_958 = true;
	if (iParam0 == 0)
	{
		iVar0 = -1;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 0;
	}
	if (!ENTITY::IS_ENTITY_DEAD(uLocal_940[iParam0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_940[iParam0], iLocal_1064, 0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_940[iParam0], -1794415470) != 1)
				{
					TASK::TASK_ENTER_VEHICLE(uLocal_940[iParam0], iLocal_1064, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

int func_121()//Position - 0x592B
{
	if (!PED::IS_PED_INJURED(uLocal_940[0]) && !PED::IS_PED_INJURED(uLocal_940[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_940[0], iLocal_1064, 0) && PED::IS_PED_IN_VEHICLE(uLocal_940[1], iLocal_1064, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_122(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x597A
{
	if (!iLocal_957)
	{
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(Param0, Param1, fParam2, joaat("weapon_stickybomb"), 0))
		{
			iLocal_957 = 1;
		}
	}
}

void func_123(int iParam0)//Position - 0x59A4
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	iVar0 = uLocal_939[iParam0];
	switch (iLocal_931[iParam0])
	{
		case 0:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
				TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_1052[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
				TASK::TASK_ACHIEVE_HEADING(0, fLocal_1039[iParam0], 0);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, uLocal_1070);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
				iLocal_931[iParam0] = 1;
			}
			break;
		
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (!bLocal_992)
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -2017877118) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iVar0, 242628503) != 1)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_1052[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0))
							{
								func_131(iVar0, &(uLocal_1019[iParam0]), 1);
							}
							else
							{
								iLocal_931[iParam0] = 0;
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (!func_52(&uLocal_1079))
			{
				func_50(&uLocal_1079);
				func_117(&iVar0);
				iLocal_931[iParam0] = 2;
			}
			else if (func_46(&uLocal_1079) > uLocal_1040[iParam0] || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_117(&iVar0);
				iLocal_931[iParam0] = 2;
			}
			break;
		
		case 2:
			if (!func_86(iLocal_936))
			{
				iLocal_985 = 1;
				if (bLocal_984)
				{
					iLocal_931[iParam0] = 4;
					break;
				}
				else if (func_46(&uLocal_1079) >= 27f && iLocal_961)
				{
					func_116(iVar0, 15f, 15f, 3f);
				}
				else if (func_46(&uLocal_1079) >= 15f)
				{
					func_129(iVar0);
				}
			}
			else
			{
				iLocal_985 = 0;
				bLocal_958 = true;
				if (!bLocal_978)
				{
					iLocal_931[iParam0] = 0;
				}
				else
				{
					iLocal_931[iParam0] = 4;
				}
			}
			break;
		
		case 4:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_CAN_BE_TARGETTED(iVar0, 1);
				PED::SET_PED_RESET_FLAG(iVar0, 60, 1);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				if (!PED::IS_PED_INJURED(iVar0))
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_939[0], uLocal_939[1], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1063, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1063, 30000, -1, 1f, 1, 0);
						}
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_939[1], uLocal_939[0], -1, 0, 2);
						if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1063, 0))
						{
							TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1063, 30000, 0, 1f, 1, 0);
						}
					}
					else if (iParam0 == 2)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iVar0, iLocal_1064, 0))
							{
								TASK::TASK_ENTER_VEHICLE(iVar0, iLocal_1064, 30000, 1, 1f, 1, 0);
							}
						}
					}
				}
				iLocal_931[iParam0] = 5;
			}
			else
			{
				iLocal_931[iParam0] = 10;
			}
			break;
		
		case 5:
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_RESET_FLAG(iVar0, 60, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 150319005) != 1)
				{
					if (iParam0 == 0)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_939[iParam0], uLocal_939[1], -1, 2048, 4);
					}
					else if (iParam0 == 1)
					{
						TASK::TASK_LOOK_AT_ENTITY(uLocal_939[iParam0], uLocal_939[0], -1, 2048, 4);
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				if (!func_127())
				{
					if (iLocal_957)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 780511057) != 1)
							{
								if (func_126(uLocal_939[0]))
								{
									TASK::TASK_CLEAR_LOOK_AT(uLocal_939[0]);
								}
								if (func_126(uLocal_939[1]))
								{
									TASK::TASK_CLEAR_LOOK_AT(uLocal_939[1]);
								}
								TASK::TASK_COMBAT_PED(iVar0, iLocal_936, 0, 16);
							}
						}
					}
				}
				else
				{
					iLocal_931[iParam0] = 6;
				}
			}
			else
			{
				iLocal_931[iParam0] = 10;
			}
			if (bLocal_973)
			{
				if (iLocal_931[iParam0] != 10 && iLocal_931[iParam0] != 11)
				{
					iLocal_931[iParam0] = 10;
				}
			}
			break;
		
		case 6:
			if (!iLocal_957)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, -1) == iVar0)
					{
						if (!PED::IS_PED_INJURED(iVar0))
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1063, 1, 1);
							if (func_125())
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1063, "OJASva_101a", 181, 0, 16, -1, 10f, 0, 1073741824);
							}
							else
							{
								TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_1063, "OJASva_101", 181, 0, 0, -1, -1f, 0, 1073741824);
							}
						}
					}
					iLocal_931[iParam0] = 7;
				}
			}
			else
			{
				if (func_126(uLocal_939[0]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_939[0]);
				}
				if (func_126(uLocal_939[1]))
				{
					TASK::TASK_CLEAR_LOOK_AT(uLocal_939[1]);
				}
				iLocal_931[iParam0] = 7;
			}
			break;
		
		case 7:
			if (iLocal_957)
			{
				if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, -1) == iVar0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, 1) == iLocal_937)
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (bLocal_972 || (iLocal_986 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1063)))
						{
							TASK::CLEAR_PED_TASKS(iVar0);
							if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
									{
										TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_1063, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), 8, 35f, 786469, -1f, -1f, 1);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
								{
									TASK::TASK_VEHICLE_MISSION_PED_TARGET(iVar0, iLocal_1063, PLAYER::PLAYER_PED_ID(), 8, 35f, 786469, -1f, -1f, 1);
								}
							}
						}
					}
				}
				else if (!PED::IS_PED_INJURED(iVar0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, 780511057) != 1)
					{
						TASK::TASK_COMBAT_PED(iVar0, iLocal_936, 0, 16);
					}
				}
			}
			else if (bLocal_972 || (iLocal_986 && !TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1063)))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, -1) == iVar0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(iVar0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, -1273030092) != 1)
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iVar0, iLocal_1063, Local_1055, 8, 25f, 786603, -1f, -1f, 1);
							}
						}
					}
				}
			}
			break;
		
		case 8:
			if (bLocal_982)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(1000, 1500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_939[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_939[iParam0], uLocal_1070);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(3000, 3500), 1, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_939[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(uLocal_939[iParam0], uLocal_1070);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			}
			iLocal_931[iParam0] = 9;
			break;
		
		case 9:
			if (!PED::IS_PED_INJURED(uLocal_939[iParam0]))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_939[iParam0], 1435919172) != 1)
				{
					TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(uLocal_939[iParam0], iLocal_936, iLocal_936, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
				}
			}
			break;
		
		case 10:
			if (iLocal_935 == 4 || iLocal_935 == 5)
			{
				func_113(iVar0);
			}
			else if (iLocal_935 != 8)
			{
				func_114(iVar0);
				iLocal_931[iParam0] = 11;
			}
			break;
		
		case 11:
			if (iParam0 == 0)
			{
				func_112(iLocal_1063, iVar0, 1112014848, 1112014848, 1092616192);
			}
			func_2(iVar0);
			func_87(iVar0);
			break;
	}
	if (iLocal_929 < 10)
	{
		fVar1 = 5f;
	}
	else
	{
		fVar1 = fLocal_1042;
	}
	if (!iLocal_957)
	{
		if (iLocal_981)
		{
			if (iLocal_931[iParam0] != 8 && iLocal_931[iParam0] != 9)
			{
				iLocal_931[iParam0] = 8;
			}
		}
		else if (func_124(iVar0))
		{
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0)
			{
				func_103(ENTITY::GET_ENTITY_COORDS(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_957 = 1;
			}
		}
		else if (!bLocal_960)
		{
			if (func_101(iVar0, fVar1))
			{
				if ((iLocal_931[iParam0] != 3 && iLocal_931[iParam0] != 2) && !bLocal_984)
				{
					if (!bLocal_958)
					{
						func_99(&Local_319, 4);
						iLocal_931[iParam0] = 3;
					}
					else if (!func_86(iLocal_936))
					{
						iLocal_957 = 1;
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_937))
						{
							iLocal_935 = 5;
						}
					}
				}
			}
		}
	}
	else if ((iLocal_931[iParam0] != 10 && iLocal_931[iParam0] != 11) && iLocal_931[iParam0] != 7)
	{
		iLocal_931[iParam0] = 10;
	}
	func_98(iVar0, uLocal_949[iParam0]);
}

int func_124(int iParam0)//Position - 0x62D6
{
	int iVar0;
	
	if (!iLocal_957)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
				{
					iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				}
				else
				{
					iVar0 = 0;
				}
			}
			if (func_105(iParam0, iVar0, &Local_319, &iLocal_324, 0, 0, 0, 1, 1) || (PED::IS_PED_RAGDOLL(iParam0) && func_23(iParam0, 1) < 1.5f))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125()//Position - 0x634A
{
	int iVar0;
	int iVar1[10];
	
	uLocal_1030 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &iVar1);
	uLocal_1030 = uLocal_1030;
	uLocal_1030 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iVar1[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f, 43.15606f, 8.5f, 0, 1, 0))
			{
				iLocal_1029++;
			}
		}
		iVar0++;
	}
	if (iLocal_1029 >= 1)
	{
		iLocal_986 = 1;
		return 1;
	}
	return 0;
}

int func_126(int iParam0)//Position - 0x63EE
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

int func_127()//Position - 0x640E
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
	{
		if (!PED::IS_PED_INJURED(iLocal_937))
		{
			if (!iLocal_957)
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_937, iLocal_1063, 0) && func_128())
				{
					return 1;
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(iLocal_937, iLocal_1063, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_128()//Position - 0x6464
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (!PED::IS_PED_INJURED(iLocal_938[iVar0]))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_938[iVar0], 0))
			{
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_129(int iParam0)//Position - 0x64A5
{
	switch (iLocal_1026)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
				{
					TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), -1, 0);
				}
				func_28(iParam0, 3, "OJAvaGUARD");
				func_6(&uLocal_1110, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
				iLocal_961 = 1;
				iLocal_1026 = 1;
			}
			break;
		
		case 1:
			func_130(iParam0);
			break;
	}
}

void func_130(int iParam0)//Position - 0x6518
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_23(iParam0, 1) < 5f)
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_936, -1, 0);
			}
		}
		else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, -1207174364) != 1)
		{
			if (iParam0 == iLocal_941)
			{
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iLocal_936, iLocal_936, 1f, 0, -1f, 1082130432, 1, 0, -957453492);
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1630799643) != 1)
			{
				TASK::TASK_AIM_GUN_AT_ENTITY(iParam0, iLocal_936, -1, 0);
			}
		}
	}
}

void func_131(int iParam0, var uParam1, bool bParam2)//Position - 0x65B5
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (bParam2)
		{
			func_132(iParam0, uParam1);
		}
	}
}

void func_132(int iParam0, var uParam1)//Position - 0x65D4
{
	int iVar0;
	
	iVar0 = func_133(0, 3, *uParam1);
	if (iVar0 == 0)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3)
	{
		TASK::TASK_PLAY_ANIM(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f), 1, 0, 0);
	}
	*uParam1 = iVar0;
}

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0x66A9
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50)
	{
		iVar1++;
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(iParam0, iParam1);
	}
	return iVar0;
}

void func_134(int iParam0)//Position - 0x66F1
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	struct<3> Var4;
	struct<3> Var5;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_938[iParam0]))
	{
		return;
	}
	switch (iLocal_934[iParam0])
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(iLocal_937, 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_938[iParam0]))
					{
						if (iParam0 == 0)
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iLocal_938[iParam0], iLocal_937, 1.5f, 0f, 0f, 1f, -1, 1036831949, 1);
						}
						else if (iParam0 == 1)
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1064, 0))
							{
								TASK::OPEN_SEQUENCE_TASK(&uVar2);
								TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603, -1082130432);
								TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
								TASK::TASK_ENTER_VEHICLE(0, iLocal_1064, 30000, 2, 1f, 1, 0);
								TASK::CLOSE_SEQUENCE_TASK(uVar2);
								TASK::TASK_PERFORM_SEQUENCE(iLocal_938[iParam0], uVar2);
								TASK::CLEAR_SEQUENCE_TASK(&uVar2);
							}
						}
						iLocal_934[iParam0] = 1;
					}
				}
			}
			break;
		
		case 1:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1063;
				iVar1 = 2;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1064;
				iVar1 = 2;
			}
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_938[iParam0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_938[iParam0]))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_938[iParam0], iVar0, 0))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_937, 0))
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_938[iParam0], -1794415470) != 1)
								{
									TASK::TASK_ENTER_VEHICLE(iLocal_938[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
								}
							}
						}
						else
						{
							iLocal_934[iParam0] = 2;
						}
					}
				}
			}
			break;
		
		case 2:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1063;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1064;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_938[iParam0]))
				{
					if (PED::IS_PED_IN_VEHICLE(iLocal_938[iParam0], iVar0, 0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
					{
						if (iLocal_957)
						{
							if (!bLocal_987)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_938[iParam0], 780511057) != 1)
								{
									if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
									{
										if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
										{
											iLocal_934[iParam0] = 5;
										}
									}
									TASK::TASK_COMBAT_PED(iLocal_938[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
								}
							}
							else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_938[iParam0], 780511057) != 1)
							{
								TASK::TASK_COMBAT_PED(iLocal_938[iParam0], PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
					else if (!iLocal_981)
					{
						iLocal_934[iParam0] = 5;
					}
				}
			}
			break;
		
		case 3:
			if (!PED::IS_PED_INJURED(iLocal_938[iParam0]))
			{
				if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_938[iParam0]))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_938[iParam0]);
				}
			}
			if (bLocal_982)
			{
				TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
				TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
				TASK::TASK_LOOK_AT_COORD(0, func_115(), MISC::GET_RANDOM_INT_IN_RANGE(2000, 2500), 2048, 4);
				TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), MISC::GET_RANDOM_INT_IN_RANGE(15000, 16000), 30f, 1f, 1073741824, 0);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(0, PLAYER::PLAYER_PED_ID(), func_115(), 1f, 0, 1056964608, 1082130432, 1, 0, -957453492);
				TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_938[iParam0], uLocal_1070);
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			}
			else if (!PED::IS_PED_INJURED(iLocal_938[iParam0]))
			{
				PED::SET_PED_SPHERE_DEFENSIVE_AREA(iLocal_938[iParam0], Local_1060, 15f, 0, 0);
				PED::SET_PED_COMBAT_MOVEMENT(iLocal_938[iParam0], 1);
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_938[iParam0], 0, 1);
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_938[iParam0], 2f);
				if (!iLocal_954 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_938[iParam0], 0))
				{
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
					if (PED::IS_PED_INJURED(iLocal_937))
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
						TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), 3000, 0, 1);
						TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0);
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
						TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_937, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
					iLocal_954 = 1;
				}
				else
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
					{
						Var4 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_1063, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iLocal_1063, "wheel_lr")) };
						Var5 = { ENTITY::GET_ENTITY_COORDS(iLocal_1063, 1) };
						Var5 = { Var4 - Var5 };
						PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_938[iParam0], iLocal_1063, Var5, 1.5f, 0);
					}
					TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					if (PED::IS_PED_INJURED(iLocal_937) && !func_44(func_135(), Var4))
					{
						TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var4, func_115(), 2f, 0, 1056964608, 1082130432, 1, 0, 0, -957453492);
						TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, Var4, -1, 0, 0.25f, 0, 0, 0, 1);
					}
					else
					{
						TASK::TASK_AIM_GUN_AT_COORD(0, func_115(), 1500, 1, 0);
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
						{
							TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(0, iLocal_937, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
						}
					}
					TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
				}
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_938[iParam0]))
				{
					TASK::TASK_PERFORM_SEQUENCE(iLocal_938[iParam0], uLocal_1070);
				}
				TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
			}
			iLocal_934[iParam0] = 4;
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_938[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_938[iParam0], "oddjobs@assassinate@hotel@", "enter", 3))
				{
					fVar3 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_938[iParam0], "oddjobs@assassinate@hotel@", "enter");
					if (fVar3 < 0.5f)
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_938[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
					}
					else
					{
						ENTITY::SET_ENTITY_ANIM_SPEED(iLocal_938[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
					}
				}
			}
			break;
		
		case 5:
			if (iParam0 == 0)
			{
				iVar0 = iLocal_1063;
			}
			else if (iParam0 == 1)
			{
				iVar0 = iLocal_1064;
			}
			if (!PED::IS_PED_INJURED(iLocal_937))
			{
				if (!PED::IS_PED_INJURED(iLocal_938[iParam0]))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_937, 0))
					{
						TASK::TASK_COMBAT_PED(iLocal_938[iParam0], iLocal_936, 0, 16);
					}
					else
					{
						TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(iLocal_938[iParam0], iLocal_937, PLAYER::PLAYER_PED_ID(), 3f, 1, 0.005f, 1082130432, 1, 0, -957453492);
					}
				}
				iLocal_934[iParam0] = 6;
			}
			else if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) < 5f)
				{
					func_114(iLocal_938[iParam0]);
					iLocal_934[iParam0] = 6;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_938[iParam0], 780511057) != 1)
				{
					TASK::TASK_COMBAT_PED(iLocal_938[iParam0], iLocal_936, 0, 16);
				}
			}
			else
			{
				func_114(iLocal_938[iParam0]);
				iLocal_934[iParam0] = 6;
			}
			break;
		
		case 6:
			func_2(iLocal_938[iParam0]);
			func_87(iLocal_938[iParam0]);
			break;
	}
	if (!iLocal_957)
	{
		if (iLocal_981)
		{
			if (iLocal_934[iParam0] != 3 && iLocal_934[iParam0] != 4)
			{
				iLocal_934[iParam0] = 3;
			}
		}
		else if (func_124(iLocal_938[iParam0]))
		{
			iLocal_957 = 1;
		}
	}
	else if (iLocal_934[iParam0] < 5)
	{
		if (!PED::IS_PED_INJURED(iLocal_938[iParam0]))
		{
			if (PED::IS_PED_USING_ANY_SCENARIO(iLocal_938[iParam0]))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_938[iParam0]);
			}
			TASK::TASK_CLEAR_DEFENSIVE_AREA(iLocal_938[iParam0]);
			PED::SET_PED_COMBAT_MOVEMENT(iLocal_938[iParam0], 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_938[iParam0], 13, 1);
		}
		iLocal_934[iParam0] = 5;
	}
}

Vector3 func_135()//Position - 0x6E6F
{
	struct<3> Var0;
	
	return Var0;
}

int func_136(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7)//Position - 0x6E7B
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			HUD::SET_PED_HAS_AI_BLIP(iParam0, 1);
			uParam1->f_7 = iParam0;
			HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
			HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, iParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, iParam5);
		*uParam1 = HUD::_GET_AI_BLIP_2(iParam0);
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("MCUSTBLIP");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_137()//Position - 0x6F9A
{
	var uVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
	{
		Local_1060 = { ENTITY::GET_ENTITY_COORDS(iLocal_937, 0) };
	}
	switch (iLocal_933)
	{
		case 0:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0) && !ENTITY::IS_ENTITY_DEAD(uLocal_939[0]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_937, iLocal_1063, 0))
					{
						if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_937, -1794415470) != 1)
						{
							if (!iLocal_957 && !iLocal_981)
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_937, iLocal_1063, 30000, 1, 1f, 1, 0);
							}
							else
							{
								TASK::TASK_ENTER_VEHICLE(iLocal_937, iLocal_1063, 30000, 1, 2f, 1, 0);
							}
							if (!func_52(&uLocal_1088))
							{
								func_49(&uLocal_1088);
							}
							else
							{
								func_50(&uLocal_1088);
							}
						}
						if (!iLocal_983)
						{
							if (func_52(&uLocal_1088))
							{
								if (func_46(&uLocal_1088) > 3.5f)
								{
									if (!PED::IS_PED_INJURED(iLocal_937))
									{
										func_29(&uLocal_1110, 4, iLocal_937, "OJAva_TARGET", 0, 1);
										if (func_6(&uLocal_1110, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
										{
											iLocal_983 = 1;
										}
									}
								}
							}
						}
						if (func_140(iLocal_937))
						{
							func_3();
							iLocal_933 = 4;
						}
					}
					else
					{
						bLocal_960 = true;
						iLocal_933 = 1;
					}
				}
				else
				{
					iLocal_933 = 4;
				}
			}
			break;
		
		case 1:
			if (!iLocal_983)
			{
				if (!PED::IS_PED_INJURED(iLocal_937))
				{
					func_29(&uLocal_1110, 4, iLocal_937, "OJAva_TARGET", 0, 1);
					if (func_6(&uLocal_1110, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0))
					{
						iLocal_983 = 1;
					}
				}
			}
			if (!iLocal_1002)
			{
				if (func_139())
				{
					if (func_24(iLocal_937, PLAYER::PLAYER_PED_ID(), 1) <= 5f && !func_22())
					{
						if (func_30(25f, 1) == 0)
						{
							if (func_138())
							{
								iLocal_1002 = 1;
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
			{
				if (PED::IS_PED_IN_VEHICLE(iLocal_937, iLocal_1063, 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_937, -828834893) != 1)
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_937, 0, 256);
					}
				}
				else if (!bLocal_987)
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(iLocal_937, 2f);
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_936, 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_937, uVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					bLocal_987 = true;
				}
				else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_937, 1435919172) != 1)
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_937, iLocal_936, 200f, -1, 0, 0);
				}
				if (!iLocal_1002)
				{
					if (!func_22() && !HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_6(&uLocal_1110, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
						iLocal_1002 = 1;
					}
				}
			}
			break;
	}
	if (!iLocal_957)
	{
		if (iLocal_981)
		{
		}
		else if (func_124(iLocal_937) || iLocal_1011)
		{
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0)
			{
				func_103(ENTITY::GET_ENTITY_COORDS(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_102())
			{
				iLocal_957 = 1;
			}
		}
	}
}

int func_138()//Position - 0x72BD
{
	switch (iLocal_1032)
	{
		case 0:
			if (!func_22())
			{
				func_27(&uLocal_1110, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
				func_50(&uLocal_1088);
				iLocal_1032++;
			}
			break;
		
		case 1:
			if (!func_22() && func_46(&uLocal_1088) > 7f)
			{
				func_27(&uLocal_1110, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
				func_50(&uLocal_1088);
				iLocal_1032++;
			}
			break;
		
		case 2:
			if (!func_22() && func_46(&uLocal_1088) > 8f)
			{
				func_27(&uLocal_1110, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_139()//Position - 0x7388
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, -1);
		if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, 0);
			if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_1063, 2);
				if (iVar0 == 0 || (iVar0 != 0 && PED::IS_PED_INJURED(iVar0)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_140(int iParam0)//Position - 0x7412
{
	var uVar0;
	
	if ((iLocal_957 || iLocal_981) || bLocal_982)
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (func_22())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
			{
				if (!bLocal_987)
				{
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					TASK::OPEN_SEQUENCE_TASK(&uVar0);
					TASK::TASK_PLAY_ANIM(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					TASK::TASK_SMART_FLEE_PED(0, iLocal_936, 200f, -1, 0, 0);
					TASK::CLOSE_SEQUENCE_TASK(uVar0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_937))
					{
						TASK::TASK_PERFORM_SEQUENCE(iLocal_937, uVar0);
					}
					TASK::CLEAR_SEQUENCE_TASK(&uVar0);
					bLocal_987 = true;
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_141()//Position - 0x74C2
{
	if (!iLocal_988)
	{
		if (iLocal_929 > 15)
		{
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
			iLocal_988 = 1;
		}
	}
	if (!iLocal_989)
	{
		if (iLocal_957 && !func_22())
		{
			func_411();
			iLocal_989 = 1;
			if (!iLocal_988)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("ASS1_ALERT");
				iLocal_988 = 1;
			}
		}
	}
	func_410();
	switch (iLocal_929)
	{
		case 3:
			if (func_469())
			{
				iLocal_929 = 4;
				break;
			}
			func_409();
			func_407();
			break;
		
		case 4:
			if (func_469())
			{
				if (func_468())
				{
					iLocal_976 = 1;
				}
				bLocal_965 = true;
			}
			func_406();
			func_405();
			func_404();
			func_403(1);
			func_402();
			func_477(&Local_319, 2);
			iLocal_929 = 5;
			break;
		
		case 5:
			if (func_401())
			{
				iLocal_929 = 6;
			}
			break;
		
		case 6:
			func_400();
			func_399();
			if (bLocal_965)
			{
				if (Global_17C49.f_4729.f_5 != 0f)
				{
					func_51(&uLocal_1082, Global_17C49.f_4729.f_5);
				}
				iLocal_1027 = func_463();
				if (Global_14A40)
				{
					if (iLocal_1027 <= 2)
					{
						iLocal_1027++;
					}
				}
				if (iLocal_1027 == 0)
				{
					func_398();
				}
				else if (iLocal_1027 == 1)
				{
					func_397();
				}
				else if (iLocal_1027 == 2)
				{
					func_393();
				}
			}
			else
			{
				if (!func_52(&uLocal_1082))
				{
					func_49(&uLocal_1082);
					Global_17C49.f_4729.f_5 = 0f;
				}
				iLocal_929 = 7;
			}
			break;
		
		case 7:
			func_387();
			func_372();
			break;
		
		case 8:
			func_340();
			break;
		
		case 9:
			func_387();
			func_339();
			func_259();
			break;
		
		case 10:
			func_339();
			func_255();
			break;
		
		case 11:
			func_241();
			func_240();
			break;
		
		case 12:
			func_239();
			func_240();
			break;
		
		case 13:
			func_235();
			func_240();
			break;
		
		case 15:
			func_233();
			break;
		
		case 16:
			func_230();
			break;
		
		case 17:
			func_224();
			break;
		
		case 18:
			func_142();
			break;
	}
}

void func_142()//Position - 0x76E2
{
	PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
	func_143();
}

void func_143()//Position - 0x76F6
{
	func_223();
	switch (iLocal_1033)
	{
		case 0:
			if (!iLocal_330)
			{
				if (iLocal_930 == 1)
				{
					bLocal_328 = true;
					func_222();
				}
				Global_17C49.f_4729.f_5 = func_46(&uLocal_1082);
				fLocal_325 = Global_17C49.f_4729.f_5;
				func_215();
				iLocal_330 = 1;
				iLocal_1033 = 1;
			}
			break;
		
		case 1:
			if (!iLocal_1010)
			{
				AUDIO::PLAY_MISSION_COMPLETE_AUDIO("FRANKLIN_BIG_01");
				iLocal_1010 = 1;
			}
			if (func_211(&uLocal_341, 1, 0) && AUDIO::IS_MISSION_COMPLETE_READY_FOR_UI())
			{
				func_210(&uLocal_1287, 0, 0, 0, 1);
				func_209(&uLocal_1287, "ASS_VA_CONT", 2, 215, 1, 1, 0);
				func_209(&uLocal_1287, "ES_XPAND", 2, 216, 1, 1, 0);
				SYSTEM::SETTIMERA(0);
				iLocal_1033 = 2;
			}
			break;
		
		case 2:
			if (func_186(&uLocal_341, 0, 1065353216, 0, 0, 0))
			{
				bLocal_1008 = true;
			}
			if (!bLocal_1008)
			{
				func_178(&uLocal_1287, 1128792064, 1, 0, 1, 1065353216);
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
			{
				if (!bLocal_1008)
				{
					bLocal_1008 = true;
					func_177(&uLocal_341);
				}
			}
			if (bLocal_1008)
			{
				if (func_186(&uLocal_341, 0, 1065353216, 0, 0, 0))
				{
					func_175(&uLocal_341);
					Global_17C49.f_4729++;
					func_174();
					func_148(Local_54);
					func_146(0, 0);
					func_144();
					func_470();
				}
			}
			break;
	}
}

void func_144()//Position - 0x7869
{
	func_145();
}

int func_145()//Position - 0x7876
{
	if (func_40(0))
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

void func_146(bool bParam0, int iParam1)//Position - 0x78C1
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_D5E0)
	{
		Global_D5E0 = iParam1;
	}
	if (bParam0)
	{
		if ((func_40(0) && Global_10B8B.f_1 == 1) && func_147(Global_10B8B))
		{
		}
		else
		{
			Global_D5DE = 1;
		}
	}
	if (Global_17C49.f_1CAD || func_40(0))
	{
		iVar0 = func_39();
		iVar1 = Global_13CDF[iVar0 /*5*/];
		uVar2 = Global_10BA2.f_6D[iVar1 /*4*/];
		if (iVar0 == -1)
		{
			if (Global_17C49.f_1CAD)
			{
			}
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (MISC::IS_BIT_SET(Global_13CDF[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_10B8D, 1);
		Global_10B9D = uVar2;
		Global_10B9E = MISC::GET_GAME_TIMER();
	}
}

int func_147(int iParam0)//Position - 0x7997
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_148(struct<25> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14)//Position - 0x79D5
{
	float fVar0;
	
	fVar0 = (1f + func_173());
	fVar0 = (fVar0 * Param0.f_17);
	if (func_111(Global_17C49.f_4729.f_1, 4194304))
	{
		fVar0 = (fVar0 + Param0.f_18);
	}
	func_149(func_13(), 95, SYSTEM::ROUND(fVar0), 0, 0);
}

void func_149(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x7A20
{
	int iVar0;
	int iVar1;
	
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_17C49.f_744E[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_150(Global_17C49.f_744E[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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

int func_150(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x7B07
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_172();
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
					func_171(99, 1);
					func_170(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_170(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_170(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_158(0);
			switch (iParam2)
			{
				case 125:
				case 127:
				case 123:
				case 124:
				case 126:
					if (func_157(5))
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
							func_170(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_170(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_170(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_157(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_170(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_170(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_170(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_170(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_170(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_170(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_170(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_170(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_170(joaat("sp2_money_spent_property"), iParam3);
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
									func_170(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_170(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_170(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_170(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_170(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_170(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_157(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_170(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_170(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_170(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_170(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_170(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_170(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_156(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_171(95, iParam3);
					break;
				
				case 1:
					func_171(97, iParam3);
					break;
				
				case 2:
					func_171(96, iParam3);
					break;
			}
			func_171(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_153(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_153(iVar1);
	}
	iVar5 = (Global_CAD5[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_CAD5[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_CAD5[iVar2] = 2147483647;
				}
				else
				{
					Global_CAD5[iVar2] = (Global_CAD5[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_170(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_170(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_170(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_CAD5[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_CAD5[iVar2];
			Global_CAD5[iVar2] = (Global_CAD5[iVar2] - iParam3);
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
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_2[Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/]++;
		Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1++;
		if (Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_17C49.f_5CED.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_152(iParam0);
	if (Global_8861 == 15)
	{
		func_151(0);
	}
	return 1;
}

void func_151(bool bParam0)//Position - 0x8107
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
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_17C49.f_5CED.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_CADD[iVar0 /*3*/][0] = Global_17C49.f_5CED[iVar0];
		Global_CADD.f_1F[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_B[iVar0];
		Global_CADD.f_3E[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_16[iVar0];
		Global_CADD.f_5D[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_21[iVar0];
		Global_CADD.f_7C[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_2C[iVar0];
		Global_CADD.f_9B[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_37[iVar0];
		Global_CADD.f_BA[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_42[iVar0];
		Global_CADD.f_D9[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_4D[iVar0];
		Global_CADD.f_F8[iVar0 /*3*/][0] = Global_17C49.f_5CED.f_58[iVar0];
		if (!bParam0)
		{
			Global_CADD[iVar0 /*3*/][1] = Global_17C49.f_5CED[iVar0];
			Global_CADD.f_1F[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_B[iVar0];
			Global_CADD.f_3E[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_16[iVar0];
			Global_CADD.f_5D[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_21[iVar0];
			Global_CADD.f_7C[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_2C[iVar0];
			Global_CADD.f_9B[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_37[iVar0];
			Global_CADD.f_BA[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_42[iVar0];
			Global_CADD.f_D9[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_4D[iVar0];
			Global_CADD.f_F8[iVar0 /*3*/][1] = Global_17C49.f_5CED.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_152(int iParam0)//Position - 0x8389
{
	int iVar0;
	
	iVar0 = Global_CAD5[iParam0];
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

void func_153(int iParam0)//Position - 0x83E3
{
	bool bVar0;
	char cVar1[64];
	
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0) || MISC::IS_BIT_SET(Global_200000[func_155() /*8053*/].f_167C.f_A, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_17C49.f_5CED.f_1D7), iParam0);
		MISC::CLEAR_BIT(&(Global_200000[func_155() /*8053*/].f_167C.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_154(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_154(int iParam0)//Position - 0x84A5
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

int func_155()//Position - 0x851F
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_156(int iParam0)//Position - 0x852C
{
	func_171(93, iParam0);
	func_171(29, iParam0);
	func_171(30, iParam0);
}

bool func_157(int iParam0)//Position - 0x854C
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_17C49.f_5CED.f_1D7, iParam0);
	}
	return MISC::IS_BIT_SET(Global_200000[func_155() /*8053*/].f_167C.f_A, iParam0);
}

int func_158(bool bParam0)//Position - 0x8588
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
		func_169(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_159(27, 1);
	return 1;
}

int func_159(int iParam0, int iParam1)//Position - 0x863F
{
	if (iParam0 >= 61)
	{
		return 0;
	}
	return func_160(iParam0, iParam1);
}

int func_160(int iParam0, int iParam1)//Position - 0x865A
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_6072 != 0 && !Global_10A95)
	{
		return 0;
	}
	if (func_168(&Global_26D4DB))
	{
		if (func_166(&Global_26D4DB, iParam0))
		{
			return 0;
		}
		if (func_161(&Global_26D4DB, iParam0))
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

int func_161(var uParam0, int iParam1)//Position - 0x86DE
{
	int iVar0;
	var uVar1[61];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_166(uParam0, iParam1))
	{
		return 0;
	}
	func_164(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_162(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_162(var uParam0, int iParam1)//Position - 0x8764
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_166(uParam0, iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_163(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_163(var uParam0, int iParam1)//Position - 0x87B4
{
	return (*uParam0)[iParam1] == 61;
}

void func_164(var uParam0)//Position - 0x87C5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_165(uParam0, iVar0);
		iVar0++;
	}
	func_51(&(uParam0->f_3E), (8f - 0.5f));
}

void func_165(var uParam0, int iParam1)//Position - 0x87FC
{
	(*uParam0)[iParam1] = 61;
}

bool func_166(var uParam0, int iParam1)//Position - 0x880C
{
	return func_167(uParam0, iParam1) != -1;
}

int func_167(var uParam0, int iParam1)//Position - 0x881E
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

bool func_168(var uParam0)//Position - 0x884B
{
	return uParam0->f_44 == 1;
}

int func_169(int iParam0, int iParam1)//Position - 0x8859
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

void func_170(int iParam0, int iParam1)//Position - 0x88AA
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_171(int iParam0, int iParam1)//Position - 0x88CD
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_C53D[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_C53D[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_C53D[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_172()//Position - 0x892A
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_CAD5[0] == iVar0)
		{
			Global_CAD5[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_CAD5[1] == iVar0)
		{
			Global_CAD5[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_CAD5[2] == iVar0)
		{
			Global_CAD5[2] = iVar0;
		}
	}
}

float func_173()//Position - 0x899F
{
	float fVar0;
	
	fVar0 = 0f;
	if (func_111(Global_17C49.f_4729.f_1, 8192))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 16384))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 32768))
	{
		fVar0 = (fVar0 + 0.2f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 65536))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 131072))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 262144))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 524288))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 1048576))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	if (func_111(Global_17C49.f_4729.f_1, 2097152))
	{
		fVar0 = (fVar0 + 0.333f);
	}
	return fVar0;
}

void func_174()//Position - 0x8AB8
{
	func_477(&(Global_17C49.f_4729.f_1), 2048);
}

void func_175(var uParam0)//Position - 0x8AD0
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(0);
		uParam0->f_234 = 0;
	}
	if (!Global_10BA1)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_10BA2)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_40(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_176(0);
}

void func_176(int iParam0)//Position - 0x8B77
{
	Global_10B99 = iParam0;
	Global_10B9A = iParam0;
}

void func_177(var uParam0)//Position - 0x8B8B
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

void func_178(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x8BBE
{
	int iVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_185(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_184(uParam0->f_1, 256) || (func_184(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam1);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fParam5);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_184(uParam0->f_1, 4096));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_USING_KEYBOARD(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_USING_KEYBOARD(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!MISC::IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							uVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							uVar3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_183(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_182(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_184(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_181(bParam4, func_181(func_184(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		func_180(&(uParam0->f_1), 256);
		func_179(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_179(var uParam0, int iParam1)//Position - 0x8E7E
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_180(var uParam0, int iParam1)//Position - 0x8E93
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_181(bool bParam0, float fParam1, float fParam2)//Position - 0x8EA4
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_182(char* sParam0)//Position - 0x8EBB
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_183(var uParam0)//Position - 0x8ECD
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(uParam0);
}

bool func_184(var uParam0, int iParam1)//Position - 0x8EDB
{
	return (uParam0 && iParam1) != 0;
}

int func_185(var uParam0)//Position - 0x8EEA
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_180(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_186(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x8F11
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (TASK::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(1);
			uParam0->f_234 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_206();
	if (PAD::_IS_USING_KEYBOARD(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
		}
	}
	Global_8A87 = 1;
	if (!uParam0->f_233)
	{
		switch (func_16(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::ANIMPOSTFX_PLAY("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_205(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_205(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_205((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_205(30f) - func_205(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_176(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_189(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_188(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_188(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_188(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_187(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_187(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_22F = func_188((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_188((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_188((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_188((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_176(0);
			}
			return !bVar0;
		}
	}
	func_176(0);
	return 1;
}

void func_187(var uParam0, bool bParam1)//Position - 0x9569
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_182("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_182("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

float func_188(float fParam0, float fParam1, float fParam2)//Position - 0x962D
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_189(var uParam0, float fParam1, bool bParam2)//Position - 0x9654
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_204() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_182(&(uParam0->f_5));
				func_182(&(uParam0->f_D));
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_38);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(iParam2);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_203();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_205((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_204());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	fVar7 = func_202(&(uParam0->f_D));
	if (fVar6 < fVar7)
	{
		fVar6 = (fVar7 + (3f * 0.006f));
	}
	if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
	{
		fVar6 = (fVar6 * 1.3f);
	}
	fVar7 = func_202(&(uParam0->f_226));
	fVar8 = (((0.119f + 0.05f) / func_204()) / 2.5f);
	if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
	{
		if (fVar6 < (fVar7 + (2.6f * fVar8)))
		{
			fVar6 = (fVar7 + (2.6f * fVar8));
		}
	}
	else if (fVar6 < (fVar7 + (1.9f * fVar8)))
	{
		fVar6 = (fVar7 + (2f * fVar8));
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * -1);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_81((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_232)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					AUDIO::PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					AUDIO::PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_205(6f));
	fVar1 = (fVar1 + (func_205(30f) - func_205((2f * 2f))));
	fVar11 = (fVar2 - func_205((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_188((fVar11 / (0.6f * func_205(25f))), 0f, 1f);
		func_203();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_205((2f - 0.5f)) - 0.001388889f)), fVar6, func_201(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_205((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_205((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_204())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_188((fVar11 / (0.8f * func_205(25f))), 0f, 1f);
			func_198(uParam0, iVar17, (fVar1 + func_205(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_205(25f));
		iVar17++;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_205((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_204())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_205(2f));
			fVar12 = func_188((fVar11 / (0.6f * func_205(25f))), 0f, 1f);
			func_203();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_205((2f * 0.5f))), fVar6, func_201(1f), uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_205((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_204())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_188((fVar11 / (0.8f * func_205(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_192(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (LOCALIZATION::GET_CURRENT_LANGUAGE() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_204()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_204()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_204()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_204()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(1);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_191(&(uParam0->f_226), fVar20, (fVar1 + func_205((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_203();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(uVar13, uVar14, uVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_205((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22B);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_205((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_205((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_190(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_205(10f)) + fVar29);
				if (uParam0->f_22C == -1)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_205(30f) - 2f));
		}
	}
}

float func_190(float fParam0)//Position - 0xA13D
{
	return (fParam0 * 0.00078125f);
}

void func_191(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0xA14D
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_203();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_192(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0xA18A
{
	var uVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	struct<3> Var7;
	
	uVar0 = func_197(iParam0);
	sVar1 = func_195(iParam0, bParam1);
	if (MISC::GET_HASH_KEY(sVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_194())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_194())
			{
				fVar4 = 1f;
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		Var7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(uVar0, sVar1) };
		Var7.x = (Var7.x * (func_193(iParam0) / fVar4));
		Var7.f_1 = (Var7.f_1 * (func_193(iParam0) / fVar4));
		if (!bParam2)
		{
			Var7.x = (Var7.x - 2f);
			Var7.f_1 = (Var7.f_1 - 2f);
		}
		if (iParam0 == 30)
		{
			Var7.x = 288f;
			Var7.f_1 = 106f;
		}
		*fParam3 = ((Var7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((Var7.f_1 / IntToFloat(iVar3)) / (Var7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_4353)
			{
				*fParam4 = (*fParam4 * (Global_4353 / *fParam3));
				*fParam3 = Global_4353;
			}
		}
		return 1;
	}
	return 0;
}

float func_193(int iParam0)//Position - 0xA2F1
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_194()//Position - 0xA38A
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&uVar0, &uVar1);
	fVar2 = (SYSTEM::TO_FLOAT(uVar0) / SYSTEM::TO_FLOAT(uVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_195(int iParam0, bool bParam1)//Position - 0xA3BC
{
	char* sVar0[2];
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_17A0[iParam0 /*16*/])))
	{
		return func_196(&(Global_4354.f_17A0[iParam0 /*16*/]));
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "Shop_Discount_Icon";
			sVar0[1] = "Shop_Discount_Icon";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_196(var uParam0)//Position - 0xA79C
{
	return uParam0;
}

char* func_197(int iParam0)//Position - 0xA7A6
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_4354.f_148F[iParam0 /*16*/])))
	{
		return func_196(&(Global_4354.f_148F[iParam0 /*16*/]));
	}
	return "CommonMenu";
}

void func_198(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0xA7D5
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_200(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_203();
	if (uParam0->f_213[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_1E9[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_192(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_195(7, 0), (fParam4 - 0.006f), ((fParam2 + func_205(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_192(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_195(5, 0), (fParam4 - 0.006f), ((fParam2 + func_205(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_192(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_195(6, 0), (fParam4 - 0.006f), ((fParam2 + func_205(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_200(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(uVar0, uVar1, uVar2, iParam5);
	func_199(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_199(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0xAA60
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_203();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_200(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_200(14f));
			break;
	}
	HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_200(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_200(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_200(float fParam0)//Position - 0xADD9
{
	return (fParam0 * 0.025f);
}

float func_201(float fParam0)//Position - 0xADE9
{
	return (fParam0 * 0.0009259259f);
}

float func_202(char* sParam0)//Position - 0xADF9
{
	HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_203()//Position - 0xAE0E
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

float func_204()//Position - 0xAE36
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_205(float fParam0)//Position - 0xAE4A
{
	return (fParam0 * 0.001388889f);
}

void func_206()//Position - 0xAE5A
{
	if (!Global_3839.f_1 == 1)
	{
		if (func_67(0))
		{
			func_207(0);
		}
		MISC::SET_BIT(&Global_8D8, 2);
	}
}

void func_207(int iParam0)//Position - 0xAE82
{
	if (Global_38D7)
	{
		func_208(0, 0);
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
	if (!func_10())
	{
		Global_3839.f_1 = 3;
	}
}

void func_208(bool bParam0, bool bParam1)//Position - 0xAEF2
{
	if (bParam0)
	{
		if (func_67(0))
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

int func_209(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xAF66
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_210(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xB02F
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_180(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_180(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_180(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_180(&(uParam0->f_1), 8192);
	}
}

int func_211(var uParam0, bool bParam1, int iParam2)//Position - 0xB0A9
{
	uParam0->f_C = iParam2;
	func_214(uParam0);
	func_213(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (uParam0->f_1 == 0)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_212(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_187(uParam0, 1);
		}
		else
		{
			func_187(uParam0, 0);
		}
	}
	Global_10B9A = 1;
	return 1;
}

void func_212(var uParam0)//Position - 0xB238
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_182("ES_HELP_TU");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_182("ES_HELP_TD");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_183(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_182("ES_HELP_AB");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_213(var uParam0)//Position - 0xB2FD
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_200(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_GET_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_214(var uParam0)//Position - 0xB405
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

void func_215()//Position - 0xB484
{
	int iVar0;
	int iVar1;
	
	if (!iLocal_330)
	{
		func_221(&uLocal_341, &Local_917, &Global_D5ED, 0);
		fLocal_325 = (fLocal_325 * 1000f);
		if (Global_14A40)
		{
			func_220(&uLocal_341, 6, &(Local_917.f_C), "MTPHPERSKI", SYSTEM::FLOOR(fLocal_325), 0, 3, 0);
			func_220(&uLocal_341, 6, &(Local_917.f_18), "MTPHPERSKI", 0, 0, 3, 0);
			func_220(&uLocal_341, 6, &(Local_917.f_1E), "MTPHPERSKI", SYSTEM::ROUND((fLocal_327 + fLocal_326)), 0, 3, 0);
			func_219();
		}
		else
		{
			if (bLocal_329)
			{
				func_220(&uLocal_341, 6, &(Local_917.f_C), "MTPHPERRET", SYSTEM::FLOOR(fLocal_325), 0, 3, 0);
			}
			else
			{
				func_220(&uLocal_341, 9, &(Local_917.f_C), "", SYSTEM::FLOOR(fLocal_325), 0, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_917.f_12)))
			{
				if (bLocal_328)
				{
					func_220(&uLocal_341, 6, &(Local_917.f_18), "", 0, 0, 2, 0);
					func_220(&uLocal_341, 3, &(Local_917.f_1E), "", SYSTEM::ROUND((fLocal_327 + fLocal_326)), 0, 2, 0);
				}
				else
				{
					func_220(&uLocal_341, 6, &(Local_917.f_18), "", 0, 0, 1, 0);
					func_220(&uLocal_341, 3, &(Local_917.f_1E), "", SYSTEM::ROUND(fLocal_326), 0, 0, 0);
				}
			}
			else
			{
				func_220(&uLocal_341, 3, &(Local_917.f_1E), "", SYSTEM::ROUND(fLocal_326), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_14A40)
		{
			iVar1 = 0;
			while (iVar1 < Global_1051D)
			{
				if (Global_1051E[iVar1 /*9*/] >= 0 && !Global_D6BF[Global_1051E[iVar1 /*9*/] /*13*/].f_7)
				{
					if (Global_1051E[iVar1 /*9*/].f_3 == 2)
					{
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1)
		{
			iLocal_336 = 50;
			iLocal_337 = 1;
			func_218(&uLocal_341, 1, &(Local_917.f_30), iLocal_336, 0, 0, 1);
		}
		else if (bLocal_328)
		{
			if (bLocal_329)
			{
				iLocal_336 = 75;
				iLocal_337 = 2;
				func_218(&uLocal_341, 1, &(Local_917.f_2A), iLocal_336, 0, 0, 2);
			}
			else
			{
				iLocal_336 = 100;
				iLocal_337 = 3;
				func_218(&uLocal_341, 1, &(Local_917.f_24), iLocal_336, 0, 0, 3);
			}
		}
		else if (!bLocal_328 && !bLocal_329)
		{
			iLocal_336 = 75;
			iLocal_337 = 2;
			func_218(&uLocal_341, 1, &(Local_917.f_2A), iLocal_336, 0, 0, 2);
		}
		else
		{
			iLocal_336 = 50;
			iLocal_337 = 1;
			func_218(&uLocal_341, 1, &(Local_917.f_30), iLocal_336, 0, 0, 1);
		}
		func_216();
		iLocal_330 = 1;
	}
}

void func_216()//Position - 0xB6F0
{
	if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 1)
	{
		func_217(38, SYSTEM::FLOOR(fLocal_325), 1);
		if (bLocal_328)
		{
			func_217(39, 1, 1);
		}
		else
		{
			func_217(39, 0, 1);
		}
		if (bLocal_328)
		{
			func_217(40, SYSTEM::ROUND((fLocal_327 + fLocal_326)), 1);
		}
		else
		{
			func_217(40, SYSTEM::ROUND(fLocal_326), 1);
		}
		func_217(41, iLocal_336, 1);
		func_217(42, iLocal_337, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_multi")) == 1)
	{
		func_217(52, SYSTEM::FLOOR(fLocal_325), 1);
		if (bLocal_328)
		{
			func_217(53, 1, 1);
		}
		else
		{
			func_217(53, 0, 1);
		}
		if (bLocal_328)
		{
			func_217(56, SYSTEM::ROUND((fLocal_327 + fLocal_326)), 1);
		}
		else
		{
			func_217(56, SYSTEM::ROUND(fLocal_326), 1);
		}
		func_217(54, iLocal_336, 1);
		func_217(55, iLocal_337, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_hooker")) == 1)
	{
		func_217(66, SYSTEM::FLOOR(fLocal_325), 1);
		if (bLocal_328)
		{
			func_217(67, 1, 1);
		}
		else
		{
			func_217(67, 0, 1);
		}
		if (bLocal_328)
		{
			func_217(68, SYSTEM::ROUND((fLocal_327 + fLocal_326)), 1);
		}
		else
		{
			func_217(68, SYSTEM::ROUND(fLocal_326), 1);
		}
		func_217(69, iLocal_336, 1);
		func_217(70, iLocal_337, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_bus")) == 1)
	{
		func_217(81, SYSTEM::FLOOR(fLocal_325), 1);
		if (bLocal_328)
		{
			func_217(82, 1, 1);
		}
		else
		{
			func_217(82, 0, 1);
		}
		if (bLocal_328)
		{
			func_217(83, SYSTEM::ROUND((fLocal_327 + fLocal_326)), 1);
		}
		else
		{
			func_217(83, SYSTEM::ROUND(fLocal_326), 1);
		}
		func_217(84, iLocal_336, 1);
		func_217(85, iLocal_337, 1);
	}
	else if (SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_construction")) == 1)
	{
		func_217(97, SYSTEM::FLOOR(fLocal_325), 1);
		if (bLocal_328)
		{
			func_217(98, 1, 1);
		}
		else
		{
			func_217(98, 0, 1);
		}
		if (bLocal_328)
		{
			func_217(99, SYSTEM::ROUND((fLocal_327 + fLocal_326)), 1);
		}
		else
		{
			func_217(99, SYSTEM::ROUND(fLocal_326), 1);
		}
		func_217(100, iLocal_336, 1);
		func_217(101, iLocal_337, 1);
	}
}

void func_217(int iParam0, int iParam1, bool bParam2)//Position - 0xB93C
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1051D)
	{
		if (Global_1051E[iVar0 /*9*/] == iParam0)
		{
			if (bParam2)
			{
				Global_1051E[iVar0 /*9*/].f_1 = iParam1;
			}
			else
			{
				Global_1051E[iVar0 /*9*/].f_1 = (Global_1051E[iVar0 /*9*/].f_1 + iParam1);
			}
			return;
		}
		iVar0++;
	}
	if (Global_1051E[iVar0 /*9*/] != -1)
	{
		if (Global_D6BF[Global_1051E[iVar0 /*9*/] /*13*/] == 3)
		{
			if (Global_1051E[iVar0 /*9*/].f_1 > 1)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_1051E[iVar0 /*9*/].f_1 < 0)
			{
				Global_1051E[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

void func_218(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xB9E6
{
	uParam0->f_225 = iParam1;
	StringCopy(&(uParam0->f_226), sParam2, 16);
	uParam0->f_22A = iParam3;
	uParam0->f_22B = iParam4;
	uParam0->f_22C = iParam5;
	uParam0->f_22D = iParam6;
}

void func_219()//Position - 0xBA1A
{
	Global_14A3F = 0;
	Global_14A40 = 0;
}

void func_220(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBA2C
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_221(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xBA9F
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_222()//Position - 0xBAC2
{
	func_477(&(Global_17C49.f_4729.f_1), 4194304);
}

void func_223()//Position - 0xBADB
{
	int iVar0;
	
	if (!bLocal_998)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					if (VEHICLE::GET_IS_VEHICLE_ENGINE_RUNNING(iVar0))
					{
						if (AUDIO::PREPARE_MUSIC_EVENT("ASS1_LOST"))
						{
							bLocal_998 = true;
						}
					}
				}
			}
		}
	}
}

void func_224()//Position - 0xBB3A
{
	float fVar0;
	
	if (!iLocal_995)
	{
		if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			if (!func_22())
			{
				func_229("ASS_VA_GO", 7500, -1);
				iLocal_995 = 1;
			}
		}
	}
	func_228(&iLocal_1007, &uLocal_1110, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1016)
	{
		case 0:
			iLocal_1016++;
			break;
		
		case 1:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				fVar0 = func_26(PLAYER::PLAYER_PED_ID(), Local_1058, 1);
				if (fVar0 > 155f && func_30(1116471296, 1) == 0)
				{
					bLocal_990 = true;
					func_226();
					iLocal_1016++;
				}
				else
				{
					PLAYER::_0x4669B3ED80F24B4E(PLAYER::PLAYER_ID());
				}
			}
			break;
		
		case 2:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (func_30(1116471296, 1) == 0)
				{
					func_223();
					if (func_225())
					{
						iLocal_929 = 18;
					}
				}
			}
			else if (!iLocal_1006)
			{
				if (!func_22())
				{
					if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
					{
						func_229("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1016++;
						iLocal_1006 = 1;
					}
				}
			}
			break;
		
		case 3:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				iLocal_1016 = 2;
			}
			break;
	}
}

int func_225()//Position - 0xBC75
{
	if (bLocal_998)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
		iLocal_999 = 1;
	}
	func_226();
	return 1;
}

void func_226()//Position - 0xBC98
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_938[iVar0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_938[iVar0]))
			{
				func_227(&(Local_946[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(iLocal_938[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_938[iVar0]));
			}
		}
		iVar0++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
	{
		if (!PED::IS_PED_INJURED(iLocal_937))
		{
			TASK::CLEAR_PED_TASKS(iLocal_937);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_937);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_939[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_939[iVar0]))
			{
				func_227(&(Local_944[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(uLocal_939[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_939[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_940[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uLocal_940[iVar0]))
			{
				func_227(&(Local_945[iVar0 /*8*/]));
				TASK::CLEAR_PED_TASKS(uLocal_940[iVar0]);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_940[iVar0]));
			}
		}
		iVar0++;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1071);
}

void func_227(var uParam0)//Position - 0xBDBA
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		HUD::REMOVE_BLIP(uParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(uParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_7))
	{
		if (!PED::IS_PED_INJURED(uParam0->f_7))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(uParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(uParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*uParam0 = { Var1 };
	}
}

int func_228(int iParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBE28
{
	if (!*iParam0)
	{
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7))
		{
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

void func_229(char* sParam0, int iParam1, int iParam2)//Position - 0xBE55
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_230()//Position - 0xBE6E
{
	func_228(&iLocal_1007, &uLocal_1110, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1016)
	{
		case 0:
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!iLocal_1006)
				{
					if (!func_22())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_229("ASS_VA_LOSECOPS", 7500, 1);
							iLocal_1016++;
							iLocal_1006 = 1;
						}
					}
				}
			}
			else if (func_30(1116471296, 1) != 0)
			{
				if (!iLocal_995)
				{
					if (!func_22())
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							func_229("ASS_VA_GO", 7500, -1);
							iLocal_1016++;
							iLocal_995 = 1;
						}
					}
				}
			}
			else if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_30(125f, 1) == 0)
			{
				iLocal_1016++;
			}
			break;
		
		case 1:
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) && func_30(125f, 1) == 0)
			{
				func_223();
				func_226();
				func_232(1);
				func_231();
				iLocal_1016++;
			}
			break;
		
		case 2:
			func_223();
			iLocal_929 = 18;
			break;
	}
}

void func_231()//Position - 0xBF94
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1063, 1);
		}
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1063);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1064))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_1064))
		{
			if ((ENTITY::IS_ENTITY_ON_SCREEN(iLocal_1064) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_1064)) && !CAM::IS_SCREEN_FADED_OUT())
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1064);
			}
			else
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_940[0]) && !ENTITY::IS_ENTITY_DEAD(uLocal_940[0]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1064))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_940[0], iLocal_1064, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_940[0]);
						}
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_940[1]) && !ENTITY::IS_ENTITY_DEAD(uLocal_940[1]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_1064))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_940[1], iLocal_1064, 0))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_940[1]);
						}
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_1064, 0))
					{
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					}
				}
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1064);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1067[0]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1067[0]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_1067[1]))
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(uLocal_1067[1]));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1068) && !ENTITY::IS_ENTITY_DEAD(iLocal_1068))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_1068) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_1068, 1))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1068);
		}
	}
}

void func_232(bool bParam0)//Position - 0xC115
{
	int iVar0;
	
	if (bParam0)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_948))
		{
			HUD::REMOVE_BLIP(&uLocal_948);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_949[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_949[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_950[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_950[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_950[iVar0]))
		{
			HUD::REMOVE_BLIP(&(uLocal_950[iVar0]));
		}
		iVar0++;
	}
}

void func_233()//Position - 0xC1B4
{
	if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_1056, Local_1057, fLocal_1045, 1, 0, 0))
	{
		bLocal_975 = true;
	}
	else
	{
		bLocal_975 = false;
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_948))
	{
		HUD::REMOVE_BLIP(&uLocal_948);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.5f);
	if (bLocal_975)
	{
		func_234();
		iLocal_929 = 17;
	}
	else
	{
		func_234();
		iLocal_929 = 16;
	}
	func_79(&uLocal_1275, 0, 0);
}

void func_234()//Position - 0xC220
{
	iLocal_1016 = 0;
}

void func_235()//Position - 0xC22C
{
	if (!bLocal_972)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_1063, 3);
				if (func_237(iLocal_1063, 5f))
				{
					bLocal_972 = true;
				}
			}
		}
	}
	if (!iLocal_969)
	{
		if (func_236(iLocal_1063, 10000))
		{
			iLocal_969 = 1;
		}
	}
}

int func_236(int iParam0, int iParam1)//Position - 0xC27F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (((VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 0, iParam1) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 2, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 3, iParam1)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iParam0, 1, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_237(int iParam0, float fParam1)//Position - 0xC2CF
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_238(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1)
		{
			return 1;
		}
	}
	return 0;
}

float func_238(int iParam0, struct<3> Param1, int iParam2)//Position - 0xC301
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

void func_239()//Position - 0xC33A
{
	switch (iLocal_1016)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				if (func_127())
				{
					if (!PED::IS_PED_INJURED(uLocal_939[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
						{
							if (PED::IS_PED_IN_VEHICLE(uLocal_939[0], iLocal_1063, 0))
							{
								bLocal_968 = true;
								func_234();
								iLocal_929 = 13;
							}
						}
					}
				}
			}
			break;
	}
}

void func_240()//Position - 0xC39C
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_937))
	{
		if (PED::IS_PED_INJURED(iLocal_937))
		{
			if (ENTITY::IS_ENTITY_DEAD(iLocal_937))
			{
				bLocal_973 = true;
				if (HUD::DOES_BLIP_EXIST(uLocal_948))
				{
					HUD::REMOVE_BLIP(&uLocal_948);
				}
				func_103(Local_1060, 1097859072, 1116471296);
			}
			RECORDING::_0x293220DA1B46CEBC(3f, 1073741824, 3);
			func_234();
			iLocal_929 = 15;
		}
	}
}

void func_241()//Position - 0xC3FE
{
	func_232(0);
	func_248();
	func_246();
	func_243();
	func_242();
	func_229("ASS_VA_KILL", 7500, -1);
	SYSTEM::SETTIMERA(0);
	bLocal_984 = true;
	func_234();
	iLocal_929 = 12;
}

void func_242()//Position - 0xC439
{
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1073);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1074);
}

void func_243()//Position - 0xC44F
{
	func_245(&(Local_1425.f_4));
	func_244(&(Local_1425[0]));
	func_244(&(Local_1425[1]));
	func_244(&(Local_1425.f_8[0]));
	func_244(&(Local_1425.f_8[1]));
	func_244(&(Local_1425.f_5[0]));
	func_244(&(Local_1425.f_5[1]));
	func_244(&(Local_1425.f_3));
}

void func_244(var uParam0)//Position - 0xC4AD
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*uParam0))
		{
			PED::DELETE_PED(uParam0);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_245(var uParam0)//Position - 0xC4D8
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_OCCLUDED(*uParam0))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam0);
		}
	}
}

void func_246()//Position - 0xC4FA
{
	struct<3> Var0[2];
	struct<3> Var1;
	var uVar2;
	int iVar3;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_937) && !ENTITY::IS_ENTITY_DEAD(iLocal_937))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iLocal_937, 1) };
		uVar2 = ENTITY::GET_ENTITY_HEADING(iLocal_937);
	}
	Var0[0 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, uVar2, 1f, -1f, 0f) };
	Var0[1 /*3*/] = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(Var1, uVar2, -1f, -1f, 0f) };
	iVar3 = 0;
	while (iVar3 < 2)
	{
		if (iVar3 == 0)
		{
			iLocal_938[iVar3] = PED::CREATE_PED(26, iLocal_1073, Var0[0 /*3*/], Var0[0 /*3*/].f_1, 38.3253f, uLocal_1044[iLocal_1020], 1, 1);
		}
		else
		{
			iLocal_938[iVar3] = PED::CREATE_PED(26, iLocal_1074, Var0[1 /*3*/], Var0[1 /*3*/].f_1, 38.3253f, uLocal_1044[iLocal_1020], 1, 1);
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_938[iVar3], 1);
		PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_938[iVar3]);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_938[iVar3], 3, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_938[iVar3], 23, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_938[iVar3], 30, 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_938[iVar3], 13, 1);
		PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_938[iVar3], 2);
		PED::SET_PED_KEEP_TASK(iLocal_938[iVar3], 1);
		func_247(iLocal_938[iVar3], 1);
		PED::SET_PED_TO_LOAD_COVER(iLocal_938[iVar3], 1);
		iVar3++;
	}
}

void func_247(int iParam0, bool bParam1)//Position - 0xC64D
{
	if (iParam0 != iLocal_937)
	{
		WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!bParam1)
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 1);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 0, 1);
	}
	else
	{
		PED::SET_PED_COMBAT_MOVEMENT(iParam0, 2);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, 1);
	}
	PED::SET_PED_ACCURACY(iParam0, 60);
	PED::SET_PED_COMBAT_ABILITY(iParam0, 2);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, 1);
	PED::SET_PED_AS_ENEMY(iParam0, 1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_1078);
}

void func_248()//Position - 0xC6B9
{
	func_250();
	iLocal_1020 = MISC::GET_RANDOM_INT_IN_RANGE(0, iLocal_1018);
	iLocal_937 = PED::CREATE_PED(26, iLocal_1071, Local_1051[iLocal_1020 /*3*/], uLocal_1044[iLocal_1020], 1, 1);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_937, 1);
	PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iLocal_937);
	func_247(iLocal_937, 1);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1071);
	if (!HUD::DOES_BLIP_EXIST(uLocal_948))
	{
		uLocal_948 = func_249(iLocal_937, 0, 0);
	}
	HUD::SET_BLIP_SCALE(uLocal_948, 1f);
}

int func_249(int iParam0, int iParam1, bool bParam2)//Position - 0xC72D
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	uVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_181(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_181(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(uVar0, iParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(uVar0, func_181(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

void func_250()//Position - 0xC7D1
{
	int iVar0;
	
	iLocal_1018 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!CAM::IS_SPHERE_VISIBLE(Local_1050[iVar0 /*3*/], 5f) && !func_254(iVar0, 6f))
		{
			Local_1051[iLocal_1018 /*3*/] = { Local_1050[iVar0 /*3*/] };
			uLocal_1044[iLocal_1018] = fLocal_1043[iVar0];
			iLocal_1018++;
		}
		iVar0++;
	}
	if (iLocal_1018 == 0)
	{
		if (func_91())
		{
			Local_1051[0 /*3*/] = { Local_1050[1 /*3*/] };
			uLocal_1044[0] = fLocal_1043[1];
			iLocal_1018++;
		}
		else if (func_253())
		{
			Local_1051[0 /*3*/] = { Local_1050[0 /*3*/] };
			uLocal_1044[0] = fLocal_1043[0];
			iLocal_1018++;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (func_252(Local_1050[iVar0 /*3*/], 1) > 30f && !func_254(iVar0, 6f))
				{
					Local_1051[iLocal_1018 /*3*/] = { Local_1050[iVar0 /*3*/] };
					uLocal_1044[iLocal_1018] = fLocal_1043[iVar0];
					iLocal_1018++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1018 == 0)
	{
		func_251();
	}
}

void func_251()//Position - 0xC909
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		fVar2 = SYSTEM::VDIST(Var1, Local_1050[iVar0 /*3*/]);
		if (fVar2 > fLocal_1049)
		{
			fLocal_1049 = fVar2;
			iLocal_1048 = iVar0;
		}
		iVar0++;
	}
	Local_1051[0 /*3*/] = { Local_1050[iLocal_1048 /*3*/] };
	uLocal_1044[0] = fLocal_1043[iLocal_1048];
}

float func_252(struct<3> Param0, int iParam1)//Position - 0xC982
{
	return func_26(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Param0, iParam1);
}

int func_253()//Position - 0xC99C
{
	if (func_26(PLAYER::PLAYER_PED_ID(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f)
	{
		return 1;
	}
	return 0;
}

int func_254(int iParam0, float fParam1)//Position - 0xC9CA
{
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Local_1050[iParam0 /*3*/], fParam1))
	{
		return 1;
	}
	return 0;
}

void func_255()//Position - 0xC9E9
{
	switch (iLocal_1016)
	{
		case 0:
			if (!iLocal_985)
			{
				func_99(&Local_319, 4);
				func_258();
				SYSTEM::SETTIMERA(0);
				iLocal_1016++;
			}
			break;
		
		case 1:
			if (((bLocal_964 && !bLocal_962) && func_257()) && func_256())
			{
				func_234();
				iLocal_929 = 11;
			}
			break;
	}
}

int func_256()//Position - 0xCA55
{
	int iVar0;
	
	STREAMING::REQUEST_MODEL(iLocal_1071);
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1071))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_257()//Position - 0xCA79
{
	if (((ENTITY::DOES_ENTITY_EXIST(uLocal_939[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_939[1])) && !PED::IS_PED_INJURED(uLocal_939[0])) && !PED::IS_PED_INJURED(uLocal_939[1]))
	{
		if (PED::IS_PED_IN_VEHICLE(uLocal_939[0], iLocal_1063, 0) && PED::IS_PED_IN_VEHICLE(uLocal_939[1], iLocal_1063, 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_258()//Position - 0xCAEC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iLocal_931[iVar0] = 4;
		iVar0++;
	}
	bLocal_978 = true;
}

void func_259()//Position - 0xCB12
{
	switch (iLocal_1016)
	{
		case 0:
			func_280(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
			func_99(&Local_319, 2);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
			{
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1063, 0, 1);
			}
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_1068) && !ENTITY::IS_ENTITY_DEAD(iLocal_1068))
					{
						func_267(iLocal_1068);
					}
				}
			}
			func_264();
			func_263();
			AUDIO::TRIGGER_MUSIC_EVENT("ASS1_START");
			MISC::SET_BIT(&Local_319, 4);
			func_229("ASS_VA_PLANT", 7500, 1);
			iLocal_1016++;
			break;
		
		case 1:
			if (iLocal_991)
			{
				if (((!func_262(&iLocal_1065) && !func_261(&(iLocal_1069[0]), &bLocal_1012)) && !func_261(&(iLocal_1069[1]), &bLocal_1012)) && !func_261(&(iLocal_1069[2]), &bLocal_1012))
				{
					SYSTEM::SETTIMERA(0);
					func_234();
					iLocal_929 = 10;
				}
				else
				{
					func_260();
				}
			}
			break;
	}
}

void func_260()//Position - 0xCC20
{
	iLocal_935 = 1;
	bLocal_962 = true;
}

int func_261(var uParam0, int iParam1)//Position - 0xCC30
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1064))
	{
		return 0;
	}
	if (func_24(*uParam0, iLocal_1064, 1) <= 5f)
	{
		iLocal_1065 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

int func_262(var uParam0)//Position - 0xCC75
{
	struct<3> Var0;
	
	*uParam0 = VEHICLE::GET_CLOSEST_VEHICLE(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (((*uParam0 != 0 && *uParam0 != iLocal_1063) && *uParam0 != iLocal_1064) && *uParam0 != Local_1425.f_4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, -1) == 0)
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(*uParam0, 1) };
				Var0 = { Var0 };
				return 1;
			}
		}
	}
	if (iLocal_1068 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_1068) && !ENTITY::IS_ENTITY_DEAD(iLocal_1068))
		{
			if (!func_86(iLocal_1068))
			{
				Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_1068, 1) };
				return 1;
			}
		}
	}
	return 0;
}

void func_263()//Position - 0xCD3D
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_939[iVar1]))
		{
			if (iVar1 == 2)
			{
				iVar0 = iLocal_1074;
			}
			else
			{
				iVar0 = iLocal_1073;
			}
			uLocal_939[iVar1] = PED::CREATE_PED(26, iVar0, Local_1052[iVar1 /*3*/], fLocal_1039[iVar1], 1, 1);
			if (iVar1 == 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 0, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1)
			{
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 3, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 0, 1, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 3, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 8, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iVar1], 11, 1, 1, 0);
			}
		}
		if (!PED::IS_PED_INJURED(uLocal_939[iVar1]))
		{
			PED::SET_PED_CAN_BE_TARGETTED(uLocal_939[iVar1], 0);
			PED::SET_PED_KEEP_TASK(uLocal_939[iVar1], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_939[iVar1], 23, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_939[iVar1], 30, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_939[iVar1], 2);
			PED::SET_PED_CONFIG_FLAG(uLocal_939[iVar1], 104, 1);
			func_247(uLocal_939[iVar1], 1);
		}
		iVar1++;
	}
}

void func_264()//Position - 0xCF02
{
	func_266();
	func_265();
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1075);
}

void func_265()//Position - 0xCF19
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_940[iVar0]))
		{
			if (iVar0 == 0)
			{
				uLocal_940[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1064, 26, iLocal_1073, -1, 1, 1);
			}
			else if (iVar0 == 1)
			{
				uLocal_940[iVar0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1064, 26, iLocal_1074, 0, 1, 1);
			}
			func_247(uLocal_940[iVar0], 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_940[iVar0], 3, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_940[iVar0], 23, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_940[iVar0], 30, 0);
			PED::SET_PED_TARGET_LOSS_RESPONSE(uLocal_940[iVar0], 2);
			PED::SET_PED_KEEP_TASK(uLocal_940[iVar0], 1);
		}
		iVar0++;
	}
}

void func_266()//Position - 0xCFCD
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1064))
	{
		iLocal_1064 = VEHICLE::CREATE_VEHICLE(iLocal_1075, Local_1053, fLocal_1041, 1, 1);
		VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_1064, 0);
	}
}

void func_267(int iParam0)//Position - 0xCFFC
{
	func_268(&(Global_16D94.f_877), &Global_16D94, iParam0, 1);
}

int func_268(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0xD017
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam2, 0))
	{
		func_270(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_269(iParam2))
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

int func_269(int iParam0)//Position - 0xD057
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

void func_270(var uParam0, int iParam1, int iParam2)//Position - 0xD085
{
	func_276(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_273(iParam1, 145, 0);
	uParam0->f_B = func_272(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_271(iParam1);
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

int func_271(int iParam0)//Position - 0xD161
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

int func_272(int iParam0)//Position - 0xD1A3
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

int func_273(int iParam0, int iParam1, int iParam2)//Position - 0xD206
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
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_274(iParam1, iParam2))
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

int func_274(int iParam0, int iParam1)//Position - 0xD294
{
	struct<58> Var0;
	
	if (func_15(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 25;
		Var0.f_39 = 2;
		func_275(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_275(int iParam0, var uParam1, int iParam2)//Position - 0xD2D6
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

void func_276(int iParam0, var uParam1)//Position - 0xD54E
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_279(uParam1);
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
		func_278(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_35), func_277(iVar0 + 1));
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

int func_277(int iParam0)//Position - 0xD7FA
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

int func_278(int iParam0, var uParam1, var uParam2)//Position - 0xD8AA
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

void func_279(var uParam0)//Position - 0xD984
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

void func_280(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xDA34
{
	int iVar0;
	int iVar1;
	var uVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_15F8F)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_15F8F)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_151(1);
		if (iParam0 <= Global_15F8F)
		{
		}
		iVar1 = func_337(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != -1 && iVar1 != 94)
		{
			Global_17C49.f_1CAD.f_148[iVar1 /*6*/].f_1 = 0;
			uVar2 = func_335(iVar1);
			cVar3 = { Global_13D03[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_17C49.f_1CAD.f_63.f_CB[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, uVar2, Global_15F8F, iParam0);
		}
		else
		{
			iVar4 = func_330(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != -1)
			{
				Global_17C49.f_41BC[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_329(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_15F8F, iParam0);
			}
			else
			{
				iVar6 = func_328(&(Global_15F6A.f_3));
				if (iVar6 > -1)
				{
					Global_17C49.f_6E17.f_4[iVar6] = 0;
				}
			}
		}
		Global_14A41 = iParam2;
		Global_15F8F = iParam0;
		func_281(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_15F8F)
	{
	}
}

void func_281(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xDBA9
{
	func_282(&Global_16D94, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_282(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xDBC5
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_13();
	uParam0->f_1 = func_317();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_303(&(uParam0->f_871), 0);
		func_302(PLAYER::PLAYER_PED_ID());
		func_296(PLAYER::PLAYER_PED_ID(), 0);
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
		if (iVar1 == func_295())
		{
			func_288(PLAYER::PLAYER_PED_ID(), &(uParam0->f_1D8[iVar1 /*65*/]), 1);
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
		func_284(&(uParam0->f_877), uParam0, iParam5, 1, 1, 0);
	}
	func_283(&(uParam0->f_8B9));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_283(var uParam0)//Position - 0xEA49
{
	*uParam0 = Global_150C8;
	uParam0->f_1 = Global_150C9;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_284(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xEA6B
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = PLAYER::PLAYER_PED_ID();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_285(iParam2, &iVar0, iParam3, iParam5))
	{
		func_268(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("skylift")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				func_268(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_285(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0xEAF2
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
						if (func_286(*uParam1, func_13(), 1))
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

int func_286(int iParam0, int iParam1, bool bParam2)//Position - 0xEC1F
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_287(iParam1, iVar0, &sVar1, &iVar2))
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

int func_287(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0xEC90
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

void func_288(int iParam0, var uParam1, int iParam2)//Position - 0xED68
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_294(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_293(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0))
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
			if (func_292(161, -1))
			{
				uParam1->f_3B = func_289(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_289(740, Global_10A08, 0);
			}
			uParam1->f_3C = func_289(741, Global_10A08, 0);
			uParam1->f_3D = func_289(742, Global_10A08, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == PLAYER::PLAYER_PED_ID())
		{
			if (func_292(161, -1))
			{
				uParam1->f_3B = func_289(2035, Global_10A08, 0);
			}
			else
			{
				uParam1->f_3B = func_289(740, Global_10A08, 0);
			}
		}
	}
}

int func_289(int iParam0, int iParam1, int iParam2)//Position - 0xEF12
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_25744D[iParam0 /*6*/][func_290(iParam1)];
	if (STATS::STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_290(var uParam0)//Position - 0xEF44
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_291();
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

int func_291()//Position - 0xEF78
{
	return Global_1407E1;
}

int func_292(int iParam0, int iParam1)//Position - 0xEF84
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_25BDB1[iParam0 /*6*/][func_290(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_293(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0xEFB0
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
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

void func_294(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0xF4F8
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
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

int func_295()//Position - 0xF739
{
	func_14();
	return Global_17C49.f_6C1.f_21B.f_C8D;
}

void func_296(int iParam0, bool bParam1)//Position - 0xF752
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_297(iParam0, &(Global_17C49.f_6C1.f_21B.f_12A[iVar0 /*284*/]));
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
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_297(int iParam0, var uParam1)//Position - 0xF845
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
			iVar3 = func_301(iVar0);
			if (iVar3 != 0)
			{
				Var4.x = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_301(iVar0));
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
					iVar2 = func_299(Var4.x, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4.x, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_299(Var4.x, iVar1);
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
			if ((FILES::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_298(Var7.f_1)) && iVar9 < 50)
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

int func_298(int iParam0)//Position - 0xFAA9
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

int func_299(int iParam0, int iParam1)//Position - 0xFBCF
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
				iVar1 = func_300(iParam0, &uVar2);
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

int func_300(int iParam0, var uParam1)//Position - 0x103ED
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

int func_301(int iParam0)//Position - 0x10428
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

void func_302(int iParam0)//Position - 0x1069C
{
	int iVar0;
	
	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_17C49.f_6C1.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_303(var uParam0, int iParam1)//Position - 0x106D8
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
		if (func_306(&iVar0))
		{
			if (func_305(iVar0, &Var1, &uVar2))
			{
				Var1.f_2 = (Var1.f_2 + 1f);
				*uParam0 = { Var1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, 1, 0))
		{
			iVar3 = func_13();
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
		else if (func_304(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_304(struct<3> Param0, char* sParam1, struct<3> Param2)//Position - 0x10C33
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

bool func_305(int iParam0, var uParam1, var uParam2)//Position - 0x10C77
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
	return !func_44(*uParam1, 0f, 0f, 0f);
}

int func_306(var uParam0)//Position - 0x112CD
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_316())
		{
			*uParam0 = func_312(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 0), 5, -1, 0, 1);
			if (func_311(*uParam0) && !func_307(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_307(int iParam0)//Position - 0x11326
{
	return func_308(iParam0, 0, 1);
}

int func_308(int iParam0, int iParam1, bool bParam2)//Position - 0x11336
{
	if (bParam2)
	{
		return MISC::IS_BIT_SET(Global_15F9E.f_4F3[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_310() == 0)
		{
			return MISC::IS_BIT_SET(func_289(func_309(iParam0), -1, 0), iParam1);
		}
	}
	else
	{
		return MISC::IS_BIT_SET(Global_17C49.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_309(int iParam0)//Position - 0x11396
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

int func_310()//Position - 0x1163F
{
	return Global_5F7C;
}

int func_311(int iParam0)//Position - 0x1164A
{
	return func_308(iParam0, 5, 1);
}

int func_312(struct<3> Param0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1165A
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
		if (iParam1 == 5 || iParam1 == func_315(iVar0))
		{
			if (!bParam3 || func_314(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, func_313(iVar0), 1);
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

Vector3 func_313(int iParam0)//Position - 0x116F1
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

int func_314(int iParam0)//Position - 0x11BC2
{
	return func_308(iParam0, 0, 0);
}

int func_315(int iParam0)//Position - 0x11BD2
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

bool func_316()//Position - 0x11E2B
{
	return Global_15F9E.f_122 > 0;
}

var func_317()//Position - 0x11E3C
{
	var uVar0;
	
	func_327(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_326(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_325(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_320(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_319(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_318(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_318(var uParam0, int iParam1)//Position - 0x11E82
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

void func_319(var uParam0, int iParam1)//Position - 0x11F08
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_320(var uParam0, int iParam1)//Position - 0x11F3B
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_324(*uParam0);
	iVar1 = func_322(*uParam0);
	if (iParam1 < 1 || iParam1 > func_321(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_321(int iParam0, int iParam1)//Position - 0x11F8C
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

var func_322(var uParam0)//Position - 0x1202E
{
	return (SYSTEM::SHIFT_RIGHT(uParam0, 26) & 31 * func_323(MISC::IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_323(bool bParam0, int iParam1, int iParam2)//Position - 0x12053
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_324(var uParam0)//Position - 0x1206A
{
	return uParam0 & 15;
}

void func_325(var uParam0, int iParam1)//Position - 0x12077
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_326(var uParam0, int iParam1)//Position - 0x120B1
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_327(var uParam0, int iParam1)//Position - 0x120EC
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_328(char* sParam0)//Position - 0x12128
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return -1;
}

struct<2> func_329(int iParam0)//Position - 0x1217E
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

int func_330(char* sParam0, int iParam1)//Position - 0x125CA
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_331(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
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

void func_331(int iParam0, var uParam1)//Position - 0x12613
{
	switch (iParam0)
	{
		case 0:
			func_332(uParam1, "Abigail1", func_334(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 1:
			func_332(uParam1, "Abigail2", func_334(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 2:
			func_332(uParam1, "Barry1", func_334(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 3:
			func_332(uParam1, "Barry2", func_334(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_333(iParam0), 1, 1);
			break;
		
		case 4:
			func_332(uParam1, "Barry3", func_334(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 5:
			func_332(uParam1, "Barry3A", func_334(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 6:
			func_332(uParam1, "Barry3C", func_334(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 7:
			func_332(uParam1, "Barry4", func_334(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_333(iParam0), 0, 0);
			break;
		
		case 8:
			func_332(uParam1, "Dreyfuss1", func_334(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 9:
			func_332(uParam1, "Epsilon1", func_334(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 10:
			func_332(uParam1, "Epsilon2", func_334(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 11:
			func_332(uParam1, "Epsilon3", func_334(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 12:
			func_332(uParam1, "Epsilon4", func_334(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 13:
			func_332(uParam1, "Epsilon5", func_334(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 14:
			func_332(uParam1, "Epsilon6", func_334(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 15:
			func_332(uParam1, "Epsilon7", func_334(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 16:
			func_332(uParam1, "Epsilon8", func_334(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 17:
			func_332(uParam1, "Extreme1", func_334(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 18:
			func_332(uParam1, "Extreme2", func_334(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 19:
			func_332(uParam1, "Extreme3", func_334(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 20:
			func_332(uParam1, "Extreme4", func_334(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 21:
			func_332(uParam1, "Fanatic1", func_334(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_333(iParam0), 1, 0);
			break;
		
		case 22:
			func_332(uParam1, "Fanatic2", func_334(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_333(iParam0), 1, 0);
			break;
		
		case 23:
			func_332(uParam1, "Fanatic3", func_334(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_333(iParam0), 0, 1);
			break;
		
		case 24:
			func_332(uParam1, "Hao1", func_334(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_333(iParam0), 0, 1);
			break;
		
		case 25:
			func_332(uParam1, "Hunting1", func_334(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 26:
			func_332(uParam1, "Hunting2", func_334(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 27:
			func_332(uParam1, "Josh1", func_334(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 28:
			func_332(uParam1, "Josh2", func_334(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_333(iParam0), 1, 1);
			break;
		
		case 29:
			func_332(uParam1, "Josh3", func_334(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_333(iParam0), 1, 1);
			break;
		
		case 30:
			func_332(uParam1, "Josh4", func_334(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 31:
			func_332(uParam1, "Maude1", func_334(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 32:
			func_332(uParam1, "Minute1", func_334(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 33:
			func_332(uParam1, "Minute2", func_334(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 34:
			func_332(uParam1, "Minute3", func_334(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 35:
			func_332(uParam1, "MrsPhilips1", func_334(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 36:
			func_332(uParam1, "MrsPhilips2", func_334(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 37:
			func_332(uParam1, "Nigel1", func_334(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 38:
			func_332(uParam1, "Nigel1A", func_334(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_333(iParam0), 1, 1);
			break;
		
		case 39:
			func_332(uParam1, "Nigel1B", func_334(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_333(iParam0), 1, 1);
			break;
		
		case 40:
			func_332(uParam1, "Nigel1C", func_334(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_333(iParam0), 1, 1);
			break;
		
		case 41:
			func_332(uParam1, "Nigel1D", func_334(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_333(iParam0), 1, 1);
			break;
		
		case 42:
			func_332(uParam1, "Nigel2", func_334(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_333(iParam0), 1, 1);
			break;
		
		case 43:
			func_332(uParam1, "Nigel3", func_334(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_333(iParam0), 1, 1);
			break;
		
		case 44:
			func_332(uParam1, "Omega1", func_334(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 45:
			func_332(uParam1, "Omega2", func_334(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 46:
			func_332(uParam1, "Paparazzo1", func_334(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 47:
			func_332(uParam1, "Paparazzo2", func_334(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 48:
			func_332(uParam1, "Paparazzo3", func_334(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 49:
			func_332(uParam1, "Paparazzo3A", func_334(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 50:
			func_332(uParam1, "Paparazzo3B", func_334(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 51:
			func_332(uParam1, "Paparazzo4", func_334(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 52:
			func_332(uParam1, "Rampage1", func_334(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 54:
			func_332(uParam1, "Rampage3", func_334(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 55:
			func_332(uParam1, "Rampage4", func_334(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 56:
			func_332(uParam1, "Rampage5", func_334(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_333(iParam0), 0, 0);
			break;
		
		case 53:
			func_332(uParam1, "Rampage2", func_334(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_333(iParam0), 1, 0);
			break;
		
		case 57:
			func_332(uParam1, "TheLastOne", func_334(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 58:
			func_332(uParam1, "Tonya1", func_334(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 59:
			func_332(uParam1, "Tonya2", func_334(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 60:
			func_332(uParam1, "Tonya3", func_334(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 61:
			func_332(uParam1, "Tonya4", func_334(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		case 62:
			func_332(uParam1, "Tonya5", func_334(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_333(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_332(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, struct<3> Param6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x137C8
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

int func_333(int iParam0)//Position - 0x13859
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

struct<2> func_334(int iParam0)//Position - 0x13B9F
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_329(iParam0) };
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

int func_335(int iParam0)//Position - 0x13BD6
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_336(Global_17C49.f_1CAD.f_63.f_CB[10]);
			break;
		
		case 74:
		case 75:
			return func_336(Global_17C49.f_1CAD.f_63.f_CB[8]);
			break;
		
		case 84:
		case 85:
			return func_336(Global_17C49.f_1CAD.f_63.f_CB[11]);
			break;
		
		case 90:
			return func_336(Global_17C49.f_1CAD.f_63.f_CB[7]);
			break;
		
		case 93:
			return func_336(Global_17C49.f_1CAD.f_63.f_CB[9]);
			break;
	}
	return 0;
}

int func_336(int iParam0)//Position - 0x13C92
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return -1;
}

int func_337(char* sParam0, bool bParam1)//Position - 0x13CE6
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_338(iVar0, 1);
	if (iVar1 == -1 && !bParam1)
	{
	}
	return iVar1;
}

int func_338(int iParam0, bool bParam1)//Position - 0x13D10
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_13D03[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return -1;
}

void func_339()//Position - 0x13D46
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f, 15f, 0, 0, 0) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
			{
				if (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0.5f)
				{
					if (!func_52(&uLocal_1091))
					{
						func_49(&uLocal_1091);
					}
				}
				else if (func_52(&uLocal_1091))
				{
					func_50(&uLocal_1091);
				}
				if (func_52(&uLocal_1091))
				{
					if (func_46(&uLocal_1091) > 10f)
					{
						func_31(2);
					}
				}
			}
			else if (func_52(&uLocal_1091))
			{
				func_50(&uLocal_1091);
			}
		}
	}
}

void func_340()//Position - 0x13E22
{
	switch (iLocal_1016)
	{
		case 0:
			if (func_370(1084227584, 1) || (bLocal_974 && STREAMING::STREAMVOL_HAS_LOADED(uLocal_953)))
			{
				func_369(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, Local_1411, fLocal_1412, 1, 1, 1, 0, 0);
				MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
				MISC::CLEAR_AREA_OF_PROJECTILES(-1220.57f, -185.96f, 38.4f, 50f, 0);
				func_368();
				func_367();
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_1063))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1063, 107, "ASSOJva", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1063, 2500f);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						AUDIO::SET_VEH_RADIO_STATION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), "OFF");
					}
				}
				iLocal_1016++;
			}
			else if (STREAMING::STREAMVOL_HAS_LOADED(uLocal_953))
			{
			}
			break;
		
		case 1:
			if (func_341())
			{
				iLocal_1017 = 0;
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				func_462();
				func_234();
				iLocal_929 = 9;
			}
			break;
	}
}

int func_341()//Position - 0x13F6B
{
	int iVar0;
	
	switch (iLocal_1017)
	{
		case 0:
			func_366(0, 0, 1);
			func_365();
			CAM::SHAKE_CAM(uLocal_1076, "HAND_SHAKE", 0.2f);
			CAM::SHAKE_CAM(uLocal_1077, "HAND_SHAKE", 0.2f);
			CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1077, uLocal_1076, 6000, 0, 0);
			CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
			HUD::CLEAR_HELP(1);
			HUD::CLEAR_PRINTS();
			func_229("ASS_VA_SNIPE1", 7500, 1);
			if (bLocal_974)
			{
				func_364();
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
			else
			{
				func_355();
			}
			SYSTEM::SETTIMERA(0);
			iLocal_1017++;
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1063))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
				{
					if (SYSTEM::TIMERA() > 6000)
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1063))
						{
							VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1063);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_1063, 102, "ASSOJva", 1);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_1063, 4500f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_1063, 1);
						func_229("ASS_VA_SNIPE2", 7500, 1);
						CAM::SET_CAM_PARAMS(uLocal_1076, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f, 42.27108f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(uLocal_1076, 0.5f);
						CAM::SET_CAM_FAR_DOF(uLocal_1076, 7f);
						CAM::SHAKE_CAM(uLocal_1076, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_PARAMS(uLocal_1077, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f, 38f, 0, 1, 1, 2);
						CAM::SET_CAM_NEAR_DOF(uLocal_1077, 0.7f);
						CAM::SET_CAM_FAR_DOF(uLocal_1077, 10f);
						CAM::SHAKE_CAM(uLocal_1077, "HAND_SHAKE", 0.2f);
						CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1077, uLocal_1076, 2000, 3, 3);
						iLocal_1017++;
					}
				}
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_1063))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_1063) >= 7000f)
					{
						VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_1063);
						iLocal_1015 = 0;
						while (iLocal_1015 < 3)
						{
							if (!ENTITY::IS_ENTITY_DEAD(uLocal_939[iLocal_1015]))
							{
								if (iLocal_1015 == 0)
								{
									iVar0 = 1250;
								}
								else if (iLocal_1015 == 1)
								{
									iVar0 = 400;
								}
								else
								{
									iVar0 = 0;
								}
								if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_939[iLocal_1015], 242628503) != 1)
								{
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
									TASK::OPEN_SEQUENCE_TASK(&uLocal_1070);
									TASK::TASK_LEAVE_ANY_VEHICLE(0, iVar0, 0);
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_1050[iLocal_1015 /*3*/], 1f, 20000, 0.25f, 0, 1193033728);
									TASK::CLOSE_SEQUENCE_TASK(uLocal_1070);
									TASK::TASK_PERFORM_SEQUENCE(uLocal_939[iLocal_1015], uLocal_1070);
									TASK::CLEAR_SEQUENCE_TASK(&uLocal_1070);
								}
							}
							iLocal_1015++;
						}
						SYSTEM::SETTIMERA(0);
						iLocal_1017++;
					}
				}
			}
			break;
		
		case 3:
			if (SYSTEM::TIMERA() >= 2000)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::SET_CAM_PARAMS(uLocal_1076, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1076, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(uLocal_1077, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1077, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1077, uLocal_1076, 4000, 3, 3);
					iLocal_1035 = 4000;
				}
				else
				{
					CAM::SET_CAM_PARAMS(uLocal_1076, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1076, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_PARAMS(uLocal_1077, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0, 1, 1, 2);
					CAM::SHAKE_CAM(uLocal_1077, "HAND_SHAKE", 0.2f);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1077, uLocal_1076, 4000, 3, 3);
					iLocal_1035 = 4000;
				}
				SYSTEM::SETTIMERA(0);
				iLocal_1017++;
			}
			break;
		
		case 4:
			if (!iLocal_1013)
			{
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					if (SYSTEM::TIMERA() >= (iLocal_1035 - 300))
					{
						GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, 0);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_1013 = 1;
					}
				}
			}
			if (SYSTEM::TIMERA() >= iLocal_1035)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1063))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1063);
					}
				}
				VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
				VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 1, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 0, 1);
				VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 2, 1);
				HUD::CLEAR_HELP(1);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
				{
					CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
				else
				{
					CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(1, 0f, 1, 0);
				}
				func_346(1, 1, 1);
				return 1;
			}
			break;
	}
	if (func_344(iLocal_335))
	{
		HUD::CLEAR_HELP(1);
		func_342(1);
		return 1;
	}
	return 0;
}

void func_342(bool bParam0)//Position - 0x14453
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
	{
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_1063))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_1063);
		}
		VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
		VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
		ENTITY::SET_ENTITY_COORDS(iLocal_1063, Local_1055, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_1063, fLocal_1038);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 0, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 1, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 2, 1);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_1063, 2, 1);
		iLocal_1017 = 0;
		HUD::CLEAR_PRINTS();
		CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		func_346(1, 1, 1);
		if (bParam0)
		{
			func_343();
		}
	}
}

void func_343()//Position - 0x144FC
{
	CAM::DO_SCREEN_FADE_IN(1000);
	while (!CAM::IS_SCREEN_FADED_IN())
	{
		SYSTEM::WAIT(0);
	}
}

int func_344(int iParam0)//Position - 0x1451B
{
	if (func_345() && MISC::GET_GAME_TIMER() >= iParam0 + 1000)
	{
		CAM::DO_SCREEN_FADE_OUT(500);
		while (!CAM::IS_SCREEN_FADED_OUT())
		{
			SYSTEM::WAIT(0);
		}
		func_207(0);
		func_3();
		return 1;
	}
	return 0;
}

int func_345()//Position - 0x1455E
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_346(bool bParam0, bool bParam1, int iParam2)//Position - 0x14590
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 1, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_348(0, 1, iParam2, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(1);
		HUD::DISPLAY_HUD(1);
	}
	func_347(23, 0);
}

void func_347(int iParam0, bool bParam1)//Position - 0x145CB
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6070, iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_6070, iParam0);
	}
}

void func_348(bool bParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x145ED
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 1);
		func_354(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
		if (Global_3839.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_10())
			{
				Global_3839.f_1 = 3;
			}
			Global_3D4C = 5;
		}
		func_353(1, iParam3, iParam2);
		Global_D5E4 = 1;
		Global_105F5 = 1;
		Global_10A93 = 1;
	}
	else
	{
		func_354(0);
		HUD::THEFEED_RESUME();
		Global_D5E4 = 0;
		if (bParam1)
		{
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), 0);
		func_353(0, iParam3, iParam2);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_349(PLAYER::PLAYER_ID()))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), 0);
		}
		Global_10A93 = 0;
	}
}

int func_349(int iParam0)//Position - 0x146BE
{
	if (func_351(iParam0, 0))
	{
		return 1;
	}
	if (func_350())
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

bool func_350()//Position - 0x146FF
{
	return MISC::IS_BIT_SET(Global_240005, 3);
}

bool func_351(int iParam0, int iParam1)//Position - 0x14710
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_352(-1, 0) == 8;
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

int func_352(int iParam0, bool bParam1)//Position - 0x1475B
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_291();
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

int func_353(int iParam0, var uParam1, var uParam2)//Position - 0x1479C
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

void func_354(int iParam0)//Position - 0x147CD
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

void func_355()//Position - 0x147F0
{
	func_356(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f, 41.4459f, 304.8644f, func_363(), 1, 1, 1, 0, 0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 310.0126f);
	}
}

void func_356(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x14878
{
	func_357(Param0, Param1, fParam2, Param3, fParam4, Param5, bParam6, bParam7, bParam8, bParam9, bParam10);
}

void func_357(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, struct<3> Param5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)//Position - 0x148A2
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (bParam7)
	{
		bParam7 = false;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
		{
			if (bParam10)
			{
				func_362(iVar0);
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Param0, Param1, fParam2, 0, 1, 0))
			{
				bVar1 = true;
			}
			else
			{
				Var6 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if ((Var6.f_2 > Param0.f_2 && Var6.f_2 < Param1.f_2) || (Var6.f_2 > Param1.f_2 && Var6.f_2 < Param0.f_2))
				{
					if (func_359(iVar0, Param0, Param1, fParam2))
					{
						bVar1 = true;
					}
				}
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("taxi")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0 + Param1 / Vector(2f, 2f, 2f), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1) < 20f)
						{
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam8)
			{
				if (func_286(iVar0, func_13(), 1))
				{
					bVar1 = false;
				}
			}
			if (bVar1)
			{
				if (!func_358(Param5))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						iVar7 = ENTITY::GET_ENTITY_MODEL(iVar0);
						VEHICLE::_GET_VEHICLE_SUSPENSION_BOUNDS(iVar0, &Var4, &Var5);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar7))
						{
							Param5.x = (Param5.x + 3f);
							Param5.f_1 = (Param5.f_1 + 3f);
						}
						if (((iVar7 == joaat("zentorno") || iVar7 == joaat("btype")) || iVar7 == joaat("dubsta3")) || iVar7 == joaat("monster"))
						{
							Param5 = { Param5 * Vector(1.1f, 1.1f, 1.1f) };
						}
						else if (iVar7 == joaat("t20") || iVar7 == joaat("virgo"))
						{
							Param5 = { Param5 * Vector(1.2f, 1.2f, 1.2f) };
						}
						if ((Var5.x - Var4.x) > Param5.x)
						{
							bVar2 = false;
						}
						else if ((Var5.f_1 - Var4.f_1) > Param5.f_1)
						{
							bVar2 = false;
						}
						else if ((Var5.f_2 - Var4.f_2) > Param5.f_2)
						{
							bVar2 = false;
						}
					}
				}
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					if (bVar2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(Param3, 5f, 0, 0, 0, 0, 0);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam4);
						ENTITY::SET_ENTITY_COORDS(iVar0, Param3, 1, 0, 0, 1);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
						if (bParam9)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(iVar0, 0, 1);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, 1);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, 1))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 1);
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iVar0, 1), 1, 0, 0, 1);
						}
						VEHICLE::DELETE_VEHICLE(&iVar0);
					}
				}
			}
			if (bParam6)
			{
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(Param0, Param1, fParam2, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar0);
					}
				}
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
			}
			iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
			{
				ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
			}
			iVar9 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
			if (iVar9 <= 2)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
			}
			if (iVar9 <= 4)
			{
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 1);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
				iVar8 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 2);
				if (ENTITY::DOES_ENTITY_EXIST(iVar8) && !PED::IS_PED_INJURED(iVar8))
				{
					ENTITY::SET_ENTITY_COORDS(iVar8, ENTITY::GET_ENTITY_COORDS(iVar8, 1), 1, 0, 0, 1);
				}
			}
			VEHICLE::DELETE_VEHICLE(&iVar0);
		}
	}
}

int func_358(struct<3> Param0)//Position - 0x14C88
{
	if ((Param0.x == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

int func_359(int iParam0, struct<3> Param1, struct<3> Param2, float fParam3)//Position - 0x14CB2
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	struct<3> Var6[4];
	struct<2> Var7;
	struct<2> Var8;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		Param1.f_2 = Param2.f_2;
		Var0 = { func_361(Param1 - Param2) };
		Var1 = { Var0 };
		Var0.x = -Var1.f_1;
		Var0.f_1 = Var1.x;
		Var0.f_2 = 0f;
		Var2 = { Param1 - Var0 * FtoV((fParam3 / 2f)) };
		Var3 = { Param1 + Var0 * FtoV((fParam3 / 2f)) };
		Var4 = { Param2 - Var0 * FtoV((fParam3 / 2f)) };
		Var5 = { Param2 + Var0 * FtoV((fParam3 / 2f)) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var7, &Var8);
		Var6[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var7.f_1, 0f) };
		Var6[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var7, Var8.f_1, 0f) };
		Var6[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var7.f_1, 0f) };
		Var6[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var8, Var8.f_1, 0f) };
		if (((((((((((((((func_360(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var3) || func_360(Var6[0 /*3*/], Var6[1 /*3*/], Var3, Var5)) || func_360(Var6[0 /*3*/], Var6[1 /*3*/], Var4, Var5)) || func_360(Var6[0 /*3*/], Var6[1 /*3*/], Var2, Var4)) || func_360(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var3)) || func_360(Var6[1 /*3*/], Var6[3 /*3*/], Var3, Var5)) || func_360(Var6[1 /*3*/], Var6[3 /*3*/], Var4, Var5)) || func_360(Var6[1 /*3*/], Var6[3 /*3*/], Var2, Var4)) || func_360(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var3)) || func_360(Var6[3 /*3*/], Var6[2 /*3*/], Var3, Var5)) || func_360(Var6[3 /*3*/], Var6[2 /*3*/], Var4, Var5)) || func_360(Var6[3 /*3*/], Var6[2 /*3*/], Var2, Var4)) || func_360(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var3)) || func_360(Var6[2 /*3*/], Var6[0 /*3*/], Var3, Var5)) || func_360(Var6[2 /*3*/], Var6[0 /*3*/], Var4, Var5)) || func_360(Var6[2 /*3*/], Var6[0 /*3*/], Var2, Var4))
		{
			return 1;
		}
	}
	return 0;
}

int func_360(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3, struct<2> Param4, var uParam5, struct<2> Param6, var uParam7)//Position - 0x14FA8
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param2;
	fVar3 = Param2.f_1;
	fVar4 = Param4;
	fVar5 = Param4.f_1;
	fVar6 = Param6;
	fVar7 = Param6.f_1;
	fVar8 = (fVar2 - fVar0);
	fVar9 = (fVar3 - fVar1);
	fVar10 = (fVar6 - fVar4);
	fVar11 = (fVar7 - fVar5);
	fVar12 = (((-fVar9 * (fVar0 - fVar4)) + (fVar8 * (fVar1 - fVar5))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	fVar13 = (((fVar10 * (fVar1 - fVar5)) - (fVar11 * (fVar0 - fVar4))) / ((-fVar10 * fVar9) + (fVar8 * fVar11)));
	if (((fVar12 >= 0f && fVar12 <= 1f) && fVar13 >= 0f) && fVar13 <= 1f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_361(struct<3> Param0)//Position - 0x1505C
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

void func_362(int iParam0)//Position - 0x1509B
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iParam0) <= 200f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iParam0) <= 700f)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 900f);
			}
			if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 200)
			{
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, 500f);
			}
		}
	}
}

Vector3 func_363()//Position - 0x15100
{
	return 2.55f, 5.59f, 2.55f;
}

void func_364()//Position - 0x15117
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1059, 1, 0, 0, 1);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 299.4985f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1066))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1066, 0))
		{
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_1066, 0, 1);
			ENTITY::SET_ENTITY_COORDS(iLocal_1066, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iLocal_1066, 296.7603f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_1066);
		}
	}
}

int func_365()//Position - 0x1519D
{
	iLocal_335 = MISC::GET_GAME_TIMER();
	return iLocal_335;
}

void func_366(int iParam0, int iParam1, int iParam2)//Position - 0x151AF
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), 0, iParam0);
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_207(0);
	func_348(1, 1, iParam2, 0);
	HUD::DISPLAY_RADAR(0);
	HUD::DISPLAY_HUD(0);
	func_347(23, 1);
}

void func_367()//Position - 0x15205
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_1063))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1063, 0))
		{
			iLocal_1015 = 0;
			while (iLocal_1015 < 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_939[iLocal_1015]))
				{
					if (iLocal_1015 == 0)
					{
						uLocal_939[iLocal_1015] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1063, 26, iLocal_1073, -1, 1, 1);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 0, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 11, 0, 0, 0);
					}
					else if (iLocal_1015 == 1)
					{
						uLocal_939[iLocal_1015] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1063, 26, iLocal_1073, 0, 1, 1);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 3, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 4, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 11, 0, 2, 0);
					}
					else if (iLocal_1015 == 2)
					{
						uLocal_939[iLocal_1015] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_1063, 26, iLocal_1074, 1, 1, 1);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 0, 1, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 3, 0, 2, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 4, 0, 1, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 8, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(uLocal_939[iLocal_1015], 11, 1, 1, 0);
					}
				}
				iLocal_1015++;
			}
		}
	}
}

void func_368()//Position - 0x1539E
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1063))
	{
		iLocal_1063 = VEHICLE::CREATE_VEHICLE(iLocal_1072, Local_1054, fLocal_1037, 1, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_1072);
		VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_1063, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_1063, 1);
		VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_1063, 1);
	}
}

void func_369(struct<3> Param0, struct<3> Param1, float fParam2, struct<3> Param3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)//Position - 0x153E4
{
	func_357(Param0, Param1, fParam2, Param3, fParam4, 0f, 0f, 0f, bParam5, bParam6, bParam7, bParam8, bParam9);
}

int func_370(int iParam0, int iParam1)//Position - 0x1540D
{
	int iVar0;
	
	if (((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && func_371(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), iParam0, 1, 1056964608, 0, 1)) && !ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (!func_52(&uLocal_320))
		{
			func_50(&uLocal_320);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
			{
				iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
				{
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iVar0, 0f);
				}
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		else if (func_46(&uLocal_320) > 1f || iParam1 == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_371(int iParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5)//Position - 0x154B7
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
		VEHICLE::BRING_VEHICLE_TO_HALT(iParam0, uParam1, iParam2, iParam4);
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

void func_372()//Position - 0x15639
{
	int iVar0;
	
	switch (iLocal_1016)
	{
		case 0:
			func_386(500);
			func_280(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
			if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				func_229("ASS_VA_LOSECOPS", 7500, 1);
			}
			MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
			iLocal_1016++;
			break;
		
		case 1:
			func_385();
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1068))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == PLAYER::PLAYER_PED_ID())
						{
							iLocal_1068 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_1068) && !ENTITY::IS_ENTITY_DEAD(iLocal_1068))
							{
								func_267(iLocal_1068);
							}
						}
					}
				}
			}
			if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
			{
				if (!func_382())
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_947))
					{
						uLocal_947 = func_381(Local_1059, 1);
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_947, "ASS_VA_DESTBLIP");
						func_380(&uLocal_947, -1234.307f, -250.6783f, 38.2238f, 28.914f);
						if (!iLocal_956)
						{
							func_229("ASS_VA_GOHOTEL", 7500, 1);
							iLocal_956 = 1;
						}
						else if (func_379("ASS_VA_LOSECOPS", 0, 0))
						{
							HUD::CLEAR_PRINTS();
						}
					}
				}
				else if (STREAMING::STREAMVOL_HAS_LOADED(uLocal_953) && func_378())
				{
					func_377();
					func_234();
					iLocal_929 = 8;
				}
			}
			else if (!func_382())
			{
				func_376(uLocal_947, "ASS_VA_LOSECOPS");
			}
			else
			{
				func_31(3);
			}
			func_373();
			break;
	}
}

void func_373()//Position - 0x157D9
{
	if (!iLocal_955)
	{
		if (func_252(Local_1059, 1) <= 100f)
		{
			func_375();
			uLocal_953 = STREAMING::STREAMVOL_CREATE_FRUSTUM(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 80f, 12, 127);
			iLocal_955 = 1;
		}
	}
	else if (func_252(Local_1059, 1) > 120f)
	{
		if (STREAMING::STREAMVOL_IS_VALID(uLocal_953))
		{
			STREAMING::STREAMVOL_DELETE(uLocal_953);
			func_242();
			iLocal_955 = 0;
		}
	}
	else if (!STREAMING::STREAMVOL_IS_VALID(uLocal_953))
	{
		if (!func_374())
		{
			iLocal_955 = 0;
		}
	}
}

int func_374()//Position - 0x15879
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), joaat("taxi")))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0), -1) != PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_375()//Position - 0x158BC
{
	STREAMING::REQUEST_MODEL(iLocal_1073);
	STREAMING::REQUEST_MODEL(iLocal_1074);
}

void func_376(var uParam0, char* sParam1)//Position - 0x158D2
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
	{
		if (HUD::DOES_BLIP_EXIST(uParam0))
		{
			HUD::REMOVE_BLIP(&uParam0);
			HUD::CLEAR_PRINTS();
			func_229(sParam1, 7500, 1);
		}
	}
}

void func_377()//Position - 0x15903
{
	if (HUD::DOES_BLIP_EXIST(uLocal_947))
	{
		HUD::REMOVE_BLIP(&uLocal_947);
	}
}

int func_378()//Position - 0x1591C
{
	int iVar0;
	
	func_375();
	if (STREAMING::HAS_MODEL_LOADED(iLocal_1073) && STREAMING::HAS_MODEL_LOADED(iLocal_1074))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_379(char* sParam0, int iParam1, int iParam2)//Position - 0x15949
{
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_380(var uParam0, struct<3> Param1, float fParam2)//Position - 0x15967
{
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		Global_17885 = *uParam0;
		Global_1788A = { Param1 };
		Global_1788E = fParam2;
	}
}

var func_381(struct<3> Param0, int iParam1)//Position - 0x15990
{
	var uVar0;
	
	uVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
	HUD::SET_BLIP_SCALE(uVar0, func_181(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(uVar0, iParam1);
	return uVar0;
}

int func_382()//Position - 0x159BC
{
	float fVar0;
	int iVar1;
	
	iVar1 = 0;
	fVar0 = func_26(iLocal_936, Local_1059, 1);
	if (fVar0 < 200f)
	{
		func_384();
	}
	if (func_383())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(iLocal_936, Local_1059, 25f, 25f, 90f, 1, 1, 0))
		{
			iVar1 = 1;
		}
	}
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if ((fVar0 < 2f || ENTITY::IS_ENTITY_AT_COORD(iLocal_936, Local_1059, 2f, 2f, 2f, 1, 1, 0)) || iVar1)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1141.085f, -192.66f, 75.756f, -1246.085f, -192.66f, 100.756f, 115f, 0, 1, 0))
			{
				if (func_383() && iVar1)
				{
					return 1;
				}
				else if (!ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_383()//Position - 0x15A9B
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
	{
		iLocal_1066 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		iVar0 = ENTITY::GET_ENTITY_MODEL(iLocal_1066);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2"))
		{
			bLocal_974 = true;
			return 1;
		}
	}
	return 0;
}

void func_384()//Position - 0x15B12
{
	var uVar0;
	
	switch (iLocal_1023)
	{
		case 0:
			STREAMING::REQUEST_MODEL(joaat("a_m_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_01"));
			STREAMING::REQUEST_MODEL(joaat("a_f_m_bevhills_02"));
			STREAMING::REQUEST_MODEL(joaat("a_m_y_hipster_01"));
			STREAMING::REQUEST_MODEL(joaat("taxi"));
			TASK::REQUEST_WAYPOINT_RECORDING("OJAS_HotelTaxi01");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
			if ((((((STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_01"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_f_m_bevhills_02"))) && STREAMING::HAS_MODEL_LOADED(joaat("taxi"))) && STREAMING::HAS_MODEL_LOADED(joaat("a_m_y_hipster_01"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJAS_HotelTaxi01"))
			{
				iLocal_1023++;
			}
			break;
		
		case 1:
			Local_1425[0] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
			Local_1425[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425[1], 1);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1425[1], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f, 321.2841f, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1425[0]))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1425[0], uVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_LOOK_AT_ENTITY(0, Local_1425[0], -1, 0, 2);
			TASK::TASK_START_SCENARIO_AT_POSITION(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f, 0, 0, 1);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			if (!ENTITY::IS_ENTITY_DEAD(Local_1425[1]))
			{
				TASK::TASK_PERFORM_SEQUENCE(Local_1425[1], uVar0);
			}
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
			Local_1425.f_4 = VEHICLE::CREATE_VEHICLE(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_1425.f_4);
			Local_1425.f_3 = PED::CREATE_PED_INSIDE_VEHICLE(Local_1425.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425.f_3, 1);
			TASK::TASK_LOOK_AT_ENTITY(Local_1425.f_3, Local_1425[0], -1, 0, 2);
			Local_1425.f_8[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
			Local_1425.f_8[1] = PED::CREATE_PED(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425.f_8[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425.f_8[1], 1);
			TASK::TASK_PLAY_ANIM(Local_1425.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_1425.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1425.f_5[0] = PED::CREATE_PED(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
			Local_1425.f_5[1] = PED::CREATE_PED(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425.f_5[0], 1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_1425.f_5[1], 1);
			TASK::TASK_PLAY_ANIM(Local_1425.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			TASK::TASK_PLAY_ANIM(Local_1425.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
			Local_1425.f_B = 1;
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_m_bevhills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_bevhills_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_f_m_bevhills_02"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("a_m_y_hipster_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("taxi"));
			iLocal_1023++;
			break;
		
		case 2:
			break;
	}
}

void func_385()//Position - 0x15EF9
{
	struct<3> Var0;
	
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
	{
		iLocal_1009 = 1;
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1) };
	}
	if (iLocal_1009)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
		{
			fLocal_1047 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), Local_1059);
			iLocal_1009 = 0;
		}
	}
	else if (fLocal_1047 == 0f)
	{
		fLocal_1047 = SYSTEM::VDIST(-1510.291f, -946.9932f, 8.278f, Local_1059);
	}
	if (SYSTEM::VDIST(Var0, Local_1059) > (fLocal_1047 + 400f))
	{
		func_31(7);
	}
	else if (SYSTEM::VDIST(Var0, Local_1059) > (fLocal_1047 + 200f))
	{
		if (!iLocal_1005)
		{
			func_229("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1005 = 1;
		}
	}
}

void func_386(int iParam0)//Position - 0x15FD1
{
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
		while (!CAM::IS_SCREEN_FADED_IN())
		{
			SYSTEM::WAIT(0);
		}
	}
}

void func_387()//Position - 0x15FF7
{
	var uVar0;
	float fVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_942))
	{
		func_392();
		if (!PED::IS_PED_INJURED(iLocal_942))
		{
			fVar1 = func_23(iLocal_942, 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iLocal_942, 0);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iLocal_942, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iLocal_942, 0);
			PED::SET_RAGDOLL_BLOCKING_FLAGS(iLocal_942, 16);
			PED::SET_PED_CONFIG_FLAG(iLocal_942, 208, 1);
			if (fVar1 < 5f)
			{
				if (func_52(&uLocal_1103))
				{
					if (!func_22())
					{
						if (func_389(&uLocal_1103, 10f))
						{
							func_29(&uLocal_1110, 3, iLocal_942, "LESTER", 0, 1);
							func_6(&uLocal_1110, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_942) || !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_942))
				{
					func_388();
				}
			}
			switch (iLocal_1014)
			{
				case 0:
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
					{
						if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || (ENTITY::DOES_ENTITY_EXIST(iLocal_942) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_942, PLAYER::PLAYER_PED_ID(), 1))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1424, PLAYER::PLAYER_PED_ID(), 1))
						{
							if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_1424, PLAYER::PLAYER_PED_ID(), 1))
							{
							}
							PED::SET_PED_MOVEMENT_CLIPSET(iLocal_942, "move_lester_CaneUp", 1048576000);
							TASK::TASK_PLAY_ANIM(iLocal_942, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f, -1, 790536, 0, 0, 0, 0);
							iLocal_1014 = 1;
						}
					}
					break;
				
				case 1:
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_942, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 3))
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_942, "oddjobs@assassinate@hotel@leadin", "Lester_Getup") >= 0.376f)
						{
							TASK::OPEN_SEQUENCE_TASK(&uVar0);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1, 1193033728);
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
							TASK::TASK_WANDER_STANDARD(0, ENTITY::GET_ENTITY_HEADING(iLocal_942), 0);
							TASK::CLOSE_SEQUENCE_TASK(uVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_942, uVar0);
							TASK::CLEAR_SEQUENCE_TASK(&uVar0);
							PED::FORCE_PED_MOTION_STATE(iLocal_942, -668482597, 0, 0, 0);
							iLocal_1014 = 2;
						}
					}
					break;
				
				case 2:
					break;
				}
			}
	}
}

void func_388()//Position - 0x16216
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_942))
	{
		PED::DELETE_PED(&iLocal_942);
	}
}

int func_389(var uParam0, float fParam1)//Position - 0x1622F
{
	if (func_391(uParam0, fParam1))
	{
		func_390(uParam0);
		return 1;
	}
	return 0;
}

void func_390(var uParam0)//Position - 0x1624D
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_391(var uParam0, float fParam1)//Position - 0x16263
{
	if (func_52(uParam0))
	{
		if (func_46(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_392()//Position - 0x16285
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_942))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_942, PLAYER::PLAYER_PED_ID(), 1))
		{
			func_31(9);
		}
	}
}

void func_393()//Position - 0x162AF
{
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_STOP");
	if (!MISC::IS_BIT_SET(Global_15F6A.f_14, 13))
	{
		func_462();
	}
	func_394(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	iLocal_929 = 18;
	func_386(500);
}

void func_394(int iParam0, int iParam1, int iParam2)//Position - 0x162F6
{
	if (func_469() && func_396())
	{
		while (Global_15F65 != 6)
		{
			SYSTEM::WAIT(0);
		}
		MISC::SET_GAME_PAUSED(0);
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
			}
		}
		if (iParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, 0))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_395(0);
	}
}

void func_395(int iParam0)//Position - 0x163BA
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&(Global_15F6A.f_14), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 13);
	}
}

bool func_396()//Position - 0x163E3
{
	return MISC::IS_BIT_SET(Global_15F6A.f_14, 13);
}

void func_397()//Position - 0x163F7
{
	while (iLocal_1023 < 2)
	{
		func_384();
		SYSTEM::WAIT(0);
	}
	func_368();
	func_342(0);
	if (!MISC::IS_BIT_SET(Global_15F6A.f_14, 13))
	{
		func_462();
	}
	iLocal_983 = 0;
	iLocal_1007 = 0;
	MISC::CLEAR_AREA_OF_VEHICLES(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
	AUDIO::TRIGGER_MUSIC_EVENT("ASS1_RESTART1");
	while (!func_378())
	{
		SYSTEM::WAIT(0);
	}
	func_394(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	iLocal_929 = 9;
	func_386(500);
}

void func_398()//Position - 0x164A2
{
	func_394(0, -1, 1);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
	func_386(500);
	iLocal_929 = 7;
}

void func_399()//Position - 0x164CB
{
	uLocal_1067[0] = VEHICLE::CREATE_VEHICLE(iLocal_1075, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1);
	uLocal_1067[1] = VEHICLE::CREATE_VEHICLE(iLocal_1075, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1);
}

void func_400()//Position - 0x16519
{
	uLocal_1076 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
	uLocal_1077 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f, 38f, 0, 2);
}

int func_401()//Position - 0x16583
{
	int iVar0;
	
	iVar0 = 0;
	if (((((((((STREAMING::HAS_MODEL_LOADED(iLocal_1072) && STREAMING::HAS_MODEL_LOADED(iLocal_1075)) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(102, "ASSOJva")) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(107, "ASSOJva")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_101a")) && TASK::GET_IS_WAYPOINT_RECORDING_LOADED("OJASva_104")) && STREAMING::HAS_ANIM_DICT_LOADED("ODDJOBS@ASSASSINATE@GUARD")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(3))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_402()//Position - 0x16615
{
	STREAMING::REQUEST_MODEL(iLocal_1072);
	STREAMING::REQUEST_MODEL(iLocal_1075);
	STREAMING::REQUEST_ANIM_DICT("ODDJOBS@ASSASSINATE@GUARD");
	STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@");
	HUD::REQUEST_ADDITIONAL_TEXT("ASS_VA", 3);
	VEHICLE::REQUEST_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REQUEST_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REQUEST_WAYPOINT_RECORDING("OJASva_104");
}

void func_403(bool bParam0)//Position - 0x16670
{
	if (bParam0)
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f), Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		PATHFIND::SET_ROADS_IN_AREA(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f, 100.8606f, 1, 1);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

void func_404()//Position - 0x1672F
{
	struct<3> Var0;
	struct<3> Var1;
	
	Var0 = { -1220.344f, -193.4014f, 38.1754f };
	Var1 = { -1279.658f, -222.0533f, 41.446f };
	func_29(&uLocal_1110, 1, iLocal_936, "FRANKLIN", 0, 1);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.2f);
	PED::ADD_RELATIONSHIP_GROUP("Guards", &iLocal_1078);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_1078);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_1078, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_1078, 1862763509);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, iLocal_1078);
	MISC::CLEAR_AREA(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	PED::SET_PED_NON_CREATION_AREA(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	uLocal_951 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0 - Vector(15f, 15f, 15f), Var0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	uLocal_952 = PED::ADD_SCENARIO_BLOCKING_AREA(Var1 - Vector(45f, 35f, 35f), Var1 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

void func_405()//Position - 0x1685B
{
	StringCopy(&Local_917, "ASS_VA_PASSED", 24);
	MemCopy(&(Local_917.f_6), {Global_D5ED}, 6);
	StringCopy(&(Local_917.f_C), "ASS_VA_TIMER", 24);
	StringCopy(&(Local_917.f_12), "ASS_VA_BASE", 24);
	StringCopy(&(Local_917.f_18), "ASS_VA_BDESC", 24);
	StringCopy(&(Local_917.f_1E), "ASS_VA_CASH", 24);
	StringCopy(&(Local_917.f_24), "ASS_VA_COMP", 24);
	StringCopy(&(Local_917.f_2A), "ASS_VA_COMP", 24);
	StringCopy(&(Local_917.f_30), "ASS_VA_COMP", 24);
	StringCopy(&(Local_917.f_36), "ASS_VA_COMP", 24);
}

void func_406()//Position - 0x168D1
{
	Local_1053 = { -1343.493f, -153.199f, 47.1825f };
	fLocal_1041 = 260.3612f;
	Local_1054 = { -1242.213f, -241.5975f, 38.71f };
	fLocal_1037 = 96.8755f;
	Local_1055 = { -1221.631f, -186.8819f, 38.7996f };
	fLocal_1038 = 201.0763f;
	fLocal_1042 = 40f;
	Local_319.f_2 = 40f;
	Local_1050[0 /*3*/] = { -1221.154f, -170.9907f, 38.3253f };
	Local_1050[1 /*3*/] = { -1210.556f, -192.882f, 38.3253f };
	Local_1050[2 /*3*/] = { -1216.369f, -203.6806f, 38.3253f };
	fLocal_1043[0] = 157.3177f;
	fLocal_1043[1] = 58.3594f;
	fLocal_1043[2] = 65.6443f;
	Local_1052[0 /*3*/] = { -1220.377f, -169.407f, 38.3253f };
	Local_1052[1 /*3*/] = { -1208.963f, -193.8791f, 38.3253f };
	Local_1052[2 /*3*/] = { -1214.955f, -205.0824f, 38.3253f };
	Local_1052[3 /*3*/] = { -1217.518f, -197.13f, 38.3254f };
	Local_1052[4 /*3*/] = { -1231.892f, -194.382f, 38.1753f };
	fLocal_1039[0] = 160.0748f;
	fLocal_1039[1] = 58.3365f;
	fLocal_1039[2] = 58.0214f;
	fLocal_1039[3] = 97.6664f;
	fLocal_1039[4] = 225.8689f;
	iLocal_1015 = 0;
	while (iLocal_1015 <= 4)
	{
		uLocal_1040[iLocal_1015] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 2f);
		iLocal_1015++;
	}
	fLocal_326 = 7000f;
	fLocal_327 = 2000f;
	iLocal_935 = 0;
	iLocal_1003 = 0;
	bLocal_1004 = false;
	iLocal_989 = 0;
	bLocal_1012 = false;
	iLocal_1011 = 0;
}

void func_407()//Position - 0x16A9B
{
	switch (iLocal_1016)
	{
		case 0:
			CUTSCENE::REQUEST_CUTSCENE("ASS_INT_2_ALT1", 8);
			STREAMING::REQUEST_MODEL(joaat("ig_lestercrest"));
			STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leadin");
			STREAMING::REQUEST_ANIM_DICT("oddjobs@assassinate@hotel@leaning@");
			STREAMING::REQUEST_CLIP_SET("move_lester_CaneUp");
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			if ((((STREAMING::HAS_MODEL_LOADED(joaat("ig_lestercrest")) && STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_walking_stick"))) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leadin")) && STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@assassinate@hotel@leaning@")) && STREAMING::HAS_CLIP_SET_LOADED("move_lester_CaneUp"))
			{
				iLocal_1016++;
			}
			break;
		
		case 1:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				func_366(56, 0, 1);
				func_369(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f, 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
				MISC::CLEAR_AREA(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Local_1413, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), fLocal_1414);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), 0, 0);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1, 513, 0, 0, 0, 0);
				if (!CAM::DOES_CAM_EXIST(uLocal_1415))
				{
					uLocal_1415 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1417, Local_1418, 42.2032f, 1, 2);
					CAM::SHAKE_CAM(uLocal_1415, "HAND_SHAKE", 0.3f);
				}
				if (!CAM::DOES_CAM_EXIST(uLocal_1416))
				{
					uLocal_1416 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, Local_1419, Local_1420, 42.2032f, 0, 2);
					CAM::SET_CAM_ACTIVE_WITH_INTERP(uLocal_1416, uLocal_1415, 5000, 1, 1);
					CAM::SHAKE_CAM(uLocal_1415, "HAND_SHAKE", 0.3f);
				}
				CAM::RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				if (func_40(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
				iLocal_1016++;
			}
			break;
		
		case 2:
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 3))
				{
					if (!func_52(&uLocal_1421))
					{
						func_49(&uLocal_1421);
					}
				}
				if (func_52(&uLocal_1421))
				{
					if (func_46(&uLocal_1421) > 6f)
					{
						iLocal_1016++;
					}
				}
			}
			break;
		
		case 3:
			if (func_408())
			{
				iLocal_1016++;
			}
			break;
		
		case 4:
			func_348(1, 1, 1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(PLAYER::PLAYER_PED_ID(), "Franklin", 0, 0, 0);
			}
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_942, "Lester", 2, joaat("ig_lestercrest"), 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
			CUTSCENE::START_CUTSCENE(0);
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 1, 0);
			iLocal_1016++;
			break;
		
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				CAM::DESTROY_ALL_CAMS(0);
				CAM::RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				iLocal_1016++;
			}
			break;
		
		case 6:
			if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
			{
				CAM::STOP_GAMEPLAY_HINT(0);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_942))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
					{
						iLocal_942 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0));
					}
				}
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_943))
			{
				if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0)))
					{
						iLocal_943 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", 0);
					}
				}
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
			{
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_942) && !PED::IS_PED_INJURED(iLocal_942))
					{
						ENTITY::SET_ENTITY_COORDS(iLocal_942, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(iLocal_942, -11f);
						TASK::TASK_PLAY_ANIM(iLocal_942, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1, 790537, 0f, 0, 1, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_942, 0, 0);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", 0)))
			{
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("WalkingStick_Lester", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_942) && !PED::IS_PED_INJURED(iLocal_942))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_943, iLocal_942, PED::GET_PED_BONE_INDEX(iLocal_942, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
					}
				}
			}
			if (CUTSCENE::HAS_CUTSCENE_FINISHED() && !CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				func_348(0, 1, 1, 0);
				if (!PED::IS_PED_INJURED(iLocal_942))
				{
					ENTITY::SET_ENTITY_PROOFS(iLocal_942, 0, 0, 0, 0, 0, 0, 0, 0);
					PED::SET_PED_CAN_RAGDOLL(iLocal_942, 1);
				}
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					SYSTEM::WAIT(0);
					CAM::DO_SCREEN_FADE_IN(500);
				}
				func_346(1, 1, 1);
				iLocal_1016++;
			}
			break;
		
		case 7:
			func_50(&uLocal_1103);
			func_234();
			iLocal_929 = 4;
			break;
	}
}

bool func_408()//Position - 0x16FA9
{
	bool bVar0;
	
	bVar0 = CUTSCENE::HAS_CUTSCENE_LOADED();
	if (!Global_10A94)
	{
		if (!bVar0)
		{
			Global_10A94 = 1;
		}
	}
	return bVar0;
}

void func_409()//Position - 0x16FCC
{
	if (!ENTITY::DOES_ENTITY_EXIST(iLocal_1424))
	{
		iLocal_1424 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(-1510.103f, -947.7194f, 8.2332f, 5f, joaat("prop_bench_08"), 1, 0, 1);
	}
}

void func_410()//Position - 0x16FFE
{
	int iVar0;
	
	if (iLocal_929 > 7)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						if ((iVar0 != iLocal_1069[0] && iVar0 != iLocal_1069[1]) && iVar0 != iLocal_1069[2])
						{
							if (iLocal_1034 >= 2)
							{
								iLocal_1034 = -1;
							}
							iLocal_1069[iLocal_1034 + 1] = iVar0;
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1069[iLocal_1034 + 1], 1, 0);
							VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1069[iLocal_1034 + 1], 0);
							iLocal_1034++;
						}
					}
				}
			}
		}
	}
}

void func_411()//Position - 0x170A5
{
	int iVar0;
	
	if (iLocal_1001)
	{
		iVar0 = func_30(1116471296, 1);
		if (!PED::IS_PED_INJURED(iVar0))
		{
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1110, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

void func_412()//Position - 0x170E7
{
	int iVar0;
	struct<3> Var1;
	
	if (Local_1425.f_B)
	{
		if (!bLocal_992)
		{
			if (iLocal_929 < 10)
			{
				if (func_418())
				{
					iVar0 = func_30(1116471296, 1);
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						if (func_23(iVar0, 0) < 10f)
						{
							Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
							Var1 = { Var1 };
							func_29(&uLocal_1110, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1110, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_417();
					bLocal_992 = true;
				}
				if (iLocal_957)
				{
					func_417();
					bLocal_992 = true;
				}
				else
				{
					func_416();
					func_413();
				}
			}
		}
	}
}

void func_413()//Position - 0x17199
{
	if (bLocal_963)
	{
		if (IntToFloat(iLocal_1031) < (IntToFloat(iLocal_1028) - 5f))
		{
			func_415(Local_1425.f_8[0], 1);
			func_415(Local_1425.f_8[1], 1);
			func_415(Local_1425.f_5[0], 1);
			func_415(Local_1425.f_5[1], 1);
		}
		else
		{
			if ((func_23(Local_1425.f_8[0], 0) < 1f || func_23(Local_1425.f_8[1], 0) < 1f) || iLocal_961)
			{
				func_414(Local_1425.f_8[0], 1);
				func_414(Local_1425.f_8[1], 1);
			}
			if (!iLocal_961)
			{
				func_414(Local_1425.f_5[0], 0);
				func_414(Local_1425.f_5[1], 0);
			}
			else
			{
				func_414(Local_1425.f_5[0], 1);
				func_414(Local_1425.f_5[1], 1);
			}
		}
	}
}

void func_414(int iParam0, int iParam1)//Position - 0x17274
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1)
		{
			if (func_23(iParam0, 0) < 1f || iParam1)
			{
				func_415(iParam0, 1);
			}
		}
	}
}

void func_415(int iParam0, bool bParam1)//Position - 0x172B0
{
	var uVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if ((bParam1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1) || !bParam1)
		{
			TASK::OPEN_SEQUENCE_TASK(&uVar0);
			TASK::TASK_GO_TO_COORD_ANY_MEANS(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(uVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, uVar0);
			TASK::CLEAR_SEQUENCE_TASK(&uVar0);
		}
	}
}

void func_416()//Position - 0x17327
{
	int iVar0;
	
	switch (iLocal_1024)
	{
		case 0:
			if (((iLocal_977 || iLocal_961) || func_23(Local_1425[0], 0) < 1f) || func_23(Local_1425[1], 0) < 1f)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Local_1425[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1425[1]))
				{
					TASK::TASK_LOOK_AT_ENTITY(Local_1425[0], Local_1425[1], -1, 0, 2);
					TASK::TASK_LOOK_AT_ENTITY(Local_1425[1], Local_1425[0], -1, 0, 2);
				}
				if (((ENTITY::DOES_ENTITY_EXIST(Local_1425[1]) && ENTITY::DOES_ENTITY_EXIST(Local_1425.f_4)) && !PED::IS_PED_INJURED(Local_1425[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1425.f_4, 0))
				{
					TASK::CLEAR_PED_TASKS(Local_1425[1]);
					TASK::TASK_ENTER_VEHICLE(Local_1425[1], Local_1425.f_4, 20000, 2, 1f, 1, 0);
				}
				if (!func_52(&uLocal_1094))
				{
					func_49(&uLocal_1094);
				}
				iLocal_1024++;
			}
			break;
		
		case 1:
			if (!iLocal_997)
			{
				if (func_52(&uLocal_1094))
				{
					if (func_46(&uLocal_1094) > 3f)
					{
						if (((ENTITY::DOES_ENTITY_EXIST(Local_1425[0]) && ENTITY::DOES_ENTITY_EXIST(Local_1425.f_4)) && !PED::IS_PED_INJURED(Local_1425[0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1425.f_4, 0))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(Local_1425[0], -1794415470) != 1)
							{
								TASK::CLEAR_PED_TASKS(Local_1425[0]);
								TASK::TASK_ENTER_VEHICLE(Local_1425[0], Local_1425.f_4, 20000, 1, 1f, 1, 0);
								iLocal_997 = 1;
							}
						}
					}
				}
				else
				{
					func_49(&uLocal_1094);
				}
			}
			if (!PED::IS_PED_INJURED(Local_1425[0]) && !PED::IS_PED_INJURED(Local_1425[1]))
			{
				if (PED::IS_PED_IN_VEHICLE(Local_1425[0], Local_1425.f_4, 0) && PED::IS_PED_IN_VEHICLE(Local_1425[1], Local_1425.f_4, 0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Local_1425.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_4))
					{
						TASK::TASK_CLEAR_LOOK_AT(Local_1425.f_3);
						func_50(&uLocal_1094);
					}
					iLocal_1024++;
				}
			}
			break;
		
		case 2:
			if (func_52(&uLocal_1094))
			{
				if (func_46(&uLocal_1094) > 3f)
				{
					if (!PED::IS_PED_INJURED(Local_1425.f_3) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_1425.f_4, 0))
					{
						TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Local_1425.f_3, Local_1425.f_4, "OJAS_HotelTaxi01", 786485, 0, 16, -1, 10f, 0, 1073741824);
						iLocal_1024++;
					}
				}
			}
			break;
		
		case 3:
			if (!ENTITY::IS_ENTITY_DEAD(Local_1425.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_4))
			{
				if (!TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_1425.f_4) || iLocal_1000)
				{
					TASK::TASK_VEHICLE_DRIVE_WANDER(Local_1425.f_3, Local_1425.f_4, 10f, 786603);
					iLocal_1024++;
				}
			}
			break;
		
		case 4:
			if (iLocal_1000)
			{
				if (!PED::IS_PED_INJURED(uLocal_940[0]))
				{
					iVar0 = uLocal_940[0];
				}
				else
				{
					iVar0 = func_25(25f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (!PED::IS_PED_INJURED(iVar0))
					{
						if (!func_22())
						{
							func_28(iVar0, 5, "OJAvaGUARD");
							func_6(&uLocal_1110, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
						}
					}
				}
				func_50(&uLocal_1094);
				iLocal_1024++;
			}
			break;
		
		case 5:
			break;
	}
}

void func_417()//Position - 0x1768E
{
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425.f_3) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_3)) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1425[0])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1425[0], 2, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1425[1])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
		PED::SET_PED_FLEE_ATTRIBUTES(Local_1425[1], 2, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425.f_8[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_8[0])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425.f_8[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425.f_8[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_8[1])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425.f_8[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425.f_5[0]) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_5[0])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425.f_5[0], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_1425.f_5[1]) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_5[1])) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_SMART_FLEE_PED(Local_1425.f_5[1], PLAYER::PLAYER_PED_ID(), 1000f, -1, 0, 0);
	}
}

int func_418()//Position - 0x1788A
{
	if (!ENTITY::IS_ENTITY_DEAD(Local_1425.f_3))
	{
		if (PED::IS_PED_BEING_JACKED(Local_1425.f_3))
		{
			if (PED::GET_PEDS_JACKER(Local_1425.f_3) == PLAYER::PLAYER_PED_ID())
			{
				return 1;
			}
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(Local_1425.f_4))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Local_1425.f_4, 0))
		{
			return 1;
		}
	}
	if (func_105(Local_1425[0], 0, &Local_319, &iLocal_324, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1425[1], 0, &Local_319, &iLocal_324, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1425.f_8[0], 0, &Local_319, &iLocal_324, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1425.f_8[1], 0, &Local_319, &iLocal_324, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1425.f_5[0], 0, &Local_319, &iLocal_324, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_105(Local_1425.f_5[1], 0, &Local_319, &iLocal_324, 0, 0, 0, 1, 0))
	{
		return 1;
	}
	if (func_104(Local_1425.f_4))
	{
		return 1;
	}
	if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, -1231.326f, -201.7195f, 38.2114f, 20f))
	{
		return 1;
	}
	return 0;
}

void func_419()//Position - 0x179D6
{
	func_470();
}

int func_420()//Position - 0x179E2
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_15F6A == 7 || Global_15F6A == 8)
	{
		return 1;
	}
	return 0;
}

void func_421(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0x17A0F
{
	if (func_469())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		MISC::CLEAR_BIT(&(Global_15F6A.f_14), 2);
		MISC::SET_GAME_PAUSED(1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), 0, 0);
		}
		Global_15F66 = { Param0 };
		Global_15F69 = fParam1;
		Global_15F65 = 1;
		if (iParam2 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 14);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 14);
		}
		if (iParam3 == 1)
		{
			MISC::SET_BIT(&(Global_15F6A.f_14), 24);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_15F6A.f_14), 24);
		}
		func_395(1);
	}
}

int func_422(struct<3> Param0, float fParam1)//Position - 0x17AA4
{
	return func_423(&(Global_16D94.f_877), Param0, fParam1, 0);
}

int func_423(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0x17ABE
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	
	if (func_458(uParam0))
	{
		if (func_44(Param1, 0f, 0f, 0f))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_C.f_2A == joaat("monster") || uParam0->f_C.f_2A == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f, 75.27323f, 6.5f, 0, 1))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (func_457(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, 1, 0, 0, 0);
			func_456(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_C.f_2A, Param1, fParam2, 1, 1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, 0, 0, 1);
				}
				func_451(iVar0, &(uParam0->f_C), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_C.f_2A) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_C.f_2A))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.x, Param1.f_1, (Param1.f_2 + 30f), Param1.x, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_450(uParam0->f_B, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							func_450(uParam0->f_B, 2);
						}
					}
					VEHICLE::_0xAB04325045427AAE(iVar0, 0);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, 0);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, 1);
					func_449(iVar0, uParam0->f_B);
				}
				else if ((!func_446(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_A) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = func_445(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_A = 0;
					}
					else
					{
						func_440(iVar4);
					}
				}
				if (((Global_15F6A != 13 && Global_15F6A != 10) && Global_15F6A != 11) && Global_15F6A != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_15F6A.f_3)) == Global_10A06)
					{
						if (uParam0->f_C.f_2A == Global_17C49.f_47C3.f_45[21 /*54*/].f_2A)
						{
							func_437(24, 0);
							func_440(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					func_424(iVar0, uParam0->f_B);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_C.f_2A);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, 1) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

void func_424(int iParam0, int iParam1)//Position - 0x17D69
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_425(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_17C49.f_6C1.f_21B.f_C8D;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_2A)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_1)))
					{
						Global_17C49.f_47C3.f_113E[iVar1 /*109*/][iVar2 /*54*/].f_2A = 0;
						Global_17C49.f_47C3.f_12C0[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_2A)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_1)))
				{
					Global_17C49.f_47C3.f_12C8[iVar1 /*54*/].f_2A = 0;
				}
			}
		}
		iVar1++;
	}
	Global_17C49.f_47C3.f_12BE = iParam1;
	Global_109CB = iParam0;
	Global_17C49.f_47C3.f_12BC = 1;
	func_276(iParam0, &(Global_17C49.f_47C3.f_1286));
}

int func_425(int iParam0)//Position - 0x17F6A
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_286(iParam0, 0, 0)) || func_286(iParam0, 1, 0)) || func_286(iParam0, 2, 0)) || func_272(iParam0) != 145) || func_436(iParam0)) || func_435(iParam0)) || func_434(iParam0)) || func_433(iParam0)) || !func_426(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_435(iParam0))
		{
		}
		if (func_435(iParam0))
		{
		}
		if (func_286(iParam0, 0, 0))
		{
		}
		if (func_286(iParam0, 1, 0))
		{
		}
		if (func_286(iParam0, 2, 0))
		{
		}
		if (func_272(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_426(int iParam0)//Position - 0x18049
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_427(iParam0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_427(int iParam0)//Position - 0x181F9
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if ((((((((((((iParam0 == joaat("dodo") || iParam0 == joaat("dukes")) || iParam0 == joaat("dukes2")) || (iParam0 == joaat("dominator2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("buffalo3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || iParam0 == joaat("stalion")) || (iParam0 == joaat("stalion2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("submersible2")) || iParam0 == joaat("marshall")) || iParam0 == joaat("blista2")) || iParam0 == joaat("blista3"))
	{
		if (!func_432())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILES::GET_NUM_DLC_VEHICLES())
		{
			if (FILES::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILES::IS_CONTENT_ITEM_LOCKED(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_431() && !func_430()) && !func_429()) && !func_428()) && !func_432())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_429())
		{
			return 0;
		}
	}
	return 1;
}

int func_428()//Position - 0x183C8
{
	return 0;
}

int func_429()//Position - 0x183D1
{
	return 1;
}

int func_430()//Position - 0x183DA
{
	return 1;
}

int func_431()//Position - 0x183E3
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_432()//Position - 0x183FC
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

int func_433(int iParam0)//Position - 0x1847F
{
	int iVar0;
	var uVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	uVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && MISC::ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_427(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_434(int iParam0)//Position - 0x184C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_156B0[iVar0]))
		{
			if (Global_156B0[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_435(int iParam0)//Position - 0x184FF
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_15692[iVar0], 0))
			{
				if (Global_15692[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_436(int iParam0)//Position - 0x1857B
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[24]))
	{
		if (iParam0 == Global_10642.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_10642.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_437(int iParam0, bool bParam1)//Position - 0x18663
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_439(iParam0, 0))
		{
			func_438(iParam0, 1, 0);
			func_438(iParam0, 2, 0);
			func_438(iParam0, 3, 0);
			func_438(iParam0, 4, 0);
			func_438(iParam0, 0, 1);
			Global_10642[iParam0] = 1;
		}
	}
	else
	{
		func_438(iParam0, 0, 0);
	}
}

void func_438(int iParam0, int iParam1, bool bParam2)//Position - 0x186C0
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_17C49.f_47C3[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17C49.f_47C3[iParam0]), iParam1);
	}
}

bool func_439(int iParam0, int iParam1)//Position - 0x186FB
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_17C49.f_47C3[iParam0], iParam1);
}

void func_440(int iParam0)//Position - 0x1871E
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_444(&(Global_10642.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_10642.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_8B[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_10642.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_10642.f_8B[iParam0], 1, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_10642.f_8B[iParam0]));
			}
		}
		Global_10642[iParam0] = 1;
		if (MISC::IS_BIT_SET(Global_10642.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_439(iParam0, 0)) && Global_109CF.f_2A == 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] != 0) && Global_17C49.f_47C3.f_57E[Global_10642.f_22B[0 /*21*/].f_E] > 3) && (!func_442(0, Global_10642.f_22B[0 /*21*/].f_C) || !func_442(1, Global_10642.f_22B[0 /*21*/].f_C)))
			{
				func_441(Global_17C49.f_47C3.f_45[Global_10642.f_22B[0 /*21*/].f_E /*54*/], &Global_109CF);
				Global_10A05 = Global_17C49.f_47C3.f_12BF;
			}
			func_437(iParam0, 0);
		}
	}
}

void func_441(struct<54> Param0, var uParam1)//Position - 0x18893
{
	uParam1->f_2A = Param0.f_2A;
	*uParam1 = Param0;
	uParam1->f_1 = { Param0.f_1 };
	uParam1->f_5 = Param0.f_5;
	uParam1->f_6 = Param0.f_6;
	uParam1->f_7 = Param0.f_7;
	uParam1->f_8 = Param0.f_8;
	uParam1->f_9 = { Param0.f_9 };
	uParam1->f_23 = { Param0.f_23 };
	uParam1->f_26 = Param0.f_26;
	uParam1->f_27 = Param0.f_27;
	uParam1->f_28 = Param0.f_28;
	uParam1->f_29 = Param0.f_29;
	uParam1->f_35 = Param0.f_35;
	uParam1->f_2B = Param0.f_2B;
	uParam1->f_2D = Param0.f_2D;
	uParam1->f_2C = Param0.f_2C;
	uParam1->f_2F = Param0.f_2F;
	uParam1->f_30 = Param0.f_30;
	uParam1->f_31 = Param0.f_31;
	uParam1->f_32 = Param0.f_32;
	uParam1->f_33 = Param0.f_33;
	uParam1->f_34 = Param0.f_34;
}

int func_442(int iParam0, int iParam1)//Position - 0x1895E
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_443(&(Global_17C49.f_47C3.f_113E[iVar0 /*109*/])))
	{
		return 0;
	}
	return func_427(Global_17C49.f_47C3.f_113E[iVar0 /*109*/][iParam0 /*54*/].f_2A);
}

int func_443(var uParam0)//Position - 0x189CF
{
	return *uParam0;
}

int func_444(var uParam0, int iParam1)//Position - 0x189DA
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = -1;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_274(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_274(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_274(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_274(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_274(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_274(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_274(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_274(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_274(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_432())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_432())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_17C49.f_47C3.f_45[uParam0->f_E /*54*/].f_2A;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_44(Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_47C3.f_520[uParam0->f_E /*3*/] };
		}
		if (Global_17C49.f_47C3.f_566[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_17C49.f_47C3.f_566[uParam0->f_E];
		}
	}
	if (MISC::IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_44(Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[1 /*4*/][uParam0->f_C];
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_44(Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f))
		{
			*uParam0 = { Global_17C49.f_6C1.f_21B.f_9E0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_17C49.f_6C1.f_21B.f_9F5[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_445(int iParam0)//Position - 0x1A0CE
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_10642.f_1E4[iVar0])) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[iVar0], 0))
		{
			VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar1, &iVar2);
			VEHICLE::GET_VEHICLE_COLOURS(Global_10642.f_1E4[iVar0], &iVar3, &iVar4);
			if (((ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[iVar0]) && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[iVar0])) && iVar1 == iVar2) && iVar3 == iVar4)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_446(int iParam0, struct<3> Param1, bool bParam2)//Position - 0x1A190
{
	int iVar0;
	var uVar1[3];
	int iVar2;
	int iVar3;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0);
	switch (iVar0)
	{
		case joaat("cargobob"):
			if (func_448(iParam0, Global_10642.f_8B[38], 0))
			{
				func_440(38);
				return 1;
			}
			break;
		
		case joaat("firetruk"):
			if (func_448(iParam0, Global_10642.f_8B[43], 1))
			{
				func_440(43);
				return 1;
			}
			break;
		
		case joaat("cuban800"):
			iVar2 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar1);
			iVar3 = 0;
			while (iVar3 <= (iVar2 - 1))
			{
				if (func_448(iParam0, uVar1[iVar3], 1) && func_447(ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 2136.133f, 4780.563f, 39.9702f, 5f))
				{
					if ((!bParam2 || func_44(Param1, 0f, 0f, 0f)) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, 1), ENTITY::GET_ENTITY_COORDS(uVar1[iVar3], 1), 1) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&iParam0);
						return 1;
					}
					else
					{
						return 0;
					}
				}
				iVar3++;
			}
			break;
		
		case joaat("luxor2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[14], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[14]) == joaat("luxor2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[14]))
				{
					func_440(14);
					return 1;
				}
			}
			break;
		
		case joaat("swift2"):
			if ((ENTITY::DOES_ENTITY_EXIST(Global_10642.f_1E4[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_10642.f_1E4[20], 0))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_10642.f_1E4[20]) == joaat("swift2") && VEHICLE::GET_VEHICLE_LIVERY(iParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_10642.f_1E4[20]))
				{
					func_440(20);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_447(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0x1A396
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

int func_448(int iParam0, int iParam1, bool bParam2)//Position - 0x1A3E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((ENTITY::DOES_ENTITY_EXIST(uParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(uParam0, &iVar0, &iVar1);
			VEHICLE::GET_VEHICLE_COLOURS(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_449(int iParam0, int iParam1)//Position - 0x1A442
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			Global_15692[iVar0] = uParam0;
			Global_1569C[iVar0] = iParam1;
			Global_156A6[iVar0] = ENTITY::GET_ENTITY_MODEL(uParam0);
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_156A6[iVar0]))
			{
				Global_156C2[iParam1 /*3*/][0] = -1;
			}
			else
			{
				Global_156C2[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8)
		{
		}
		iVar0++;
	}
}

void func_450(int iParam0, int iParam1)//Position - 0x1A4C4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_15692[iVar0]))
		{
			if (iParam0 == 145 || Global_1569C[iVar0] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_15692[iVar0]) == func_274(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_15692[iVar0], 0))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15692[iVar0], 0, 1);
						VEHICLE::DELETE_VEHICLE(&(Global_15692[iVar0]));
						Global_1569C[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

void func_451(int iParam0, var uParam1, bool bParam2, bool bParam3)//Position - 0x1A565
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(iParam0, &(uParam1->f_1));
		}
		if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
		{
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0, *uParam1);
		}
		if (uParam1->f_2A == joaat("sovereign"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
			uParam1->f_8 = 156;
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 13))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0);
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 12))
		{
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, uParam1->f_2F, uParam1->f_30, uParam1->f_31);
		}
		else
		{
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0);
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0)
		{
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0)
		{
			uParam1->f_8 = 0;
		}
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, uParam1->f_7, uParam1->f_8);
		if (((MISC::IS_BIT_SET(uParam1->f_35, 15) || func_455(iParam0)) || (((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0) && uParam1->f_9[20] > 0)) && func_454())
		{
			uParam1->f_26 = 0;
			uParam1->f_27 = 0;
			uParam1->f_28 = 0;
		}
		else if ((uParam1->f_26 == 0 && uParam1->f_27 == 0) && uParam1->f_28 == 0)
		{
			uParam1->f_26 = 255;
			uParam1->f_27 = 255;
			uParam1->f_28 = 255;
		}
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, uParam1->f_26, uParam1->f_27, uParam1->f_28);
		if (uParam1->f_29 == -1 && uParam1->f_2A != joaat("granger"))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(iParam0, uParam1->f_29);
		}
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(iParam0, !MISC::IS_BIT_SET(uParam1->f_35, 9));
		if (bParam2)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iParam0, uParam1->f_2E);
		}
		VEHICLE::_SET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, uParam1->f_32, uParam1->f_33, uParam1->f_34);
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2, MISC::IS_BIT_SET(uParam1->f_35, 28));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3, MISC::IS_BIT_SET(uParam1->f_35, 29));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0, MISC::IS_BIT_SET(uParam1->f_35, 30));
		VEHICLE::_SET_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1, MISC::IS_BIT_SET(uParam1->f_35, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(iParam0, MISC::IS_BIT_SET(uParam1->f_35, 10));
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam0) > 1 && uParam1->f_2B >= 0)
		{
			VEHICLE::SET_VEHICLE_LIVERY(iParam0, uParam1->f_2B);
		}
		if (uParam1->f_2D > -1 && uParam1->f_2D < 255)
		{
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					if (uParam1->f_2D == 6)
					{
						VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
					}
				}
				else
				{
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(iParam0, uParam1->f_2D);
				}
			}
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			if ((uParam1->f_2C == 0 || uParam1->f_2C == 3) || uParam1->f_2C == 5)
			{
				VEHICLE::RAISE_CONVERTIBLE_ROOF(iParam0, 1);
			}
			else
			{
				VEHICLE::LOWER_CONVERTIBLE_ROOF(iParam0, 1);
			}
		}
		if (bParam3)
		{
			func_452(&iParam0, &(uParam1->f_9), &(uParam1->f_23));
		}
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_2A) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_2A))
		{
			iVar0 = 0;
			while (iVar0 <= 11)
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, func_277(iVar0 + 1)))
				{
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
					{
						VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 0);
					}
				}
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
				{
					VEHICLE::SET_VEHICLE_EXTRA(iParam0, iVar0 + 1, 1);
				}
				iVar0++;
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_2A))
		{
			if (!MISC::IS_BIT_SET(uParam1->f_35, 23))
			{
				if (MISC::IS_BIT_SET(uParam1->f_35, 22))
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 2);
				}
				else
				{
					VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
				}
			}
			else
			{
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 4);
			}
		}
		if (MISC::IS_BIT_SET(uParam1->f_35, 27))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 1);
		}
		else
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

int func_452(var uParam0, var uParam1, var uParam2)//Position - 0x1A952
{
	int iVar0;
	int iVar1;
	
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
	{
		return 0;
	}
	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, iVar1) != ((*uParam1)[iVar0] - 1))
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, iVar1);
			if ((*uParam1)[iVar0] > 0)
			{
				if (iVar0 == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), (*uParam2)[1] > 0);
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, iVar1, ((*uParam1)[iVar0] - 1), false);
				}
			}
		}
		iVar0++;
	}
	if (func_453(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, 1);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, 1);
	}
	return 1;
}

int func_453(int iParam0)//Position - 0x1AA84
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	
	if ((ENTITY::DOES_ENTITY_EXIST(uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 25)
		{
			iVar1 = iVar0;
			if (((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21) || iVar1 == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1) != -1)
			{
				StringCopy(&cVar3, VEHICLE::GET_MOD_TEXT_LABEL(iParam0, iVar1, VEHICLE::GET_VEHICLE_MOD(iParam0, iVar1)), 16);
				iVar2 = MISC::GET_HASH_KEY(&cVar3);
				if (iVar2 != 0)
				{
					if (iVar2 == MISC::GET_HASH_KEY("MNU_CAGE") || iVar2 == MISC::GET_HASH_KEY("SABRE_CAG"))
					{
						return 1;
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

bool func_454()//Position - 0x1AB60
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

int func_455(int iParam0)//Position - 0x1AB71
{
	var uVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					uVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				return MISC::IS_BIT_SET(uVar0, 4);
			}
		}
	}
	return 0;
}

void func_456(struct<3> Param0, float fParam1, int iParam2)//Position - 0x1ABBC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_444(&(Global_10642.f_22B[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Global_10642.f_22B[0 /*21*/], iParam2) <= fParam1)
			{
				func_440(iVar0);
			}
		}
		iVar0++;
	}
}

int func_457(var uParam0)//Position - 0x1AC0C
{
	if (func_458(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_C.f_2A))
		{
			return 1;
		}
		else
		{
			return 0;
		}
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_458(var uParam0)//Position - 0x1AC41
{
	if (uParam0->f_C.f_2A == 0)
	{
		return 0;
	}
	if (!func_427(uParam0->f_C.f_2A))
	{
		return 0;
	}
	return 1;
}

bool func_459()//Position - 0x1AC6A
{
	return func_457(&(Global_16D94.f_877));
}

void func_460()//Position - 0x1AC7D
{
	func_461(&(Global_16D94.f_877));
}

void func_461(var uParam0)//Position - 0x1AC90
{
	if (func_458(uParam0))
	{
		STREAMING::REQUEST_MODEL(uParam0->f_C.f_2A);
	}
}

void func_462()//Position - 0x1ACAE
{
	if (STREAMING::STREAMVOL_IS_VALID(uLocal_953))
	{
		STREAMING::STREAMVOL_DELETE(uLocal_953);
	}
}

int func_463()//Position - 0x1ACC7
{
	if (!Global_15F6A == 10 && !Global_15F6A == 9)
	{
		return 0;
	}
	return Global_15F6A.f_2;
}

struct<39> func_464(int iParam0)//Position - 0x1ACF1
{
	struct<39> Var0;
	
	if (iParam0 == 0)
	{
		Var0 = 1;
		Var0.f_1 = { 0f, 0f, 0f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_465(0) };
		Var0.f_16 = "Assassin_Valet";
		Var0.f_17 = 7000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = -1;
		Var0.f_19 = { -1700.015f, -1066.335f, 12.144f };
		Var0.f_1C = { -1691.564f, -1066.514f, 12.076f };
		Var0.f_1F = 35.4714f;
		Var0.f_A = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_D = { -4.8332f, 0f, -177.1283f };
		Var0.f_10 = { -1700.467f, -1066.672f, 13.8795f };
		Var0.f_13 = { -4.8332f, 0f, -177.1283f };
		Var0.f_21 = { -1700.098f, -1067.939f, 12.1547f };
		Var0.f_24 = 162.4559f;
		Var0.f_25 = 1;
	}
	else if (iParam0 == 1)
	{
		Var0 = 0;
		Var0.f_1 = { -699.3992f, -917.5043f, 18.2143f };
		Var0.f_4 = { 0f, 0f, 0f };
		Var0.f_7 = { func_465(1) };
		Var0.f_16 = "Assassin_Multi";
		Var0.f_17 = 5000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = -1;
		Var0.f_19 = { -700.1855f, -917.9558f, 18.2143f };
		Var0.f_1C = { -699.9455f, -921.7786f, 18.0144f };
		Var0.f_1F = 78.0874f;
		Var0.f_A = { -697.8064f, -921.4629f, 20.5104f };
		Var0.f_D = { -13.5249f, 0f, 30.6033f };
		Var0.f_10 = { -702.4851f, -921.2747f, 21.1235f };
		Var0.f_13 = { -22.5196f, 0f, -43.0435f };
		Var0.f_21 = { 0f, 0f, 0f };
		Var0.f_24 = 0f;
		Var0.f_25 = 0;
	}
	else if (iParam0 == 2)
	{
		Var0 = 0;
		Var0.f_1 = { 215.1206f, -853.3143f, 29.3684f };
		Var0.f_4 = { 0f, 0f, 87.1787f };
		Var0.f_7 = { func_465(2) };
		Var0.f_16 = "Assassin_Hooker";
		Var0.f_17 = 3000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = -1;
		Var0.f_19 = { 213.7994f, -853.9389f, 29.3929f };
		Var0.f_1C = { 205.2641f, -847.2667f, 29.4903f };
		Var0.f_1F = 140.1039f;
		Var0.f_A = { 216.7391f, -856.0031f, 32.7127f };
		Var0.f_D = { -25.1365f, 0f, 41.3912f };
		Var0.f_10 = { 210.4668f, -851.3092f, 32.1099f };
		Var0.f_13 = { -16.3326f, 0f, -127.0114f };
		Var0.f_21 = { 213.8733f, -853.8161f, 29.3922f };
		Var0.f_24 = 344.0112f;
		Var0.f_25 = 0;
	}
	else if (iParam0 == 3)
	{
		Var0 = 0;
		Var0.f_1 = { -22.5499f, -107.3546f, 56.0161f };
		Var0.f_4 = { 0f, 0f, 269.7924f };
		Var0.f_7 = { func_465(3) };
		Var0.f_16 = "Assassin_Bus";
		Var0.f_17 = 5000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = -1;
		Var0.f_19 = { -22.3125f, -108.9183f, 56.0068f };
		Var0.f_1C = { -17.2677f, -118.5915f, 55.8734f };
		Var0.f_1F = 1.4374f;
		Var0.f_A = { -26.1094f, -108.0298f, 59.052f };
		Var0.f_D = { -21.2059f, 0f, -109.0176f };
		Var0.f_10 = { -20.1189f, -111.9639f, 59.4377f };
		Var0.f_13 = { -27.0037f, 0f, 29.464f };
		Var0.f_21 = { 0f, 0f, 0f };
		Var0.f_24 = 0f;
		Var0.f_25 = 0;
	}
	else if (iParam0 == 4)
	{
		Var0 = 0;
		Var0.f_1 = { 806.1469f, -1070.21f, 27.3361f };
		Var0.f_4 = { 0f, 0f, 90f };
		Var0.f_7 = { func_465(4) };
		Var0.f_16 = "Assassin_Construction";
		Var0.f_17 = 8000f;
		Var0.f_18 = 2000f;
		Var0.f_20 = 1;
		Var0.f_19 = { 804.9559f, -1070.46f, 27.3361f };
		Var0.f_1C = { 799.8408f, -1079.142f, 27.321f };
		Var0.f_1F = 69.6524f;
		Var0.f_A = { 801.8048f, -1068.068f, 30.3496f };
		Var0.f_D = { -20.8953f, 0f, -132.9451f };
		Var0.f_10 = { 805.8168f, -1074.496f, 28.9803f };
		Var0.f_13 = { -1.5585f, 0f, 6.9143f };
		Var0.f_21 = { 804.8776f, -1070.523f, 27.3416f };
		Var0.f_24 = 287.8741f;
		Var0.f_25 = 0;
	}
	return Var0;
}

Vector3 func_465(int iParam0)//Position - 0x1B1A9
{
	switch (iParam0)
	{
		case 0:
			return -1704.427f, -1077.316f, 12.1111f;
		
		case 1:
			return -700.429f, -916.7467f, 18.2143f;
		
		case 2:
			return 214.1641f, -852.8006f, 29.3929f;
		
		case 3:
			return -21.9871f, -107.4823f, 55.997f;
		
		case 4:
			return 806.1469f, -1070.21f, 27.3361f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_466()//Position - 0x1B233
{
	bool bVar0;
	
	bVar0 = func_111(Global_17C49.f_4729.f_1, 4096);
	Global_17C49.f_4729.f_1 = 0;
	if (bVar0)
	{
		func_477(&(Global_17C49.f_4729.f_1), 4096);
	}
}

void func_467()//Position - 0x1B26C
{
}

bool func_468()//Position - 0x1B274
{
	return func_458(&(Global_16D94.f_877));
}

int func_469()//Position - 0x1B287
{
	if (Global_15F6A == 10 || Global_15F6A == 9)
	{
		return 1;
	}
	return 0;
}

void func_470()//Position - 0x1B2AB
{
	if (func_52(&uLocal_1082))
	{
		Global_17C49.f_4729.f_5 = func_46(&uLocal_1082);
	}
	if (!iLocal_999)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("ASS1_LOST");
	}
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SCRIPT\ASSASSINATION_MULTI");
	func_243();
	func_226();
	func_231();
	func_232(1);
	func_377();
	func_474();
	func_403(0);
	func_3();
	if (ENTITY::DOES_ENTITY_EXIST(Global_15350.f_1C[0]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_15350.f_1C[0], 1, 1);
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Global_15350.f_1C[0]));
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_951, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(uLocal_952, 0);
	func_462();
	func_79(&uLocal_1275, 0, 0);
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		func_472(PLAYER::PLAYER_PED_ID(), 1);
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), 0, -1, 0);
	}
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PED::CLEAR_PED_NON_CREATION_AREA();
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1073, 0);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_1074, 0);
	func_471();
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_471()//Position - 0x1B394
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_252(Local_1050[iVar0 /*3*/], 1) < 5f)
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 119.5633f);
			}
		}
		iVar0++;
	}
}

void func_472(int iParam0, int iParam1)//Position - 0x1B403
{
	int iVar0;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(uParam0))
	{
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 0))
		{
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed"))
			{
				if (!func_473(iParam1, iVar0))
				{
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_15F8F > 0)
	{
		Global_16D94.f_15[iParam1] = iVar0;
	}
	else
	{
		Global_164D7.f_15[iParam1] = iVar0;
	}
}

int func_473(int iParam0, int iParam1)//Position - 0x1B469
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_15F8F > 0)
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_16D94.f_29C[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_16D94.f_29C[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_16D94.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/] == iParam1)
			{
				if (Global_16D94.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 44)
		{
			if (Global_164D7.f_29C[iParam0 /*284*/][iVar0 /*3*/] == iParam1)
			{
				if (Global_164D7.f_29C[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			if (Global_164D7.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/] == iParam1)
			{
				if (Global_164D7.f_29C[iParam0 /*284*/].f_85[iVar0 /*3*/].f_1 > 0)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_474()//Position - 0x1B59C
{
	VEHICLE::REMOVE_VEHICLE_RECORDING(102, "ASSOJva");
	VEHICLE::REMOVE_VEHICLE_RECORDING(107, "ASSOJva");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_101a");
	TASK::REMOVE_WAYPOINT_RECORDING("OJASva_104");
}

void func_475()//Position - 0x1B5D0
{
	int iVar0;
	
	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
	{
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", 1424);
	}
	if (Global_17C49.f_1CAD || func_40(0))
	{
		if (!func_476())
		{
			iVar0 = func_39();
			if (iVar0 != -1)
			{
				if (!func_33(iVar0))
				{
					return;
				}
				MISC::SET_BIT(&(Global_13CDF[iVar0 /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_38();
		}
	}
}

int func_476()//Position - 0x1B641
{
	if (((Global_15F6A == 13 || Global_15F6A == 10) || Global_15F6A == 11) || Global_15F6A == 12)
	{
		return 0;
	}
	return 1;
}

void func_477(var uParam0, int iParam1)//Position - 0x1B67F
{
	func_478(uParam0, iParam1);
}

void func_478(var uParam0, var uParam1)//Position - 0x1B68F
{
	*uParam0 = (*uParam0 || uParam1);
}

