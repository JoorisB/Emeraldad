//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 90
        .doubleBattle = FALSE,
#line 91
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 98
        .trainerName = _("GRUNT"),
#line 99
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 100
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 103
        .doubleBattle = FALSE,
#line 104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 110
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 111
        .trainerName = _("GRUNT"),
#line 112
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 113
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 115
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 116
        .doubleBattle = FALSE,
#line 117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 120
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 123
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 127
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 128
        .trainerName = _("GRUNT"),
#line 129
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 130
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 132
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 133
        .doubleBattle = FALSE,
#line 134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 136
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 140
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 141
        .trainerName = _("GRUNT"),
#line 142
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 143
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 145
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 146
        .doubleBattle = FALSE,
#line 147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 149
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 150
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 153
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 154
        .trainerName = _("GRUNT"),
#line 155
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 156
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 158
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 159
        .doubleBattle = FALSE,
#line 160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 162
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 163
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 166
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 167
        .trainerName = _("GRUNT"),
#line 168
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 169
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 171
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 172
        .doubleBattle = FALSE,
#line 173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 175
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 176
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 179
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 180
        .trainerName = _("GRUNT"),
#line 181
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 182
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 184
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 185
        .doubleBattle = FALSE,
#line 186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 188
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 189
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 192
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_1] =
    {
#line 193
        .trainerName = _("GABRIELLE"),
#line 194
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 195
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 196
F_TRAINER_FEMALE | 
#line 197
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 198
        .doubleBattle = FALSE,
#line 199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 201
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 202
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 205
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 206
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 209
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 210
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 213
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 214
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 217
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 218
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 221
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 222
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 225
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 226
        .trainerName = _("GRUNT"),
#line 227
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 228
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 230
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 231
        .doubleBattle = FALSE,
#line 232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 234
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 235
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 238
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 239
        .trainerName = _("MARCEL"),
#line 240
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 241
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 243
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 244
        .items = { ITEM_HYPER_POTION },
#line 245
        .doubleBattle = FALSE,
#line 246
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 248
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 250
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 249
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 252
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 253
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 256
    [DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
    {
#line 257
        .trainerName = _("ALBERTO"),
#line 258
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 259
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 261
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 262
        .doubleBattle = FALSE,
#line 263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 265
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 266
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 269
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 270
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 273
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 274
        .trainerName = _("ED"),
#line 275
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 276
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 278
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 279
        .doubleBattle = FALSE,
#line 280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 282
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 283
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 286
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 287
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 290
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 291
        .trainerName = _("GRUNT"),
#line 292
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 293
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 294
F_TRAINER_FEMALE | 
#line 295
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 296
        .doubleBattle = FALSE,
#line 297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 299
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 300
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 303
    [DIFFICULTY_NORMAL][TRAINER_DECLAN] =
    {
#line 304
        .trainerName = _("DECLAN"),
#line 305
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 306
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 308
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 309
        .doubleBattle = FALSE,
#line 310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 312
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 313
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 316
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 317
        .trainerName = _("GRUNT"),
#line 318
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 319
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 321
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 322
        .doubleBattle = FALSE,
#line 323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 325
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 326
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 329
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 330
        .trainerName = _("GRUNT"),
#line 331
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 332
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 334
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 335
        .doubleBattle = FALSE,
#line 336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 338
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 339
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 342
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 343
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 346
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 347
        .trainerName = _("GRUNT"),
#line 348
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 349
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 351
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 352
        .doubleBattle = FALSE,
#line 353
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 355
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 356
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 359
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 360
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 363
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 364
        .trainerName = _("GRUNT"),
#line 365
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 366
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 368
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 369
        .doubleBattle = FALSE,
#line 370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 372
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 373
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 376
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 377
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 380
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 381
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 384
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 385
        .trainerName = _("GRUNT"),
#line 386
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 387
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 389
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 390
        .doubleBattle = FALSE,
#line 391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 393
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 394
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 397
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 398
        .trainerName = _("GRUNT"),
#line 399
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 400
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 402
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 403
        .doubleBattle = FALSE,
#line 404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 406
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 407
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 410
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 411
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 414
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 415
        .trainerName = _("GRUNT"),
#line 416
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 417
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 419
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 420
        .doubleBattle = FALSE,
#line 421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 423
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 424
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 427
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 428
        .trainerName = _("GRUNT"),
#line 429
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 430
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 432
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 433
        .doubleBattle = FALSE,
#line 434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 436
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 437
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 440
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 441
        .trainerName = _("GRUNT"),
#line 442
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 443
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 445
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 446
        .doubleBattle = FALSE,
#line 447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 449
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 450
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 453
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 454
        .trainerName = _("GRUNT"),
#line 455
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 456
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 458
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 459
        .doubleBattle = FALSE,
#line 460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 462
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 463
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 466
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 467
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 470
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 471
        .trainerName = _("GRUNT"),
#line 472
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 473
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 474
F_TRAINER_FEMALE | 
#line 475
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 476
        .doubleBattle = FALSE,
#line 477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 479
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 480
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 483
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 484
        .trainerName = _("GRUNT"),
#line 485
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 486
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 487
F_TRAINER_FEMALE | 
#line 488
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 489
        .doubleBattle = FALSE,
#line 490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 492
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 493
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 496
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 497
        .trainerName = _("GRUNT"),
#line 498
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 499
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 500
F_TRAINER_FEMALE | 
#line 501
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 502
        .doubleBattle = FALSE,
#line 503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 505
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 506
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 509
    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
#line 510
        .trainerName = _("FREDRICK"),
#line 511
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 512
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 514
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 515
        .doubleBattle = FALSE,
#line 516
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 518
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 519
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 522
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 524
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 523
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 526
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 527
        .trainerName = _("MATT"),
#line 528
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 529
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 531
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 532
        .items = { ITEM_SUPER_POTION },
#line 533
        .doubleBattle = FALSE,
#line 534
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 536
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 537
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 540
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 541
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 544
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 545
        .trainerName = _("ZANDER"),
#line 546
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 547
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 549
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 550
        .doubleBattle = FALSE,
#line 551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 553
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 554
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 557
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 558
        .trainerName = _("SHELLY"),
#line 559
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 560
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 561
F_TRAINER_FEMALE | 
#line 562
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 563
        .doubleBattle = FALSE,
#line 564
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 566
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 568
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 567
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 570
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 572
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 571
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 574
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 575
        .trainerName = _("SHELLY"),
#line 576
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 577
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 578
F_TRAINER_FEMALE | 
#line 579
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 580
        .doubleBattle = FALSE,
#line 581
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 583
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 584
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 587
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 589
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 588
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 591
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 592
        .trainerName = _("ARCHIE"),
#line 593
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 594
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 596
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 597
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 598
        .doubleBattle = FALSE,
#line 599
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 601
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 603
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 602
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 605
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 607
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 606
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 609
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 611
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 610
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 613
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 614
        .trainerName = _("LEAH"),
#line 615
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 616
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 617
F_TRAINER_FEMALE | 
#line 618
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 619
        .doubleBattle = FALSE,
#line 620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 622
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 623
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 626
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 627
        .trainerName = _("DAISY"),
#line 628
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 629
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 630
F_TRAINER_FEMALE | 
#line 631
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 632
        .doubleBattle = FALSE,
#line 633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 635
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 636
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 639
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 640
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 643
    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
#line 644
        .trainerName = _("ROSE"),
#line 645
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 646
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 647
F_TRAINER_FEMALE | 
#line 648
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 649
        .doubleBattle = FALSE,
#line 650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 652
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 653
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 656
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 657
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 660
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 661
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 664
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 665
        .trainerName = _("FELIX"),
#line 666
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 667
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 669
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 670
        .items = { ITEM_FULL_RESTORE },
#line 671
        .doubleBattle = FALSE,
#line 672
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 674
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 675
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 677
                MOVE_PSYCHIC,
            },
            },
            {
#line 679
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 680
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 682
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 685
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 686
        .trainerName = _("VIOLET"),
#line 687
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 688
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 689
F_TRAINER_FEMALE | 
#line 690
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 691
        .doubleBattle = FALSE,
#line 692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 694
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 695
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 698
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 699
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 702
    [DIFFICULTY_NORMAL][TRAINER_ROSE_2] =
    {
#line 703
        .trainerName = _("ROSE"),
#line 704
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 705
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 706
F_TRAINER_FEMALE | 
#line 707
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 708
        .doubleBattle = FALSE,
#line 709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 711
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 713
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 712
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 715
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 717
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 716
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 719
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 721
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 720
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 723
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
#line 724
        .trainerName = _("DUSTY"),
#line 725
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 726
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 728
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 729
        .doubleBattle = FALSE,
#line 730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 732
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 734
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 733
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 735
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 740
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 741
        .trainerName = _("CHIP"),
#line 742
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 743
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 745
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 746
        .doubleBattle = FALSE,
#line 747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 749
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 751
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 750
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 752
                MOVE_PSYBEAM,
                MOVE_SELF_DESTRUCT,
                MOVE_SANDSTORM,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 757
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 759
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 758
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 760
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 765
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 767
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 766
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 768
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 773
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 774
        .trainerName = _("FOSTER"),
#line 775
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 776
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 778
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 779
        .doubleBattle = FALSE,
#line 780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 782
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 784
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 783
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 785
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
            {
#line 790
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 792
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 791
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 793
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 798
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_2] =
    {
#line 799
        .trainerName = _("DUSTY"),
#line 800
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 801
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 803
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 804
        .doubleBattle = FALSE,
#line 805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 807
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 809
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 808
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 810
                MOVE_DIG,
                MOVE_SLASH,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 815
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
    {
#line 816
        .trainerName = _("GABBY & TY"),
#line 817
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 818
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 820
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 821
        .doubleBattle = TRUE,
#line 822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 824
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 826
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 825
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 828
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 830
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 829
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 832
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_2] =
    {
#line 833
        .trainerName = _("GABBY & TY"),
#line 834
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 835
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 837
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 838
        .doubleBattle = TRUE,
#line 839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 841
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 843
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 842
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 845
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 847
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 846
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 849
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_3] =
    {
#line 850
        .trainerName = _("GABBY & TY"),
#line 851
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 852
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 854
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 855
        .doubleBattle = TRUE,
#line 856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 858
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 860
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 859
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 862
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 864
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 863
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 866
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_4] =
    {
#line 867
        .trainerName = _("GABBY & TY"),
#line 868
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 869
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 871
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 872
        .doubleBattle = TRUE,
#line 873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 875
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 877
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 876
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 879
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 881
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 880
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 883
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_5] =
    {
#line 884
        .trainerName = _("GABBY & TY"),
#line 885
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 886
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 888
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 889
        .doubleBattle = TRUE,
#line 890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 892
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 894
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 893
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 896
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 898
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 897
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 900
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 901
        .trainerName = _("GABBY & TY"),
#line 902
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 903
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 905
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 906
        .doubleBattle = TRUE,
#line 907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 909
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 910
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 912
                MOVE_SONIC_BOOM,
                MOVE_THUNDER_WAVE,
                MOVE_METAL_SOUND,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 917
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 919
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 918
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 920
                MOVE_ASTONISH,
                MOVE_STOMP,
                MOVE_SUPERSONIC,
                MOVE_HYPER_VOICE,
            },
            },
        },
    },
#line 925
    [DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
    {
#line 926
        .trainerName = _("LOLA"),
#line 927
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 928
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 929
F_TRAINER_FEMALE | 
#line 930
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 931
        .doubleBattle = FALSE,
#line 932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 934
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 936
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 935
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 938
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 940
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 939
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 942
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 943
        .trainerName = _("AUSTINA"),
#line 944
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 945
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 946
F_TRAINER_FEMALE | 
#line 947
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 948
        .doubleBattle = FALSE,
#line 949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 951
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 952
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 955
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 956
        .trainerName = _("GWEN"),
#line 957
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 958
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 959
F_TRAINER_FEMALE | 
#line 960
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 961
        .doubleBattle = FALSE,
#line 962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 964
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 965
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 968
    [DIFFICULTY_NORMAL][TRAINER_LOLA_2] =
    {
#line 969
        .trainerName = _("LOLA"),
#line 970
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 971
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 972
F_TRAINER_FEMALE | 
#line 973
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 974
        .doubleBattle = FALSE,
#line 975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 977
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 979
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 978
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 981
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 982
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 985
    [DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
    {
#line 986
        .trainerName = _("RICKY"),
#line 987
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 988
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 990
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 991
        .doubleBattle = FALSE,
#line 992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 994
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 996
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 995
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 997
                MOVE_SAND_ATTACK,
                MOVE_HEADBUTT,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1002
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 1003
        .trainerName = _("SIMON"),
#line 1004
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1005
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1007
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1008
        .doubleBattle = FALSE,
#line 1009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1011
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1012
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1015
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1016
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1019
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 1020
        .trainerName = _("CHARLIE"),
#line 1021
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1022
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1024
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1025
        .doubleBattle = FALSE,
#line 1026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1028
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1029
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1032
    [DIFFICULTY_NORMAL][TRAINER_RICKY_2] =
    {
#line 1033
        .trainerName = _("RICKY"),
#line 1034
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 1035
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 1037
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 1038
        .doubleBattle = FALSE,
#line 1039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1041
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1043
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1042
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1044
                MOVE_SAND_ATTACK,
                MOVE_PIN_MISSILE,
                MOVE_TAIL_WHIP,
                MOVE_SURF,
            },
            },
        },
    },
#line 1049
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 1050
        .trainerName = _("RANDALL"),
#line 1051
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1052
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1054
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1055
        .items = { ITEM_HYPER_POTION },
#line 1056
        .doubleBattle = FALSE,
#line 1057
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1059
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1060
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1062
                MOVE_QUICK_ATTACK,
                MOVE_AGILITY,
                MOVE_WING_ATTACK,
            },
            },
        },
    },
#line 1066
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1067
        .trainerName = _("PARKER"),
#line 1068
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1071
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1072
        .items = { ITEM_HYPER_POTION },
#line 1073
        .doubleBattle = FALSE,
#line 1074
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1076
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1077
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1079
                MOVE_TEETER_DANCE,
                MOVE_DIZZY_PUNCH,
                MOVE_FOCUS_PUNCH,
            },
            },
        },
    },
#line 1083
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1084
        .trainerName = _("GEORGE"),
#line 1085
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1086
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1088
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1089
        .items = { ITEM_HYPER_POTION },
#line 1090
        .doubleBattle = FALSE,
#line 1091
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1093
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1093
            .heldItem = ITEM_SITRUS_BERRY,
#line 1095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1094
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1096
                MOVE_SLACK_OFF,
                MOVE_COUNTER,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1100
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1101
        .trainerName = _("BERKE"),
#line 1102
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1103
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1105
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1106
        .items = { ITEM_HYPER_POTION },
#line 1107
        .doubleBattle = FALSE,
#line 1108
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1110
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1111
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1113
                MOVE_FOCUS_ENERGY,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1116
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1117
        .trainerName = _("BRAXTON"),
#line 1118
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1119
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1121
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1122
        .items = { ITEM_HYPER_POTION },
#line 1123
        .doubleBattle = FALSE,
#line 1124
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1126
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1128
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1127
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1129
                MOVE_FOCUS_ENERGY,
                MOVE_QUICK_ATTACK,
                MOVE_WING_ATTACK,
                MOVE_ENDEAVOR,
            },
            },
            {
#line 1134
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1136
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1135
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1137
                MOVE_BITE,
                MOVE_DIG,
                MOVE_FEINT_ATTACK,
                MOVE_SAND_TOMB,
            },
            },
            {
#line 1142
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1144
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1143
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1145
                MOVE_ROLLOUT,
                MOVE_WHIRLPOOL,
                MOVE_ASTONISH,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1150
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1152
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1151
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1153
                MOVE_THUNDERBOLT,
                MOVE_SUPERSONIC,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 1158
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1160
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1159
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1161
                MOVE_GIGA_DRAIN,
                MOVE_FEINT_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
            },
            },
        },
    },
#line 1166
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1167
        .trainerName = _("VINCENT"),
#line 1168
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1169
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1171
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1172
        .items = { ITEM_FULL_RESTORE },
#line 1173
        .doubleBattle = FALSE,
#line 1174
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1176
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1178
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1177
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1180
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1182
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1181
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1184
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1186
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1185
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1188
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1189
        .trainerName = _("LEROY"),
#line 1190
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1191
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1193
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1194
        .items = { ITEM_FULL_RESTORE },
#line 1195
        .doubleBattle = FALSE,
#line 1196
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1198
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1200
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1199
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1202
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1204
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1203
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1206
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 1207
        .trainerName = _("WILTON"),
#line 1208
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1209
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1211
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1212
        .items = { ITEM_SUPER_POTION },
#line 1213
        .doubleBattle = FALSE,
#line 1214
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1216
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1218
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1217
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1220
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1222
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1221
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1224
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1226
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1225
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1228
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1229
        .trainerName = _("EDGAR"),
#line 1230
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1233
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1234
        .items = { ITEM_FULL_RESTORE },
#line 1235
        .doubleBattle = FALSE,
#line 1236
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1238
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1240
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1239
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1242
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1244
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1243
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1246
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1247
        .trainerName = _("ALBERT"),
#line 1248
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1249
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1251
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1252
        .items = { ITEM_FULL_RESTORE },
#line 1253
        .doubleBattle = FALSE,
#line 1254
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1256
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1257
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1260
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1262
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1261
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1264
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL] =
    {
#line 1265
        .trainerName = _("SAMUEL"),
#line 1266
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1267
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1269
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1270
        .items = { ITEM_FULL_RESTORE },
#line 1271
        .doubleBattle = FALSE,
#line 1272
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1274
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1275
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1278
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1280
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1279
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1282
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1284
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1283
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1286
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1287
        .trainerName = _("VITO"),
#line 1288
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1289
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1291
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1292
        .items = { ITEM_FULL_RESTORE },
#line 1293
        .doubleBattle = FALSE,
#line 1294
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1296
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1298
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1297
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1300
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1301
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1304
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1306
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1305
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1308
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1310
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1309
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1312
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1313
        .trainerName = _("OWEN"),
#line 1314
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1315
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1317
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1318
        .items = { ITEM_FULL_RESTORE },
#line 1319
        .doubleBattle = FALSE,
#line 1320
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1322
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1324
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1323
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1326
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1328
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1327
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1330
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1332
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1331
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1334
    [DIFFICULTY_NORMAL][TRAINER_WILTON_2] =
    {
#line 1335
        .trainerName = _("WILTON"),
#line 1336
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1337
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1339
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1340
        .items = { ITEM_FULL_RESTORE },
#line 1341
        .doubleBattle = FALSE,
#line 1342
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1344
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1346
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1345
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1348
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1349
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1352
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1354
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1353
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1356
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1357
        .trainerName = _("WARREN"),
#line 1358
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1359
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1361
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1362
        .items = { ITEM_FULL_RESTORE },
#line 1363
        .doubleBattle = FALSE,
#line 1364
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1366
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1368
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1367
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1370
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1372
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1371
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1374
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1375
        .trainerName = _("MARY"),
#line 1376
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1377
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1378
F_TRAINER_FEMALE | 
#line 1379
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1380
        .items = { ITEM_HYPER_POTION },
#line 1381
        .doubleBattle = FALSE,
#line 1382
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1384
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1385
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1387
                MOVE_FEINT_ATTACK,
                MOVE_SHOCK_WAVE,
            },
            },
        },
    },
#line 1390
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1391
        .trainerName = _("ALEXIA"),
#line 1392
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1393
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1394
F_TRAINER_FEMALE | 
#line 1395
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1396
        .items = { ITEM_HYPER_POTION },
#line 1397
        .doubleBattle = FALSE,
#line 1398
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1400
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1401
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1403
                MOVE_DEFENSE_CURL,
                MOVE_DOUBLE_EDGE,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 1407
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1408
        .trainerName = _("JODY"),
#line 1409
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1410
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1411
F_TRAINER_FEMALE | 
#line 1412
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1413
        .items = { ITEM_HYPER_POTION },
#line 1414
        .doubleBattle = FALSE,
#line 1415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1417
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1418
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1420
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 1423
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1424
        .trainerName = _("WENDY"),
#line 1425
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1426
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1427
F_TRAINER_FEMALE | 
#line 1428
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1429
        .items = { ITEM_FULL_RESTORE },
#line 1430
        .doubleBattle = FALSE,
#line 1431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1433
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1435
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1434
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1436
                MOVE_BATON_PASS,
                MOVE_FEINT_ATTACK,
                MOVE_FAKE_TEARS,
                MOVE_BITE,
            },
            },
            {
#line 1441
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1442
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1444
                MOVE_MEGA_DRAIN,
                MOVE_MAGICAL_LEAF,
                MOVE_GRASS_WHISTLE,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 1449
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1450
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1452
                MOVE_FLY,
                MOVE_WATER_GUN,
                MOVE_MIST,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 1457
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1458
        .trainerName = _("KEIRA"),
#line 1459
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1460
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1461
F_TRAINER_FEMALE | 
#line 1462
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1463
        .items = { ITEM_FULL_RESTORE },
#line 1464
        .doubleBattle = FALSE,
#line 1465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1467
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1468
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1471
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1473
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1472
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1475
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 1476
        .trainerName = _("BROOKE"),
#line 1477
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1478
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1479
F_TRAINER_FEMALE | 
#line 1480
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1481
        .items = { ITEM_SUPER_POTION },
#line 1482
        .doubleBattle = FALSE,
#line 1483
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1485
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1487
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1486
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1489
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1491
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1490
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1493
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1495
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1494
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1497
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1498
        .trainerName = _("JENNIFER"),
#line 1499
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1500
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1501
F_TRAINER_FEMALE | 
#line 1502
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1503
        .items = { ITEM_FULL_RESTORE },
#line 1504
        .doubleBattle = FALSE,
#line 1505
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1507
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1509
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1508
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1511
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1512
        .trainerName = _("HOPE"),
#line 1513
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1514
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1515
F_TRAINER_FEMALE | 
#line 1516
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1517
        .items = { ITEM_FULL_RESTORE },
#line 1518
        .doubleBattle = FALSE,
#line 1519
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1521
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1523
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1522
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1525
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1526
        .trainerName = _("SHANNON"),
#line 1527
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1528
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1529
F_TRAINER_FEMALE | 
#line 1530
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1531
        .items = { ITEM_FULL_RESTORE },
#line 1532
        .doubleBattle = FALSE,
#line 1533
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1535
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1537
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1536
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1539
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1540
        .trainerName = _("MICHELLE"),
#line 1541
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1542
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1543
F_TRAINER_FEMALE | 
#line 1544
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1545
        .items = { ITEM_FULL_RESTORE },
#line 1546
        .doubleBattle = FALSE,
#line 1547
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1549
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1551
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1550
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1553
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1555
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1554
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1557
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1558
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1561
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1562
        .trainerName = _("CAROLINE"),
#line 1563
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1564
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1565
F_TRAINER_FEMALE | 
#line 1566
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1567
        .items = { ITEM_FULL_RESTORE },
#line 1568
        .doubleBattle = FALSE,
#line 1569
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1571
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1573
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1572
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1575
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1577
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1576
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1579
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1580
        .trainerName = _("JULIE"),
#line 1581
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1582
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1583
F_TRAINER_FEMALE | 
#line 1584
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1585
        .items = { ITEM_FULL_RESTORE },
#line 1586
        .doubleBattle = FALSE,
#line 1587
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1589
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1590
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1593
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1595
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1594
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1597
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1598
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1601
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_2] =
    {
#line 1602
        .trainerName = _("BROOKE"),
#line 1603
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1604
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1605
F_TRAINER_FEMALE | 
#line 1606
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1607
        .items = { ITEM_FULL_RESTORE },
#line 1608
        .doubleBattle = FALSE,
#line 1609
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1611
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1612
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1615
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1617
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1616
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1619
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1621
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 1620
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1623
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1624
        .trainerName = _("PATRICIA"),
#line 1625
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1626
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1627
F_TRAINER_FEMALE | 
#line 1628
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1629
        .doubleBattle = FALSE,
#line 1630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1632
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1633
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1636
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1637
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1640
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1641
        .trainerName = _("KINDRA"),
#line 1642
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1643
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1644
F_TRAINER_FEMALE | 
#line 1645
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1646
        .doubleBattle = FALSE,
#line 1647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1649
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1650
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1653
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1654
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1657
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1658
        .trainerName = _("TAMMY"),
#line 1659
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1660
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1661
F_TRAINER_FEMALE | 
#line 1662
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1663
        .doubleBattle = FALSE,
#line 1664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1666
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1667
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1670
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1671
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1674
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
    {
#line 1675
        .trainerName = _("VALERIE"),
#line 1676
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1677
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1678
F_TRAINER_FEMALE | 
#line 1679
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1680
        .doubleBattle = FALSE,
#line 1681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1683
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1684
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1687
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1688
        .trainerName = _("TASHA"),
#line 1689
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1690
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1691
F_TRAINER_FEMALE | 
#line 1692
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1693
        .doubleBattle = FALSE,
#line 1694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1696
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1698
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1697
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1700
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_2] =
    {
#line 1701
        .trainerName = _("VALERIE"),
#line 1702
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1703
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1704
F_TRAINER_FEMALE | 
#line 1705
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1706
        .doubleBattle = FALSE,
#line 1707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1709
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1711
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1710
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1713
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1715
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1714
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1717
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1719
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1718
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1721
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 1722
        .trainerName = _("CINDY"),
#line 1723
        .trainerClass = TRAINER_CLASS_LADY,
#line 1724
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1725
F_TRAINER_FEMALE | 
#line 1726
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1727
        .items = { ITEM_FULL_RESTORE },
#line 1728
        .doubleBattle = FALSE,
#line 1729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1731
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .heldItem = ITEM_NUGGET,
#line 1733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1732
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1735
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1736
        .trainerName = _("DAPHNE"),
#line 1737
        .trainerClass = TRAINER_CLASS_LADY,
#line 1738
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1739
F_TRAINER_FEMALE | 
#line 1740
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1741
        .items = { ITEM_FULL_RESTORE },
#line 1742
        .doubleBattle = FALSE,
#line 1743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1745
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1745
            .heldItem = ITEM_NUGGET,
#line 1747
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1746
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1748
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1753
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1753
            .heldItem = ITEM_NUGGET,
#line 1755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1754
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1756
                MOVE_ATTRACT,
                MOVE_SAFEGUARD,
                MOVE_TAKE_DOWN,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1761
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1762
        .trainerName = _("GRUNT"),
#line 1763
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1764
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1766
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1767
        .doubleBattle = FALSE,
#line 1768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1770
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1771
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1774
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1775
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1778
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1779
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1782
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1783
        .trainerName = _("BRIANNA"),
#line 1784
        .trainerClass = TRAINER_CLASS_LADY,
#line 1785
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1786
F_TRAINER_FEMALE | 
#line 1787
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1788
        .items = { ITEM_FULL_RESTORE },
#line 1789
        .doubleBattle = FALSE,
#line 1790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1792
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1792
            .heldItem = ITEM_NUGGET,
#line 1794
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1793
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1796
    [DIFFICULTY_NORMAL][TRAINER_NAOMI] =
    {
#line 1797
        .trainerName = _("NAOMI"),
#line 1798
        .trainerClass = TRAINER_CLASS_LADY,
#line 1799
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1800
F_TRAINER_FEMALE | 
#line 1801
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1802
        .items = { ITEM_FULL_RESTORE },
#line 1803
        .doubleBattle = FALSE,
#line 1804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1806
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1806
            .heldItem = ITEM_NUGGET,
#line 1808
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1807
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1810
    [DIFFICULTY_NORMAL][TRAINER_CINDY_2] =
    {
#line 1811
        .trainerName = _("CINDY"),
#line 1812
        .trainerClass = TRAINER_CLASS_LADY,
#line 1813
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1814
F_TRAINER_FEMALE | 
#line 1815
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1816
        .items = { ITEM_FULL_RESTORE },
#line 1817
        .doubleBattle = FALSE,
#line 1818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1820
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1820
            .heldItem = ITEM_NUGGET,
#line 1822
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1821
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1823
                MOVE_FURY_SWIPES,
                MOVE_MUD_SPORT,
                MOVE_ODOR_SLEUTH,
                MOVE_SAND_ATTACK,
            },
            },
        },
    },
#line 1828
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 1829
        .trainerName = _("MELISSA"),
#line 1830
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1831
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1832
F_TRAINER_FEMALE | 
#line 1833
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1834
        .doubleBattle = FALSE,
#line 1835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1837
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1838
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1841
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1842
        .trainerName = _("SHEILA"),
#line 1843
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1844
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1845
F_TRAINER_FEMALE | 
#line 1846
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1847
        .doubleBattle = FALSE,
#line 1848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1850
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1851
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1854
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1855
        .trainerName = _("SHIRLEY"),
#line 1856
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1857
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1858
F_TRAINER_FEMALE | 
#line 1859
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1860
        .doubleBattle = FALSE,
#line 1861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1863
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1864
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1867
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 1868
        .trainerName = _("JESSICA"),
#line 1869
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1870
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1871
F_TRAINER_FEMALE | 
#line 1872
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1873
        .doubleBattle = FALSE,
#line 1874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1876
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1877
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1879
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1884
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1885
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1887
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 1892
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1893
        .trainerName = _("CONNIE"),
#line 1894
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1895
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1896
F_TRAINER_FEMALE | 
#line 1897
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1898
        .doubleBattle = FALSE,
#line 1899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1901
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1902
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1905
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1906
        .trainerName = _("BRIDGET"),
#line 1907
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1908
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1909
F_TRAINER_FEMALE | 
#line 1910
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1911
        .doubleBattle = FALSE,
#line 1912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1914
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1915
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1918
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1919
        .trainerName = _("OLIVIA"),
#line 1920
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1921
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1922
F_TRAINER_FEMALE | 
#line 1923
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1924
        .doubleBattle = FALSE,
#line 1925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1927
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1928
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1930
                MOVE_IRON_DEFENSE,
                MOVE_WHIRLPOOL,
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1935
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1937
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1936
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1938
                MOVE_TAUNT,
                MOVE_CRABHAMMER,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 1942
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1944
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1943
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1945
                MOVE_UPROAR,
                MOVE_FURY_SWIPES,
                MOVE_FAKE_OUT,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 1950
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1951
        .trainerName = _("TIFFANY"),
#line 1952
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1953
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1954
F_TRAINER_FEMALE | 
#line 1955
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1956
        .doubleBattle = FALSE,
#line 1957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1959
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1961
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1960
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1963
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1965
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1964
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1967
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_2] =
    {
#line 1968
        .trainerName = _("JESSICA"),
#line 1969
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1970
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1971
F_TRAINER_FEMALE | 
#line 1972
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1973
        .doubleBattle = FALSE,
#line 1974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1976
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1978
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1977
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1979
                MOVE_BIND,
                MOVE_LICK,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 1984
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1986
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 1985
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1987
                MOVE_POISON_TAIL,
                MOVE_SCREECH,
                MOVE_GLARE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 1992
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 1993
        .trainerName = _("WINSTON"),
#line 1994
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1995
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1997
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1998
        .items = { ITEM_FULL_RESTORE },
#line 1999
        .doubleBattle = FALSE,
#line 2000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2002
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2002
            .heldItem = ITEM_NUGGET,
#line 2004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2003
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2006
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 2007
        .trainerName = _("MOLLIE"),
#line 2008
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 2009
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 2010
F_TRAINER_FEMALE | 
#line 2011
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2012
        .doubleBattle = FALSE,
#line 2013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2015
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2016
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2019
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2021
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2020
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2023
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 2024
        .trainerName = _("GARRET"),
#line 2025
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2026
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2028
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2029
        .items = { ITEM_FULL_RESTORE },
#line 2030
        .doubleBattle = FALSE,
#line 2031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2033
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2033
            .heldItem = ITEM_NUGGET,
#line 2035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2034
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2037
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_2] =
    {
#line 2038
        .trainerName = _("WINSTON"),
#line 2039
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 2040
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 2042
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2043
        .items = { ITEM_FULL_RESTORE },
#line 2044
        .doubleBattle = FALSE,
#line 2045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2047
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2047
            .heldItem = ITEM_NUGGET,
#line 2049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2048
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2050
                MOVE_FURY_SWIPES,
                MOVE_MUD_SPORT,
                MOVE_ODOR_SLEUTH,
                MOVE_SAND_ATTACK,
            },
            },
        },
    },
#line 2055
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 2056
        .trainerName = _("STEVE"),
#line 2057
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2058
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2060
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2061
        .doubleBattle = FALSE,
#line 2062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2064
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2065
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2068
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 2069
        .trainerName = _("THALIA"),
#line 2070
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 2071
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 2072
F_TRAINER_FEMALE | 
#line 2073
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 2074
        .doubleBattle = FALSE,
#line 2075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2077
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2078
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2081
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2082
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2085
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 2086
        .trainerName = _("MARK"),
#line 2087
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2088
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2090
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2091
        .doubleBattle = FALSE,
#line 2092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2094
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2095
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2098
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 2099
        .trainerName = _("GRUNT"),
#line 2100
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 2101
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 2102
F_TRAINER_FEMALE | 
#line 2103
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 2104
        .doubleBattle = FALSE,
#line 2105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2107
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2108
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2111
    [DIFFICULTY_NORMAL][TRAINER_STEVE_2] =
    {
#line 2112
        .trainerName = _("STEVE"),
#line 2113
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 2114
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 2116
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2117
        .doubleBattle = FALSE,
#line 2118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2120
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2122
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2121
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2124
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2126
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2125
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2128
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 2129
        .trainerName = _("LUIS"),
#line 2130
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2131
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2133
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2134
        .doubleBattle = FALSE,
#line 2135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2137
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2138
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2141
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 2142
        .trainerName = _("DOMINIK"),
#line 2143
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2144
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2146
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2147
        .doubleBattle = FALSE,
#line 2148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2150
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2151
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2154
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 2155
        .trainerName = _("DOUGLAS"),
#line 2156
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2157
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2159
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2160
        .doubleBattle = FALSE,
#line 2161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2163
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2165
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2164
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2167
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2169
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2168
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2171
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 2172
        .trainerName = _("DARRIN"),
#line 2173
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2174
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2176
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2177
        .doubleBattle = FALSE,
#line 2178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2180
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2182
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2181
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2184
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2186
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2185
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2188
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2190
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 2189
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2192
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 2193
        .trainerName = _("TONY"),
#line 2194
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2195
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2197
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2198
        .doubleBattle = FALSE,
#line 2199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2201
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2202
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2205
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 2206
        .trainerName = _("JEROME"),
#line 2207
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2208
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2210
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2211
        .doubleBattle = FALSE,
#line 2212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2214
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2215
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2218
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 2219
        .trainerName = _("MATTHEW"),
#line 2220
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2221
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2223
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2224
        .doubleBattle = FALSE,
#line 2225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2227
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2228
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2231
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 2232
        .trainerName = _("DAVID"),
#line 2233
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2234
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2236
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2237
        .doubleBattle = FALSE,
#line 2238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2240
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2241
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2244
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2245
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2248
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 2249
        .trainerName = _("SPENCER"),
#line 2250
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2251
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2253
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2254
        .doubleBattle = FALSE,
#line 2255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2257
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2258
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2261
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2262
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2265
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 2266
        .trainerName = _("ROLAND"),
#line 2267
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2268
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2270
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2271
        .doubleBattle = FALSE,
#line 2272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2274
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2275
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2278
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 2279
        .trainerName = _("NOLEN"),
#line 2280
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2281
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2283
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2284
        .doubleBattle = FALSE,
#line 2285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2287
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2288
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2291
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 2292
        .trainerName = _("STAN"),
#line 2293
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2294
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2296
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2297
        .doubleBattle = FALSE,
#line 2298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2300
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2301
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2304
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2305
        .trainerName = _("BARRY"),
#line 2306
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2307
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2309
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2310
        .doubleBattle = FALSE,
#line 2311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2313
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2314
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2317
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2318
        .trainerName = _("DEAN"),
#line 2319
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2320
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2322
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2323
        .doubleBattle = FALSE,
#line 2324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2326
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2327
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2330
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2331
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2334
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2335
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2338
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2339
        .trainerName = _("RODNEY"),
#line 2340
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2341
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2343
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2344
        .doubleBattle = FALSE,
#line 2345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2347
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2348
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2351
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2352
        .trainerName = _("RICHARD"),
#line 2353
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2354
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2356
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2357
        .doubleBattle = FALSE,
#line 2358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2360
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2361
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2364
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2365
        .trainerName = _("HERMAN"),
#line 2366
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2367
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2369
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2370
        .doubleBattle = FALSE,
#line 2371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2373
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2374
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2377
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2378
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2381
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2382
        .trainerName = _("SANTIAGO"),
#line 2383
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2384
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2386
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2387
        .doubleBattle = FALSE,
#line 2388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2390
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2391
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2394
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2395
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2398
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2399
        .trainerName = _("GILBERT"),
#line 2400
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2401
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2403
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2404
        .doubleBattle = FALSE,
#line 2405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2407
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2408
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2411
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2412
        .trainerName = _("FRANKLIN"),
#line 2413
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2414
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2416
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2417
        .doubleBattle = FALSE,
#line 2418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2420
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2421
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2424
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2425
        .trainerName = _("KEVIN"),
#line 2426
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2427
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2429
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2430
        .doubleBattle = FALSE,
#line 2431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2433
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2434
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2437
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2438
        .trainerName = _("JACK"),
#line 2439
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2440
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2442
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2443
        .doubleBattle = FALSE,
#line 2444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2446
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2447
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2450
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2451
        .trainerName = _("DUDLEY"),
#line 2452
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2453
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2455
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2456
        .doubleBattle = FALSE,
#line 2457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2459
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2460
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2463
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2464
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2467
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2468
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2471
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2472
        .trainerName = _("CHAD"),
#line 2473
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2474
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2476
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2477
        .doubleBattle = FALSE,
#line 2478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2480
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2481
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2484
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2485
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2488
    [DIFFICULTY_NORMAL][TRAINER_TONY_2] =
    {
#line 2489
        .trainerName = _("TONY"),
#line 2490
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2491
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2493
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2494
        .doubleBattle = FALSE,
#line 2495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2497
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2499
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2498
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2501
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2503
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2502
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2505
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2506
        .trainerName = _("TAKAO"),
#line 2507
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2508
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2510
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2511
        .doubleBattle = FALSE,
#line 2512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2514
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2515
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2518
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2519
        .trainerName = _("HITOSHI"),
#line 2520
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2521
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2523
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2524
        .doubleBattle = FALSE,
#line 2525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2527
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2528
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2531
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2533
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2532
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2535
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2536
        .trainerName = _("KIYO"),
#line 2537
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2538
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2540
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2541
        .doubleBattle = FALSE,
#line 2542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2544
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2545
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2548
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2549
        .trainerName = _("KOICHI"),
#line 2550
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2551
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2553
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2554
        .doubleBattle = FALSE,
#line 2555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2557
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2558
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2561
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2562
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2565
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 2566
        .trainerName = _("NOB"),
#line 2567
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2568
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2570
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2571
        .doubleBattle = FALSE,
#line 2572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2574
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2576
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2575
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2578
    [DIFFICULTY_NORMAL][TRAINER_NOB_2] =
    {
#line 2579
        .trainerName = _("NOB"),
#line 2580
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2581
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2583
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2584
        .doubleBattle = FALSE,
#line 2585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 2587
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2589
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2588
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2591
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2593
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2592
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2595
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2597
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2596
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2599
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2599
            .heldItem = ITEM_BLACK_BELT,
#line 2601
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 2600
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2603
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2604
        .trainerName = _("YUJI"),
#line 2605
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2606
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2608
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2609
        .doubleBattle = FALSE,
#line 2610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2612
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2614
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2613
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2616
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2618
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2617
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2620
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2621
        .trainerName = _("DAISUKE"),
#line 2622
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2623
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2625
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2626
        .doubleBattle = FALSE,
#line 2627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2629
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2631
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2630
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2633
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2634
        .trainerName = _("ATSUSHI"),
#line 2635
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2636
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2638
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2639
        .doubleBattle = FALSE,
#line 2640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2642
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2644
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2643
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2646
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2647
        .trainerName = _("KIRK"),
#line 2648
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2649
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2651
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2652
        .doubleBattle = FALSE,
#line 2653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2655
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2657
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2656
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2658
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SPARK,
                MOVE_LEER,
            },
            },
            {
#line 2663
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2665
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2664
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2666
                MOVE_CHARGE,
                MOVE_SHOCK_WAVE,
                MOVE_SCREECH,
            },
            },
        },
    },
#line 2670
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2671
        .trainerName = _("GRUNT"),
#line 2672
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2673
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2674
F_TRAINER_FEMALE | 
#line 2675
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2676
        .doubleBattle = FALSE,
#line 2677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2679
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2680
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2683
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2684
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2687
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2688
        .trainerName = _("GRUNT"),
#line 2689
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2690
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2692
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2693
        .doubleBattle = FALSE,
#line 2694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2696
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2697
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2700
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2701
        .trainerName = _("SHAWN"),
#line 2702
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2703
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2705
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2706
        .doubleBattle = FALSE,
#line 2707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2709
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2711
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2710
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2713
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2715
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2714
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2717
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 2718
        .trainerName = _("FERNANDO"),
#line 2719
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2720
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2722
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2723
        .doubleBattle = FALSE,
#line 2724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2726
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2727
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2730
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2731
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2734
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 2735
        .trainerName = _("DALTON"),
#line 2736
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2737
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2740
        .doubleBattle = FALSE,
#line 2741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2743
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2744
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2747
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2748
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2751
    [DIFFICULTY_NORMAL][TRAINER_DALTON_2] =
    {
#line 2752
        .trainerName = _("DALTON"),
#line 2753
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2754
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2756
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2757
        .doubleBattle = FALSE,
#line 2758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2760
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2762
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2761
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2764
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2766
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2765
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2768
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2770
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2769
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2772
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2773
        .trainerName = _("COLE"),
#line 2774
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2775
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2777
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2778
        .doubleBattle = FALSE,
#line 2779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2781
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2782
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2785
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2786
        .trainerName = _("JEFF"),
#line 2787
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2788
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2790
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2791
        .doubleBattle = FALSE,
#line 2792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2794
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2796
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2795
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2798
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2800
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2799
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2802
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2803
        .trainerName = _("AXLE"),
#line 2804
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2805
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2807
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2808
        .doubleBattle = FALSE,
#line 2809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2811
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2813
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2812
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2815
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2816
        .trainerName = _("JACE"),
#line 2817
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2818
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2820
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2821
        .doubleBattle = FALSE,
#line 2822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2824
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2826
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2825
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2828
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2829
        .trainerName = _("KEEGAN"),
#line 2830
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2831
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2833
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2834
        .doubleBattle = FALSE,
#line 2835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2837
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2839
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2838
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2841
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
    {
#line 2842
        .trainerName = _("BERNIE"),
#line 2843
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2844
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2846
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2847
        .doubleBattle = FALSE,
#line 2848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2850
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2851
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2854
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2855
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2858
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_2] =
    {
#line 2859
        .trainerName = _("BERNIE"),
#line 2860
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 2861
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 2863
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2864
        .doubleBattle = FALSE,
#line 2865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2867
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2869
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2868
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2871
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 2872
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2875
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2876
        .trainerName = _("DREW"),
#line 2877
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2878
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2880
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2881
        .doubleBattle = FALSE,
#line 2882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2884
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2885
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2887
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
        },
    },
#line 2892
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2893
        .trainerName = _("BEAU"),
#line 2894
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2895
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2897
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2898
        .doubleBattle = FALSE,
#line 2899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2901
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2902
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2904
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 2909
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2910
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2912
                MOVE_POISON_STING,
                MOVE_SAND_ATTACK,
                MOVE_SCRATCH,
                MOVE_DIG,
            },
            },
            {
#line 2917
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2918
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2920
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 2925
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2926
        .trainerName = _("LARRY"),
#line 2927
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2928
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2930
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2931
        .doubleBattle = FALSE,
#line 2932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2934
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2935
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2938
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2939
        .trainerName = _("SHANE"),
#line 2940
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2941
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2943
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2944
        .doubleBattle = FALSE,
#line 2945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2947
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2948
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2951
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2952
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2955
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2956
        .trainerName = _("JUSTIN"),
#line 2957
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2958
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2960
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2961
        .doubleBattle = FALSE,
#line 2962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2964
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2965
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2968
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 2969
        .trainerName = _("ETHAN"),
#line 2970
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2971
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2974
        .doubleBattle = FALSE,
#line 2975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2977
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2978
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2981
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2982
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2985
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2986
        .trainerName = _("AUTUMN"),
#line 2987
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2988
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2989
F_TRAINER_FEMALE | 
#line 2990
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2991
        .doubleBattle = FALSE,
#line 2992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2994
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2995
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2998
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2999
        .trainerName = _("TRAVIS"),
#line 3000
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3001
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3003
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3004
        .doubleBattle = FALSE,
#line 3005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3007
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3008
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3011
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_2] =
    {
#line 3012
        .trainerName = _("ETHAN"),
#line 3013
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 3014
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 3016
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3017
        .doubleBattle = FALSE,
#line 3018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3020
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3022
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3021
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3024
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3026
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3025
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3028
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3030
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3029
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3032
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 3033
        .trainerName = _("BRENT"),
#line 3034
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3035
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3037
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3038
        .doubleBattle = FALSE,
#line 3039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3041
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3043
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3042
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3045
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 3046
        .trainerName = _("DONALD"),
#line 3047
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3048
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3050
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3051
        .doubleBattle = FALSE,
#line 3052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3054
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3055
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3058
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3060
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3059
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3062
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3064
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3063
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3066
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 3067
        .trainerName = _("TAYLOR"),
#line 3068
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3069
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3071
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3072
        .doubleBattle = FALSE,
#line 3073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3075
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3076
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3079
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3081
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3080
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3083
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3084
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3087
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 3088
        .trainerName = _("JEFFREY"),
#line 3089
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3090
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3092
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3093
        .doubleBattle = FALSE,
#line 3094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3096
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3097
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3100
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3101
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3104
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3105
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3108
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 3109
        .trainerName = _("DEREK"),
#line 3110
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3111
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3113
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3114
        .doubleBattle = FALSE,
#line 3115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3117
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3119
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3118
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3121
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3123
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3122
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3125
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_2] =
    {
#line 3126
        .trainerName = _("JEFFREY"),
#line 3127
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 3128
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 3130
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 3131
        .doubleBattle = FALSE,
#line 3132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3134
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3135
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3138
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3140
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3139
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3142
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3144
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3143
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3146
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3146
            .heldItem = ITEM_SILVER_POWDER,
#line 3148
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3147
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3150
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3152
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3151
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3154
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 3155
        .trainerName = _("EDWARD"),
#line 3156
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3157
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3159
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3160
        .doubleBattle = FALSE,
#line 3161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3163
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3164
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3166
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3168
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 3169
        .trainerName = _("PRESTON"),
#line 3170
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3171
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3173
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3174
        .doubleBattle = FALSE,
#line 3175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3177
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3179
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3178
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3181
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 3182
        .trainerName = _("VIRGIL"),
#line 3183
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3184
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3186
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3187
        .doubleBattle = FALSE,
#line 3188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3190
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3192
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3191
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3194
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 3195
        .trainerName = _("BLAKE"),
#line 3196
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3197
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3199
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3200
        .doubleBattle = FALSE,
#line 3201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3203
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3205
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3204
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3207
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 3208
        .trainerName = _("WILLIAM"),
#line 3209
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3210
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3212
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3213
        .doubleBattle = FALSE,
#line 3214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3216
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3217
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3220
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3221
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3224
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3225
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3228
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 3229
        .trainerName = _("JOSHUA"),
#line 3230
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3231
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3233
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3234
        .doubleBattle = FALSE,
#line 3235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3237
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3238
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3241
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3242
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3245
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 3246
        .trainerName = _("CAMERON"),
#line 3247
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3248
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3250
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3251
        .doubleBattle = FALSE,
#line 3252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3254
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3255
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3258
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_2] =
    {
#line 3259
        .trainerName = _("CAMERON"),
#line 3260
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3261
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 3263
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3264
        .doubleBattle = FALSE,
#line 3265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3267
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3269
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3268
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3271
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3273
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3272
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3275
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 3276
        .trainerName = _("JACLYN"),
#line 3277
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3278
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3279
F_TRAINER_FEMALE | 
#line 3280
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3281
        .doubleBattle = FALSE,
#line 3282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3284
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3285
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3287
                MOVE_HIDDEN_POWER,
            },
            },
        },
    },
#line 3289
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 3290
        .trainerName = _("HANNAH"),
#line 3291
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3292
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3293
F_TRAINER_FEMALE | 
#line 3294
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3295
        .doubleBattle = FALSE,
#line 3296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3298
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3300
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3299
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3302
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 3303
        .trainerName = _("SAMANTHA"),
#line 3304
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3305
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3306
F_TRAINER_FEMALE | 
#line 3307
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3308
        .doubleBattle = FALSE,
#line 3309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3311
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3313
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3312
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3315
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 3316
        .trainerName = _("MAURA"),
#line 3317
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3318
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3319
F_TRAINER_FEMALE | 
#line 3320
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3321
        .doubleBattle = FALSE,
#line 3322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3324
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3326
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3325
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3328
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 3329
        .trainerName = _("KAYLA"),
#line 3330
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3331
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3332
F_TRAINER_FEMALE | 
#line 3333
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3334
        .doubleBattle = FALSE,
#line 3335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3337
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3338
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3341
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3342
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3345
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3346
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3349
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 3350
        .trainerName = _("ALEXIS"),
#line 3351
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3352
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3353
F_TRAINER_FEMALE | 
#line 3354
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3355
        .doubleBattle = FALSE,
#line 3356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3358
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3359
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3362
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3363
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3366
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 3367
        .trainerName = _("JACKI"),
#line 3368
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3369
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3370
F_TRAINER_FEMALE | 
#line 3371
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3372
        .doubleBattle = FALSE,
#line 3373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3375
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3376
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3379
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3380
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3383
    [DIFFICULTY_NORMAL][TRAINER_JACKI_2] =
    {
#line 3384
        .trainerName = _("JACKI"),
#line 3385
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 3386
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 3387
F_TRAINER_FEMALE | 
#line 3388
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3389
        .doubleBattle = FALSE,
#line 3390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3392
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3394
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3393
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3396
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3398
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3397
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3400
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 3401
        .trainerName = _("WALTER"),
#line 3402
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3403
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3405
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3406
        .doubleBattle = FALSE,
#line 3407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3409
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3410
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3413
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 3414
        .trainerName = _("MICAH"),
#line 3415
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3416
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3418
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3419
        .doubleBattle = FALSE,
#line 3420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3422
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3423
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3426
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3427
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3430
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 3431
        .trainerName = _("THOMAS"),
#line 3432
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3433
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3435
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3436
        .doubleBattle = FALSE,
#line 3437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3439
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3440
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3443
    [DIFFICULTY_NORMAL][TRAINER_WALTER_2] =
    {
#line 3444
        .trainerName = _("WALTER"),
#line 3445
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 3446
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3448
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 3449
        .doubleBattle = FALSE,
#line 3450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3452
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3454
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3453
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_ODOR_SLEUTH,
                MOVE_FURY_SWIPES,
            },
            },
            {
#line 3460
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3461
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3463
                MOVE_FURY_SWIPES,
                MOVE_DISABLE,
                MOVE_CONFUSION,
                MOVE_PSYCH_UP,
            },
            },
            {
#line 3468
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 3469
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3471
                MOVE_QUICK_ATTACK,
                MOVE_SPARK,
                MOVE_ODOR_SLEUTH,
                MOVE_ROAR,
            },
            },
        },
    },
#line 3476
    [DIFFICULTY_NORMAL][TRAINER_SIDNEY] =
    {
#line 3477
        .trainerName = _("SIDNEY"),
#line 3478
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3479
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 3481
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3482
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3483
        .doubleBattle = FALSE,
#line 3484
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_FORCE_SETUP_FIRST_TURN,
#line 3485
        .mugshotColor = MUGSHOT_COLOR_PURPLE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3487
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3489
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3488
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3490
                MOVE_ROAR,
                MOVE_DOUBLE_EDGE,
                MOVE_SAND_ATTACK,
                MOVE_CRUNCH,
            },
            },
            {
#line 3495
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3497
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3496
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3498
                MOVE_TORMENT,
                MOVE_DOUBLE_TEAM,
                MOVE_SWAGGER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 3503
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3505
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3504
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3506
                MOVE_LEECH_SEED,
                MOVE_FEINT_ATTACK,
                MOVE_NEEDLE_ARM,
                MOVE_COTTON_SPORE,
            },
            },
            {
#line 3511
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3513
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3512
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3514
                MOVE_SURF,
                MOVE_SWORDS_DANCE,
                MOVE_STRENGTH,
                MOVE_FACADE,
            },
            },
            {
#line 3519
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3519
            .heldItem = ITEM_SITRUS_BERRY,
#line 3521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3520
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3522
                MOVE_AERIAL_ACE,
                MOVE_ROCK_SLIDE,
                MOVE_SWORDS_DANCE,
                MOVE_SLASH,
            },
            },
        },
    },
#line 3527
    [DIFFICULTY_NORMAL][TRAINER_PHOEBE] =
    {
#line 3528
        .trainerName = _("PHOEBE"),
#line 3529
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3530
        .trainerPic = TRAINER_PIC_ELITE_FOUR_PHOEBE,
        .encounterMusic_gender =
#line 3531
F_TRAINER_FEMALE | 
#line 3532
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3533
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3534
        .doubleBattle = FALSE,
#line 3535
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3536
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3538
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3540
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3539
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3541
                MOVE_SHADOW_PUNCH,
                MOVE_CONFUSE_RAY,
                MOVE_CURSE,
                MOVE_PROTECT,
            },
            },
            {
#line 3546
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3547
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3549
                MOVE_SHADOW_BALL,
                MOVE_GRUDGE,
                MOVE_WILL_O_WISP,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3554
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3556
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3555
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3557
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_TEAM,
                MOVE_NIGHT_SHADE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3562
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3564
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3563
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3565
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_FACADE,
            },
            },
            {
#line 3570
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .heldItem = ITEM_SITRUS_BERRY,
#line 3572
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3573
                MOVE_SHADOW_BALL,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3578
    [DIFFICULTY_NORMAL][TRAINER_GLACIA] =
    {
#line 3579
        .trainerName = _("GLACIA"),
#line 3580
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3581
        .trainerPic = TRAINER_PIC_ELITE_FOUR_GLACIA,
        .encounterMusic_gender =
#line 3582
F_TRAINER_FEMALE | 
#line 3583
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3584
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3585
        .doubleBattle = FALSE,
#line 3586
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3587
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3589
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3591
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3590
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3592
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_HAIL,
                MOVE_ICE_BALL,
            },
            },
            {
#line 3597
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3599
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3598
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_LIGHT_SCREEN,
                MOVE_CRUNCH,
                MOVE_ICY_WIND,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3605
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3607
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3606
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3608
                MOVE_ATTRACT,
                MOVE_DOUBLE_EDGE,
                MOVE_HAIL,
                MOVE_BLIZZARD,
            },
            },
            {
#line 3613
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3615
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3614
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3616
                MOVE_SHADOW_BALL,
                MOVE_EXPLOSION,
                MOVE_HAIL,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3621
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3621
            .heldItem = ITEM_SITRUS_BERRY,
#line 3623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3622
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3624
                MOVE_SURF,
                MOVE_BODY_SLAM,
                MOVE_ICE_BEAM,
                MOVE_SHEER_COLD,
            },
            },
        },
    },
#line 3629
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3630
        .trainerName = _("DRAKE"),
#line 3631
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3632
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3634
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3635
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 3636
        .doubleBattle = FALSE,
#line 3637
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 3638
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3640
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3641
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3643
                MOVE_ROCK_TOMB,
                MOVE_DRAGON_CLAW,
                MOVE_PROTECT,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 3648
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3650
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3649
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3651
                MOVE_DOUBLE_EDGE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3656
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3657
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3659
                MOVE_SMOKESCREEN,
                MOVE_DRAGON_DANCE,
                MOVE_SURF,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 3664
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3666
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3665
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3667
                MOVE_FLAMETHROWER,
                MOVE_CRUNCH,
                MOVE_DRAGON_BREATH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3672
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .heldItem = ITEM_SITRUS_BERRY,
#line 3674
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3673
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3675
                MOVE_FLAMETHROWER,
                MOVE_DRAGON_CLAW,
                MOVE_ROCK_SLIDE,
                MOVE_CRUNCH,
            },
            },
        },
    },
#line 3680
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 3681
        .trainerName = _("ROXANNE"),
#line 3682
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3683
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 3684
F_TRAINER_FEMALE | 
#line 3685
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3686
        .items = { ITEM_POTION, ITEM_POTION },
#line 3687
        .doubleBattle = FALSE,
#line 3688
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3690
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3691
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3698
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3700
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3699
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3701
                MOVE_TACKLE,
                MOVE_DEFENSE_CURL,
                MOVE_ROCK_THROW,
                MOVE_ROCK_TOMB,
            },
            },
            {
#line 3706
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3706
            .heldItem = ITEM_ORAN_BERRY,
#line 3708
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3707
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3709
                MOVE_BLOCK,
                MOVE_HARDEN,
                MOVE_TACKLE,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 3714
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 3715
        .trainerName = _("BRAWLY"),
#line 3716
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3717
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3719
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3720
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 3721
        .doubleBattle = FALSE,
#line 3722
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3724
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3725
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3727
                MOVE_KARATE_CHOP,
                MOVE_LOW_KICK,
                MOVE_SEISMIC_TOSS,
                MOVE_BULK_UP,
            },
            },
            {
#line 3732
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3733
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3735
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_BULK_UP,
            },
            },
            {
#line 3740
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3740
            .heldItem = ITEM_SITRUS_BERRY,
#line 3742
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3741
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3743
                MOVE_ARM_THRUST,
                MOVE_VITAL_THROW,
                MOVE_REVERSAL,
                MOVE_BULK_UP,
            },
            },
        },
    },
#line 3748
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_1] =
    {
#line 3749
        .trainerName = _("WATTSON"),
#line 3750
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3751
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3754
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 3755
        .doubleBattle = FALSE,
#line 3756
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3758
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3759
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3761
                MOVE_ROLLOUT,
                MOVE_SPARK,
                MOVE_SELF_DESTRUCT,
                MOVE_SHOCK_WAVE,
            },
            },
            {
#line 3766
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3768
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3767
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3769
                MOVE_SHOCK_WAVE,
                MOVE_LEER,
                MOVE_QUICK_ATTACK,
                MOVE_HOWL,
            },
            },
            {
#line 3774
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3776
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3775
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3777
                MOVE_SUPERSONIC,
                MOVE_SHOCK_WAVE,
                MOVE_THUNDER_WAVE,
                MOVE_SONIC_BOOM,
            },
            },
            {
#line 3782
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3782
            .heldItem = ITEM_SITRUS_BERRY,
#line 3784
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3783
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3785
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
                MOVE_SHOCK_WAVE,
                MOVE_HOWL,
            },
            },
        },
    },
#line 3790
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 3791
        .trainerName = _("FLANNERY"),
#line 3792
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3793
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3794
F_TRAINER_FEMALE | 
#line 3795
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3796
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3797
        .doubleBattle = FALSE,
#line 3798
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3800
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3802
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3801
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3803
                MOVE_OVERHEAT,
                MOVE_TAKE_DOWN,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3808
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3810
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3809
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3811
                MOVE_OVERHEAT,
                MOVE_SMOG,
                MOVE_LIGHT_SCREEN,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 3816
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3818
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3817
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3819
                MOVE_OVERHEAT,
                MOVE_TACKLE,
                MOVE_SUNNY_DAY,
                MOVE_ATTRACT,
            },
            },
            {
#line 3824
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .heldItem = ITEM_WHITE_HERB,
#line 3826
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3825
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3827
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_BODY_SLAM,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 3832
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 3833
        .trainerName = _("NORMAN"),
#line 3834
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3835
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 3837
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3838
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3839
        .doubleBattle = FALSE,
#line 3840
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3842
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3844
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3843
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3845
                MOVE_TEETER_DANCE,
                MOVE_PSYBEAM,
                MOVE_FACADE,
                MOVE_ENCORE,
            },
            },
            {
#line 3850
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3851
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3853
                MOVE_SLASH,
                MOVE_FACADE,
                MOVE_ENCORE,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 3858
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3859
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3861
                MOVE_SLASH,
                MOVE_BELLY_DRUM,
                MOVE_FACADE,
                MOVE_HEADBUTT,
            },
            },
            {
#line 3866
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3866
            .heldItem = ITEM_SITRUS_BERRY,
#line 3868
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3867
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3869
                MOVE_COUNTER,
                MOVE_YAWN,
                MOVE_FACADE,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 3874
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 3875
        .trainerName = _("WINONA"),
#line 3876
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3877
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3878
F_TRAINER_FEMALE | 
#line 3879
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3880
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3881
        .doubleBattle = FALSE,
#line 3882
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3884
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3886
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3885
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3887
                MOVE_PERISH_SONG,
                MOVE_MIRROR_MOVE,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3892
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3894
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3893
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3895
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 3900
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3902
            .iv = TRAINER_PARTY_IVS(25, 25, 25, 25, 25, 25),
#line 3901
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3903
                MOVE_WATER_GUN,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3908
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3910
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3909
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_SAND_ATTACK,
                MOVE_FURY_ATTACK,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3916
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .heldItem = ITEM_ORAN_BERRY,
#line 3918
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3917
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3919
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
                MOVE_AERIAL_ACE,
            },
            },
        },
    },
#line 3924
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 3925
        .trainerName = _("TATE&LIZA"),
#line 3926
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3927
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 3929
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3930
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3931
        .doubleBattle = TRUE,
#line 3932
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3934
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3936
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3935
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3937
                MOVE_EARTHQUAKE,
                MOVE_ANCIENT_POWER,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 3942
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3944
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3943
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3945
                MOVE_PSYCHIC,
                MOVE_SUNNY_DAY,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3950
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .heldItem = ITEM_SITRUS_BERRY,
#line 3952
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3951
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3953
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
                MOVE_HYPNOSIS,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3958
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3958
            .heldItem = ITEM_SITRUS_BERRY,
#line 3960
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3959
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3961
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 3966
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 3967
        .trainerName = _("JUAN"),
#line 3968
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3969
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3971
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3972
        .items = { ITEM_HYPER_POTION, ITEM_HYPER_POTION },
#line 3973
        .doubleBattle = FALSE,
#line 3974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3977
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3979
                MOVE_WATER_PULSE,
                MOVE_ATTRACT,
                MOVE_SWEET_KISS,
                MOVE_FLAIL,
            },
            },
            {
#line 3984
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3985
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3987
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_AMNESIA,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3992
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3994
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3993
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3995
                MOVE_ENCORE,
                MOVE_BODY_SLAM,
                MOVE_AURORA_BEAM,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 4000
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4001
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4003
                MOVE_WATER_PULSE,
                MOVE_CRABHAMMER,
                MOVE_TAUNT,
                MOVE_LEER,
            },
            },
            {
#line 4008
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .heldItem = ITEM_CHESTO_BERRY,
#line 4010
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4009
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4011
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 4016
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 4017
        .trainerName = _("JERRY"),
#line 4018
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4019
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4021
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4022
        .doubleBattle = FALSE,
#line 4023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4025
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4027
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4026
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4029
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 4030
        .trainerName = _("TED"),
#line 4031
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4032
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4034
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4035
        .doubleBattle = FALSE,
#line 4036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4038
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4039
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4042
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 4043
        .trainerName = _("PAUL"),
#line 4044
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4045
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4047
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4048
        .doubleBattle = FALSE,
#line 4049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4051
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4053
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4052
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4055
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4057
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4056
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4059
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4061
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4060
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4063
    [DIFFICULTY_NORMAL][TRAINER_JERRY_2] =
    {
#line 4064
        .trainerName = _("JERRY"),
#line 4065
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4066
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4068
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4069
        .doubleBattle = FALSE,
#line 4070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4072
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4074
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4073
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4076
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4077
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4080
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4081
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4084
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 4085
        .trainerName = _("KAREN"),
#line 4086
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4087
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4088
F_TRAINER_FEMALE | 
#line 4089
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4090
        .doubleBattle = FALSE,
#line 4091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4093
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4095
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4094
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4097
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 4098
        .trainerName = _("GEORGIA"),
#line 4099
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4100
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4101
F_TRAINER_FEMALE | 
#line 4102
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4103
        .doubleBattle = FALSE,
#line 4104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4106
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4108
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4107
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4110
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4112
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4111
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4114
    [DIFFICULTY_NORMAL][TRAINER_KAREN_2] =
    {
#line 4115
        .trainerName = _("KAREN"),
#line 4116
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4117
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4118
F_TRAINER_FEMALE | 
#line 4119
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4120
        .doubleBattle = FALSE,
#line 4121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4123
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4125
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4124
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4127
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4129
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4128
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4131
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 4132
        .trainerName = _("KATE & JOY"),
#line 4133
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4134
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4136
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4137
        .doubleBattle = TRUE,
#line 4138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4140
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4141
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4143
                MOVE_HYPNOSIS,
                MOVE_PSYBEAM,
                MOVE_DIZZY_PUNCH,
                MOVE_TEETER_DANCE,
            },
            },
            {
#line 4148
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4149
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4151
                MOVE_FOCUS_PUNCH,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_FEINT_ATTACK,
            },
            },
        },
    },
#line 4156
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 4157
        .trainerName = _("ANNA & MEG"),
#line 4158
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4159
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4161
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4162
        .doubleBattle = TRUE,
#line 4163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4165
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4166
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4168
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4173
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4174
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4176
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4180
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_2] =
    {
#line 4181
        .trainerName = _("ANNA & MEG"),
#line 4182
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4183
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4185
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4186
        .doubleBattle = TRUE,
#line 4187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4189
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4191
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4190
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4192
                MOVE_GROWL,
                MOVE_TAIL_WHIP,
                MOVE_HEADBUTT,
                MOVE_ODOR_SLEUTH,
            },
            },
            {
#line 4197
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4199
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4198
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4200
                MOVE_TACKLE,
                MOVE_FOCUS_ENERGY,
                MOVE_ARM_THRUST,
            },
            },
        },
    },
#line 4204
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 4205
        .trainerName = _("VICTOR"),
#line 4206
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4207
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4209
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4210
        .doubleBattle = FALSE,
#line 4211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4213
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .heldItem = ITEM_ORAN_BERRY,
#line 4215
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4214
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4217
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4217
            .heldItem = ITEM_ORAN_BERRY,
#line 4219
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4218
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4221
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 4222
        .trainerName = _("MIGUEL"),
#line 4223
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4224
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4226
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4227
        .doubleBattle = FALSE,
#line 4228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4230
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .heldItem = ITEM_ORAN_BERRY,
#line 4232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4231
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4234
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 4235
        .trainerName = _("COLTON"),
#line 4236
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4237
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4239
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4240
        .doubleBattle = FALSE,
#line 4241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4243
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4243
            .heldItem = ITEM_ORAN_BERRY,
#line 4245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4244
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4246
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4251
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .heldItem = ITEM_ORAN_BERRY,
#line 4253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4252
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4254
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4259
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .heldItem = ITEM_ORAN_BERRY,
#line 4261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4260
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4262
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4267
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4267
            .heldItem = ITEM_ORAN_BERRY,
#line 4269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4268
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4270
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4275
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .heldItem = ITEM_ORAN_BERRY,
#line 4277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4276
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4278
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4283
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4283
            .heldItem = ITEM_ORAN_BERRY,
#line 4285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4284
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4286
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4291
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_2] =
    {
#line 4292
        .trainerName = _("MIGUEL"),
#line 4293
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4294
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 4296
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4297
        .doubleBattle = FALSE,
#line 4298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4300
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .heldItem = ITEM_SITRUS_BERRY,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4304
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4305
        .trainerName = _("VICTORIA"),
#line 4306
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4307
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4308
F_TRAINER_FEMALE | 
#line 4309
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4310
        .doubleBattle = FALSE,
#line 4311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4313
            .heldItem = ITEM_ORAN_BERRY,
#line 4315
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4314
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4317
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 4318
        .trainerName = _("VANESSA"),
#line 4319
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4320
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4321
F_TRAINER_FEMALE | 
#line 4322
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4323
        .doubleBattle = FALSE,
#line 4324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4326
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4326
            .heldItem = ITEM_ORAN_BERRY,
#line 4328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4327
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4330
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4331
        .trainerName = _("BETHANY"),
#line 4332
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4333
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4334
F_TRAINER_FEMALE | 
#line 4335
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4336
        .doubleBattle = FALSE,
#line 4337
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4339
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4339
            .heldItem = ITEM_ORAN_BERRY,
#line 4341
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4340
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4343
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .heldItem = ITEM_ORAN_BERRY,
#line 4345
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4344
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4347
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .heldItem = ITEM_ORAN_BERRY,
#line 4349
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4348
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4351
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 4352
        .trainerName = _("ISABEL"),
#line 4353
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4354
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4355
F_TRAINER_FEMALE | 
#line 4356
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4357
        .doubleBattle = FALSE,
#line 4358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4360
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4360
            .heldItem = ITEM_ORAN_BERRY,
#line 4362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4361
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4364
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4364
            .heldItem = ITEM_ORAN_BERRY,
#line 4366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4365
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4368
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_2] =
    {
#line 4369
        .trainerName = _("ISABEL"),
#line 4370
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4371
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4372
F_TRAINER_FEMALE | 
#line 4373
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4374
        .doubleBattle = FALSE,
#line 4375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4377
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4377
            .heldItem = ITEM_SITRUS_BERRY,
#line 4379
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4378
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4381
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4381
            .heldItem = ITEM_SITRUS_BERRY,
#line 4383
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4382
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4385
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 4386
        .trainerName = _("TIMOTHY"),
#line 4387
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4388
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4390
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4391
        .doubleBattle = FALSE,
#line 4392
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4394
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4396
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4395
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4398
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_2] =
    {
#line 4399
        .trainerName = _("TIMOTHY"),
#line 4400
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4401
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4403
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4404
        .doubleBattle = FALSE,
#line 4405
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4407
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4409
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4408
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4410
                MOVE_ARM_THRUST,
                MOVE_BELLY_DRUM,
                MOVE_SAND_ATTACK,
                MOVE_DIG,
            },
            },
        },
    },
#line 4415
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4416
        .trainerName = _("VICKY"),
#line 4417
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4418
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4419
F_TRAINER_FEMALE | 
#line 4420
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4421
        .doubleBattle = FALSE,
#line 4422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4424
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4426
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4425
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4427
                MOVE_HIGH_JUMP_KICK,
                MOVE_MEDITATE,
                MOVE_CONFUSION,
                MOVE_DETECT,
            },
            },
        },
    },
#line 4432
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 4433
        .trainerName = _("SHELBY"),
#line 4434
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4435
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4436
F_TRAINER_FEMALE | 
#line 4437
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4438
        .doubleBattle = FALSE,
#line 4439
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4441
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4443
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4442
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4445
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4447
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4446
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4449
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_2] =
    {
#line 4450
        .trainerName = _("SHELBY"),
#line 4451
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4452
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4453
F_TRAINER_FEMALE | 
#line 4454
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4455
        .doubleBattle = FALSE,
#line 4456
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4458
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4460
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4459
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4462
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4464
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4463
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4466
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 4467
        .trainerName = _("CALVIN"),
#line 4468
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4469
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4471
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4472
        .doubleBattle = FALSE,
#line 4473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4475
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4476
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4479
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4480
        .trainerName = _("BILLY"),
#line 4481
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4482
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4484
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4485
        .doubleBattle = FALSE,
#line 4486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4488
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4489
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4492
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4493
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4496
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4497
        .trainerName = _("JOSH"),
#line 4498
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4499
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4501
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4502
        .doubleBattle = FALSE,
#line 4503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4505
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4507
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4506
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4508
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4510
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4511
        .trainerName = _("TOMMY"),
#line 4512
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4513
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4515
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4516
        .doubleBattle = FALSE,
#line 4517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4519
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4521
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4520
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4523
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4525
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4524
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4527
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4528
        .trainerName = _("JOEY"),
#line 4529
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4530
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4532
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4533
        .doubleBattle = FALSE,
#line 4534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4536
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4537
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4540
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4541
        .trainerName = _("BEN"),
#line 4542
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4543
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4545
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4546
        .doubleBattle = FALSE,
#line 4547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4549
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4551
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4550
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4552
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4557
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4559
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4558
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4560
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4565
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4566
        .trainerName = _("QUINCY"),
#line 4567
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4570
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4571
        .items = { ITEM_FULL_RESTORE },
#line 4572
        .doubleBattle = FALSE,
#line 4573
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4575
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4577
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4576
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4578
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4583
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4584
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4586
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4591
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4592
        .trainerName = _("KATELYNN"),
#line 4593
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4594
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4595
F_TRAINER_FEMALE | 
#line 4596
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4597
        .items = { ITEM_FULL_RESTORE },
#line 4598
        .doubleBattle = FALSE,
#line 4599
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4601
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4602
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4604
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4609
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4611
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4610
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4612
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4617
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4618
        .trainerName = _("JAYLEN"),
#line 4619
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4620
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4622
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4623
        .doubleBattle = FALSE,
#line 4624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4626
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4627
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4630
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4631
        .trainerName = _("DILLON"),
#line 4632
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4633
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4635
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4636
        .doubleBattle = FALSE,
#line 4637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4639
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4640
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4643
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
    {
#line 4644
        .trainerName = _("CALVIN"),
#line 4645
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4646
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4649
        .doubleBattle = FALSE,
#line 4650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4652
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4653
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4656
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4658
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4657
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4660
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4662
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4661
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4664
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4665
        .trainerName = _("EDDIE"),
#line 4666
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4667
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4670
        .doubleBattle = FALSE,
#line 4671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4673
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4674
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4677
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4678
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4681
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4682
        .trainerName = _("ALLEN"),
#line 4683
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4684
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4686
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4687
        .doubleBattle = FALSE,
#line 4688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4690
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4691
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4694
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4695
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4698
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4699
        .trainerName = _("TIMMY"),
#line 4700
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4701
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4703
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4704
        .doubleBattle = FALSE,
#line 4705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4707
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4708
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4711
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4712
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4715
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 4716
        .trainerName = _("WALLACE"),
#line 4717
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4718
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender =
#line 4720
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4721
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 4722
        .doubleBattle = FALSE,
#line 4723
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4724
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4726
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4727
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4729
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4734
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4735
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4737
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4742
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4744
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4743
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4745
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4750
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4752
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4751
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4753
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4758
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4759
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4761
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4766
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4766
            .heldItem = ITEM_SITRUS_BERRY,
#line 4768
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4767
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4769
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4774
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4775
        .trainerName = _("ANDREW"),
#line 4776
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4777
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4779
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4780
        .doubleBattle = FALSE,
#line 4781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4783
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4784
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4787
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4788
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4791
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4792
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4795
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4796
        .trainerName = _("IVAN"),
#line 4797
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4798
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4800
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4801
        .doubleBattle = FALSE,
#line 4802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4804
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4805
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4808
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4809
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4812
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4813
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4816
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4817
        .trainerName = _("CLAUDE"),
#line 4818
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4819
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4821
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4822
        .doubleBattle = FALSE,
#line 4823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4825
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4826
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4829
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4830
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4833
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4834
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4837
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 4838
        .trainerName = _("ELLIOT"),
#line 4839
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4840
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4842
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4843
        .doubleBattle = FALSE,
#line 4844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4846
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4847
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4850
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4851
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4854
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4855
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4858
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4859
        .trainerName = _("NED"),
#line 4860
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4861
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4863
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4864
        .doubleBattle = FALSE,
#line 4865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4867
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4869
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4868
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4871
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4872
        .trainerName = _("DALE"),
#line 4873
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4874
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4876
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4877
        .doubleBattle = FALSE,
#line 4878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4880
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4881
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4884
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4885
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4888
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4889
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4892
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4893
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4896
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4897
        .trainerName = _("NOLAN"),
#line 4898
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4899
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4901
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4902
        .doubleBattle = FALSE,
#line 4903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4905
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4906
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4909
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4910
        .trainerName = _("BARNY"),
#line 4911
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4912
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4914
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4915
        .doubleBattle = FALSE,
#line 4916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4918
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4919
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4922
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4923
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4926
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4927
        .trainerName = _("WADE"),
#line 4928
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4929
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4931
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4932
        .doubleBattle = FALSE,
#line 4933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4935
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4936
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4939
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4940
        .trainerName = _("CARTER"),
#line 4941
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4942
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4944
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4945
        .doubleBattle = FALSE,
#line 4946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4948
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4950
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4949
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4952
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4954
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4953
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4956
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
    {
#line 4957
        .trainerName = _("ELLIOT"),
#line 4958
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4959
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4961
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4962
        .doubleBattle = FALSE,
#line 4963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4965
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4967
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4966
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4969
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4971
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4970
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4973
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4975
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4974
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4977
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4979
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 4978
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4981
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4982
        .trainerName = _("RONALD"),
#line 4983
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4984
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4986
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4987
        .doubleBattle = FALSE,
#line 4988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4990
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4991
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4994
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4995
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4998
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4999
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5002
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5003
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5006
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5007
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5010
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5011
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5014
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 5015
        .trainerName = _("JACOB"),
#line 5016
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5017
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5019
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5020
        .doubleBattle = FALSE,
#line 5021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5023
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5025
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5024
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5027
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5029
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5028
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5031
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5033
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5032
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5035
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 5036
        .trainerName = _("ANTHONY"),
#line 5037
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5038
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5040
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5041
        .doubleBattle = FALSE,
#line 5042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5044
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5045
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5048
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5049
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5052
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 5053
        .trainerName = _("BENJAMIN"),
#line 5054
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5055
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5057
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5058
        .doubleBattle = FALSE,
#line 5059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5061
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5062
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5065
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
    {
#line 5066
        .trainerName = _("BENJAMIN"),
#line 5067
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5068
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5070
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5071
        .doubleBattle = FALSE,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5075
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 5079
        .trainerName = _("ABIGAIL"),
#line 5080
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5081
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5082
F_TRAINER_FEMALE | 
#line 5083
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5084
        .doubleBattle = FALSE,
#line 5085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5088
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5091
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 5092
        .trainerName = _("JASMINE"),
#line 5093
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5094
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5095
F_TRAINER_FEMALE | 
#line 5096
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5097
        .doubleBattle = FALSE,
#line 5098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5100
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5101
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5104
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5105
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5108
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5109
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5112
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
    {
#line 5113
        .trainerName = _("ABIGAIL"),
#line 5114
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5115
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5116
F_TRAINER_FEMALE | 
#line 5117
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5118
        .doubleBattle = FALSE,
#line 5119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5121
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5122
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5125
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 5126
        .trainerName = _("DYLAN"),
#line 5127
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5128
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5130
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5131
        .doubleBattle = FALSE,
#line 5132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5134
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5135
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5138
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
    {
#line 5139
        .trainerName = _("DYLAN"),
#line 5140
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5141
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5143
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5144
        .doubleBattle = FALSE,
#line 5145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5147
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5149
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5148
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5151
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 5152
        .trainerName = _("MARIA"),
#line 5153
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5154
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5155
F_TRAINER_FEMALE | 
#line 5156
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5157
        .doubleBattle = FALSE,
#line 5158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5160
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5161
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5164
    [DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
    {
#line 5165
        .trainerName = _("MARIA"),
#line 5166
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5167
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5168
F_TRAINER_FEMALE | 
#line 5169
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5170
        .doubleBattle = FALSE,
#line 5171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5173
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5175
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5174
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5177
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 5178
        .trainerName = _("CAMDEN"),
#line 5179
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5180
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5182
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5183
        .doubleBattle = FALSE,
#line 5184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5186
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5187
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5190
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5191
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5194
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5195
        .trainerName = _("DEMETRIUS"),
#line 5196
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5197
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5200
        .doubleBattle = FALSE,
#line 5201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5203
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5204
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5207
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5208
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5211
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 5212
        .trainerName = _("ISAIAH"),
#line 5213
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5214
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5216
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5217
        .doubleBattle = FALSE,
#line 5218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5220
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5221
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5224
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 5225
        .trainerName = _("PABLO"),
#line 5226
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5227
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5229
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5230
        .doubleBattle = FALSE,
#line 5231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5233
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5234
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5237
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5238
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5241
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 5242
        .trainerName = _("CHASE"),
#line 5243
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5244
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5246
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5247
        .doubleBattle = FALSE,
#line 5248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5250
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5251
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5254
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5256
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5255
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5258
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_2] =
    {
#line 5259
        .trainerName = _("ISAIAH"),
#line 5260
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5261
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5263
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5264
        .doubleBattle = FALSE,
#line 5265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5267
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5269
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5268
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5271
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 5272
        .trainerName = _("ISOBEL"),
#line 5273
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5274
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5275
F_TRAINER_FEMALE | 
#line 5276
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5277
        .doubleBattle = FALSE,
#line 5278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5280
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5281
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5284
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 5285
        .trainerName = _("DONNY"),
#line 5286
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5287
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5288
F_TRAINER_FEMALE | 
#line 5289
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5290
        .doubleBattle = FALSE,
#line 5291
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5293
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5294
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5297
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5298
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5301
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 5302
        .trainerName = _("TALIA"),
#line 5303
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5304
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5305
F_TRAINER_FEMALE | 
#line 5306
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5307
        .doubleBattle = FALSE,
#line 5308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5310
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5311
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5314
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 5315
        .trainerName = _("KATELYN"),
#line 5316
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5317
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5318
F_TRAINER_FEMALE | 
#line 5319
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5320
        .doubleBattle = FALSE,
#line 5321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5323
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5324
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5327
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 5328
        .trainerName = _("ALLISON"),
#line 5329
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5330
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5331
F_TRAINER_FEMALE | 
#line 5332
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5333
        .doubleBattle = FALSE,
#line 5334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5336
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5337
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5340
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5342
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5341
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5344
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_2] =
    {
#line 5345
        .trainerName = _("KATELYN"),
#line 5346
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5347
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5348
F_TRAINER_FEMALE | 
#line 5349
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5350
        .doubleBattle = FALSE,
#line 5351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5353
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5355
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5354
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5357
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 5358
        .trainerName = _("NICOLAS"),
#line 5359
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5360
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5362
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5363
        .doubleBattle = FALSE,
#line 5364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5366
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5368
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5367
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5370
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5372
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5371
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5374
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
    {
#line 5375
        .trainerName = _("NICOLAS"),
#line 5376
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5377
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5379
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5380
        .doubleBattle = FALSE,
#line 5381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5383
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5385
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5384
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5387
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5389
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5388
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5391
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .heldItem = ITEM_DRAGON_FANG,
#line 5393
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5392
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5395
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 5396
        .trainerName = _("AARON"),
#line 5397
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5398
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5400
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5401
        .doubleBattle = FALSE,
#line 5402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5404
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5405
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5407
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 5412
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5413
        .trainerName = _("PERRY"),
#line 5414
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5415
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5417
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5418
        .doubleBattle = FALSE,
#line 5419
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5421
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5422
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5425
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5426
        .trainerName = _("HUGH"),
#line 5427
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5428
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5430
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5431
        .doubleBattle = FALSE,
#line 5432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5434
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5435
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5438
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5439
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5442
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5443
        .trainerName = _("PHIL"),
#line 5444
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5445
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5447
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5448
        .doubleBattle = FALSE,
#line 5449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5451
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5452
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5455
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5456
        .trainerName = _("JARED"),
#line 5457
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5458
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5460
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5461
        .doubleBattle = FALSE,
#line 5462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5464
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5466
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5465
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5468
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5469
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5472
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5474
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5473
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5476
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5477
        .trainerName = _("HUMBERTO"),
#line 5478
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5479
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5481
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5482
        .doubleBattle = FALSE,
#line 5483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5485
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5487
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5486
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5489
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5490
        .trainerName = _("PRESLEY"),
#line 5491
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5492
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5494
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5495
        .doubleBattle = FALSE,
#line 5496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5498
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5499
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5502
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5506
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5507
        .trainerName = _("EDWARDO"),
#line 5508
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5509
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5511
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5512
        .doubleBattle = FALSE,
#line 5513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5515
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5517
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5516
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5519
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5520
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5523
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5524
        .trainerName = _("COLIN"),
#line 5525
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5526
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5528
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5529
        .doubleBattle = FALSE,
#line 5530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5533
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5536
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5537
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5540
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 5541
        .trainerName = _("ROBERT"),
#line 5542
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5543
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5545
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5546
        .doubleBattle = FALSE,
#line 5547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5549
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5550
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5553
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5554
        .trainerName = _("BENNY"),
#line 5555
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5556
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5558
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5559
        .doubleBattle = FALSE,
#line 5560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5562
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5563
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5566
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5567
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5570
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5571
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5574
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5575
        .trainerName = _("CHESTER"),
#line 5576
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5577
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5579
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5580
        .doubleBattle = FALSE,
#line 5581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5583
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5584
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5587
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5588
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5591
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
    {
#line 5592
        .trainerName = _("ROBERT"),
#line 5593
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5594
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5596
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5597
        .doubleBattle = FALSE,
#line 5598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5600
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5602
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5601
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5604
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5606
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5605
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5608
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5609
        .trainerName = _("ALEX"),
#line 5610
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5611
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5613
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5614
        .doubleBattle = FALSE,
#line 5615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5618
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5621
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5623
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5622
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5625
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5626
        .trainerName = _("BECK"),
#line 5627
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5628
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5630
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5631
        .doubleBattle = FALSE,
#line 5632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5634
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5635
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5638
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5639
        .trainerName = _("YASU"),
#line 5640
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5641
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5643
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5644
        .doubleBattle = FALSE,
#line 5645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5647
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5648
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5651
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5652
        .trainerName = _("TAKASHI"),
#line 5653
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5654
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5656
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5657
        .doubleBattle = FALSE,
#line 5658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5664
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5665
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5668
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5669
        .trainerName = _("DIANNE"),
#line 5670
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5671
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5672
F_TRAINER_FEMALE | 
#line 5673
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5674
        .items = { ITEM_FULL_RESTORE },
#line 5675
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5677
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5678
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5680
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5683
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5684
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5686
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5689
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5690
        .trainerName = _("JANI"),
#line 5691
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5692
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5693
F_TRAINER_FEMALE | 
#line 5694
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5695
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5697
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5698
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5701
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 5702
        .trainerName = _("LAO"),
#line 5703
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5704
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5706
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5707
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5709
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5710
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5712
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5717
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5718
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5720
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5725
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5726
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5728
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5733
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5734
        .trainerName = _("LUNG"),
#line 5735
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5736
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5738
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5739
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5741
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5742
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5745
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5746
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5749
    [DIFFICULTY_NORMAL][TRAINER_LAO_2] =
    {
#line 5750
        .trainerName = _("LAO"),
#line 5751
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5752
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5754
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5755
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5757
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5759
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5758
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5760
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 5764
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5766
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5765
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5767
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5772
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5773
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5775
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5780
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5780
            .heldItem = ITEM_SMOKE_BALL,
#line 5782
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5781
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5783
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 5786
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5787
        .trainerName = _("JOCELYN"),
#line 5788
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5789
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5790
F_TRAINER_FEMALE | 
#line 5791
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5792
        .doubleBattle = FALSE,
#line 5793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5795
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5797
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5796
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5799
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5800
        .trainerName = _("LAURA"),
#line 5801
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5802
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5803
F_TRAINER_FEMALE | 
#line 5804
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5805
        .doubleBattle = FALSE,
#line 5806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5808
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5810
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5809
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5812
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 5813
        .trainerName = _("CYNDY"),
#line 5814
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5815
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5816
F_TRAINER_FEMALE | 
#line 5817
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5818
        .doubleBattle = FALSE,
#line 5819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5821
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5823
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5822
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5825
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5827
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5826
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5829
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5830
        .trainerName = _("CORA"),
#line 5831
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5832
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5833
F_TRAINER_FEMALE | 
#line 5834
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5835
        .doubleBattle = FALSE,
#line 5836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5838
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5840
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5839
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5842
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5843
        .trainerName = _("PAULA"),
#line 5844
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5845
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5846
F_TRAINER_FEMALE | 
#line 5847
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5848
        .doubleBattle = FALSE,
#line 5849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5851
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5853
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5852
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5855
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
    {
#line 5856
        .trainerName = _("CYNDY"),
#line 5857
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5858
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5859
F_TRAINER_FEMALE | 
#line 5860
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5861
        .doubleBattle = FALSE,
#line 5862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5864
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5866
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5865
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5868
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5870
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5869
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5872
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 5873
        .trainerName = _("MADELINE"),
#line 5874
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5875
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5876
F_TRAINER_FEMALE | 
#line 5877
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5878
        .doubleBattle = FALSE,
#line 5879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5881
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5882
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5884
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5889
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5890
        .trainerName = _("CLARISSA"),
#line 5891
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5892
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5893
F_TRAINER_FEMALE | 
#line 5894
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5895
        .doubleBattle = FALSE,
#line 5896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5898
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5899
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5902
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5903
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5906
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5907
        .trainerName = _("ANGELICA"),
#line 5908
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5909
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5910
F_TRAINER_FEMALE | 
#line 5911
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5912
        .doubleBattle = FALSE,
#line 5913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5915
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5917
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5916
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5918
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 5923
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
    {
#line 5924
        .trainerName = _("MADELINE"),
#line 5925
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5926
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5927
F_TRAINER_FEMALE | 
#line 5928
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5929
        .doubleBattle = FALSE,
#line 5930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5932
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5934
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5933
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5935
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 5940
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5942
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5941
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5943
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5948
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5949
        .trainerName = _("BEVERLY"),
#line 5950
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5951
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5952
F_TRAINER_FEMALE | 
#line 5953
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5954
        .doubleBattle = FALSE,
#line 5955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5957
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5958
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5961
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5962
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5965
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5966
        .trainerName = _("IMANI"),
#line 5967
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5968
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5969
F_TRAINER_FEMALE | 
#line 5970
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5971
        .doubleBattle = FALSE,
#line 5972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5974
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5975
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5978
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5979
        .trainerName = _("KYLA"),
#line 5980
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5981
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5982
F_TRAINER_FEMALE | 
#line 5983
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5984
        .doubleBattle = FALSE,
#line 5985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5987
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5988
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5991
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5992
        .trainerName = _("DENISE"),
#line 5993
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5994
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5995
F_TRAINER_FEMALE | 
#line 5996
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5997
        .doubleBattle = FALSE,
#line 5998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6000
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6001
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6004
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6005
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6008
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 6009
        .trainerName = _("BETH"),
#line 6010
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6011
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6012
F_TRAINER_FEMALE | 
#line 6013
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6014
        .doubleBattle = FALSE,
#line 6015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6017
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6018
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6021
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 6022
        .trainerName = _("TARA"),
#line 6023
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6024
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6025
F_TRAINER_FEMALE | 
#line 6026
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6027
        .doubleBattle = FALSE,
#line 6028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6030
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6031
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6034
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6035
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6038
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 6039
        .trainerName = _("MISSY"),
#line 6040
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6041
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6042
F_TRAINER_FEMALE | 
#line 6043
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6044
        .doubleBattle = FALSE,
#line 6045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6047
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6048
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6051
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 6052
        .trainerName = _("ALICE"),
#line 6053
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6054
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6055
F_TRAINER_FEMALE | 
#line 6056
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6057
        .doubleBattle = FALSE,
#line 6058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6060
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6061
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6064
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6065
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6068
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6069
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6072
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 6073
        .trainerName = _("JENNY"),
#line 6074
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6075
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6076
F_TRAINER_FEMALE | 
#line 6077
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6078
        .doubleBattle = FALSE,
#line 6079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6081
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6082
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6085
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 6086
        .trainerName = _("GRACE"),
#line 6087
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6088
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6089
F_TRAINER_FEMALE | 
#line 6090
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6091
        .doubleBattle = FALSE,
#line 6092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6094
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6095
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6098
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 6099
        .trainerName = _("TANYA"),
#line 6100
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6101
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6102
F_TRAINER_FEMALE | 
#line 6103
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6104
        .doubleBattle = FALSE,
#line 6105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6107
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6108
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6111
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 6112
        .trainerName = _("SHARON"),
#line 6113
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6114
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6115
F_TRAINER_FEMALE | 
#line 6116
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6117
        .doubleBattle = FALSE,
#line 6118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6120
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6121
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6124
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 6125
        .trainerName = _("NIKKI"),
#line 6126
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6127
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6128
F_TRAINER_FEMALE | 
#line 6129
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6130
        .doubleBattle = FALSE,
#line 6131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6133
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6134
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6137
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6138
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6141
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 6142
        .trainerName = _("BRENDA"),
#line 6143
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6144
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6145
F_TRAINER_FEMALE | 
#line 6146
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6147
        .doubleBattle = FALSE,
#line 6148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6150
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6151
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6154
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 6155
        .trainerName = _("KATIE"),
#line 6156
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6157
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6158
F_TRAINER_FEMALE | 
#line 6159
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6160
        .doubleBattle = FALSE,
#line 6161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6163
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6164
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6167
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6168
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6171
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 6172
        .trainerName = _("SUSIE"),
#line 6173
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6174
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6175
F_TRAINER_FEMALE | 
#line 6176
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6177
        .doubleBattle = FALSE,
#line 6178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6180
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6181
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6184
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 6185
        .trainerName = _("KARA"),
#line 6186
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6187
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6188
F_TRAINER_FEMALE | 
#line 6189
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6190
        .doubleBattle = FALSE,
#line 6191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6193
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6194
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6197
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 6198
        .trainerName = _("DANA"),
#line 6199
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6200
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6201
F_TRAINER_FEMALE | 
#line 6202
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6203
        .doubleBattle = FALSE,
#line 6204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6206
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6207
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6210
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 6211
        .trainerName = _("SIENNA"),
#line 6212
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6213
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6214
F_TRAINER_FEMALE | 
#line 6215
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6216
        .doubleBattle = FALSE,
#line 6217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6219
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6220
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6223
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6224
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6227
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 6228
        .trainerName = _("DEBRA"),
#line 6229
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6230
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6231
F_TRAINER_FEMALE | 
#line 6232
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6233
        .doubleBattle = FALSE,
#line 6234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6236
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6237
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6240
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 6241
        .trainerName = _("LINDA"),
#line 6242
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6243
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6244
F_TRAINER_FEMALE | 
#line 6245
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6246
        .doubleBattle = FALSE,
#line 6247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6249
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6250
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6253
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6254
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6257
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 6258
        .trainerName = _("KAYLEE"),
#line 6259
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6260
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6261
F_TRAINER_FEMALE | 
#line 6262
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6263
        .doubleBattle = FALSE,
#line 6264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6266
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6267
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6270
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6271
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6274
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 6275
        .trainerName = _("LAUREL"),
#line 6276
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6277
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6278
F_TRAINER_FEMALE | 
#line 6279
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6280
        .doubleBattle = FALSE,
#line 6281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6283
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6284
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6287
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6288
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6291
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 6292
        .trainerName = _("CARLEE"),
#line 6293
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6294
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6295
F_TRAINER_FEMALE | 
#line 6296
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6297
        .doubleBattle = FALSE,
#line 6298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6300
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6301
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6304
    [DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
    {
#line 6305
        .trainerName = _("JENNY"),
#line 6306
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6307
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6308
F_TRAINER_FEMALE | 
#line 6309
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6310
        .doubleBattle = FALSE,
#line 6311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6313
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6314
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6317
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6318
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6321
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6322
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6325
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 6326
        .trainerName = _("HEIDI"),
#line 6327
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6328
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6329
F_TRAINER_FEMALE | 
#line 6330
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6331
        .doubleBattle = FALSE,
#line 6332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6334
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6335
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6337
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 6342
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6343
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6345
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 6350
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 6351
        .trainerName = _("BECKY"),
#line 6352
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6353
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6354
F_TRAINER_FEMALE | 
#line 6355
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6356
        .doubleBattle = FALSE,
#line 6357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6359
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6360
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6362
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 6367
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6368
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6370
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 6375
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 6376
        .trainerName = _("CAROL"),
#line 6377
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6378
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6379
F_TRAINER_FEMALE | 
#line 6380
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6381
        .doubleBattle = FALSE,
#line 6382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6384
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6385
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6388
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6389
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6392
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 6393
        .trainerName = _("NANCY"),
#line 6394
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6395
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6396
F_TRAINER_FEMALE | 
#line 6397
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6398
        .doubleBattle = FALSE,
#line 6399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6401
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6402
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6405
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6406
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6409
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6410
        .trainerName = _("MARTHA"),
#line 6411
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6412
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6413
F_TRAINER_FEMALE | 
#line 6414
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6415
        .doubleBattle = FALSE,
#line 6416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6418
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6419
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6422
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6423
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6426
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 6427
        .trainerName = _("DIANA"),
#line 6428
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6429
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6430
F_TRAINER_FEMALE | 
#line 6431
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6432
        .doubleBattle = FALSE,
#line 6433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6435
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6436
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6439
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6440
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6443
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6444
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6447
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6448
        .trainerName = _("CEDRIC"),
#line 6449
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6450
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6452
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6453
        .doubleBattle = FALSE,
#line 6454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6456
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6457
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6459
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 6464
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 6465
        .trainerName = _("IRENE"),
#line 6466
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6467
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6468
F_TRAINER_FEMALE | 
#line 6469
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6470
        .doubleBattle = FALSE,
#line 6471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6473
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6474
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6477
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6478
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6481
    [DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
    {
#line 6482
        .trainerName = _("DIANA"),
#line 6483
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6484
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6485
F_TRAINER_FEMALE | 
#line 6486
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6487
        .doubleBattle = FALSE,
#line 6488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6490
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6492
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6491
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6494
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6496
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6495
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6498
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6499
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6502
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 6503
        .trainerName = _("AMY & LIV"),
#line 6504
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6505
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6507
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6508
        .doubleBattle = TRUE,
#line 6509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6511
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6512
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6515
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6516
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6519
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 6520
        .trainerName = _("GINA & MIA"),
#line 6521
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6522
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6524
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6525
        .doubleBattle = TRUE,
#line 6526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6528
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6529
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6532
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6533
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6536
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6537
        .trainerName = _("MIU & YUKI"),
#line 6538
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6539
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6541
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6542
        .doubleBattle = TRUE,
#line 6543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6545
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6546
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6549
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6550
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6553
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_2] =
    {
#line 6554
        .trainerName = _("GINA & MIA"),
#line 6555
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6556
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6558
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6559
        .doubleBattle = TRUE,
#line 6560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6562
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6563
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6565
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 6568
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6569
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6571
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 6574
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
    {
#line 6575
        .trainerName = _("AMY & LIV"),
#line 6576
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6577
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6579
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6580
        .doubleBattle = TRUE,
#line 6581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6583
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6584
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6586
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 6591
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6593
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6592
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6594
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 6599
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6600
        .trainerName = _("HUEY"),
#line 6601
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6602
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6604
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6605
        .doubleBattle = FALSE,
#line 6606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6608
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6610
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6609
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6612
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6614
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6613
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6616
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6617
        .trainerName = _("EDMOND"),
#line 6618
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6619
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6621
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6622
        .doubleBattle = FALSE,
#line 6623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6625
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6626
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6629
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 6630
        .trainerName = _("ERNEST"),
#line 6631
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6632
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6634
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6635
        .doubleBattle = FALSE,
#line 6636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6638
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6639
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6642
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6643
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6647
        .trainerName = _("DWAYNE"),
#line 6648
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6649
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6651
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6652
        .doubleBattle = FALSE,
#line 6653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6656
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6659
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6660
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6663
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6664
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6667
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6668
        .trainerName = _("PHILLIP"),
#line 6669
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6670
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6672
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6673
        .doubleBattle = FALSE,
#line 6674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6676
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6677
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6680
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6681
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6684
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6685
        .trainerName = _("LEONARD"),
#line 6686
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6687
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6689
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6690
        .doubleBattle = FALSE,
#line 6691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6693
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6694
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6697
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6698
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6701
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6702
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6705
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6706
        .trainerName = _("DUNCAN"),
#line 6707
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6708
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6711
        .doubleBattle = FALSE,
#line 6712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6714
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6715
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6718
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6719
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6722
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
    {
#line 6723
        .trainerName = _("ERNEST"),
#line 6724
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6725
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6727
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6728
        .doubleBattle = FALSE,
#line 6729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6731
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6733
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6732
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6735
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6737
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6736
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6739
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6741
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6740
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6743
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6744
        .trainerName = _("ELI"),
#line 6745
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6746
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6748
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6749
        .doubleBattle = FALSE,
#line 6750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6752
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6753
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6756
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6757
        .trainerName = _("ANNIKA"),
#line 6758
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6759
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6760
F_TRAINER_FEMALE | 
#line 6761
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6762
        .doubleBattle = FALSE,
#line 6763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6765
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6765
            .heldItem = ITEM_ORAN_BERRY,
#line 6767
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6766
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6768
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 6773
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6773
            .heldItem = ITEM_ORAN_BERRY,
#line 6775
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6774
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6776
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6781
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6782
        .trainerName = _("JAZMYN"),
#line 6783
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6784
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6785
F_TRAINER_FEMALE | 
#line 6786
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6787
        .items = { ITEM_HYPER_POTION },
#line 6788
        .doubleBattle = FALSE,
#line 6789
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6791
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6792
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6795
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6796
        .trainerName = _("JONAS"),
#line 6797
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6798
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6800
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6801
        .doubleBattle = FALSE,
#line 6802
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6804
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6805
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6807
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 6812
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6813
        .trainerName = _("KAYLEY"),
#line 6814
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6815
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6816
F_TRAINER_FEMALE | 
#line 6817
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6818
        .doubleBattle = FALSE,
#line 6819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6821
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6822
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6824
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 6829
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6830
        .trainerName = _("AURON"),
#line 6831
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6832
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6834
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6835
        .doubleBattle = FALSE,
#line 6836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6838
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6839
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6842
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6843
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6846
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6847
        .trainerName = _("KELVIN"),
#line 6848
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6849
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6851
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6852
        .doubleBattle = FALSE,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6856
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6859
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6861
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6860
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6863
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6864
        .trainerName = _("MARLEY"),
#line 6865
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6866
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6867
F_TRAINER_FEMALE | 
#line 6868
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6869
        .items = { ITEM_HYPER_POTION },
#line 6870
        .doubleBattle = FALSE,
#line 6871
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6873
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6874
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6876
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 6881
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6882
        .trainerName = _("REYNA"),
#line 6883
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6884
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6885
F_TRAINER_FEMALE | 
#line 6886
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6887
        .doubleBattle = FALSE,
#line 6888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6890
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6892
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6891
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6894
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6896
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6895
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6898
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6899
        .trainerName = _("HUDSON"),
#line 6900
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6901
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6903
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6904
        .doubleBattle = FALSE,
#line 6905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6907
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6908
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6911
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6912
        .trainerName = _("CONOR"),
#line 6913
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6914
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6916
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6917
        .doubleBattle = FALSE,
#line 6918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6920
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6921
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6924
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6926
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6925
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6928
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 6929
        .trainerName = _("EDWIN"),
#line 6930
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6931
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6933
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6934
        .doubleBattle = FALSE,
#line 6935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6937
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6938
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6941
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6942
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6945
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6946
        .trainerName = _("HECTOR"),
#line 6947
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6948
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6950
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6951
        .doubleBattle = FALSE,
#line 6952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6954
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6955
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6958
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6959
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6963
        .trainerName = _("TABITHA"),
#line 6964
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6965
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6967
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6968
        .doubleBattle = FALSE,
#line 6969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6971
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6972
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6975
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6976
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6979
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6981
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6980
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6983
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
    {
#line 6984
        .trainerName = _("EDWIN"),
#line 6985
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6986
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6988
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6989
        .doubleBattle = FALSE,
#line 6990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6992
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6993
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6996
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6997
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7000
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 7001
        .trainerName = _("WALLY"),
#line 7002
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7003
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7005
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7006
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7007
        .doubleBattle = FALSE,
#line 7008
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7010
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7012
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7011
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7013
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7018
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7020
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7019
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7021
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7026
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7028
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7027
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7029
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7034
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7035
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7037
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7042
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7043
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7045
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7050
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 7051
        .trainerName = _("BRENDAN"),
#line 7052
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7053
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7055
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7056
        .doubleBattle = FALSE,
#line 7057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7059
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7059
            .heldItem = ITEM_MIRACLE_SEED,
#line 7062
            .ev = TRAINER_PARTY_EVS(16, 0, 0, 0, 36, 0),
#line 7064
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7060
            .ability = ABILITY_HYDRATION,
#line 7061
            .lvl = 8,
#line 7063
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7065
                MOVE_ABSORB,
                MOVE_WATER_GUN,
                MOVE_DRAGON_BREATH,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 7070
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7070
            .heldItem = ITEM_ORAN_BERRY,
#line 7073
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 76, 0),
#line 7075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7071
            .ability = ABILITY_UNBURDEN,
#line 7072
            .lvl = 10,
#line 7074
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7075
                MOVE_MEGA_DRAIN,
                MOVE_DETECT,
                MOVE_LEECH_SEED,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 7080
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 7081
        .trainerName = _("BRENDAN"),
#line 7082
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7083
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7085
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7086
        .doubleBattle = FALSE,
#line 7087
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7089
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7090
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7093
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7095
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7094
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7097
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7099
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7098
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7101
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 7102
        .trainerName = _("BRENDAN"),
#line 7103
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7104
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7106
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7107
        .doubleBattle = FALSE,
#line 7108
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7110
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7111
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7114
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7115
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7118
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7120
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7119
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7122
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7123
        .trainerName = _("BRENDAN"),
#line 7124
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7125
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7127
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7128
        .doubleBattle = FALSE,
#line 7129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7131
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7131
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7134
            .ev = TRAINER_PARTY_EVS(8, 76, 0, 0, 0, 0),
#line 7136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7132
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 7133
            .lvl = 8,
#line 7135
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7136
                MOVE_ICICLE_SPEAR,
                MOVE_DRAGON_TAIL,
                MOVE_ICY_WIND,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7141
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7141
            .heldItem = ITEM_ORAN_BERRY,
#line 7144
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7142
            .ability = ABILITY_SPEED_BOOST,
#line 7143
            .lvl = 10,
#line 7145
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7146
                MOVE_FLAME_CHARGE,
                MOVE_SCRATCH,
                MOVE_PECK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7151
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7152
        .trainerName = _("BRENDAN"),
#line 7153
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7154
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7156
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7157
        .doubleBattle = FALSE,
#line 7158
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7160
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7161
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7164
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7166
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7165
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7168
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7170
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7169
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7172
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7173
        .trainerName = _("BRENDAN"),
#line 7174
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7175
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7177
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7178
        .doubleBattle = FALSE,
#line 7179
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7181
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7182
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7185
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7186
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7189
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7191
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7190
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7193
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7194
        .trainerName = _("BRENDAN"),
#line 7195
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7196
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7198
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7199
        .doubleBattle = FALSE,
#line 7200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7202
            .heldItem = ITEM_HARD_STONE,
#line 7205
            .ev = TRAINER_PARTY_EVS(28, 64, 0, 0, 0, 0),
#line 7207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7203
            .ability = ABILITY_GUTS,
#line 7204
            .lvl = 8,
#line 7206
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7207
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_DRAGON_DANCE,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 7212
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .heldItem = ITEM_ORAN_BERRY,
#line 7215
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7213
            .ability = ABILITY_DAMP,
#line 7214
            .lvl = 10,
#line 7216
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7217
                MOVE_WATER_GUN,
                MOVE_ROCK_THROW,
                MOVE_ROCK_SMASH,
                MOVE_YAWN,
            },
            },
        },
    },
#line 7222
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7223
        .trainerName = _("BRENDAN"),
#line 7224
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7225
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7227
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7228
        .doubleBattle = FALSE,
#line 7229
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7231
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7233
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7232
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7235
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7236
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7239
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7241
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7240
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7243
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7244
        .trainerName = _("BRENDAN"),
#line 7245
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7246
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7248
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7249
        .doubleBattle = FALSE,
#line 7250
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7252
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7253
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7256
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7258
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7257
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7260
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7262
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7261
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7264
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7265
        .trainerName = _("MAY"),
#line 7266
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7267
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7268
F_TRAINER_FEMALE | 
#line 7269
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7270
        .doubleBattle = FALSE,
#line 7271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7273
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7273
            .heldItem = ITEM_MIRACLE_SEED,
#line 7276
            .ev = TRAINER_PARTY_EVS(16, 0, 0, 0, 36, 0),
#line 7278
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7274
            .ability = ABILITY_HYDRATION,
#line 7275
            .lvl = 8,
#line 7277
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7279
                MOVE_ABSORB,
                MOVE_WATER_GUN,
                MOVE_DRAGON_BREATH,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 7284
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7284
            .heldItem = ITEM_ORAN_BERRY,
#line 7287
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 76, 0),
#line 7289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7285
            .ability = ABILITY_UNBURDEN,
#line 7286
            .lvl = 10,
#line 7288
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7289
                MOVE_MEGA_DRAIN,
                MOVE_DETECT,
                MOVE_LEECH_SEED,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 7294
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7295
        .trainerName = _("MAY"),
#line 7296
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7297
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7298
F_TRAINER_FEMALE | 
#line 7299
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7300
        .doubleBattle = FALSE,
#line 7301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7303
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7305
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7304
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7307
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7309
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7308
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7311
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7313
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7312
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7315
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7316
        .trainerName = _("MAY"),
#line 7317
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7318
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7319
F_TRAINER_FEMALE | 
#line 7320
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7321
        .doubleBattle = FALSE,
#line 7322
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7324
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7326
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7325
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7328
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7330
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7329
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7332
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7334
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7333
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7336
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7337
        .trainerName = _("MAY"),
#line 7338
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7339
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7340
F_TRAINER_FEMALE | 
#line 7341
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7342
        .doubleBattle = FALSE,
#line 7343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7345
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7345
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7348
            .ev = TRAINER_PARTY_EVS(8, 76, 0, 0, 0, 0),
#line 7350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7346
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 7347
            .lvl = 8,
#line 7349
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7350
                MOVE_ICICLE_SPEAR,
                MOVE_DRAGON_TAIL,
                MOVE_ICY_WIND,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7355
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .heldItem = ITEM_ORAN_BERRY,
#line 7358
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7356
            .ability = ABILITY_SPEED_BOOST,
#line 7357
            .lvl = 10,
#line 7359
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7360
                MOVE_FLAME_CHARGE,
                MOVE_SCRATCH,
                MOVE_PECK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7365
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7366
        .trainerName = _("MAY"),
#line 7367
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7368
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7369
F_TRAINER_FEMALE | 
#line 7370
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7371
        .doubleBattle = FALSE,
#line 7372
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7374
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7375
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7378
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7379
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7382
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7384
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7383
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7386
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7387
        .trainerName = _("MAY"),
#line 7388
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7389
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7390
F_TRAINER_FEMALE | 
#line 7391
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7392
        .doubleBattle = FALSE,
#line 7393
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7395
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7397
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7396
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7399
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7401
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7400
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7403
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7405
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7404
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7407
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7408
        .trainerName = _("MAY"),
#line 7409
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7410
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7411
F_TRAINER_FEMALE | 
#line 7412
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7413
        .doubleBattle = FALSE,
#line 7414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7416
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7416
            .heldItem = ITEM_HARD_STONE,
#line 7419
            .ev = TRAINER_PARTY_EVS(28, 64, 0, 0, 0, 0),
#line 7421
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7417
            .ability = ABILITY_GUTS,
#line 7418
            .lvl = 8,
#line 7420
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7421
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_DRAGON_DANCE,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 7426
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .heldItem = ITEM_ORAN_BERRY,
#line 7429
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7431
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7427
            .ability = ABILITY_DAMP,
#line 7428
            .lvl = 10,
#line 7430
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7431
                MOVE_WATER_GUN,
                MOVE_ROCK_THROW,
                MOVE_ROCK_SMASH,
                MOVE_YAWN,
            },
            },
        },
    },
#line 7436
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7437
        .trainerName = _("MAY"),
#line 7438
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7439
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7440
F_TRAINER_FEMALE | 
#line 7441
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7442
        .doubleBattle = FALSE,
#line 7443
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7445
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7447
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7446
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7449
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7450
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7453
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7454
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7457
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7458
        .trainerName = _("MAY"),
#line 7459
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7460
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7461
F_TRAINER_FEMALE | 
#line 7462
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7463
        .doubleBattle = FALSE,
#line 7464
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7466
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7468
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7467
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7470
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7472
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7471
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7474
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7476
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7475
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7478
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 7479
        .trainerName = _("ISAAC"),
#line 7480
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7481
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7483
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7484
        .doubleBattle = FALSE,
#line 7485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7487
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7488
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7491
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7492
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7495
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7496
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7499
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7500
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7503
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7504
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7507
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7508
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7511
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 7512
        .trainerName = _("DAVIS"),
#line 7513
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7514
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7516
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7517
        .doubleBattle = FALSE,
#line 7518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7520
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7521
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7524
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 7525
        .trainerName = _("MITCHELL"),
#line 7526
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7527
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7529
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7530
        .doubleBattle = FALSE,
#line 7531
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7533
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7534
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7536
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 7541
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7542
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7544
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 7549
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
    {
#line 7550
        .trainerName = _("ISAAC"),
#line 7551
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7552
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7554
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7555
        .doubleBattle = FALSE,
#line 7556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7558
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7560
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7559
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7562
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7563
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7566
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7568
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7567
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7570
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7572
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7571
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7574
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7576
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7575
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7578
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7580
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7579
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7582
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 7583
        .trainerName = _("LYDIA"),
#line 7584
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7585
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7586
F_TRAINER_FEMALE | 
#line 7587
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7588
        .doubleBattle = FALSE,
#line 7589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7591
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7592
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7595
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7596
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7599
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7600
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7603
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7604
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7607
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7608
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7611
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7612
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7615
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 7616
        .trainerName = _("HALLE"),
#line 7617
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7618
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7619
F_TRAINER_FEMALE | 
#line 7620
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7621
        .items = { ITEM_FULL_RESTORE },
#line 7622
        .doubleBattle = FALSE,
#line 7623
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7625
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7626
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7629
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7630
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7633
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 7634
        .trainerName = _("GARRISON"),
#line 7635
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 7636
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 7638
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7639
        .doubleBattle = FALSE,
#line 7640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7642
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7643
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7646
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
    {
#line 7647
        .trainerName = _("LYDIA"),
#line 7648
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7649
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7650
F_TRAINER_FEMALE | 
#line 7651
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7652
        .doubleBattle = FALSE,
#line 7653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7655
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7657
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7656
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7659
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7661
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7660
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7663
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7665
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7664
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7667
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7669
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7668
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7671
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7673
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7672
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7675
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7677
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7676
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7679
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 7680
        .trainerName = _("JACKSON"),
#line 7681
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7682
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7684
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7685
        .items = { ITEM_FULL_RESTORE },
#line 7686
        .doubleBattle = FALSE,
#line 7687
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7689
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7691
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7690
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7693
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 7694
        .trainerName = _("LORENZO"),
#line 7695
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7696
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7698
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7699
        .items = { ITEM_FULL_RESTORE },
#line 7700
        .doubleBattle = FALSE,
#line 7701
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7703
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7704
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7707
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7708
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7711
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7713
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7712
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7715
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 7716
        .trainerName = _("SEBASTIAN"),
#line 7717
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7718
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7720
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7721
        .items = { ITEM_FULL_RESTORE },
#line 7722
        .doubleBattle = FALSE,
#line 7723
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7725
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7726
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7729
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
    {
#line 7730
        .trainerName = _("JACKSON"),
#line 7731
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7732
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7734
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7735
        .items = { ITEM_FULL_RESTORE },
#line 7736
        .doubleBattle = FALSE,
#line 7737
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7739
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7741
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7740
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7743
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7745
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7744
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7747
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 7748
        .trainerName = _("CATHERINE"),
#line 7749
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7750
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7751
F_TRAINER_FEMALE | 
#line 7752
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7753
        .items = { ITEM_FULL_RESTORE },
#line 7754
        .doubleBattle = FALSE,
#line 7755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7757
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7759
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7758
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7761
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7762
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7765
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 7766
        .trainerName = _("JENNA"),
#line 7767
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7768
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7769
F_TRAINER_FEMALE | 
#line 7770
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7771
        .items = { ITEM_FULL_RESTORE },
#line 7772
        .doubleBattle = FALSE,
#line 7773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7775
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7777
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7776
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7779
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7781
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7780
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7783
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7784
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7787
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 7788
        .trainerName = _("SOPHIA"),
#line 7789
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7790
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7791
F_TRAINER_FEMALE | 
#line 7792
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7793
        .items = { ITEM_FULL_RESTORE },
#line 7794
        .doubleBattle = FALSE,
#line 7795
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7797
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7799
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7798
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7801
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7802
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7805
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
    {
#line 7806
        .trainerName = _("CATHERINE"),
#line 7807
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7808
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7809
F_TRAINER_FEMALE | 
#line 7810
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7811
        .items = { ITEM_FULL_RESTORE },
#line 7812
        .doubleBattle = FALSE,
#line 7813
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7815
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7816
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7819
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7821
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7820
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7823
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 7824
        .trainerName = _("JULIO"),
#line 7825
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7826
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 7828
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7829
        .doubleBattle = FALSE,
#line 7830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7832
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7833
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7836
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 7837
        .trainerName = _("GRUNT"),
#line 7838
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7839
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7841
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7842
        .doubleBattle = FALSE,
#line 7843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7845
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7847
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7846
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7849
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7851
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7850
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7853
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 7854
        .trainerName = _("GRUNT"),
#line 7855
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7856
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7857
F_TRAINER_FEMALE | 
#line 7858
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7859
        .doubleBattle = FALSE,
#line 7860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7862
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7863
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7866
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7867
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7870
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7871
        .trainerName = _("GRUNT"),
#line 7872
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7873
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7874
F_TRAINER_FEMALE | 
#line 7875
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7876
        .doubleBattle = FALSE,
#line 7877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7879
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7880
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7883
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7884
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7887
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7888
        .trainerName = _("GRUNT"),
#line 7889
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7890
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7892
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7893
        .doubleBattle = FALSE,
#line 7894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7896
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7898
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7897
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7900
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7902
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7901
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7904
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7905
        .trainerName = _("MARC"),
#line 7906
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7907
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7909
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7910
        .doubleBattle = FALSE,
#line 7911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7913
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7915
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7914
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7917
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7919
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7918
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7921
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7922
        .trainerName = _("BRENDEN"),
#line 7923
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7924
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7926
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7927
        .doubleBattle = FALSE,
#line 7928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7930
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7932
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7931
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7934
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7935
        .trainerName = _("LILITH"),
#line 7936
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7937
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7938
F_TRAINER_FEMALE | 
#line 7939
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7940
        .doubleBattle = FALSE,
#line 7941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7943
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7945
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7944
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7947
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7948
        .trainerName = _("CRISTIAN"),
#line 7949
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7950
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7952
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7953
        .doubleBattle = FALSE,
#line 7954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7956
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7958
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7957
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7960
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7961
        .trainerName = _("SYLVIA"),
#line 7962
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7963
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7964
F_TRAINER_FEMALE | 
#line 7965
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7966
        .doubleBattle = FALSE,
#line 7967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7969
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7971
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7970
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7973
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7974
        .trainerName = _("LEONARDO"),
#line 7975
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7976
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7978
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7979
        .doubleBattle = FALSE,
#line 7980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7982
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7983
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7986
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7987
        .trainerName = _("ATHENA"),
#line 7988
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7989
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7990
F_TRAINER_FEMALE | 
#line 7991
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7992
        .items = { ITEM_HYPER_POTION },
#line 7993
        .doubleBattle = FALSE,
#line 7994
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7996
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7998
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7997
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7999
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 8003
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8005
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8004
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8006
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 8009
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 8010
        .trainerName = _("HARRISON"),
#line 8011
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8012
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8014
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8015
        .doubleBattle = FALSE,
#line 8016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8018
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8019
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8022
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 8023
        .trainerName = _("GRUNT"),
#line 8024
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8025
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8027
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8028
        .doubleBattle = FALSE,
#line 8029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8031
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8032
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8035
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 8036
        .trainerName = _("CLARENCE"),
#line 8037
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8038
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8040
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8041
        .doubleBattle = FALSE,
#line 8042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8044
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8045
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8048
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 8049
        .trainerName = _("TERRY"),
#line 8050
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8051
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 8052
F_TRAINER_FEMALE | 
#line 8053
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8054
        .doubleBattle = FALSE,
#line 8055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8057
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8058
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8061
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 8062
        .trainerName = _("NATE"),
#line 8063
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8064
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 8066
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8067
        .doubleBattle = FALSE,
#line 8068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8070
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8071
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8074
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 8075
        .trainerName = _("KATHLEEN"),
#line 8076
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8077
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8078
F_TRAINER_FEMALE | 
#line 8079
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8080
        .doubleBattle = FALSE,
#line 8081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8083
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8084
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8087
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 8088
        .trainerName = _("CLIFFORD"),
#line 8089
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8090
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 8092
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8093
        .doubleBattle = FALSE,
#line 8094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8096
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8097
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8100
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 8101
        .trainerName = _("NICHOLAS"),
#line 8102
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8103
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 8105
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8106
        .doubleBattle = FALSE,
#line 8107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8109
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8110
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8113
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 8114
        .trainerName = _("GRUNT"),
#line 8115
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8116
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8117
F_TRAINER_FEMALE | 
#line 8118
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8119
        .doubleBattle = FALSE,
#line 8120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8122
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8123
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8126
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8127
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8130
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 8131
        .trainerName = _("GRUNT"),
#line 8132
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8133
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8135
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8136
        .doubleBattle = FALSE,
#line 8137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8139
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8140
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8143
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 8144
        .trainerName = _("GRUNT"),
#line 8145
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8146
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8148
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8149
        .doubleBattle = FALSE,
#line 8150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8152
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8154
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8153
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8156
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 8157
        .trainerName = _("GRUNT"),
#line 8158
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8159
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8161
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8162
        .doubleBattle = FALSE,
#line 8163
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8165
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8166
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8169
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 8170
        .trainerName = _("GRUNT"),
#line 8171
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8172
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8174
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8175
        .doubleBattle = FALSE,
#line 8176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8178
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8179
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8182
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 8183
        .trainerName = _("MACEY"),
#line 8184
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8185
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 8186
F_TRAINER_FEMALE | 
#line 8187
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8188
        .doubleBattle = FALSE,
#line 8189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8191
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8192
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8195
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8196
        .trainerName = _("BRENDAN"),
#line 8197
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8198
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8200
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8201
        .doubleBattle = FALSE,
#line 8202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8204
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8206
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8205
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8208
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8209
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8212
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8213
        .trainerName = _("BRENDAN"),
#line 8214
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8215
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8217
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8218
        .doubleBattle = FALSE,
#line 8219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8221
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8223
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8222
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8225
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8226
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8229
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 8230
        .trainerName = _("PAXTON"),
#line 8231
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8232
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 8234
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8235
        .doubleBattle = FALSE,
#line 8236
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8238
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8239
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8242
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8243
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8246
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 8247
        .trainerName = _("ISABELLA"),
#line 8248
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8249
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8250
F_TRAINER_FEMALE | 
#line 8251
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8252
        .doubleBattle = FALSE,
#line 8253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8255
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8256
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8259
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 8260
        .trainerName = _("GRUNT"),
#line 8261
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8262
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 8263
F_TRAINER_FEMALE | 
#line 8264
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8265
        .doubleBattle = FALSE,
#line 8266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8268
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8269
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8272
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8273
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8276
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 8277
        .trainerName = _("TABITHA"),
#line 8278
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8279
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 8281
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8282
        .doubleBattle = FALSE,
#line 8283
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8285
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8286
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8289
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8291
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8290
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8293
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8295
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8294
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8297
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8299
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8298
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8301
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 8302
        .trainerName = _("JONATHAN"),
#line 8303
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8304
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8306
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8307
        .items = { ITEM_HYPER_POTION },
#line 8308
        .doubleBattle = FALSE,
#line 8309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8311
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8312
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8315
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8316
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8319
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8320
        .trainerName = _("BRENDAN"),
#line 8321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8322
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8325
        .doubleBattle = FALSE,
#line 8326
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8328
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8330
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8329
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8332
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8334
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8333
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8336
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8337
        .trainerName = _("MAY"),
#line 8338
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8339
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8340
F_TRAINER_FEMALE | 
#line 8341
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8342
        .doubleBattle = FALSE,
#line 8343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8345
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8347
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8346
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8349
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8351
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8350
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8353
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 8354
        .trainerName = _("MAXIE"),
#line 8355
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8356
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8358
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8359
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8360
        .doubleBattle = FALSE,
#line 8361
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8363
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8364
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8367
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8369
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8368
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8371
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8373
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8372
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8375
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 8376
        .trainerName = _("MAXIE"),
#line 8377
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8378
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8380
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8381
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8382
        .doubleBattle = FALSE,
#line 8383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8385
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8387
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8386
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8389
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8391
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8390
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8393
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8395
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8394
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8397
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 8398
        .trainerName = _("TIANA"),
#line 8399
        .trainerClass = TRAINER_CLASS_LASS,
#line 8400
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8401
F_TRAINER_FEMALE | 
#line 8402
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8403
        .doubleBattle = FALSE,
#line 8404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8406
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8407
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8410
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8411
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8414
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 8415
        .trainerName = _("HALEY"),
#line 8416
        .trainerClass = TRAINER_CLASS_LASS,
#line 8417
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8418
F_TRAINER_FEMALE | 
#line 8419
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8420
        .doubleBattle = FALSE,
#line 8421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8423
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8424
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8427
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8428
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8431
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 8432
        .trainerName = _("JANICE"),
#line 8433
        .trainerClass = TRAINER_CLASS_LASS,
#line 8434
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8435
F_TRAINER_FEMALE | 
#line 8436
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8437
        .doubleBattle = FALSE,
#line 8438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8440
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8441
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8444
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 8445
        .trainerName = _("VIVI"),
#line 8446
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 8447
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8448
F_TRAINER_FEMALE | 
#line 8449
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8450
        .doubleBattle = FALSE,
#line 8451
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8453
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8454
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8457
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8459
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8458
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8461
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8463
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8462
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8465
    [DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
    {
#line 8466
        .trainerName = _("HALEY"),
#line 8467
        .trainerClass = TRAINER_CLASS_LASS,
#line 8468
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8469
F_TRAINER_FEMALE | 
#line 8470
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8471
        .doubleBattle = FALSE,
#line 8472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8474
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8476
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8475
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8478
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8480
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8479
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8482
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8483
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8486
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 8487
        .trainerName = _("SALLY"),
#line 8488
        .trainerClass = TRAINER_CLASS_LASS,
#line 8489
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8490
F_TRAINER_FEMALE | 
#line 8491
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8492
        .doubleBattle = FALSE,
#line 8493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8495
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8496
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8499
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 8500
        .trainerName = _("ROBIN"),
#line 8501
        .trainerClass = TRAINER_CLASS_LASS,
#line 8502
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8503
F_TRAINER_FEMALE | 
#line 8504
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8505
        .doubleBattle = FALSE,
#line 8506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8508
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8509
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8512
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8513
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8516
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8517
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8520
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 8521
        .trainerName = _("ANDREA"),
#line 8522
        .trainerClass = TRAINER_CLASS_LASS,
#line 8523
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8524
F_TRAINER_FEMALE | 
#line 8525
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8526
        .doubleBattle = FALSE,
#line 8527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8529
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8531
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8530
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8533
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 8534
        .trainerName = _("CRISSY"),
#line 8535
        .trainerClass = TRAINER_CLASS_LASS,
#line 8536
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8537
F_TRAINER_FEMALE | 
#line 8538
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8539
        .doubleBattle = FALSE,
#line 8540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8542
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8544
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8543
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8546
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8548
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8547
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8550
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 8551
        .trainerName = _("RICK"),
#line 8552
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8553
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8555
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8556
        .doubleBattle = FALSE,
#line 8557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8559
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8560
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8563
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8564
            .lvl = 4,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8567
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 8568
        .trainerName = _("LYLE"),
#line 8569
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8570
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8572
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8573
        .doubleBattle = FALSE,
#line 8574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8576
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8577
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8580
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8581
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8584
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8585
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8588
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8589
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8592
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 8593
        .trainerName = _("JOSE"),
#line 8594
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8595
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8597
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8598
        .doubleBattle = FALSE,
#line 8599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8601
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8603
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8602
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8605
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8606
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8609
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 8610
        .trainerName = _("DOUG"),
#line 8611
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8612
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8614
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8615
        .doubleBattle = FALSE,
#line 8616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8618
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8619
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8622
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8623
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8626
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 8627
        .trainerName = _("GREG"),
#line 8628
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8629
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8631
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8632
        .doubleBattle = FALSE,
#line 8633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8635
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8636
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8639
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8640
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8643
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 8644
        .trainerName = _("KENT"),
#line 8645
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8646
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8649
        .doubleBattle = FALSE,
#line 8650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8652
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8653
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8656
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 8657
        .trainerName = _("JAMES"),
#line 8658
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8659
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8661
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8662
        .doubleBattle = FALSE,
#line 8663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8665
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8666
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8669
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8670
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8673
    [DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
    {
#line 8674
        .trainerName = _("JAMES"),
#line 8675
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8676
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8678
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8679
        .doubleBattle = FALSE,
#line 8680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8682
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8684
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8683
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8686
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8688
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8687
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8690
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8691
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8694
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8695
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 8699
        .trainerName = _("BRICE"),
#line 8700
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8701
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8703
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8704
        .doubleBattle = FALSE,
#line 8705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8708
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8711
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8712
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8715
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 8716
        .trainerName = _("TRENT"),
#line 8717
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8718
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8720
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8721
        .doubleBattle = FALSE,
#line 8722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8724
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8725
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8728
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8729
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8732
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8733
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8736
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 8737
        .trainerName = _("LENNY"),
#line 8738
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8739
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8741
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8742
        .doubleBattle = FALSE,
#line 8743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8745
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8746
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8749
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8750
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8753
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
#line 8754
        .trainerName = _("LUCAS"),
#line 8755
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8756
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8758
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8759
        .doubleBattle = FALSE,
#line 8760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8762
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8763
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8766
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8767
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8770
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 8771
        .trainerName = _("ALAN"),
#line 8772
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8773
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8775
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8776
        .doubleBattle = FALSE,
#line 8777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8779
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8780
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8783
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8784
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8787
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8788
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8791
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8792
        .trainerName = _("CLARK"),
#line 8793
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8794
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8796
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8797
        .doubleBattle = FALSE,
#line 8798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8800
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8801
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8804
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8805
        .trainerName = _("ERIC"),
#line 8806
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8807
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8809
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8810
        .doubleBattle = FALSE,
#line 8811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8813
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8814
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8817
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8818
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8821
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_2] =
    {
#line 8822
        .trainerName = _("LUCAS"),
#line 8823
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8824
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8826
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8827
        .doubleBattle = FALSE,
#line 8828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8830
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8831
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8833
                MOVE_SPLASH,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 8836
    [DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
    {
#line 8837
        .trainerName = _("MIKE"),
#line 8838
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8839
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8841
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8842
        .doubleBattle = FALSE,
#line 8843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8845
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8846
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8848
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 8851
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8852
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8854
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 8857
    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
#line 8858
        .trainerName = _("MIKE"),
#line 8859
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8860
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8862
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8863
        .doubleBattle = FALSE,
#line 8864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8866
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8867
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8870
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8871
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8874
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8875
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8878
    [DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
    {
#line 8879
        .trainerName = _("TRENT"),
#line 8880
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8881
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8883
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8884
        .doubleBattle = FALSE,
#line 8885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8887
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8889
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8888
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8891
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8893
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8892
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8895
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8897
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8896
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8899
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8901
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8900
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8903
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8904
        .trainerName = _("DEZ & LUKE"),
#line 8905
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8906
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8908
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8909
        .doubleBattle = TRUE,
#line 8910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8912
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8913
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8916
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8917
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8920
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8921
        .trainerName = _("LEA & JED"),
#line 8922
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8923
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8925
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8926
        .doubleBattle = TRUE,
#line 8927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8929
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8930
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8933
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8934
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8937
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 8938
        .trainerName = _("KIRA & DAN"),
#line 8939
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8940
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8942
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8943
        .doubleBattle = TRUE,
#line 8944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8946
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8947
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8950
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8951
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8954
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
    {
#line 8955
        .trainerName = _("KIRA & DAN"),
#line 8956
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8957
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8959
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8960
        .doubleBattle = TRUE,
#line 8961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8963
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8965
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8964
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8967
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8968
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8971
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8972
        .trainerName = _("JOHANNA"),
#line 8973
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8974
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8975
F_TRAINER_FEMALE | 
#line 8976
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8977
        .doubleBattle = FALSE,
#line 8978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8980
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8981
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8984
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8985
        .trainerName = _("GERALD"),
#line 8986
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8987
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8989
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8990
        .items = { ITEM_HYPER_POTION },
#line 8991
        .doubleBattle = FALSE,
#line 8992
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8994
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8995
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8997
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 9002
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 9003
        .trainerName = _("VIVIAN"),
#line 9004
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9005
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9006
F_TRAINER_FEMALE | 
#line 9007
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9008
        .doubleBattle = FALSE,
#line 9009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9011
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9013
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9012
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9014
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9019
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9020
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9022
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 9027
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 9028
        .trainerName = _("DANIELLE"),
#line 9029
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9030
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9031
F_TRAINER_FEMALE | 
#line 9032
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9033
        .doubleBattle = FALSE,
#line 9034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9036
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9038
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9037
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9039
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9044
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 9045
        .trainerName = _("HIDEO"),
#line 9046
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9047
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9049
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9050
        .doubleBattle = FALSE,
#line 9051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9053
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9054
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9056
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9061
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9062
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9064
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 9069
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 9070
        .trainerName = _("KEIGO"),
#line 9071
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9072
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9074
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9075
        .doubleBattle = FALSE,
#line 9076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9078
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9079
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9081
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9086
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9087
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9089
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 9094
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 9095
        .trainerName = _("RILEY"),
#line 9096
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9097
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9099
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9100
        .doubleBattle = FALSE,
#line 9101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9103
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9104
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9106
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 9111
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9112
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9114
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 9119
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 9120
        .trainerName = _("FLINT"),
#line 9121
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9122
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9124
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9125
        .doubleBattle = FALSE,
#line 9126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9128
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9130
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9129
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9132
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9134
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9133
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9136
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 9137
        .trainerName = _("ASHLEY"),
#line 9138
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9139
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9140
F_TRAINER_FEMALE | 
#line 9141
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9142
        .doubleBattle = FALSE,
#line 9143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9145
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9147
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9146
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9149
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9151
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9150
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9153
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9155
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9154
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9157
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 9158
        .trainerName = _("WALLY"),
#line 9159
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9160
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9162
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9163
        .doubleBattle = FALSE,
#line 9164
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9166
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9167
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9170
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
#line 9171
        .trainerName = _("WALLY"),
#line 9172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9173
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9175
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9176
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9177
        .doubleBattle = FALSE,
#line 9178
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9180
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9181
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9183
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9188
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9190
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9189
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9191
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9196
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9197
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9199
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9204
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9206
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9205
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9207
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9212
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9214
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9213
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9215
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9220
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 9221
        .trainerName = _("BRENDAN"),
#line 9222
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9223
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9225
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9226
        .doubleBattle = FALSE,
#line 9227
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9229
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9231
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9230
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9233
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9235
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9234
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9237
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9239
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9238
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9241
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9243
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9242
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9245
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 9246
        .trainerName = _("BRENDAN"),
#line 9247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9248
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9250
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9251
        .doubleBattle = FALSE,
#line 9252
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9254
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9256
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9255
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9258
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9259
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9262
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9264
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9263
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9266
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9268
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9267
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9270
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 9271
        .trainerName = _("BRENDAN"),
#line 9272
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9273
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9276
        .doubleBattle = FALSE,
#line 9277
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9279
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9281
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9280
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9283
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9285
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9284
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9287
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9289
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9288
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9291
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9293
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9292
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9295
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 9296
        .trainerName = _("MAY"),
#line 9297
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9298
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9299
F_TRAINER_FEMALE | 
#line 9300
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9301
        .doubleBattle = FALSE,
#line 9302
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9304
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9306
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9305
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9308
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9309
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9312
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9314
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9313
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9316
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9318
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9317
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9320
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 9321
        .trainerName = _("MAY"),
#line 9322
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9323
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9324
F_TRAINER_FEMALE | 
#line 9325
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9326
        .doubleBattle = FALSE,
#line 9327
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9329
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9331
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9330
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9333
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9335
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9334
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9337
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9339
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9338
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9341
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9343
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9342
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9345
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 9346
        .trainerName = _("MAY"),
#line 9347
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9348
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9349
F_TRAINER_FEMALE | 
#line 9350
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9351
        .doubleBattle = FALSE,
#line 9352
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9355
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9358
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9360
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9359
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9362
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9363
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9366
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9367
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 9371
        .trainerName = _("JONAH"),
#line 9372
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9373
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9375
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9376
        .doubleBattle = FALSE,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9380
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9383
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9384
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9387
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9388
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9391
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 9392
        .trainerName = _("HENRY"),
#line 9393
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9394
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9396
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9397
        .doubleBattle = FALSE,
#line 9398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9400
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9401
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9404
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9405
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9408
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 9409
        .trainerName = _("ROGER"),
#line 9410
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9411
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9413
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9414
        .doubleBattle = FALSE,
#line 9415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9417
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9418
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9421
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9422
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9425
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9426
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9429
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 9430
        .trainerName = _("ALEXA"),
#line 9431
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9432
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9433
F_TRAINER_FEMALE | 
#line 9434
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9435
        .items = { ITEM_FULL_RESTORE },
#line 9436
        .doubleBattle = FALSE,
#line 9437
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9439
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9440
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9443
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9445
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9444
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9447
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 9448
        .trainerName = _("RUBEN"),
#line 9449
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9450
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9452
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9453
        .items = { ITEM_HYPER_POTION },
#line 9454
        .doubleBattle = FALSE,
#line 9455
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9457
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9458
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9461
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9463
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9462
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9465
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 9466
        .trainerName = _("KOJI"),
#line 9467
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9468
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9470
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9471
        .doubleBattle = FALSE,
#line 9472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9475
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9478
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 9479
        .trainerName = _("WAYNE"),
#line 9480
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9481
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9483
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9484
        .doubleBattle = FALSE,
#line 9485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9487
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9488
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9491
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9492
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9495
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9496
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9499
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 9500
        .trainerName = _("AIDAN"),
#line 9501
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9502
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9504
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9505
        .doubleBattle = FALSE,
#line 9506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9508
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9509
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9512
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9513
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9516
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 9517
        .trainerName = _("REED"),
#line 9518
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9519
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9521
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9522
        .doubleBattle = FALSE,
#line 9523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9525
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9526
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9529
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9530
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9533
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 9534
        .trainerName = _("TISHA"),
#line 9535
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9536
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9537
F_TRAINER_FEMALE | 
#line 9538
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9539
        .doubleBattle = FALSE,
#line 9540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9542
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9543
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9546
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 9547
        .trainerName = _("TORI & TIA"),
#line 9548
        .trainerClass = TRAINER_CLASS_TWINS,
#line 9549
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 9551
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9552
        .doubleBattle = TRUE,
#line 9553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9555
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9556
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9559
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9560
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9563
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 9564
        .trainerName = _("KIM & IRIS"),
#line 9565
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9566
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9568
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9569
        .doubleBattle = TRUE,
#line 9570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9572
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9573
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9575
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 9580
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9583
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9588
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 9589
        .trainerName = _("TYRA & IVY"),
#line 9590
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9591
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9593
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9594
        .doubleBattle = TRUE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9598
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9600
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 9605
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9606
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9608
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 9613
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 9614
        .trainerName = _("MEL & PAUL"),
#line 9615
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9616
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9618
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9619
        .doubleBattle = TRUE,
#line 9620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9622
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9623
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9625
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9630
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9631
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9633
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 9638
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 9639
        .trainerName = _("JOHN & JAY"),
#line 9640
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9641
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9643
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9644
        .doubleBattle = TRUE,
#line 9645
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9647
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9648
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9650
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9655
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9657
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9656
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9658
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9663
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
    {
#line 9664
        .trainerName = _("JOHN & JAY"),
#line 9665
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9666
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9668
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9669
        .doubleBattle = TRUE,
#line 9670
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9672
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9674
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 9673
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9675
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9680
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9682
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 9681
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9683
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9688
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 9689
        .trainerName = _("RELI & IAN"),
#line 9690
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9691
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9693
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9694
        .doubleBattle = TRUE,
#line 9695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9697
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9698
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9701
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9702
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9705
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 9706
        .trainerName = _("LILA & ROY"),
#line 9707
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9708
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9710
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9711
        .doubleBattle = TRUE,
#line 9712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9714
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9715
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9718
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9719
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9722
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
    {
#line 9723
        .trainerName = _("LILA & ROY"),
#line 9724
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9725
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9727
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9728
        .doubleBattle = TRUE,
#line 9729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9731
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9732
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9735
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9736
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9739
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 9740
        .trainerName = _("LISA & RAY"),
#line 9741
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9742
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9744
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9745
        .doubleBattle = TRUE,
#line 9746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9748
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9749
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9752
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9753
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9756
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 9757
        .trainerName = _("CHRIS"),
#line 9758
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9759
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9761
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9762
        .doubleBattle = FALSE,
#line 9763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9765
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9766
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9769
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9770
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9773
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9774
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9777
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9778
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9781
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 9782
        .trainerName = _("DAWSON"),
#line 9783
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 9784
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 9786
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9787
        .doubleBattle = FALSE,
#line 9788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9790
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9790
            .heldItem = ITEM_NUGGET,
#line 9792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9791
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9794
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9795
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9798
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 9799
        .trainerName = _("SARAH"),
#line 9800
        .trainerClass = TRAINER_CLASS_LADY,
#line 9801
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 9802
F_TRAINER_FEMALE | 
#line 9803
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9804
        .items = { ITEM_FULL_RESTORE },
#line 9805
        .doubleBattle = FALSE,
#line 9806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9808
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9809
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9812
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9812
            .heldItem = ITEM_NUGGET,
#line 9814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9813
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9816
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 9817
        .trainerName = _("DARIAN"),
#line 9818
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9819
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9821
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9822
        .doubleBattle = FALSE,
#line 9823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9825
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9826
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9829
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 9830
        .trainerName = _("HAILEY"),
#line 9831
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 9832
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 9833
F_TRAINER_FEMALE | 
#line 9834
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9835
        .doubleBattle = FALSE,
#line 9836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9838
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9839
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9842
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 9843
        .trainerName = _("CHANDLER"),
#line 9844
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 9845
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 9847
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9848
        .doubleBattle = FALSE,
#line 9849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9851
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9852
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9855
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9856
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9859
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 9860
        .trainerName = _("KALEB"),
#line 9861
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 9862
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 9864
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9865
        .doubleBattle = FALSE,
#line 9866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9868
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9868
            .heldItem = ITEM_ORAN_BERRY,
#line 9870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9869
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9872
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9872
            .heldItem = ITEM_ORAN_BERRY,
#line 9874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9873
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9876
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 9877
        .trainerName = _("JOSEPH"),
#line 9878
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9879
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9881
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9882
        .doubleBattle = FALSE,
#line 9883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9885
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9886
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9889
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9890
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9893
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 9894
        .trainerName = _("ALYSSA"),
#line 9895
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9896
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9897
F_TRAINER_FEMALE | 
#line 9898
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9899
        .doubleBattle = FALSE,
#line 9900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9902
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9903
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9906
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 9907
        .trainerName = _("MARCOS"),
#line 9908
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9909
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9911
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9912
        .doubleBattle = FALSE,
#line 9913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9915
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9916
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9919
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 9920
        .trainerName = _("RHETT"),
#line 9921
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9922
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9924
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9925
        .doubleBattle = FALSE,
#line 9926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9928
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9930
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9929
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9932
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 9933
        .trainerName = _("TYRON"),
#line 9934
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9935
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9937
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9938
        .doubleBattle = FALSE,
#line 9939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9941
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9942
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9945
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 9946
        .trainerName = _("CELINA"),
#line 9947
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9948
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9949
F_TRAINER_FEMALE | 
#line 9950
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9951
        .doubleBattle = FALSE,
#line 9952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9954
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9955
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9958
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 9959
        .trainerName = _("BIANCA"),
#line 9960
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9961
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9962
F_TRAINER_FEMALE | 
#line 9963
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9964
        .doubleBattle = FALSE,
#line 9965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9967
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9968
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9971
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9972
        .trainerName = _("HAYDEN"),
#line 9973
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9974
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9976
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9977
        .doubleBattle = FALSE,
#line 9978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9980
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9981
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9984
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9985
        .trainerName = _("SOPHIE"),
#line 9986
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9987
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9988
F_TRAINER_FEMALE | 
#line 9989
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9990
        .doubleBattle = FALSE,
#line 9991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9993
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9994
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9997
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9998
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10001
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 10002
        .trainerName = _("COBY"),
#line 10003
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10004
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10006
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10007
        .doubleBattle = FALSE,
#line 10008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10010
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10011
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10014
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10015
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10018
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 10019
        .trainerName = _("LAWRENCE"),
#line 10020
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10021
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10023
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10024
        .doubleBattle = FALSE,
#line 10025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10027
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10028
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10031
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10032
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10035
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 10036
        .trainerName = _("WYATT"),
#line 10037
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 10038
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 10040
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10041
        .doubleBattle = FALSE,
#line 10042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10044
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10045
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10048
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10049
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10052
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 10053
        .trainerName = _("ANGELINA"),
#line 10054
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10055
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10056
F_TRAINER_FEMALE | 
#line 10057
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10058
        .doubleBattle = FALSE,
#line 10059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10061
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10062
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10065
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10066
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10069
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 10070
        .trainerName = _("KAI"),
#line 10071
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10072
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 10074
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10075
        .doubleBattle = FALSE,
#line 10076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10078
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10079
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10082
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 10083
        .trainerName = _("CHARLOTTE"),
#line 10084
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10085
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10086
F_TRAINER_FEMALE | 
#line 10087
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10088
        .doubleBattle = FALSE,
#line 10089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10091
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10092
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10095
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 10096
        .trainerName = _("DEANDRE"),
#line 10097
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10098
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 10100
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10101
        .doubleBattle = FALSE,
#line 10102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10104
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10105
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10108
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10109
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10112
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10113
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10116
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 10117
        .trainerName = _("GRUNT"),
#line 10118
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10119
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10121
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10122
        .doubleBattle = FALSE,
#line 10123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10125
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10126
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10129
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 10130
        .trainerName = _("GRUNT"),
#line 10131
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10132
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10134
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10135
        .doubleBattle = FALSE,
#line 10136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10138
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10139
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10142
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 10143
        .trainerName = _("GRUNT"),
#line 10144
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10145
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10147
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10148
        .doubleBattle = FALSE,
#line 10149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10151
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10152
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10155
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 10156
        .trainerName = _("GRUNT"),
#line 10157
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10158
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10160
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10161
        .doubleBattle = FALSE,
#line 10162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10164
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10165
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10168
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10169
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10172
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 10173
        .trainerName = _("GRUNT"),
#line 10174
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10175
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10177
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10178
        .doubleBattle = FALSE,
#line 10179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10181
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10182
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10185
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10186
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10189
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 10190
        .trainerName = _("GRUNT"),
#line 10191
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10192
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10194
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10195
        .doubleBattle = FALSE,
#line 10196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10198
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10199
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10202
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 10203
        .trainerName = _("GRUNT"),
#line 10204
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10205
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10207
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10208
        .doubleBattle = FALSE,
#line 10209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10211
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10212
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10215
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 10216
        .trainerName = _("GRUNT"),
#line 10217
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10218
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10220
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10221
        .doubleBattle = FALSE,
#line 10222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10224
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10225
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10228
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 10229
        .trainerName = _("GRUNT"),
#line 10230
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10231
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10233
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10234
        .doubleBattle = FALSE,
#line 10235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10237
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10238
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10241
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 10242
        .trainerName = _("GRUNT"),
#line 10243
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10244
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10246
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10247
        .doubleBattle = FALSE,
#line 10248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10250
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10251
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10254
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 10255
        .trainerName = _("GRUNT"),
#line 10256
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10257
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10259
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10260
        .doubleBattle = FALSE,
#line 10261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10263
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10264
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10267
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 10268
        .trainerName = _("GRUNT"),
#line 10269
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10270
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10272
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10273
        .doubleBattle = FALSE,
#line 10274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10276
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10277
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10280
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 10281
        .trainerName = _("GRUNT"),
#line 10282
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10283
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10285
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10286
        .doubleBattle = FALSE,
#line 10287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10289
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10290
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10293
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 10294
        .trainerName = _("GRUNT"),
#line 10295
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10296
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10297
F_TRAINER_FEMALE | 
#line 10298
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10299
        .doubleBattle = FALSE,
#line 10300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10302
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10303
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10306
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 10307
        .trainerName = _("GRUNT"),
#line 10308
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10309
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10310
F_TRAINER_FEMALE | 
#line 10311
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10312
        .doubleBattle = FALSE,
#line 10313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10315
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10316
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10319
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 10320
        .trainerName = _("GRUNT"),
#line 10321
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10322
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10323
F_TRAINER_FEMALE | 
#line 10324
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10325
        .doubleBattle = FALSE,
#line 10326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10328
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10329
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10332
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 10333
        .trainerName = _("TABITHA"),
#line 10334
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 10335
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 10337
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10338
        .doubleBattle = FALSE,
#line 10339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10341
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10343
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10342
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10345
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10347
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10346
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10349
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10351
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10350
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10353
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10355
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10354
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10357
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 10358
        .trainerName = _("DARCY"),
#line 10359
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10360
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10361
F_TRAINER_FEMALE | 
#line 10362
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10363
        .items = { ITEM_HYPER_POTION },
#line 10364
        .doubleBattle = FALSE,
#line 10365
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10367
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10368
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10371
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10372
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10375
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 10376
        .trainerName = _("MAXIE"),
#line 10377
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 10378
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 10380
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10381
        .doubleBattle = FALSE,
#line 10382
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10384
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10386
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10385
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10388
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10390
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10389
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10392
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10394
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10393
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10396
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 10397
        .trainerName = _("PETE"),
#line 10398
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10399
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 10401
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10402
        .doubleBattle = FALSE,
#line 10403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10405
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10406
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10409
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 10410
        .trainerName = _("ISABELLE"),
#line 10411
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10412
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 10413
F_TRAINER_FEMALE | 
#line 10414
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10415
        .doubleBattle = FALSE,
#line 10416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10418
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10419
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10422
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 10423
        .trainerName = _("ANDRES"),
#line 10424
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10425
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10427
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10428
        .doubleBattle = FALSE,
#line 10429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10431
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10433
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10432
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10435
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10437
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10436
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10439
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 10440
        .trainerName = _("JOSUE"),
#line 10441
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10442
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10444
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10445
        .doubleBattle = FALSE,
#line 10446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10448
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10450
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10449
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10452
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10454
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10453
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10456
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 10457
        .trainerName = _("CAMRON"),
#line 10458
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10459
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 10461
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10462
        .doubleBattle = FALSE,
#line 10463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10465
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10466
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10469
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 10470
        .trainerName = _("CORY"),
#line 10471
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10472
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10474
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10475
        .doubleBattle = FALSE,
#line 10476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10478
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10479
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10482
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10483
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10486
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10487
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10490
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 10491
        .trainerName = _("CAROLINA"),
#line 10492
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10493
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10494
F_TRAINER_FEMALE | 
#line 10495
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10496
        .items = { ITEM_HYPER_POTION },
#line 10497
        .doubleBattle = FALSE,
#line 10498
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10500
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10502
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10501
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10504
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10506
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10505
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10508
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10510
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10509
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10512
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 10513
        .trainerName = _("ELIJAH"),
#line 10514
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10515
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10517
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10518
        .doubleBattle = FALSE,
#line 10519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10521
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10522
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10525
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10526
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10529
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 10530
        .trainerName = _("CELIA"),
#line 10531
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10532
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10533
F_TRAINER_FEMALE | 
#line 10534
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10535
        .doubleBattle = FALSE,
#line 10536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10538
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10539
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10542
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10543
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10546
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 10547
        .trainerName = _("BRYAN"),
#line 10548
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10549
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10551
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10552
        .doubleBattle = FALSE,
#line 10553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10555
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10556
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10559
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10560
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10563
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 10564
        .trainerName = _("BRANDEN"),
#line 10565
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10566
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10568
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10569
        .doubleBattle = FALSE,
#line 10570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10572
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10573
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10576
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10577
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10580
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 10581
        .trainerName = _("BRYANT"),
#line 10582
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10583
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10585
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10586
        .doubleBattle = FALSE,
#line 10587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10589
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10590
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10593
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10594
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10597
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 10598
        .trainerName = _("SHAYLA"),
#line 10599
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10600
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 10601
F_TRAINER_FEMALE | 
#line 10602
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10603
        .doubleBattle = FALSE,
#line 10604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10606
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10607
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10610
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10611
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10614
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 10615
        .trainerName = _("KYRA"),
#line 10616
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10617
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10618
F_TRAINER_FEMALE | 
#line 10619
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10620
        .doubleBattle = FALSE,
#line 10621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10623
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10624
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10627
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10628
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10631
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 10632
        .trainerName = _("JAIDEN"),
#line 10633
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10634
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 10636
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10637
        .doubleBattle = FALSE,
#line 10638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10640
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10641
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10644
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10645
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10648
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 10649
        .trainerName = _("ALIX"),
#line 10650
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10651
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10652
F_TRAINER_FEMALE | 
#line 10653
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10654
        .doubleBattle = FALSE,
#line 10655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10657
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10658
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10661
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10662
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10665
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 10666
        .trainerName = _("HELENE"),
#line 10667
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10668
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10669
F_TRAINER_FEMALE | 
#line 10670
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10671
        .doubleBattle = FALSE,
#line 10672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10674
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10675
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10678
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10679
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10682
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 10683
        .trainerName = _("MARLENE"),
#line 10684
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10685
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10686
F_TRAINER_FEMALE | 
#line 10687
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10688
        .doubleBattle = FALSE,
#line 10689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10691
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10692
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10695
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10696
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10699
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 10700
        .trainerName = _("DEVAN"),
#line 10701
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10702
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10704
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10705
        .doubleBattle = FALSE,
#line 10706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10708
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10709
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10712
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10713
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10716
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 10717
        .trainerName = _("JOHNSON"),
#line 10718
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10719
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 10721
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10722
        .doubleBattle = FALSE,
#line 10723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10725
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10726
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10729
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10730
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10733
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 10734
        .trainerName = _("MELINA"),
#line 10735
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10736
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10737
F_TRAINER_FEMALE | 
#line 10738
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10739
        .doubleBattle = FALSE,
#line 10740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10742
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10743
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10746
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 10747
        .trainerName = _("BRANDI"),
#line 10748
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10749
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10750
F_TRAINER_FEMALE | 
#line 10751
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10752
        .doubleBattle = FALSE,
#line 10753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10755
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10756
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10759
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 10760
        .trainerName = _("AISHA"),
#line 10761
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10762
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10763
F_TRAINER_FEMALE | 
#line 10764
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10765
        .doubleBattle = FALSE,
#line 10766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10768
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10769
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10772
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 10773
        .trainerName = _("MAKAYLA"),
#line 10774
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 10775
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 10776
F_TRAINER_FEMALE | 
#line 10777
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10778
        .items = { ITEM_HYPER_POTION },
#line 10779
        .doubleBattle = FALSE,
#line 10780
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10782
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10783
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10786
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10787
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10790
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 10791
        .trainerName = _("FABIAN"),
#line 10792
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10793
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 10795
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10796
        .doubleBattle = FALSE,
#line 10797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10799
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10800
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10803
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 10804
        .trainerName = _("DAYTON"),
#line 10805
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10806
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10808
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10809
        .doubleBattle = FALSE,
#line 10810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10812
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10813
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10816
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10817
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10820
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 10821
        .trainerName = _("RACHEL"),
#line 10822
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 10823
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 10824
F_TRAINER_FEMALE | 
#line 10825
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10826
        .doubleBattle = FALSE,
#line 10827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10829
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10830
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10833
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 10834
        .trainerName = _("LEONEL"),
#line 10835
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10836
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 10838
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10839
        .items = { ITEM_HYPER_POTION },
#line 10840
        .doubleBattle = FALSE,
#line 10841
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10843
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10845
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10844
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10846
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 10850
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 10851
        .trainerName = _("CALLIE"),
#line 10852
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10853
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10854
F_TRAINER_FEMALE | 
#line 10855
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10856
        .doubleBattle = FALSE,
#line 10857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10859
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10860
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10863
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10864
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10867
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 10868
        .trainerName = _("CALE"),
#line 10869
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10870
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10872
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10873
        .doubleBattle = FALSE,
#line 10874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10876
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10877
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10880
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10881
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10884
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 10885
        .trainerName = _("MYLES"),
#line 10886
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10887
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 10889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10890
        .doubleBattle = FALSE,
#line 10891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10893
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10895
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10894
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10897
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10899
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10898
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10901
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10903
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10902
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10905
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10907
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10906
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10909
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10911
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10910
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10913
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10915
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10914
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10917
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 10918
        .trainerName = _("PAT"),
#line 10919
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10920
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 10921
F_TRAINER_FEMALE | 
#line 10922
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10923
        .doubleBattle = FALSE,
#line 10924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10926
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10927
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10930
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10932
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10931
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10934
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10936
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10935
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10938
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10940
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10939
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10942
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10944
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10943
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10946
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10948
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10947
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10950
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 10951
        .trainerName = _("CRISTIN"),
#line 10952
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10953
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10954
F_TRAINER_FEMALE | 
#line 10955
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10956
        .items = { ITEM_HYPER_POTION },
#line 10957
        .doubleBattle = FALSE,
#line 10958
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10960
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10962
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10961
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10964
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10966
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10965
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10968
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10969
        .trainerName = _("MAY"),
#line 10970
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10971
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10972
F_TRAINER_FEMALE | 
#line 10973
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10974
        .doubleBattle = FALSE,
#line 10975
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10977
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10979
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10978
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10981
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10983
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10982
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10985
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10986
        .trainerName = _("MAY"),
#line 10987
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10988
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10989
F_TRAINER_FEMALE | 
#line 10990
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10991
        .doubleBattle = FALSE,
#line 10992
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10994
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10996
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10995
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10998
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11000
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10999
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11002
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
#line 11003
        .trainerName = _("ROXANNE"),
#line 11004
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11005
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 11006
F_TRAINER_FEMALE | 
#line 11007
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11008
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11009
        .doubleBattle = TRUE,
#line 11010
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11012
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11013
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11015
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 11020
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11021
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11023
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 11028
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11029
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11031
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 11036
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11036
            .heldItem = ITEM_SITRUS_BERRY,
#line 11038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11037
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11039
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 11044
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11045
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11047
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 11052
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11052
            .heldItem = ITEM_SITRUS_BERRY,
#line 11054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11053
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11055
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 11060
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
#line 11061
        .trainerName = _("BRAWLY"),
#line 11062
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11063
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 11065
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11066
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11067
        .doubleBattle = TRUE,
#line 11068
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11070
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11071
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11073
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 11078
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11079
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11081
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 11086
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11086
            .heldItem = ITEM_SITRUS_BERRY,
#line 11088
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11087
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11089
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 11094
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11095
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11097
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 11102
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11103
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11105
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 11110
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11110
            .heldItem = ITEM_SITRUS_BERRY,
#line 11112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11111
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11113
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11118
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
#line 11119
        .trainerName = _("WATTSON"),
#line 11120
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11121
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 11123
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11124
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11125
        .doubleBattle = TRUE,
#line 11126
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11128
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11129
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11131
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11136
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11137
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11139
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 11144
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11145
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11147
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11152
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11153
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11155
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 11160
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11160
            .heldItem = ITEM_SITRUS_BERRY,
#line 11162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11161
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11163
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 11168
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11168
            .heldItem = ITEM_SITRUS_BERRY,
#line 11170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11169
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11171
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 11176
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
#line 11177
        .trainerName = _("FLANNERY"),
#line 11178
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11179
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 11180
F_TRAINER_FEMALE | 
#line 11181
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11182
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11183
        .doubleBattle = TRUE,
#line 11184
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11186
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11187
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11189
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 11194
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11194
            .heldItem = ITEM_WHITE_HERB,
#line 11196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11195
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11197
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 11202
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11203
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11205
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 11210
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11211
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11213
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 11218
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11218
            .heldItem = ITEM_WHITE_HERB,
#line 11220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11219
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11221
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 11226
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11226
            .heldItem = ITEM_WHITE_HERB,
#line 11228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11227
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11229
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 11234
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
#line 11235
        .trainerName = _("NORMAN"),
#line 11236
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11237
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 11239
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11240
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11241
        .doubleBattle = TRUE,
#line 11242
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11244
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11244
            .heldItem = ITEM_SITRUS_BERRY,
#line 11246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11245
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11247
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 11252
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11253
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11255
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 11260
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11261
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11263
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 11268
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11269
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11271
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11276
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11277
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11279
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 11284
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11284
            .heldItem = ITEM_SITRUS_BERRY,
#line 11286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11285
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11287
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11292
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 11293
        .trainerName = _("WINONA"),
#line 11294
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11295
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 11296
F_TRAINER_FEMALE | 
#line 11297
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11298
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11299
        .doubleBattle = TRUE,
#line 11300
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11302
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11303
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11305
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 11310
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11311
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11313
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11318
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11319
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11321
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11326
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11326
            .heldItem = ITEM_SITRUS_BERRY,
#line 11328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11327
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11329
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11334
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11335
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11337
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11342
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11342
            .heldItem = ITEM_CHESTO_BERRY,
#line 11344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11343
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11345
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11350
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 11351
        .trainerName = _("TATE&LIZA"),
#line 11352
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11353
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 11355
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11356
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11357
        .doubleBattle = TRUE,
#line 11358
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11360
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11361
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11363
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11368
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11369
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11371
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11376
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11378
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11377
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11379
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11384
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11384
            .heldItem = ITEM_CHESTO_BERRY,
#line 11386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11385
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11387
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11392
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11392
            .heldItem = ITEM_CHESTO_BERRY,
#line 11394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11393
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11395
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11400
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11400
            .heldItem = ITEM_SITRUS_BERRY,
#line 11402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11401
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11403
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11408
    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
#line 11409
        .trainerName = _("JUAN"),
#line 11410
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11411
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11413
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11414
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11415
        .doubleBattle = TRUE,
#line 11416
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11418
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11419
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11421
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11426
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11427
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11429
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11434
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11435
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11437
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 11442
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11443
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11445
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 11450
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11450
            .heldItem = ITEM_CHESTO_BERRY,
#line 11452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11451
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11453
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11458
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11458
            .heldItem = ITEM_CHESTO_BERRY,
#line 11460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11459
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11461
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11466
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 11467
        .trainerName = _("ANGELO"),
#line 11468
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11469
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 11471
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11472
        .doubleBattle = FALSE,
#line 11473
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11475
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11477
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11476
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11478
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11482
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11484
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11483
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11485
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11489
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 11490
        .trainerName = _("DARIUS"),
#line 11491
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11492
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 11494
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11495
        .doubleBattle = FALSE,
#line 11496
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11498
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11500
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11499
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11502
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 11503
        .trainerName = _("STEVEN"),
#line 11504
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11505
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 11507
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11508
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11509
        .doubleBattle = FALSE,
#line 11510
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11512
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11513
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11515
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11520
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11521
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11523
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11528
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11529
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11531
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11536
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11537
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11539
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11544
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11545
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11547
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11552
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11552
            .heldItem = ITEM_SITRUS_BERRY,
#line 11554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11553
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11555
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11560
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 11561
        .trainerName = _("ANABEL"),
#line 11562
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11563
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 11564
F_TRAINER_FEMALE | 
#line 11565
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11566
        .doubleBattle = FALSE,
#line 11567
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11569
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11570
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11573
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 11574
        .trainerName = _("TUCKER"),
#line 11575
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11576
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 11578
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11579
        .doubleBattle = FALSE,
#line 11580
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11582
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11583
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11586
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 11587
        .trainerName = _("SPENSER"),
#line 11588
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11589
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender =
#line 11591
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11592
        .doubleBattle = FALSE,
#line 11593
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11595
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11596
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11599
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 11600
        .trainerName = _("GRETA"),
#line 11601
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11602
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender =
#line 11603
F_TRAINER_FEMALE | 
#line 11604
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11605
        .doubleBattle = FALSE,
#line 11606
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11608
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11609
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11612
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 11613
        .trainerName = _("NOLAND"),
#line 11614
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11615
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 11617
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11618
        .doubleBattle = FALSE,
#line 11619
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11621
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11622
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11625
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 11626
        .trainerName = _("LUCY"),
#line 11627
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11628
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 11629
F_TRAINER_FEMALE | 
#line 11630
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11631
        .doubleBattle = FALSE,
#line 11632
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11634
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11635
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11638
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 11639
        .trainerName = _("BRANDON"),
#line 11640
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11641
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 11643
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11644
        .doubleBattle = FALSE,
#line 11645
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11647
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11648
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11651
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 11652
        .trainerName = _("ANDRES"),
#line 11653
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11654
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 11656
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11657
        .doubleBattle = FALSE,
#line 11658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11660
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11662
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11661
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11664
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11666
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11665
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11668
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11670
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11669
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11672
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 11673
        .trainerName = _("CORY"),
#line 11674
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11675
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 11677
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11678
        .doubleBattle = FALSE,
#line 11679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11681
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11683
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11682
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11685
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11687
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11686
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11689
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11691
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11690
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11693
    [DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
    {
#line 11694
        .trainerName = _("PABLO"),
#line 11695
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11696
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 11698
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11699
        .doubleBattle = FALSE,
#line 11700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11702
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11704
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11703
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11706
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11708
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11707
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11710
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11712
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11711
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11714
    [DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
    {
#line 11715
        .trainerName = _("KOJI"),
#line 11716
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 11717
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 11719
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11720
        .doubleBattle = FALSE,
#line 11721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11723
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11725
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11724
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11727
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11729
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11728
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11731
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11733
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11732
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11735
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
    {
#line 11736
        .trainerName = _("CRISTIN"),
#line 11737
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11738
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 11739
F_TRAINER_FEMALE | 
#line 11740
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11741
        .items = { ITEM_HYPER_POTION },
#line 11742
        .doubleBattle = FALSE,
#line 11743
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11745
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11747
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 11746
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11749
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11751
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 11750
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11753
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11755
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 11754
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11757
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
    {
#line 11758
        .trainerName = _("FERNANDO"),
#line 11759
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11760
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 11762
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11763
        .doubleBattle = FALSE,
#line 11764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11766
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11768
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11767
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11770
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11772
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11771
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11774
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11776
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11775
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11778
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
    {
#line 11779
        .trainerName = _("SAWYER"),
#line 11780
        .trainerClass = TRAINER_CLASS_HIKER,
#line 11781
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 11783
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11784
        .doubleBattle = FALSE,
#line 11785
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11787
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11789
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11788
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11791
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11793
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11792
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11795
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11797
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11796
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11799
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
    {
#line 11800
        .trainerName = _("GABRIELLE"),
#line 11801
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11802
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 11803
F_TRAINER_FEMALE | 
#line 11804
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11805
        .doubleBattle = FALSE,
#line 11806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11808
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11810
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11809
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11812
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11814
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11813
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11816
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11818
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11817
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11820
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11822
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11821
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11824
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11826
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11825
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11828
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11830
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11829
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11832
    [DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
    {
#line 11833
        .trainerName = _("THALIA"),
#line 11834
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 11835
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 11836
F_TRAINER_FEMALE | 
#line 11837
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11838
        .doubleBattle = FALSE,
#line 11839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11841
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11843
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11842
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11845
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11847
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11846
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11849
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11851
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11850
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11853
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 11854
        .trainerName = _("MARIELA"),
#line 11855
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11856
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 11857
F_TRAINER_FEMALE | 
#line 11858
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11859
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11861
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11862
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11865
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 11866
        .trainerName = _("ALVARO"),
#line 11867
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 11868
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 11870
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11871
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11873
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11874
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11877
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11878
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11881
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 11882
        .trainerName = _("EVERETT"),
#line 11883
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11884
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 11886
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 11887
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11889
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11890
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11893
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 11894
        .trainerName = _("RED"),
#line 11895
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11896
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 11898
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11899
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11901
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11902
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11905
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 11906
        .trainerName = _("LEAF"),
#line 11907
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11908
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 11909
F_TRAINER_FEMALE | 
#line 11910
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11911
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11913
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11914
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11917
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 11918
        .trainerName = _("BRENDAN"),
#line 11919
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11920
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 11922
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11923
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11925
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11926
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11929
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 11930
        .trainerName = _("MAY"),
#line 11931
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 11932
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 11933
F_TRAINER_FEMALE | 
#line 11934
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11935
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11937
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11938
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11941
    [DIFFICULTY_NORMAL][TRAINER_DAD_ROUTE103_TREECKO] =
    {
#line 11942
        .trainerName = _("DAD"),
#line 11943
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11944
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 11946
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11949
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11949
            .heldItem = ITEM_ORAN_BERRY,
#line 11953
            .ev = TRAINER_PARTY_EVS(76, 36, 0, 0, 0, 0),
#line 11955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11950
            .ability = ABILITY_TRUANT,
#line 11951
            .lvl = 10,
#line 11954
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 11952
            .teraType = TYPE_NORMAL,
            .moves = {
#line 11955
                MOVE_SCRATCH,
                MOVE_YAWN,
                MOVE_FLAIL,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 11960
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11960
            .heldItem = ITEM_CHARCOAL,
#line 11965
            .ev = TRAINER_PARTY_EVS(32, 0, 0, 0, 64, 0),
#line 11967
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11961
            .ability = ABILITY_BLAZE,
#line 11962
            .lvl = 12,
#line 11966
            .nature = NATURE_MODEST,
#line 11963
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 11964
            .teraType = TYPE_FIRE,
            .moves = {
#line 11967
                MOVE_SCRATCH,
                MOVE_EMBER,
                MOVE_DRAGON_PULSE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 11972
    [DIFFICULTY_NORMAL][TRAINER_DAD_ROUTE103_MUDKIP] =
    {
#line 11973
        .trainerName = _("DAD"),
#line 11974
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 11975
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 11977
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11980
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11980
            .heldItem = ITEM_ORAN_BERRY,
#line 11984
            .ev = TRAINER_PARTY_EVS(76, 36, 0, 0, 0, 0),
#line 11986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11981
            .ability = ABILITY_TRUANT,
#line 11982
            .lvl = 10,
#line 11985
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 11983
            .teraType = TYPE_NORMAL,
            .moves = {
#line 11986
                MOVE_SCRATCH,
                MOVE_YAWN,
                MOVE_FLAIL,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 11991
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11991
            .heldItem = ITEM_MIRACLE_SEED,
#line 11996
            .ev = TRAINER_PARTY_EVS(16, 0, 0, 0, 56, 0),
#line 11998
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11992
            .ability = ABILITY_OVERGROW,
#line 11993
            .lvl = 12,
#line 11997
            .nature = NATURE_MODEST,
#line 11994
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 11995
            .teraType = TYPE_GRASS,
            .moves = {
#line 11998
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
                MOVE_BULLET_SEED,
            },
            },
        },
    },
#line 12003
    [DIFFICULTY_NORMAL][TRAINER_DAD_ROUTE103_TORCHIC] =
    {
#line 12004
        .trainerName = _("DAD"),
#line 12005
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12006
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 12008
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12011
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12011
            .heldItem = ITEM_ORAN_BERRY,
#line 12015
            .ev = TRAINER_PARTY_EVS(76, 36, 0, 0, 0, 0),
#line 12017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12012
            .ability = ABILITY_TRUANT,
#line 12013
            .lvl = 10,
#line 12016
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 12014
            .teraType = TYPE_NORMAL,
            .moves = {
#line 12017
                MOVE_SCRATCH,
                MOVE_YAWN,
                MOVE_FLAIL,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 12022
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12022
            .heldItem = ITEM_MYSTIC_WATER,
#line 12027
            .ev = TRAINER_PARTY_EVS(24, 60, 0, 0, 0, 0),
#line 12029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12023
            .ability = ABILITY_TORRENT,
#line 12024
            .lvl = 12,
#line 12028
            .nature = NATURE_ADAMANT,
#line 12025
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 12026
            .teraType = TYPE_WATER,
            .moves = {
#line 12029
                MOVE_TACKLE,
                MOVE_FAKE_OUT,
                MOVE_AQUA_JET,
                MOVE_WATER_GUN,
            },
            },
        },
    },
