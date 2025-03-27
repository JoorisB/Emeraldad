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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4475
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4475
            .heldItem = ITEM_BIG_ROOT,
#line 4479
            .ev = TRAINER_PARTY_EVS(32, 0, 0, 0, 68, 0),
#line 4478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4476
            .ability = ABILITY_SWIFT_SWIM,
#line 4477
            .lvl = 11,
#line 4480
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4481
                MOVE_LEECH_SEED,
                MOVE_WATER_PULSE,
                MOVE_ABSORB,
                MOVE_ASTONISH,
            },
            },
            {
#line 4486
            .species = SPECIES_QWILFISH_HISUI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4486
            .heldItem = ITEM_EXPERT_BELT,
#line 4490
            .ev = TRAINER_PARTY_EVS(12, 0, 0, 0, 56, 0),
#line 4489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4487
            .ability = ABILITY_SWIFT_SWIM,
#line 4488
            .lvl = 11,
#line 4491
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4492
                MOVE_TOXIC_SPIKES,
                MOVE_MINIMIZE,
                MOVE_ACID_SPRAY,
                MOVE_MUD_SHOT,
            },
            },
            {
#line 4497
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4497
            .heldItem = ITEM_WHITE_HERB,
#line 4501
            .ev = TRAINER_PARTY_EVS(64, 0, 0, 0, 24, 0),
#line 4500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4498
            .ability = ABILITY_SWIFT_SWIM,
#line 4499
            .lvl = 12,
#line 4502
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4503
                MOVE_SHELL_SMASH,
                MOVE_REST,
                MOVE_SNORE,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 4508
            .species = SPECIES_CHEWTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4508
            .heldItem = ITEM_EVIOLITE,
#line 4512
            .ev = TRAINER_PARTY_EVS(32, 0, 32, 0, 0, 36),
#line 4511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4509
            .ability = ABILITY_SWIFT_SWIM,
#line 4510
            .lvl = 13,
#line 4513
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4514
                MOVE_BITE,
                MOVE_WHIRLPOOL,
                MOVE_ICE_FANG,
                MOVE_CHILLING_WATER,
            },
            },
        },
    },
#line 4519
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4520
        .trainerName = _("BILLY"),
#line 4521
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4522
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4524
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4525
        .doubleBattle = FALSE,
#line 4526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4528
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4529
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4532
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4533
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4536
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4537
        .trainerName = _("JOSH"),
#line 4538
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4539
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4541
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4542
        .doubleBattle = FALSE,
#line 4543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4545
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4546
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4548
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4550
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4551
        .trainerName = _("TOMMY"),
#line 4552
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4553
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4555
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4556
        .doubleBattle = FALSE,
#line 4557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4559
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4561
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4560
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4563
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4564
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4567
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4568
        .trainerName = _("JOEY"),
#line 4569
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4570
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4572
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4573
        .doubleBattle = FALSE,
#line 4574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4576
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4577
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4580
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4581
        .trainerName = _("BEN"),
#line 4582
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4583
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4586
        .doubleBattle = FALSE,
#line 4587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4589
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4591
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4590
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4592
                MOVE_HEADBUTT,
                MOVE_SAND_ATTACK,
                MOVE_GROWL,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4597
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4599
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4598
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4600
                MOVE_AMNESIA,
                MOVE_SLUDGE,
                MOVE_YAWN,
                MOVE_POUND,
            },
            },
        },
    },
#line 4605
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4606
        .trainerName = _("QUINCY"),
#line 4607
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4608
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4610
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4611
        .items = { ITEM_FULL_RESTORE },
#line 4612
        .doubleBattle = FALSE,
#line 4613
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4615
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4617
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4616
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4618
                MOVE_ATTRACT,
                MOVE_ICE_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 4623
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4625
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4624
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4626
                MOVE_SKILL_SWAP,
                MOVE_PROTECT,
                MOVE_WILL_O_WISP,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4631
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4632
        .trainerName = _("KATELYNN"),
#line 4633
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4634
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4635
F_TRAINER_FEMALE | 
#line 4636
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4637
        .items = { ITEM_FULL_RESTORE },
#line 4638
        .doubleBattle = FALSE,
#line 4639
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4641
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4643
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4642
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4644
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4649
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4651
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4650
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4652
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4657
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4658
        .trainerName = _("JAYLEN"),
#line 4659
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4660
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4662
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4663
        .doubleBattle = FALSE,
#line 4664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4666
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4667
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4670
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4671
        .trainerName = _("DILLON"),
#line 4672
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4673
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4675
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4676
        .doubleBattle = FALSE,
#line 4677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4679
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4680
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4683
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_2] =
    {
#line 4684
        .trainerName = _("CALVIN"),
#line 4685
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4686
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4688
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4689
        .doubleBattle = FALSE,
#line 4690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 4692
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4692
            .heldItem = ITEM_LEFTOVERS,
#line 4696
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4695
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4693
            .ability = ABILITY_SWIFT_SWIM,
#line 4694
            .lvl = 50,
#line 4697
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4698
                MOVE_ICE_BEAM,
                MOVE_GIGA_DRAIN,
                MOVE_LEECH_SEED,
                MOVE_SCALD,
            },
            },
            {
#line 4703
            .species = SPECIES_OVERQWIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4703
            .heldItem = ITEM_ASSAULT_VEST,
#line 4707
            .ev = TRAINER_PARTY_EVS(4, 252, 0, 252, 0, 0),
#line 4706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4704
            .ability = ABILITY_SWIFT_SWIM,
#line 4705
            .lvl = 50,
#line 4708
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4709
                MOVE_CRUNCH,
                MOVE_POISON_JAB,
                MOVE_WATERFALL,
                MOVE_DOUBLE_EDGE,
            },
            },
            {
#line 4714
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .heldItem = ITEM_ROCKY_HELMET,
#line 4718
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4715
            .ability = ABILITY_SWIFT_SWIM,
#line 4716
            .lvl = 50,
#line 4719
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4720
                MOVE_ANCIENT_POWER,
                MOVE_EARTH_POWER,
                MOVE_IRON_DEFENSE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 4725
            .species = SPECIES_DREDNAW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .heldItem = ITEM_WHITE_HERB,
#line 4729
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4726
            .ability = ABILITY_SWIFT_SWIM,
#line 4727
            .lvl = 50,
#line 4730
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4731
                MOVE_SHELL_SMASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 4736
            .species = SPECIES_GHOLDENGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4736
            .heldItem = ITEM_CHOICE_SPECS,
#line 4741
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4737
            .ability = ABILITY_GOOD_AS_GOLD,
#line 4738
            .lvl = 50,
#line 4742
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 4739
            .teraType = TYPE_STEEL,
            .moves = {
#line 4743
                MOVE_MAKE_IT_RAIN,
                MOVE_SHADOW_BALL,
                MOVE_THUNDER,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 4748
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4749
        .trainerName = _("EDDIE"),
#line 4750
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4751
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4754
        .doubleBattle = FALSE,
#line 4755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4757
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4758
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4761
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4762
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4765
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4766
        .trainerName = _("ALLEN"),
#line 4767
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4768
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4771
        .doubleBattle = FALSE,
#line 4772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4774
            .species = SPECIES_WATTREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4774
            .heldItem = ITEM_MAGNET,
#line 4778
            .ev = TRAINER_PARTY_EVS(24, 0, 0, 0, 72, 0),
#line 4777
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4775
            .ability = ABILITY_WIND_POWER,
#line 4776
            .lvl = 12,
#line 4779
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4780
                MOVE_TAILWIND,
                MOVE_CHARGE_BEAM,
                MOVE_ROOST,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 4785
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4785
            .heldItem = ITEM_SITRUS_BERRY,
#line 4789
            .ev = TRAINER_PARTY_EVS(24, 60, 0, 0, 0, 0),
#line 4788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4786
            .ability = ABILITY_DEFEATIST,
#line 4787
            .lvl = 13,
#line 4790
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4791
                MOVE_ROOST,
                MOVE_ACROBATICS,
                MOVE_ANCIENT_POWER,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 4796
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4796
            .heldItem = ITEM_ORAN_BERRY,
#line 4800
            .ev = TRAINER_PARTY_EVS(8, 36, 0, 0, 0, 0),
#line 4799
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4797
            .ability = ABILITY_SHEER_FORCE,
#line 4798
            .lvl = 14,
#line 4801
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4802
                MOVE_METAL_CLAW,
                MOVE_ROCK_SMASH,
                MOVE_WATER_PULSE,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 4807
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4808
        .trainerName = _("TIMMY"),
#line 4809
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4810
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4812
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4813
        .doubleBattle = FALSE,
#line 4814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4816
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4817
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4820
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4821
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4824
    [DIFFICULTY_NORMAL][TRAINER_WALLACE] =
    {
#line 4825
        .trainerName = _("WALLACE"),
#line 4826
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4827
        .trainerPic = TRAINER_PIC_CHAMPION_WALLACE,
        .encounterMusic_gender =
#line 4829
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4830
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 4831
        .doubleBattle = FALSE,
#line 4832
        .aiFlags = AI_FLAG_BASIC_TRAINER,
#line 4833
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4835
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4836
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4838
                MOVE_RAIN_DANCE,
                MOVE_WATER_SPOUT,
                MOVE_DOUBLE_EDGE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 4843
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4845
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4844
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4846
                MOVE_TOXIC,
                MOVE_HYDRO_PUMP,
                MOVE_SLUDGE_BOMB,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 4851
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4853
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4852
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4854
                MOVE_GIGA_DRAIN,
                MOVE_SURF,
                MOVE_LEECH_SEED,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 4859
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4860
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4862
                MOVE_EARTHQUAKE,
                MOVE_SURF,
                MOVE_AMNESIA,
                MOVE_HYPER_BEAM,
            },
            },
            {
#line 4867
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4868
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4870
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
                MOVE_HYPER_BEAM,
                MOVE_SURF,
            },
            },
            {
#line 4875
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .heldItem = ITEM_SITRUS_BERRY,
#line 4877
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4876
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4878
                MOVE_RECOVER,
                MOVE_SURF,
                MOVE_ICE_BEAM,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 4883
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4884
        .trainerName = _("ANDREW"),
#line 4885
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4886
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4888
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4889
        .doubleBattle = FALSE,
#line 4890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4892
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4893
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4896
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4897
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4900
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4901
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4904
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4905
        .trainerName = _("IVAN"),
#line 4906
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4907
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4909
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4910
        .doubleBattle = FALSE,
#line 4911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4913
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4914
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4917
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4918
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4921
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4922
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4925
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4926
        .trainerName = _("CLAUDE"),
#line 4927
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4928
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4930
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4931
        .doubleBattle = FALSE,
#line 4932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4934
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4935
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4938
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4939
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4942
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4943
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4946
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 4947
        .trainerName = _("ELLIOT"),
#line 4948
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4949
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4951
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4952
        .doubleBattle = FALSE,
#line 4953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4955
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4956
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4959
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4960
            .lvl = 7,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4963
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4964
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4967
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4968
        .trainerName = _("NED"),
#line 4969
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4970
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4972
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4973
        .doubleBattle = FALSE,
#line 4974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4976
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4978
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4977
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4980
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4981
        .trainerName = _("DALE"),
#line 4982
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4983
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4985
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4986
        .doubleBattle = FALSE,
#line 4987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4989
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4990
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4993
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4994
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4997
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4998
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5001
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5002
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5005
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 5006
        .trainerName = _("NOLAN"),
#line 5007
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5008
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5010
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5011
        .doubleBattle = FALSE,
#line 5012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5014
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5015
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5018
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 5019
        .trainerName = _("BARNY"),
#line 5020
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5021
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5023
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5024
        .doubleBattle = FALSE,
#line 5025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5027
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5028
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5031
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5032
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5035
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 5036
        .trainerName = _("WADE"),
#line 5037
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5038
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5040
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5041
        .doubleBattle = FALSE,
#line 5042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5044
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5045
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5048
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 5049
        .trainerName = _("CARTER"),
#line 5050
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5051
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5053
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5054
        .doubleBattle = FALSE,
#line 5055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5057
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5058
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5061
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5062
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5065
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_2] =
    {
#line 5066
        .trainerName = _("ELLIOT"),
#line 5067
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5068
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5070
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5071
        .doubleBattle = FALSE,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5075
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5078
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5080
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5079
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5082
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5084
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5083
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5086
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5088
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5087
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5090
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 5091
        .trainerName = _("RONALD"),
#line 5092
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 5093
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 5095
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5096
        .doubleBattle = FALSE,
#line 5097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 5099
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5101
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5100
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5103
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5104
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5107
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5108
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5111
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5112
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5115
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5116
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5119
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5120
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5123
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 5124
        .trainerName = _("JACOB"),
#line 5125
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5126
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5128
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5129
        .doubleBattle = FALSE,
#line 5130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5132
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5133
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5136
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5138
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 5137
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5140
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5142
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5141
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5144
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 5145
        .trainerName = _("ANTHONY"),
#line 5146
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5147
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5149
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5150
        .doubleBattle = FALSE,
#line 5151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5153
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5154
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5157
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5158
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5161
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 5162
        .trainerName = _("BENJAMIN"),
#line 5163
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5164
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5166
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5167
        .doubleBattle = FALSE,
#line 5168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5170
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5171
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5174
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_2] =
    {
#line 5175
        .trainerName = _("BENJAMIN"),
#line 5176
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5177
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5179
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5180
        .doubleBattle = FALSE,
#line 5181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5183
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5185
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5184
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5187
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_1] =
    {
#line 5188
        .trainerName = _("ABIGAIL"),
#line 5189
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5190
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5191
F_TRAINER_FEMALE | 
#line 5192
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5193
        .doubleBattle = FALSE,
#line 5194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5196
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5197
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5200
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 5201
        .trainerName = _("JASMINE"),
#line 5202
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5203
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5204
F_TRAINER_FEMALE | 
#line 5205
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5206
        .doubleBattle = FALSE,
#line 5207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5209
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5211
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5210
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5213
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5215
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5214
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5217
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5218
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5221
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL_2] =
    {
#line 5222
        .trainerName = _("ABIGAIL"),
#line 5223
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5224
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5225
F_TRAINER_FEMALE | 
#line 5226
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5227
        .doubleBattle = FALSE,
#line 5228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5230
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5232
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5231
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5234
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 5235
        .trainerName = _("DYLAN"),
#line 5236
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5237
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5239
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5240
        .doubleBattle = FALSE,
#line 5241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5243
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5244
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5247
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_2] =
    {
#line 5248
        .trainerName = _("DYLAN"),
#line 5249
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5250
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5252
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5253
        .doubleBattle = FALSE,
#line 5254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5256
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5258
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5257
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5260
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 5261
        .trainerName = _("MARIA"),
#line 5262
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5263
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5264
F_TRAINER_FEMALE | 
#line 5265
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5266
        .doubleBattle = FALSE,
#line 5267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5269
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5270
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5273
    [DIFFICULTY_NORMAL][TRAINER_MARIA_2] =
    {
#line 5274
        .trainerName = _("MARIA"),
#line 5275
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5276
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5277
F_TRAINER_FEMALE | 
#line 5278
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5279
        .doubleBattle = FALSE,
#line 5280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5282
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5284
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5283
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5286
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 5287
        .trainerName = _("CAMDEN"),
#line 5288
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5289
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5291
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5292
        .doubleBattle = FALSE,
#line 5293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5295
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5296
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5299
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5300
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5303
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5304
        .trainerName = _("DEMETRIUS"),
#line 5305
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5306
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5308
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5309
        .doubleBattle = FALSE,
#line 5310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5312
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5313
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5316
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5317
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5320
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 5321
        .trainerName = _("ISAIAH"),
#line 5322
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5323
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5325
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5326
        .doubleBattle = FALSE,
#line 5327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5329
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5330
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5333
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 5334
        .trainerName = _("PABLO"),
#line 5335
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5336
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5338
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5339
        .doubleBattle = FALSE,
#line 5340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5342
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5343
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5346
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5347
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5350
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 5351
        .trainerName = _("CHASE"),
#line 5352
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5353
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5355
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5356
        .doubleBattle = FALSE,
#line 5357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5359
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5360
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5363
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5365
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5364
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5367
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_2] =
    {
#line 5368
        .trainerName = _("ISAIAH"),
#line 5369
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5370
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5372
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5373
        .doubleBattle = FALSE,
#line 5374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5376
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5378
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5377
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5380
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 5381
        .trainerName = _("ISOBEL"),
#line 5382
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5383
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5384
F_TRAINER_FEMALE | 
#line 5385
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5386
        .doubleBattle = FALSE,
#line 5387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5389
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5390
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5393
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 5394
        .trainerName = _("DONNY"),
#line 5395
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5396
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5397
F_TRAINER_FEMALE | 
#line 5398
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5399
        .doubleBattle = FALSE,
#line 5400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5402
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5403
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5406
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5408
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5407
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5410
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 5411
        .trainerName = _("TALIA"),
#line 5412
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5413
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5414
F_TRAINER_FEMALE | 
#line 5415
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5416
        .doubleBattle = FALSE,
#line 5417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5419
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5420
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5423
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 5424
        .trainerName = _("KATELYN"),
#line 5425
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5426
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5427
F_TRAINER_FEMALE | 
#line 5428
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5429
        .doubleBattle = FALSE,
#line 5430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5432
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5433
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5436
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 5437
        .trainerName = _("ALLISON"),
#line 5438
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5439
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5440
F_TRAINER_FEMALE | 
#line 5441
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5442
        .doubleBattle = FALSE,
#line 5443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5445
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5446
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5449
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5451
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5450
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5453
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_2] =
    {
#line 5454
        .trainerName = _("KATELYN"),
#line 5455
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5456
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5457
F_TRAINER_FEMALE | 
#line 5458
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5459
        .doubleBattle = FALSE,
#line 5460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5462
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5464
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5463
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5466
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 5467
        .trainerName = _("NICOLAS"),
#line 5468
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5469
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5471
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5472
        .doubleBattle = FALSE,
#line 5473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5475
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5477
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5476
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5479
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5481
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5480
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5483
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_2] =
    {
#line 5484
        .trainerName = _("NICOLAS"),
#line 5485
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5486
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5488
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5489
        .doubleBattle = FALSE,
#line 5490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5492
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5494
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5493
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5496
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5498
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5497
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5500
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .heldItem = ITEM_DRAGON_FANG,
#line 5502
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5501
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5504
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 5505
        .trainerName = _("AARON"),
#line 5506
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5507
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5509
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5510
        .doubleBattle = FALSE,
#line 5511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5513
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5514
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5516
                MOVE_DRAGON_BREATH,
                MOVE_HEADBUTT,
                MOVE_FOCUS_ENERGY,
                MOVE_EMBER,
            },
            },
        },
    },
#line 5521
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5522
        .trainerName = _("PERRY"),
#line 5523
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5524
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5526
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5527
        .doubleBattle = FALSE,
#line 5528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5530
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5531
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5534
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5535
        .trainerName = _("HUGH"),
#line 5536
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5537
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5539
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5540
        .doubleBattle = FALSE,
#line 5541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5543
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5544
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5547
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5548
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5551
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5552
        .trainerName = _("PHIL"),
#line 5553
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5554
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5556
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5557
        .doubleBattle = FALSE,
#line 5558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5560
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5561
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5564
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5565
        .trainerName = _("JARED"),
#line 5566
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5567
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5569
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5570
        .doubleBattle = FALSE,
#line 5571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5573
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5575
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5574
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5577
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5579
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5578
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5581
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5583
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5582
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5585
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5586
        .trainerName = _("HUMBERTO"),
#line 5587
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5588
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5590
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5591
        .doubleBattle = FALSE,
#line 5592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5594
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5596
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5595
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5598
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5599
        .trainerName = _("PRESLEY"),
#line 5600
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5601
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5603
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5604
        .doubleBattle = FALSE,
#line 5605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5607
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5608
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5611
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5612
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5615
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5616
        .trainerName = _("EDWARDO"),
#line 5617
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5618
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5620
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5621
        .doubleBattle = FALSE,
#line 5622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5624
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5626
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5625
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5628
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5630
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5629
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5632
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5633
        .trainerName = _("COLIN"),
#line 5634
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5635
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5637
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5638
        .doubleBattle = FALSE,
#line 5639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5641
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5642
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5645
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5646
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5649
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 5650
        .trainerName = _("ROBERT"),
#line 5651
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5652
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5654
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5655
        .doubleBattle = FALSE,
#line 5656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5658
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5659
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5662
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5663
        .trainerName = _("BENNY"),
#line 5664
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5665
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5667
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5668
        .doubleBattle = FALSE,
#line 5669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5671
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5672
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5675
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5676
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5679
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5680
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5683
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5684
        .trainerName = _("CHESTER"),
#line 5685
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5686
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5688
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5689
        .doubleBattle = FALSE,
#line 5690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5692
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5693
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5696
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5697
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5700
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_2] =
    {
#line 5701
        .trainerName = _("ROBERT"),
#line 5702
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5703
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5705
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5706
        .doubleBattle = FALSE,
#line 5707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5709
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5711
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5710
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5713
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5714
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5717
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5718
        .trainerName = _("ALEX"),
#line 5719
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5720
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5722
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5723
        .doubleBattle = FALSE,
#line 5724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5726
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5728
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5727
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5730
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5732
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5731
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5734
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5735
        .trainerName = _("BECK"),
#line 5736
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5737
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5739
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5740
        .doubleBattle = FALSE,
#line 5741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5743
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5744
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5747
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5748
        .trainerName = _("YASU"),
#line 5749
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5750
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5752
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5753
        .doubleBattle = FALSE,
#line 5754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5756
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5757
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5760
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5761
        .trainerName = _("TAKASHI"),
#line 5762
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5763
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5765
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5766
        .doubleBattle = FALSE,
#line 5767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5769
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5770
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5773
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5774
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5777
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5778
        .trainerName = _("DIANNE"),
#line 5779
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5780
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5781
F_TRAINER_FEMALE | 
#line 5782
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5783
        .items = { ITEM_FULL_RESTORE },
#line 5784
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5786
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5787
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5789
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5792
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5795
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5798
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5799
        .trainerName = _("JANI"),
#line 5800
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5801
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5802
F_TRAINER_FEMALE | 
#line 5803
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5804
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5806
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5807
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5810
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 5811
        .trainerName = _("LAO"),
#line 5812
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5813
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5815
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5816
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5818
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5819
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5821
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5826
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5827
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5829
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SMOG,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5834
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5835
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5837
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
        },
    },
#line 5842
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5843
        .trainerName = _("LUNG"),
#line 5844
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5845
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5847
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5848
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5850
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5851
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5854
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5855
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5858
    [DIFFICULTY_NORMAL][TRAINER_LAO_2] =
    {
#line 5859
        .trainerName = _("LAO"),
#line 5860
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5861
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5863
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5864
        .doubleBattle = FALSE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 5866
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5867
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5869
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
            {
#line 5873
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5875
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5874
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5876
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5881
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5883
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5882
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5884
                MOVE_POISON_GAS,
                MOVE_TACKLE,
                MOVE_SLUDGE,
                MOVE_SELF_DESTRUCT,
            },
            },
            {
#line 5889
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5889
            .heldItem = ITEM_SMOKE_BALL,
#line 5891
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 5890
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5892
                MOVE_TACKLE,
                MOVE_SLUDGE,
            },
            },
        },
    },
#line 5895
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5896
        .trainerName = _("JOCELYN"),
#line 5897
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5898
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5899
F_TRAINER_FEMALE | 
#line 5900
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5901
        .doubleBattle = FALSE,
#line 5902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5904
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5905
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5908
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5909
        .trainerName = _("LAURA"),
#line 5910
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5911
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5912
F_TRAINER_FEMALE | 
#line 5913
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5914
        .doubleBattle = FALSE,
#line 5915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5917
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5919
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5918
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5921
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 5922
        .trainerName = _("CYNDY"),
#line 5923
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5924
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5925
F_TRAINER_FEMALE | 
#line 5926
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5927
        .doubleBattle = FALSE,
#line 5928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5930
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5932
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5931
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5934
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5936
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5935
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5938
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5939
        .trainerName = _("CORA"),
#line 5940
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5941
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5942
F_TRAINER_FEMALE | 
#line 5943
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5944
        .doubleBattle = FALSE,
#line 5945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5947
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5949
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5948
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5951
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5952
        .trainerName = _("PAULA"),
#line 5953
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5954
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5955
F_TRAINER_FEMALE | 
#line 5956
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5957
        .doubleBattle = FALSE,
#line 5958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5960
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5962
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5961
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5964
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_2] =
    {
#line 5965
        .trainerName = _("CYNDY"),
#line 5966
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5967
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5968
F_TRAINER_FEMALE | 
#line 5969
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5970
        .doubleBattle = FALSE,
#line 5971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5973
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5975
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5974
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5977
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5979
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 5978
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5981
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 5982
        .trainerName = _("MADELINE"),
#line 5983
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5984
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5985
F_TRAINER_FEMALE | 
#line 5986
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5987
        .doubleBattle = FALSE,
#line 5988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5990
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5991
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5993
                MOVE_EMBER,
                MOVE_TACKLE,
                MOVE_MAGNITUDE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 5998
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5999
        .trainerName = _("CLARISSA"),
#line 6000
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6001
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6002
F_TRAINER_FEMALE | 
#line 6003
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6004
        .doubleBattle = FALSE,
#line 6005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6007
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6008
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6011
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6012
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6015
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 6016
        .trainerName = _("ANGELICA"),
#line 6017
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6018
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6019
F_TRAINER_FEMALE | 
#line 6020
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6021
        .doubleBattle = FALSE,
#line 6022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6024
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6026
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6025
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6027
                MOVE_RAIN_DANCE,
                MOVE_WEATHER_BALL,
                MOVE_THUNDER,
                MOVE_WATER_PULSE,
            },
            },
        },
    },
#line 6032
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_2] =
    {
#line 6033
        .trainerName = _("MADELINE"),
#line 6034
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6035
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6036
F_TRAINER_FEMALE | 
#line 6037
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6038
        .doubleBattle = FALSE,
#line 6039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6041
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6043
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6042
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6044
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_SOLAR_BEAM,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 6049
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6051
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6050
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6052
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_EARTHQUAKE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 6057
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 6058
        .trainerName = _("BEVERLY"),
#line 6059
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6060
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6061
F_TRAINER_FEMALE | 
#line 6062
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6063
        .doubleBattle = FALSE,
#line 6064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6066
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6067
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6070
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6071
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6074
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 6075
        .trainerName = _("IMANI"),
#line 6076
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6077
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6078
F_TRAINER_FEMALE | 
#line 6079
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6080
        .doubleBattle = FALSE,
#line 6081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6083
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6084
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6087
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 6088
        .trainerName = _("KYLA"),
#line 6089
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6090
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6091
F_TRAINER_FEMALE | 
#line 6092
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6093
        .doubleBattle = FALSE,
#line 6094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6096
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6097
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6100
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 6101
        .trainerName = _("DENISE"),
#line 6102
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6103
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6104
F_TRAINER_FEMALE | 
#line 6105
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6106
        .doubleBattle = FALSE,
#line 6107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6109
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6110
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6113
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6114
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6117
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 6118
        .trainerName = _("BETH"),
#line 6119
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6120
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6121
F_TRAINER_FEMALE | 
#line 6122
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6123
        .doubleBattle = FALSE,
#line 6124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6126
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6127
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6130
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 6131
        .trainerName = _("TARA"),
#line 6132
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6133
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6134
F_TRAINER_FEMALE | 
#line 6135
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6136
        .doubleBattle = FALSE,
#line 6137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6139
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6140
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6143
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6144
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6147
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 6148
        .trainerName = _("MISSY"),
#line 6149
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6150
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6151
F_TRAINER_FEMALE | 
#line 6152
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6153
        .doubleBattle = FALSE,
#line 6154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6156
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6157
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6160
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 6161
        .trainerName = _("ALICE"),
#line 6162
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6163
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6164
F_TRAINER_FEMALE | 
#line 6165
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6166
        .doubleBattle = FALSE,
#line 6167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6169
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6170
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6173
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6174
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6177
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6178
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6181
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 6182
        .trainerName = _("JENNY"),
#line 6183
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6184
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6185
F_TRAINER_FEMALE | 
#line 6186
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6187
        .doubleBattle = FALSE,
#line 6188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6190
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6191
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6194
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 6195
        .trainerName = _("GRACE"),
#line 6196
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6197
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6198
F_TRAINER_FEMALE | 
#line 6199
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6200
        .doubleBattle = FALSE,
#line 6201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6203
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6204
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6207
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 6208
        .trainerName = _("TANYA"),
#line 6209
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6210
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6211
F_TRAINER_FEMALE | 
#line 6212
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6213
        .doubleBattle = FALSE,
#line 6214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6216
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6217
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6220
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 6221
        .trainerName = _("SHARON"),
#line 6222
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6223
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6224
F_TRAINER_FEMALE | 
#line 6225
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6226
        .doubleBattle = FALSE,
#line 6227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6229
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6230
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6233
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 6234
        .trainerName = _("NIKKI"),
#line 6235
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6236
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6237
F_TRAINER_FEMALE | 
#line 6238
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6239
        .doubleBattle = FALSE,
#line 6240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6242
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6243
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6246
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6247
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6250
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 6251
        .trainerName = _("BRENDA"),
#line 6252
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6253
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6254
F_TRAINER_FEMALE | 
#line 6255
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6256
        .doubleBattle = FALSE,
#line 6257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6259
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6260
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6263
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 6264
        .trainerName = _("KATIE"),
#line 6265
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6266
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6267
F_TRAINER_FEMALE | 
#line 6268
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6269
        .doubleBattle = FALSE,
#line 6270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6272
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6273
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6276
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6277
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6280
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 6281
        .trainerName = _("SUSIE"),
#line 6282
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6283
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6284
F_TRAINER_FEMALE | 
#line 6285
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6286
        .doubleBattle = FALSE,
#line 6287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6289
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6290
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6293
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 6294
        .trainerName = _("KARA"),
#line 6295
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6296
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6297
F_TRAINER_FEMALE | 
#line 6298
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6299
        .doubleBattle = FALSE,
#line 6300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6302
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6303
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6306
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 6307
        .trainerName = _("DANA"),
#line 6308
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6309
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6310
F_TRAINER_FEMALE | 
#line 6311
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6312
        .doubleBattle = FALSE,
#line 6313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6315
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6316
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6319
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 6320
        .trainerName = _("SIENNA"),
#line 6321
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6322
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6323
F_TRAINER_FEMALE | 
#line 6324
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6325
        .doubleBattle = FALSE,
#line 6326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6328
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6329
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6332
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6333
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6336
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 6337
        .trainerName = _("DEBRA"),
#line 6338
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6339
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6340
F_TRAINER_FEMALE | 
#line 6341
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6342
        .doubleBattle = FALSE,
#line 6343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6345
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6346
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6349
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 6350
        .trainerName = _("LINDA"),
#line 6351
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6352
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6353
F_TRAINER_FEMALE | 
#line 6354
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6355
        .doubleBattle = FALSE,
#line 6356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6358
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6359
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6362
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6363
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6366
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 6367
        .trainerName = _("KAYLEE"),
#line 6368
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6369
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6370
F_TRAINER_FEMALE | 
#line 6371
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6372
        .doubleBattle = FALSE,
#line 6373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6375
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6376
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6379
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6380
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6383
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 6384
        .trainerName = _("LAUREL"),
#line 6385
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6386
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6387
F_TRAINER_FEMALE | 
#line 6388
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6389
        .doubleBattle = FALSE,
#line 6390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6392
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6393
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6396
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6397
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6400
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 6401
        .trainerName = _("CARLEE"),
#line 6402
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6403
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6404
F_TRAINER_FEMALE | 
#line 6405
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6406
        .doubleBattle = FALSE,
#line 6407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6409
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6410
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6413
    [DIFFICULTY_NORMAL][TRAINER_JENNY_2] =
    {
#line 6414
        .trainerName = _("JENNY"),
#line 6415
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 6416
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 6417
F_TRAINER_FEMALE | 
#line 6418
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6419
        .doubleBattle = FALSE,
#line 6420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6422
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6423
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6426
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6427
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6430
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6431
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6434
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 6435
        .trainerName = _("HEIDI"),
#line 6436
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6437
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6438
F_TRAINER_FEMALE | 
#line 6439
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6440
        .doubleBattle = FALSE,
#line 6441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6443
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6444
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6446
                MOVE_DIG,
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
            },
            },
            {
#line 6451
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6452
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6454
                MOVE_RAPID_SPIN,
                MOVE_MUD_SLAP,
                MOVE_PSYBEAM,
                MOVE_ROCK_TOMB,
            },
            },
        },
    },
#line 6459
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 6460
        .trainerName = _("BECKY"),
#line 6461
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6462
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6463
F_TRAINER_FEMALE | 
#line 6464
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6465
        .doubleBattle = FALSE,
#line 6466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6468
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6469
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6471
                MOVE_SAND_ATTACK,
                MOVE_POISON_STING,
                MOVE_SLASH,
                MOVE_DIG,
            },
            },
            {
#line 6476
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6477
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6479
                MOVE_ROLLOUT,
                MOVE_BUBBLE_BEAM,
                MOVE_TAIL_WHIP,
                MOVE_DEFENSE_CURL,
            },
            },
        },
    },
#line 6484
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 6485
        .trainerName = _("CAROL"),
#line 6486
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6487
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6488
F_TRAINER_FEMALE | 
#line 6489
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6490
        .doubleBattle = FALSE,
#line 6491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6493
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6494
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6497
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6498
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6501
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 6502
        .trainerName = _("NANCY"),
#line 6503
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6504
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6505
F_TRAINER_FEMALE | 
#line 6506
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6507
        .doubleBattle = FALSE,
#line 6508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6510
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6511
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6514
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6515
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6518
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6519
        .trainerName = _("MARTHA"),
#line 6520
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6521
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6522
F_TRAINER_FEMALE | 
#line 6523
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6524
        .doubleBattle = FALSE,
#line 6525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6527
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6528
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6531
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6532
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6535
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 6536
        .trainerName = _("DIANA"),
#line 6537
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6538
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6539
F_TRAINER_FEMALE | 
#line 6540
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6541
        .doubleBattle = FALSE,
#line 6542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6544
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6545
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6548
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6549
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6552
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6553
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6556
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6557
        .trainerName = _("CEDRIC"),
#line 6558
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6559
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6561
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6562
        .doubleBattle = FALSE,
#line 6563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6565
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6566
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6568
                MOVE_DESTINY_BOND,
                MOVE_SAFEGUARD,
                MOVE_COUNTER,
                MOVE_MIRROR_COAT,
            },
            },
        },
    },
#line 6573
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 6574
        .trainerName = _("IRENE"),
#line 6575
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6576
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6577
F_TRAINER_FEMALE | 
#line 6578
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6579
        .doubleBattle = FALSE,
#line 6580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6582
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6583
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6586
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6587
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6590
    [DIFFICULTY_NORMAL][TRAINER_DIANA_2] =
    {
#line 6591
        .trainerName = _("DIANA"),
#line 6592
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6593
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6594
F_TRAINER_FEMALE | 
#line 6595
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6596
        .doubleBattle = FALSE,
#line 6597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6599
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6600
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6603
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6605
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6604
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6607
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6609
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6608
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6611
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 6612
        .trainerName = _("AMY & LIV"),
#line 6613
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6614
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6616
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6617
        .doubleBattle = TRUE,
#line 6618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6620
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6621
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6624
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6625
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6628
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 6629
        .trainerName = _("GINA & MIA"),
#line 6630
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6631
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6633
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6634
        .doubleBattle = TRUE,
#line 6635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6637
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6638
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6641
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6642
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6645
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6646
        .trainerName = _("MIU & YUKI"),
#line 6647
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6648
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6650
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6651
        .doubleBattle = TRUE,
#line 6652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6654
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6655
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6658
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6659
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6662
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_2] =
    {
#line 6663
        .trainerName = _("GINA & MIA"),
#line 6664
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6665
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6667
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6668
        .doubleBattle = TRUE,
#line 6669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6671
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6672
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6674
                MOVE_NIGHT_SHADE,
                MOVE_DISABLE,
            },
            },
            {
#line 6677
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6678
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6680
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
            },
            },
        },
    },
#line 6683
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_2] =
    {
#line 6684
        .trainerName = _("AMY & LIV"),
#line 6685
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6686
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6688
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6689
        .doubleBattle = TRUE,
#line 6690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6692
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6694
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6693
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6695
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_FAKE_TEARS,
                MOVE_HELPING_HAND,
            },
            },
            {
#line 6700
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6702
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6701
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6703
                MOVE_THUNDER,
                MOVE_CHARGE,
                MOVE_CHARM,
                MOVE_HELPING_HAND,
            },
            },
        },
    },
#line 6708
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6709
        .trainerName = _("HUEY"),
#line 6710
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6711
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6713
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6714
        .doubleBattle = FALSE,
#line 6715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6717
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6719
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6718
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6721
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6723
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6722
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6725
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6726
        .trainerName = _("EDMOND"),
#line 6727
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6728
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6730
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6731
        .doubleBattle = FALSE,
#line 6732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6734
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6735
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6738
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 6739
        .trainerName = _("ERNEST"),
#line 6740
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6741
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6743
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6744
        .doubleBattle = FALSE,
#line 6745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6747
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6748
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6751
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6752
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6755
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6756
        .trainerName = _("DWAYNE"),
#line 6757
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6758
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6760
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6761
        .doubleBattle = FALSE,
#line 6762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6764
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6765
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6768
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6769
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6772
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6773
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6776
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6777
        .trainerName = _("PHILLIP"),
#line 6778
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6779
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6782
        .doubleBattle = FALSE,
#line 6783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6785
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6786
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6789
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6790
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6793
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6794
        .trainerName = _("LEONARD"),
#line 6795
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6796
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6798
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6799
        .doubleBattle = FALSE,
#line 6800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6802
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6803
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6806
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6807
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6810
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6811
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6814
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6815
        .trainerName = _("DUNCAN"),
#line 6816
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6817
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6819
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6820
        .doubleBattle = FALSE,
#line 6821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6823
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6824
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6827
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6828
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6831
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_2] =
    {
#line 6832
        .trainerName = _("ERNEST"),
#line 6833
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6834
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6836
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6837
        .doubleBattle = FALSE,
#line 6838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6840
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6842
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6841
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6844
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6846
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6845
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6848
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6850
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 6849
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6852
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6853
        .trainerName = _("ELI"),
#line 6854
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6855
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6857
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6858
        .doubleBattle = FALSE,
#line 6859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6861
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6863
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6862
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6865
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6866
        .trainerName = _("ANNIKA"),
#line 6867
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6868
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6869
F_TRAINER_FEMALE | 
#line 6870
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6871
        .doubleBattle = FALSE,
#line 6872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6874
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6874
            .heldItem = ITEM_ORAN_BERRY,
#line 6876
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6875
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6877
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
            {
#line 6882
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6882
            .heldItem = ITEM_ORAN_BERRY,
#line 6884
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6883
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6885
                MOVE_FLAIL,
                MOVE_WATER_PULSE,
                MOVE_RETURN,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 6890
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6891
        .trainerName = _("JAZMYN"),
#line 6892
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6893
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6894
F_TRAINER_FEMALE | 
#line 6895
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6896
        .items = { ITEM_HYPER_POTION },
#line 6897
        .doubleBattle = FALSE,
#line 6898
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6900
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6901
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6904
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6905
        .trainerName = _("JONAS"),
#line 6906
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6907
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6909
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6910
        .doubleBattle = FALSE,
#line 6911
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6913
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6914
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6916
                MOVE_TOXIC,
                MOVE_THUNDER,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 6921
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6922
        .trainerName = _("KAYLEY"),
#line 6923
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6924
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6925
F_TRAINER_FEMALE | 
#line 6926
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6927
        .doubleBattle = FALSE,
#line 6928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6930
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6931
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6933
                MOVE_SUNNY_DAY,
                MOVE_WEATHER_BALL,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
            },
            },
        },
    },
#line 6938
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6939
        .trainerName = _("AURON"),
#line 6940
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6941
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6943
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6944
        .doubleBattle = FALSE,
#line 6945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6947
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6948
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6951
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6952
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6955
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6956
        .trainerName = _("KELVIN"),
#line 6957
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6958
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6960
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6961
        .doubleBattle = FALSE,
#line 6962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6964
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6966
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6965
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6968
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6970
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6969
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6972
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6973
        .trainerName = _("MARLEY"),
#line 6974
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6975
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6976
F_TRAINER_FEMALE | 
#line 6977
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6978
        .items = { ITEM_HYPER_POTION },
#line 6979
        .doubleBattle = FALSE,
#line 6980
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6982
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6984
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6983
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6985
                MOVE_BITE,
                MOVE_ROAR,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDERBOLT,
            },
            },
        },
    },
#line 6990
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6991
        .trainerName = _("REYNA"),
#line 6992
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6993
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6994
F_TRAINER_FEMALE | 
#line 6995
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6996
        .doubleBattle = FALSE,
#line 6997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6999
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7001
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7000
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7003
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7005
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7004
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7007
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 7008
        .trainerName = _("HUDSON"),
#line 7009
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7010
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7012
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7013
        .doubleBattle = FALSE,
#line 7014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7016
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7017
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7020
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 7021
        .trainerName = _("CONOR"),
#line 7022
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7023
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7025
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7026
        .doubleBattle = FALSE,
#line 7027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7029
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7030
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7033
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7035
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7034
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7037
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 7038
        .trainerName = _("EDWIN"),
#line 7039
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7040
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7042
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7043
        .doubleBattle = FALSE,
#line 7044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7046
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7047
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7050
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7051
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7054
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 7055
        .trainerName = _("HECTOR"),
#line 7056
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7057
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7059
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7060
        .doubleBattle = FALSE,
#line 7061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7063
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7064
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7067
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7068
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7071
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 7072
        .trainerName = _("TABITHA"),
#line 7073
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7074
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7076
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7077
        .doubleBattle = FALSE,
#line 7078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7080
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7082
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7081
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7084
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7085
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7088
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7089
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7092
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_2] =
    {
#line 7093
        .trainerName = _("EDWIN"),
#line 7094
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 7095
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 7097
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7098
        .doubleBattle = FALSE,
#line 7099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7101
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7102
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7105
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7106
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7109
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 7110
        .trainerName = _("WALLY"),
#line 7111
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7112
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7115
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 7116
        .doubleBattle = FALSE,
#line 7117
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7119
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7121
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7120
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7122
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 7127
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7128
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7130
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 7135
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7137
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7136
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7138
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 7143
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7145
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7144
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7146
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 7151
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7153
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 7152
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7154
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 7159
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 7160
        .trainerName = _("BRENDAN"),
#line 7161
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7162
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7164
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7165
        .doubleBattle = FALSE,
#line 7166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7168
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7168
            .heldItem = ITEM_MIRACLE_SEED,
#line 7172
            .ev = TRAINER_PARTY_EVS(16, 0, 0, 0, 36, 0),
#line 7171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7169
            .ability = ABILITY_HYDRATION,
#line 7170
            .lvl = 8,
#line 7173
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7174
                MOVE_ABSORB,
                MOVE_WATER_GUN,
                MOVE_DRAGON_BREATH,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 7179
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7179
            .heldItem = ITEM_ORAN_BERRY,
#line 7183
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 76, 0),
#line 7182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7180
            .ability = ABILITY_UNBURDEN,
#line 7181
            .lvl = 10,
#line 7184
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7185
                MOVE_MEGA_DRAIN,
                MOVE_DETECT,
                MOVE_LEECH_SEED,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 7190
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 7191
        .trainerName = _("BRENDAN"),
#line 7192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7193
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7196
        .doubleBattle = FALSE,
#line 7197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7199
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7200
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7203
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7204
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7207
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7209
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7208
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7211
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_MUDKIP] =
    {
#line 7212
        .trainerName = _("BRENDAN"),
#line 7213
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7214
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7217
        .doubleBattle = FALSE,
#line 7218
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7220
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7222
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7221
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7224
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7226
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7225
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7228
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7230
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7229
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7232
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 7233
        .trainerName = _("BRENDAN"),
#line 7234
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7235
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7237
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7238
        .doubleBattle = FALSE,
#line 7239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7241
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7241
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7245
            .ev = TRAINER_PARTY_EVS(8, 76, 0, 0, 0, 0),
#line 7244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7242
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 7243
            .lvl = 8,
#line 7246
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7247
                MOVE_ICICLE_SPEAR,
                MOVE_DRAGON_TAIL,
                MOVE_ICY_WIND,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7252
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7252
            .heldItem = ITEM_ORAN_BERRY,
#line 7256
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7253
            .ability = ABILITY_SPEED_BOOST,
#line 7254
            .lvl = 10,
#line 7257
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7258
                MOVE_FLAME_CHARGE,
                MOVE_SCRATCH,
                MOVE_PECK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7263
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 7264
        .trainerName = _("BRENDAN"),
#line 7265
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7266
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7268
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7269
        .doubleBattle = FALSE,
#line 7270
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7272
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7274
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7273
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7276
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7278
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7277
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7280
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7282
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7281
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7284
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 7285
        .trainerName = _("BRENDAN"),
#line 7286
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7287
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7289
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7290
        .doubleBattle = FALSE,
#line 7291
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7293
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7295
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7294
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7297
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7299
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7298
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7301
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7303
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7302
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7305
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 7306
        .trainerName = _("BRENDAN"),
#line 7307
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7308
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7310
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7311
        .doubleBattle = FALSE,
#line 7312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7314
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7314
            .heldItem = ITEM_HARD_STONE,
#line 7318
            .ev = TRAINER_PARTY_EVS(28, 64, 0, 0, 0, 0),
#line 7317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7315
            .ability = ABILITY_GUTS,
#line 7316
            .lvl = 8,
#line 7319
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7320
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_DRAGON_DANCE,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 7325
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7325
            .heldItem = ITEM_ORAN_BERRY,
#line 7329
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7326
            .ability = ABILITY_DAMP,
#line 7327
            .lvl = 10,
#line 7330
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7331
                MOVE_WATER_GUN,
                MOVE_ROCK_THROW,
                MOVE_ROCK_SMASH,
                MOVE_YAWN,
            },
            },
        },
    },
#line 7336
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 7337
        .trainerName = _("BRENDAN"),
#line 7338
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7339
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7341
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7342
        .doubleBattle = FALSE,
#line 7343
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7345
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7347
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7346
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7349
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7351
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7350
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7353
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7354
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7357
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 7358
        .trainerName = _("BRENDAN"),
#line 7359
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7360
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7362
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7363
        .doubleBattle = FALSE,
#line 7364
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7366
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7368
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7367
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7370
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7372
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7371
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7374
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7375
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7378
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 7379
        .trainerName = _("MAY"),
#line 7380
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7381
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7382
F_TRAINER_FEMALE | 
#line 7383
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7384
        .doubleBattle = FALSE,
#line 7385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7387
            .species = SPECIES_GOOMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7387
            .heldItem = ITEM_MIRACLE_SEED,
#line 7391
            .ev = TRAINER_PARTY_EVS(16, 0, 0, 0, 36, 0),
#line 7390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7388
            .ability = ABILITY_HYDRATION,
#line 7389
            .lvl = 8,
#line 7392
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7393
                MOVE_ABSORB,
                MOVE_WATER_GUN,
                MOVE_DRAGON_BREATH,
                MOVE_LIFE_DEW,
            },
            },
            {
#line 7398
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7398
            .heldItem = ITEM_ORAN_BERRY,
#line 7402
            .ev = TRAINER_PARTY_EVS(36, 0, 0, 0, 76, 0),
#line 7401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7399
            .ability = ABILITY_UNBURDEN,
#line 7400
            .lvl = 10,
#line 7403
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7404
                MOVE_MEGA_DRAIN,
                MOVE_DETECT,
                MOVE_LEECH_SEED,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 7409
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 7410
        .trainerName = _("MAY"),
#line 7411
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7412
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7413
F_TRAINER_FEMALE | 
#line 7414
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7415
        .doubleBattle = FALSE,
#line 7416
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7418
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7419
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7422
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7424
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7423
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7426
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7428
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7427
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7430
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 7431
        .trainerName = _("MAY"),
#line 7432
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7433
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7434
F_TRAINER_FEMALE | 
#line 7435
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7436
        .doubleBattle = FALSE,
#line 7437
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7439
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7440
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7443
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7445
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7444
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7447
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7449
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7448
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7451
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 7452
        .trainerName = _("MAY"),
#line 7453
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7454
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7455
F_TRAINER_FEMALE | 
#line 7456
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7457
        .doubleBattle = FALSE,
#line 7458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7460
            .species = SPECIES_FRIGIBAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .heldItem = ITEM_NEVER_MELT_ICE,
#line 7464
            .ev = TRAINER_PARTY_EVS(8, 76, 0, 0, 0, 0),
#line 7463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7461
            .ability = ABILITY_THERMAL_EXCHANGE,
#line 7462
            .lvl = 8,
#line 7465
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7466
                MOVE_ICICLE_SPEAR,
                MOVE_DRAGON_TAIL,
                MOVE_ICY_WIND,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7471
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7471
            .heldItem = ITEM_ORAN_BERRY,
#line 7475
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7472
            .ability = ABILITY_SPEED_BOOST,
#line 7473
            .lvl = 10,
#line 7476
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7477
                MOVE_FLAME_CHARGE,
                MOVE_SCRATCH,
                MOVE_PECK,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 7482
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 7483
        .trainerName = _("MAY"),
#line 7484
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7485
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7486
F_TRAINER_FEMALE | 
#line 7487
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7488
        .doubleBattle = FALSE,
#line 7489
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7491
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7493
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7492
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7495
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7497
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7496
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7499
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7501
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7500
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7503
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 7504
        .trainerName = _("MAY"),
#line 7505
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7506
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7507
F_TRAINER_FEMALE | 
#line 7508
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7509
        .doubleBattle = FALSE,
#line 7510
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7512
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7514
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7513
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7516
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7518
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7517
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7520
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7521
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7524
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 7525
        .trainerName = _("MAY"),
#line 7526
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7527
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7528
F_TRAINER_FEMALE | 
#line 7529
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7530
        .doubleBattle = FALSE,
#line 7531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7533
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7533
            .heldItem = ITEM_HARD_STONE,
#line 7537
            .ev = TRAINER_PARTY_EVS(28, 64, 0, 0, 0, 0),
#line 7536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7534
            .ability = ABILITY_GUTS,
#line 7535
            .lvl = 8,
#line 7538
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7539
                MOVE_ROCK_THROW,
                MOVE_BITE,
                MOVE_DRAGON_DANCE,
                MOVE_SUBSTITUTE,
            },
            },
            {
#line 7544
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7544
            .heldItem = ITEM_ORAN_BERRY,
#line 7548
            .ev = TRAINER_PARTY_EVS(36, 76, 0, 0, 0, 0),
#line 7547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7545
            .ability = ABILITY_DAMP,
#line 7546
            .lvl = 10,
#line 7549
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7550
                MOVE_WATER_GUN,
                MOVE_ROCK_THROW,
                MOVE_ROCK_SMASH,
                MOVE_YAWN,
            },
            },
        },
    },
#line 7555
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 7556
        .trainerName = _("MAY"),
#line 7557
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7558
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7559
F_TRAINER_FEMALE | 
#line 7560
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7561
        .doubleBattle = FALSE,
#line 7562
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7564
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7566
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7565
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7568
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7570
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7569
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7572
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7573
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7576
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 7577
        .trainerName = _("MAY"),
#line 7578
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7579
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7580
F_TRAINER_FEMALE | 
#line 7581
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7582
        .doubleBattle = FALSE,
#line 7583
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7585
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7587
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7586
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7589
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7593
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7595
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7594
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7597
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 7598
        .trainerName = _("ISAAC"),
#line 7599
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7600
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7602
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7603
        .doubleBattle = FALSE,
#line 7604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7606
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7607
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7610
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7611
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7614
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7615
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7618
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7619
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7622
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7623
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7626
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7627
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7630
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 7631
        .trainerName = _("DAVIS"),
#line 7632
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7633
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7635
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7636
        .doubleBattle = FALSE,
#line 7637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7639
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7640
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7643
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 7644
        .trainerName = _("MITCHELL"),
#line 7645
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7646
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7648
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7649
        .doubleBattle = FALSE,
#line 7650
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7652
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7653
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7655
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 7660
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7661
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7663
                MOVE_EXPLOSION,
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 7668
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_2] =
    {
#line 7669
        .trainerName = _("ISAAC"),
#line 7670
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7671
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 7673
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7674
        .doubleBattle = FALSE,
#line 7675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7677
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7679
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7678
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7681
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7683
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7682
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7685
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7687
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7686
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7689
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7691
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7690
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7693
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7695
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7694
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7697
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7698
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7701
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 7702
        .trainerName = _("LYDIA"),
#line 7703
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7704
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7705
F_TRAINER_FEMALE | 
#line 7706
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7707
        .doubleBattle = FALSE,
#line 7708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7710
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7711
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7714
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7715
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7718
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7719
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7722
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7723
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7726
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7727
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7730
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7731
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7734
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 7735
        .trainerName = _("HALLE"),
#line 7736
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7737
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7738
F_TRAINER_FEMALE | 
#line 7739
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7740
        .items = { ITEM_FULL_RESTORE },
#line 7741
        .doubleBattle = FALSE,
#line 7742
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7744
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7745
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7748
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7749
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7752
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 7753
        .trainerName = _("GARRISON"),
#line 7754
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 7755
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 7757
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7758
        .doubleBattle = FALSE,
#line 7759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7761
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7762
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7765
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_2] =
    {
#line 7766
        .trainerName = _("LYDIA"),
#line 7767
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 7768
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 7769
F_TRAINER_FEMALE | 
#line 7770
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7771
        .doubleBattle = FALSE,
#line 7772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7774
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7776
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7775
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7778
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7780
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7779
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7782
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7784
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7783
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7786
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7788
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7787
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7790
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7792
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7791
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7794
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 7795
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7798
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 7799
        .trainerName = _("JACKSON"),
#line 7800
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7801
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7803
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7804
        .items = { ITEM_FULL_RESTORE },
#line 7805
        .doubleBattle = FALSE,
#line 7806
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7808
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7810
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7809
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7812
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 7813
        .trainerName = _("LORENZO"),
#line 7814
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7815
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7817
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7818
        .items = { ITEM_FULL_RESTORE },
#line 7819
        .doubleBattle = FALSE,
#line 7820
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7822
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7824
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7823
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7826
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7827
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7830
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7832
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7831
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7834
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 7835
        .trainerName = _("SEBASTIAN"),
#line 7836
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7837
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7839
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7840
        .items = { ITEM_FULL_RESTORE },
#line 7841
        .doubleBattle = FALSE,
#line 7842
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7844
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7846
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7845
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7848
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_2] =
    {
#line 7849
        .trainerName = _("JACKSON"),
#line 7850
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7851
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 7853
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7854
        .items = { ITEM_FULL_RESTORE },
#line 7855
        .doubleBattle = FALSE,
#line 7856
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7858
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7860
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7859
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7862
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7864
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7863
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7866
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 7867
        .trainerName = _("CATHERINE"),
#line 7868
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7869
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7870
F_TRAINER_FEMALE | 
#line 7871
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7872
        .items = { ITEM_FULL_RESTORE },
#line 7873
        .doubleBattle = FALSE,
#line 7874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7876
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7878
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7877
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7880
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7882
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7881
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7884
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 7885
        .trainerName = _("JENNA"),
#line 7886
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7887
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7888
F_TRAINER_FEMALE | 
#line 7889
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7890
        .items = { ITEM_FULL_RESTORE },
#line 7891
        .doubleBattle = FALSE,
#line 7892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7894
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7895
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7898
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7899
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7902
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7903
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7906
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 7907
        .trainerName = _("SOPHIA"),
#line 7908
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7909
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7910
F_TRAINER_FEMALE | 
#line 7911
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7912
        .items = { ITEM_FULL_RESTORE },
#line 7913
        .doubleBattle = FALSE,
#line 7914
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7916
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7918
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7917
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7920
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7922
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7921
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7924
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_2] =
    {
#line 7925
        .trainerName = _("CATHERINE"),
#line 7926
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 7927
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 7928
F_TRAINER_FEMALE | 
#line 7929
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7930
        .items = { ITEM_FULL_RESTORE },
#line 7931
        .doubleBattle = FALSE,
#line 7932
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7934
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7936
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7935
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7938
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(10, 10, 10, 10, 10, 10),
#line 7939
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7942
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 7943
        .trainerName = _("JULIO"),
#line 7944
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7945
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 7947
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7948
        .doubleBattle = FALSE,
#line 7949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7951
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7952
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7955
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 7956
        .trainerName = _("GRUNT"),
#line 7957
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7958
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 7960
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7961
        .doubleBattle = FALSE,
#line 7962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7964
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7966
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7965
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7968
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7969
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7972
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 7973
        .trainerName = _("GRUNT"),
#line 7974
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7975
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7976
F_TRAINER_FEMALE | 
#line 7977
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7978
        .doubleBattle = FALSE,
#line 7979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7981
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7982
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7985
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7986
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7989
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7990
        .trainerName = _("GRUNT"),
#line 7991
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7992
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7993
F_TRAINER_FEMALE | 
#line 7994
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7995
        .doubleBattle = FALSE,
#line 7996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7998
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7999
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8002
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8003
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8006
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 8007
        .trainerName = _("GRUNT"),
#line 8008
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8009
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8011
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8012
        .doubleBattle = FALSE,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8015
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8016
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8019
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8021
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8020
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8023
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 8024
        .trainerName = _("MARC"),
#line 8025
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8026
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8028
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8029
        .doubleBattle = FALSE,
#line 8030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8032
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 8033
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8036
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8038
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 8037
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8040
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 8041
        .trainerName = _("BRENDEN"),
#line 8042
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8043
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 8045
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8046
        .doubleBattle = FALSE,
#line 8047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8049
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8050
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8053
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 8054
        .trainerName = _("LILITH"),
#line 8055
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8056
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8057
F_TRAINER_FEMALE | 
#line 8058
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8059
        .doubleBattle = FALSE,
#line 8060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8062
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8063
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8066
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 8067
        .trainerName = _("CRISTIAN"),
#line 8068
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8069
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8071
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8072
        .doubleBattle = FALSE,
#line 8073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8075
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8077
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8076
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8079
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 8080
        .trainerName = _("SYLVIA"),
#line 8081
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8082
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8083
F_TRAINER_FEMALE | 
#line 8084
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8085
        .doubleBattle = FALSE,
#line 8086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8088
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8089
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8092
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 8093
        .trainerName = _("LEONARDO"),
#line 8094
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8095
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8097
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8098
        .doubleBattle = FALSE,
#line 8099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8101
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8102
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8105
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 8106
        .trainerName = _("ATHENA"),
#line 8107
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8108
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8109
F_TRAINER_FEMALE | 
#line 8110
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8111
        .items = { ITEM_HYPER_POTION },
#line 8112
        .doubleBattle = FALSE,
#line 8113
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8115
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8117
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8116
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8118
                MOVE_THUNDER,
                MOVE_THUNDER_WAVE,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 8122
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8124
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8123
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8125
                MOVE_SURF,
                MOVE_THIEF,
            },
            },
        },
    },
#line 8128
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 8129
        .trainerName = _("HARRISON"),
#line 8130
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8131
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8133
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8134
        .doubleBattle = FALSE,
#line 8135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8137
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8138
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8141
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 8142
        .trainerName = _("GRUNT"),
#line 8143
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8144
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8146
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8147
        .doubleBattle = FALSE,
#line 8148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8150
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8151
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8154
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 8155
        .trainerName = _("CLARENCE"),
#line 8156
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8157
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8159
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8160
        .doubleBattle = FALSE,
#line 8161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8163
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8164
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8167
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 8168
        .trainerName = _("TERRY"),
#line 8169
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8170
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 8171
F_TRAINER_FEMALE | 
#line 8172
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8173
        .doubleBattle = FALSE,
#line 8174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8176
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8177
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8180
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 8181
        .trainerName = _("NATE"),
#line 8182
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8183
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 8185
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8186
        .doubleBattle = FALSE,
#line 8187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8189
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8191
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8190
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8193
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 8194
        .trainerName = _("KATHLEEN"),
#line 8195
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8196
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8197
F_TRAINER_FEMALE | 
#line 8198
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8199
        .doubleBattle = FALSE,
#line 8200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8202
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8203
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8206
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 8207
        .trainerName = _("CLIFFORD"),
#line 8208
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 8209
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 8211
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8212
        .doubleBattle = FALSE,
#line 8213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8215
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8216
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8219
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 8220
        .trainerName = _("NICHOLAS"),
#line 8221
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8222
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 8224
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8225
        .doubleBattle = FALSE,
#line 8226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8228
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8229
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8232
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 8233
        .trainerName = _("GRUNT"),
#line 8234
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8235
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8236
F_TRAINER_FEMALE | 
#line 8237
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8238
        .doubleBattle = FALSE,
#line 8239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8241
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8242
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8245
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8246
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8249
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 8250
        .trainerName = _("GRUNT"),
#line 8251
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8252
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8254
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8255
        .doubleBattle = FALSE,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8259
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8262
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 8263
        .trainerName = _("GRUNT"),
#line 8264
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8265
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8267
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8268
        .doubleBattle = FALSE,
#line 8269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8271
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8272
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8275
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 8276
        .trainerName = _("GRUNT"),
#line 8277
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8278
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8280
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8281
        .doubleBattle = FALSE,
#line 8282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8284
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8285
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8288
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 8289
        .trainerName = _("GRUNT"),
#line 8290
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8291
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8293
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8294
        .doubleBattle = FALSE,
#line 8295
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8297
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8298
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8301
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 8302
        .trainerName = _("MACEY"),
#line 8303
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 8304
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 8305
F_TRAINER_FEMALE | 
#line 8306
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8307
        .doubleBattle = FALSE,
#line 8308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8310
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8311
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8314
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TREECKO] =
    {
#line 8315
        .trainerName = _("BRENDAN"),
#line 8316
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8317
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8319
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8320
        .doubleBattle = FALSE,
#line 8321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8323
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8325
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8324
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8327
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8329
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8328
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8331
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 8332
        .trainerName = _("BRENDAN"),
#line 8333
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8334
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8336
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8337
        .doubleBattle = FALSE,
#line 8338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8340
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8342
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8341
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8344
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8346
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8345
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8348
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 8349
        .trainerName = _("PAXTON"),
#line 8350
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 8351
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 8353
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8354
        .doubleBattle = FALSE,
#line 8355
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8357
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8358
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8361
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8362
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8365
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 8366
        .trainerName = _("ISABELLA"),
#line 8367
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8368
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8369
F_TRAINER_FEMALE | 
#line 8370
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8371
        .doubleBattle = FALSE,
#line 8372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8374
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8375
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8378
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 8379
        .trainerName = _("GRUNT"),
#line 8380
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 8381
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 8382
F_TRAINER_FEMALE | 
#line 8383
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 8384
        .doubleBattle = FALSE,
#line 8385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8387
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8388
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8391
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8392
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8395
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 8396
        .trainerName = _("TABITHA"),
#line 8397
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8398
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 8400
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8401
        .doubleBattle = FALSE,
#line 8402
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8404
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8406
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8405
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8408
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8410
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8409
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8412
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8414
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8413
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8416
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8417
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8420
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 8421
        .trainerName = _("JONATHAN"),
#line 8422
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8423
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8425
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8426
        .items = { ITEM_HYPER_POTION },
#line 8427
        .doubleBattle = FALSE,
#line 8428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8430
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8431
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8434
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8435
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8438
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 8439
        .trainerName = _("BRENDAN"),
#line 8440
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8441
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8443
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8444
        .doubleBattle = FALSE,
#line 8445
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8447
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8448
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8451
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8452
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8455
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 8456
        .trainerName = _("MAY"),
#line 8457
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8458
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8459
F_TRAINER_FEMALE | 
#line 8460
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8461
        .doubleBattle = FALSE,
#line 8462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8464
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8466
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 8465
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8468
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8470
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8469
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8472
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 8473
        .trainerName = _("MAXIE"),
#line 8474
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8475
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8477
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8478
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8479
        .doubleBattle = FALSE,
#line 8480
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8482
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8483
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8486
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8488
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8487
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8490
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8491
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8494
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 8495
        .trainerName = _("MAXIE"),
#line 8496
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8497
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8499
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8500
        .items = { ITEM_SUPER_POTION, ITEM_SUPER_POTION },
#line 8501
        .doubleBattle = FALSE,
#line 8502
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8504
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8506
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8505
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8508
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8510
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8509
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8512
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8514
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8513
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8516
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 8517
        .trainerName = _("TIANA"),
#line 8518
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 8519
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 8520
F_TRAINER_FEMALE | 
#line 8521
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8522
        .doubleBattle = FALSE,
#line 8523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8525
            .species = SPECIES_INKAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8525
            .heldItem = ITEM_EVIOLITE,
#line 8529
            .ev = TRAINER_PARTY_EVS(52, 0, 0, 4, 0, 0),
#line 8528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8526
            .ability = ABILITY_INFILTRATOR,
#line 8527
            .lvl = 14,
#line 8530
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8531
                MOVE_CALM_MIND,
                MOVE_BATON_PASS,
                MOVE_STORED_POWER,
                MOVE_NASTY_PLOT,
            },
            },
            {
#line 8536
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8536
            .heldItem = ITEM_SPELL_TAG,
#line 8540
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 12, 36, 0),
#line 8539
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8537
            .ability = ABILITY_LEVITATE,
#line 8538
            .lvl = 15,
#line 8541
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8542
                MOVE_OMINOUS_WIND,
                MOVE_ACID_SPRAY,
                MOVE_MEGA_DRAIN,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8547
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8547
            .heldItem = ITEM_TWISTED_SPOON,
#line 8551
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 12, 52, 0),
#line 8550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8548
            .ability = ABILITY_SYNCHRONIZE,
#line 8549
            .lvl = 15,
#line 8552
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8553
                MOVE_CONFUSION,
                MOVE_CHARGE_BEAM,
                MOVE_TELEPORT,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 8558
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 8559
        .trainerName = _("HALEY"),
#line 8560
        .trainerClass = TRAINER_CLASS_LASS,
#line 8561
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8562
F_TRAINER_FEMALE | 
#line 8563
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8564
        .doubleBattle = FALSE,
#line 8565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8567
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8568
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8571
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8572
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8575
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 8576
        .trainerName = _("JANICE"),
#line 8577
        .trainerClass = TRAINER_CLASS_LASS,
#line 8578
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8579
F_TRAINER_FEMALE | 
#line 8580
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8581
        .doubleBattle = FALSE,
#line 8582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8584
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8585
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8588
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 8589
        .trainerName = _("VIVI"),
#line 8590
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 8591
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8592
F_TRAINER_FEMALE | 
#line 8593
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8594
        .doubleBattle = FALSE,
#line 8595
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8597
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8598
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8601
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8602
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8605
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8606
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8609
    [DIFFICULTY_NORMAL][TRAINER_HALEY_2] =
    {
#line 8610
        .trainerName = _("HALEY"),
#line 8611
        .trainerClass = TRAINER_CLASS_LASS,
#line 8612
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8613
F_TRAINER_FEMALE | 
#line 8614
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8615
        .doubleBattle = FALSE,
#line 8616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8618
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8619
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8622
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8624
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8623
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8626
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8628
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8627
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8630
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 8631
        .trainerName = _("SALLY"),
#line 8632
        .trainerClass = TRAINER_CLASS_LASS,
#line 8633
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8634
F_TRAINER_FEMALE | 
#line 8635
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8636
        .doubleBattle = FALSE,
#line 8637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8639
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8640
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8643
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 8644
        .trainerName = _("ROBIN"),
#line 8645
        .trainerClass = TRAINER_CLASS_LASS,
#line 8646
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8647
F_TRAINER_FEMALE | 
#line 8648
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8649
        .doubleBattle = FALSE,
#line 8650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8652
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8653
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8656
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8657
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8660
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8661
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8664
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 8665
        .trainerName = _("ANDREA"),
#line 8666
        .trainerClass = TRAINER_CLASS_LASS,
#line 8667
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8668
F_TRAINER_FEMALE | 
#line 8669
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8670
        .doubleBattle = FALSE,
#line 8671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8673
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8675
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8674
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8677
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 8678
        .trainerName = _("CRISSY"),
#line 8679
        .trainerClass = TRAINER_CLASS_LASS,
#line 8680
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 8681
F_TRAINER_FEMALE | 
#line 8682
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8683
        .doubleBattle = FALSE,
#line 8684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8686
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8688
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8687
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8690
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8691
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8694
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 8695
        .trainerName = _("RICK"),
#line 8696
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8697
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8699
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8700
        .doubleBattle = FALSE,
#line 8701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8703
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8703
            .heldItem = ITEM_ORAN_BERRY,
#line 8707
            .ev = TRAINER_PARTY_EVS(32, 0, 0, 36, 8, 0),
#line 8706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8704
            .ability = ABILITY_COMPOUND_EYES,
#line 8705
            .lvl = 13,
#line 8708
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8709
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
                MOVE_TOXIC,
                MOVE_VOLT_SWITCH,
            },
            },
            {
#line 8714
            .species = SPECIES_LARVESTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8714
            .heldItem = ITEM_SILVER_POWDER,
#line 8718
            .ev = TRAINER_PARTY_EVS(24, 60, 0, 0, 0, 0),
#line 8717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8715
            .ability = ABILITY_FLAME_BODY,
#line 8716
            .lvl = 13,
#line 8719
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8720
                MOVE_POUNCE,
                MOVE_U_TURN,
                MOVE_CALM_MIND,
                MOVE_SIGNAL_BEAM,
            },
            },
            {
#line 8725
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .heldItem = ITEM_SITRUS_BERRY,
#line 8729
            .ev = TRAINER_PARTY_EVS(28, 0, 0, 32, 0, 0),
#line 8728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8726
            .ability = ABILITY_COMPOUND_EYES,
#line 8727
            .lvl = 14,
#line 8730
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8731
                MOVE_AGILITY,
                MOVE_SLEEP_POWDER,
                MOVE_BATON_PASS,
                MOVE_CURSE,
            },
            },
            {
#line 8736
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8736
            .heldItem = ITEM_HARD_STONE,
#line 8740
            .ev = TRAINER_PARTY_EVS(24, 52, 0, 0, 0, 0),
#line 8739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8737
            .ability = ABILITY_SWIFT_SWIM,
#line 8738
            .lvl = 15,
#line 8741
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8742
                MOVE_AQUA_JET,
                MOVE_ROCK_BLAST,
                MOVE_FURY_CUTTER,
                MOVE_HONE_CLAWS,
            },
            },
        },
    },
#line 8747
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 8748
        .trainerName = _("LYLE"),
#line 8749
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8750
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8752
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8753
        .doubleBattle = FALSE,
#line 8754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8756
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8757
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8760
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8761
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8764
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8765
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8768
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8769
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8772
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 8773
        .trainerName = _("JOSE"),
#line 8774
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8775
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8777
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8778
        .doubleBattle = FALSE,
#line 8779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8781
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8783
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8782
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8785
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8787
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8786
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8789
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 8790
        .trainerName = _("DOUG"),
#line 8791
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8792
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8794
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8795
        .doubleBattle = FALSE,
#line 8796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8798
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8799
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8802
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8803
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8806
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 8807
        .trainerName = _("GREG"),
#line 8808
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8809
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8811
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8812
        .doubleBattle = FALSE,
#line 8813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8815
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8816
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8819
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8820
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8823
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 8824
        .trainerName = _("KENT"),
#line 8825
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8826
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8828
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8829
        .doubleBattle = FALSE,
#line 8830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8833
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8836
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 8837
        .trainerName = _("JAMES"),
#line 8838
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8839
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8841
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8842
        .doubleBattle = FALSE,
#line 8843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8845
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8846
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8849
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8850
            .lvl = 6,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8853
    [DIFFICULTY_NORMAL][TRAINER_JAMES_2] =
    {
#line 8854
        .trainerName = _("JAMES"),
#line 8855
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 8856
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 8858
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8859
        .doubleBattle = FALSE,
#line 8860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8862
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8864
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8863
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8866
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8868
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8867
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8870
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8872
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8871
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8874
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 8875
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8878
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 8879
        .trainerName = _("BRICE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8887
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8888
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8891
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8892
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8895
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 8896
        .trainerName = _("TRENT"),
#line 8897
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8898
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8900
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8901
        .doubleBattle = FALSE,
#line 8902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8904
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8905
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8908
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8909
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8912
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8913
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8916
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 8917
        .trainerName = _("LENNY"),
#line 8918
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8919
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8921
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8922
        .doubleBattle = FALSE,
#line 8923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8925
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8926
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8929
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8930
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8933
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
#line 8934
        .trainerName = _("LUCAS"),
#line 8935
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8936
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8938
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8939
        .doubleBattle = FALSE,
#line 8940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8942
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8943
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8946
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8947
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8950
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 8951
        .trainerName = _("ALAN"),
#line 8952
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8953
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8955
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8956
        .doubleBattle = FALSE,
#line 8957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8959
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8960
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8963
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8964
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8967
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8968
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8971
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8972
        .trainerName = _("CLARK"),
#line 8973
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8974
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8976
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8977
        .doubleBattle = FALSE,
#line 8978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8980
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8981
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8984
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8985
        .trainerName = _("ERIC"),
#line 8986
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8987
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8989
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8990
        .doubleBattle = FALSE,
#line 8991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8993
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8994
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8997
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8998
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9001
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_2] =
    {
#line 9002
        .trainerName = _("LUCAS"),
#line 9003
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9004
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9006
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9007
        .doubleBattle = FALSE,
#line 9008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9010
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9011
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9013
                MOVE_SPLASH,
                MOVE_WATER_GUN,
            },
            },
        },
    },
#line 9016
    [DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
    {
#line 9017
        .trainerName = _("MIKE"),
#line 9018
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9019
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9021
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9022
        .doubleBattle = FALSE,
#line 9023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9025
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9026
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9028
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 9031
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9032
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9034
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 9037
    [DIFFICULTY_NORMAL][TRAINER_MIKE_2] =
    {
#line 9038
        .trainerName = _("MIKE"),
#line 9039
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9040
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9042
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9043
        .doubleBattle = FALSE,
#line 9044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9046
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9047
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9050
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9051
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9054
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9055
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9058
    [DIFFICULTY_NORMAL][TRAINER_TRENT_2] =
    {
#line 9059
        .trainerName = _("TRENT"),
#line 9060
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9061
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9063
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9064
        .doubleBattle = FALSE,
#line 9065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9067
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9069
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9068
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9071
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9073
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9072
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9075
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9077
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9076
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9079
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9081
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9080
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9083
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 9084
        .trainerName = _("DEZ & LUKE"),
#line 9085
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9086
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9088
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9089
        .doubleBattle = TRUE,
#line 9090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9092
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9093
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9096
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9097
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9100
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 9101
        .trainerName = _("LEA & JED"),
#line 9102
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9103
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9105
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9106
        .doubleBattle = TRUE,
#line 9107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9109
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9110
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9113
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9114
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9117
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 9118
        .trainerName = _("KIRA & DAN"),
#line 9119
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9120
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9122
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9123
        .doubleBattle = TRUE,
#line 9124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9126
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9127
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9130
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9131
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9134
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_2] =
    {
#line 9135
        .trainerName = _("KIRA & DAN"),
#line 9136
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9137
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9139
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9140
        .doubleBattle = TRUE,
#line 9141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9143
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9145
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9144
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9147
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9149
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 9148
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9151
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 9152
        .trainerName = _("JOHANNA"),
#line 9153
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9154
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9155
F_TRAINER_FEMALE | 
#line 9156
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9157
        .doubleBattle = FALSE,
#line 9158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9160
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9161
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9164
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 9165
        .trainerName = _("GERALD"),
#line 9166
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9167
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9169
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9170
        .items = { ITEM_HYPER_POTION },
#line 9171
        .doubleBattle = FALSE,
#line 9172
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9174
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9176
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9175
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9177
                MOVE_FLAMETHROWER,
                MOVE_FURY_SWIPES,
                MOVE_FEINT_ATTACK,
                MOVE_BIND,
            },
            },
        },
    },
#line 9182
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 9183
        .trainerName = _("VIVIAN"),
#line 9184
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9185
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9186
F_TRAINER_FEMALE | 
#line 9187
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9188
        .doubleBattle = FALSE,
#line 9189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9191
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9193
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9192
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9194
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9199
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9201
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9200
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9202
                MOVE_THUNDER_PUNCH,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_MEDITATE,
            },
            },
        },
    },
#line 9207
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 9208
        .trainerName = _("DANIELLE"),
#line 9209
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9210
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9211
F_TRAINER_FEMALE | 
#line 9212
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9213
        .doubleBattle = FALSE,
#line 9214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9216
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9218
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9217
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9219
                MOVE_BIDE,
                MOVE_DETECT,
                MOVE_CONFUSION,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 9224
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 9225
        .trainerName = _("HIDEO"),
#line 9226
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9227
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9229
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9230
        .doubleBattle = FALSE,
#line 9231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9233
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9234
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9236
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9241
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9242
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9244
                MOVE_TACKLE,
                MOVE_POISON_GAS,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 9249
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 9250
        .trainerName = _("KEIGO"),
#line 9251
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9252
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9254
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9255
        .doubleBattle = FALSE,
#line 9256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9258
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9259
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9261
                MOVE_POISON_GAS,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9266
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9267
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9269
                MOVE_SAND_ATTACK,
                MOVE_DOUBLE_TEAM,
                MOVE_FURY_CUTTER,
                MOVE_SWORDS_DANCE,
            },
            },
        },
    },
#line 9274
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 9275
        .trainerName = _("RILEY"),
#line 9276
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9277
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9279
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9280
        .doubleBattle = FALSE,
#line 9281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9283
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9284
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9286
                MOVE_LEECH_LIFE,
                MOVE_FURY_SWIPES,
                MOVE_MIND_READER,
                MOVE_DIG,
            },
            },
            {
#line 9291
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9292
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9294
                MOVE_TACKLE,
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE,
                MOVE_SMOKESCREEN,
            },
            },
        },
    },
#line 9299
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 9300
        .trainerName = _("FLINT"),
#line 9301
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9302
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9304
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9305
        .doubleBattle = FALSE,
#line 9306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9308
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9309
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9312
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9314
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9313
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9316
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 9317
        .trainerName = _("ASHLEY"),
#line 9318
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9319
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9320
F_TRAINER_FEMALE | 
#line 9321
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9322
        .doubleBattle = FALSE,
#line 9323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9325
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9327
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9326
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9329
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9331
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9330
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9333
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9335
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9334
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9337
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 9338
        .trainerName = _("WALLY"),
#line 9339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9340
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9342
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9343
        .doubleBattle = FALSE,
#line 9344
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9346
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9348
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9347
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9350
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_2] =
    {
#line 9351
        .trainerName = _("WALLY"),
#line 9352
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9353
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9355
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9356
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9357
        .doubleBattle = FALSE,
#line 9358
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9360
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9362
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9361
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9363
                MOVE_AERIAL_ACE,
                MOVE_SAFEGUARD,
                MOVE_DRAGON_BREATH,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 9368
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9370
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9369
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9371
                MOVE_SING,
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
            },
            },
            {
#line 9376
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9378
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9377
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9379
                MOVE_MAGICAL_LEAF,
                MOVE_LEECH_SEED,
                MOVE_GIGA_DRAIN,
                MOVE_TOXIC,
            },
            },
            {
#line 9384
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9386
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9385
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9387
                MOVE_SUPERSONIC,
                MOVE_THUNDERBOLT,
                MOVE_TRI_ATTACK,
                MOVE_SCREECH,
            },
            },
            {
#line 9392
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9394
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 9393
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9395
                MOVE_DOUBLE_TEAM,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 9400
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_MUDKIP] =
    {
#line 9401
        .trainerName = _("BRENDAN"),
#line 9402
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9403
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9405
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9406
        .doubleBattle = FALSE,
#line 9407
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9409
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9411
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9410
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9413
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9415
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9414
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9417
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9418
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9421
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9423
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9422
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9425
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 9426
        .trainerName = _("BRENDAN"),
#line 9427
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9428
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9430
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9431
        .doubleBattle = FALSE,
#line 9432
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9434
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9436
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9435
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9438
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9440
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9439
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9442
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9444
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9443
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9446
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9448
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9447
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9450
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 9451
        .trainerName = _("BRENDAN"),
#line 9452
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9453
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 9455
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9456
        .doubleBattle = FALSE,
#line 9457
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9459
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9461
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9460
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9463
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9465
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9464
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9467
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9469
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9468
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9471
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9473
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9472
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9475
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 9476
        .trainerName = _("MAY"),
#line 9477
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9478
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9479
F_TRAINER_FEMALE | 
#line 9480
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9481
        .doubleBattle = FALSE,
#line 9482
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9484
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9486
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9485
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9488
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9490
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9489
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9492
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9494
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9493
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9496
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9498
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9497
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9500
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 9501
        .trainerName = _("MAY"),
#line 9502
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9503
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9504
F_TRAINER_FEMALE | 
#line 9505
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9506
        .doubleBattle = FALSE,
#line 9507
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9509
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9511
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9510
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9513
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9515
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9514
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9517
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9519
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9518
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9521
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9523
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9522
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9525
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 9526
        .trainerName = _("MAY"),
#line 9527
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9528
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9529
F_TRAINER_FEMALE | 
#line 9530
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9531
        .doubleBattle = FALSE,
#line 9532
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9534
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9536
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9535
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9538
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9539
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9542
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 9543
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9546
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9547
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9550
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 9551
        .trainerName = _("JONAH"),
#line 9552
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9553
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9555
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9556
        .doubleBattle = FALSE,
#line 9557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9559
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9560
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9563
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9568
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 9572
        .trainerName = _("HENRY"),
#line 9573
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9574
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9576
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9577
        .doubleBattle = FALSE,
#line 9578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9580
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9584
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9585
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 9589
        .trainerName = _("ROGER"),
#line 9590
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9591
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9593
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9594
        .doubleBattle = FALSE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9598
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9601
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9602
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9605
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9606
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9609
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 9610
        .trainerName = _("ALEXA"),
#line 9611
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9612
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9613
F_TRAINER_FEMALE | 
#line 9614
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9615
        .items = { ITEM_FULL_RESTORE },
#line 9616
        .doubleBattle = FALSE,
#line 9617
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9619
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9621
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9620
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9623
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9625
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9624
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9627
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 9628
        .trainerName = _("RUBEN"),
#line 9629
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9630
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9632
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9633
        .items = { ITEM_HYPER_POTION },
#line 9634
        .doubleBattle = FALSE,
#line 9635
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9637
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9639
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9638
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9641
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9643
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9642
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9645
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 9646
        .trainerName = _("KOJI"),
#line 9647
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9648
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9650
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9651
        .doubleBattle = FALSE,
#line 9652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9654
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9655
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9658
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 9659
        .trainerName = _("WAYNE"),
#line 9660
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9661
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9663
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9664
        .doubleBattle = FALSE,
#line 9665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9667
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9668
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9671
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9672
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9675
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9676
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9679
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 9680
        .trainerName = _("AIDAN"),
#line 9681
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9682
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9684
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9685
        .doubleBattle = FALSE,
#line 9686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9688
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9689
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9692
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9693
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9696
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 9697
        .trainerName = _("REED"),
#line 9698
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9699
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9701
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9702
        .doubleBattle = FALSE,
#line 9703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9705
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9706
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9709
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9710
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9713
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 9714
        .trainerName = _("TISHA"),
#line 9715
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9716
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9717
F_TRAINER_FEMALE | 
#line 9718
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9719
        .doubleBattle = FALSE,
#line 9720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9722
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9723
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9726
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 9727
        .trainerName = _("TORI & TIA"),
#line 9728
        .trainerClass = TRAINER_CLASS_TWINS,
#line 9729
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 9731
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9732
        .doubleBattle = TRUE,
#line 9733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9735
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9736
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9739
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9740
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9743
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 9744
        .trainerName = _("KIM & IRIS"),
#line 9745
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9746
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9748
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9749
        .doubleBattle = TRUE,
#line 9750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9752
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9753
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9755
                MOVE_SING,
                MOVE_FURY_ATTACK,
                MOVE_SAFEGUARD,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 9760
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9761
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9763
                MOVE_FLAMETHROWER,
                MOVE_TAKE_DOWN,
                MOVE_REST,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 9768
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 9769
        .trainerName = _("TYRA & IVY"),
#line 9770
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 9771
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 9773
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 9774
        .doubleBattle = TRUE,
#line 9775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9777
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9778
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9780
                MOVE_GROWTH,
                MOVE_STUN_SPORE,
                MOVE_MEGA_DRAIN,
                MOVE_LEECH_SEED,
            },
            },
            {
#line 9785
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9786
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9788
                MOVE_DEFENSE_CURL,
                MOVE_ROLLOUT,
                MOVE_MUD_SPORT,
                MOVE_ROCK_THROW,
            },
            },
        },
    },
#line 9793
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 9794
        .trainerName = _("MEL & PAUL"),
#line 9795
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 9796
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 9798
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9799
        .doubleBattle = TRUE,
#line 9800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9802
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9803
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9805
                MOVE_GUST,
                MOVE_PSYBEAM,
                MOVE_TOXIC,
                MOVE_PROTECT,
            },
            },
            {
#line 9810
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9811
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9813
                MOVE_GUST,
                MOVE_MEGA_DRAIN,
                MOVE_ATTRACT,
                MOVE_STUN_SPORE,
            },
            },
        },
    },
#line 9818
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 9819
        .trainerName = _("JOHN & JAY"),
#line 9820
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9821
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9823
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9824
        .doubleBattle = TRUE,
#line 9825
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9827
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9829
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9828
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9830
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9835
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9837
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9836
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9838
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9843
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_2] =
    {
#line 9844
        .trainerName = _("JOHN & JAY"),
#line 9845
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 9846
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 9848
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9849
        .doubleBattle = TRUE,
#line 9850
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9852
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9854
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 9853
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9855
                MOVE_PSYCHIC,
                MOVE_FIRE_PUNCH,
                MOVE_PSYCH_UP,
                MOVE_PROTECT,
            },
            },
            {
#line 9860
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9862
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 9861
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9863
                MOVE_FOCUS_PUNCH,
                MOVE_ROCK_TOMB,
                MOVE_REST,
                MOVE_BELLY_DRUM,
            },
            },
        },
    },
#line 9868
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 9869
        .trainerName = _("RELI & IAN"),
#line 9870
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9871
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9873
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9874
        .doubleBattle = TRUE,
#line 9875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9877
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9878
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9881
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9882
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9885
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 9886
        .trainerName = _("LILA & ROY"),
#line 9887
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9888
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9890
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9891
        .doubleBattle = TRUE,
#line 9892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9894
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9895
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9898
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9899
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9902
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_2] =
    {
#line 9903
        .trainerName = _("LILA & ROY"),
#line 9904
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9905
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9907
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9908
        .doubleBattle = TRUE,
#line 9909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9911
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9912
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9915
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9916
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9919
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 9920
        .trainerName = _("LISA & RAY"),
#line 9921
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 9922
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 9924
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9925
        .doubleBattle = TRUE,
#line 9926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9928
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9929
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9932
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9933
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9936
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 9937
        .trainerName = _("CHRIS"),
#line 9938
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9939
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9941
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9942
        .doubleBattle = FALSE,
#line 9943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9945
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9946
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9949
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9950
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9953
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9954
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9957
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9958
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9961
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 9962
        .trainerName = _("DAWSON"),
#line 9963
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 9964
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 9966
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9967
        .doubleBattle = FALSE,
#line 9968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9970
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9970
            .heldItem = ITEM_NUGGET,
#line 9972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9971
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9974
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9975
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9978
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 9979
        .trainerName = _("SARAH"),
#line 9980
        .trainerClass = TRAINER_CLASS_LADY,
#line 9981
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 9982
F_TRAINER_FEMALE | 
#line 9983
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9984
        .items = { ITEM_FULL_RESTORE },
#line 9985
        .doubleBattle = FALSE,
#line 9986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9988
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9989
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9992
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .heldItem = ITEM_NUGGET,
#line 9994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9993
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9996
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 9997
        .trainerName = _("DARIAN"),
#line 9998
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9999
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 10001
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10002
        .doubleBattle = FALSE,
#line 10003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10005
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10006
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10009
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 10010
        .trainerName = _("HAILEY"),
#line 10011
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 10012
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 10013
F_TRAINER_FEMALE | 
#line 10014
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10015
        .doubleBattle = FALSE,
#line 10016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10018
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10019
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10022
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 10023
        .trainerName = _("CHANDLER"),
#line 10024
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 10025
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 10027
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10028
        .doubleBattle = FALSE,
#line 10029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10031
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10032
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10035
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10036
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10039
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 10040
        .trainerName = _("KALEB"),
#line 10041
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 10042
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 10044
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 10045
        .doubleBattle = FALSE,
#line 10046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10048
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10048
            .heldItem = ITEM_ORAN_BERRY,
#line 10050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10049
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10052
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .heldItem = ITEM_ORAN_BERRY,
#line 10054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10053
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10056
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 10057
        .trainerName = _("JOSEPH"),
#line 10058
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10059
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 10061
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10062
        .doubleBattle = FALSE,
#line 10063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10065
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10066
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10069
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10070
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10073
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 10074
        .trainerName = _("ALYSSA"),
#line 10075
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10076
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10077
F_TRAINER_FEMALE | 
#line 10078
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10079
        .doubleBattle = FALSE,
#line 10080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10082
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10083
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10086
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 10087
        .trainerName = _("MARCOS"),
#line 10088
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10089
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 10091
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10092
        .doubleBattle = FALSE,
#line 10093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10095
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10097
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10096
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10099
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 10100
        .trainerName = _("RHETT"),
#line 10101
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 10102
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 10104
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10105
        .doubleBattle = FALSE,
#line 10106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10108
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10110
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10109
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10112
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 10113
        .trainerName = _("TYRON"),
#line 10114
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10115
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10117
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10118
        .doubleBattle = FALSE,
#line 10119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10121
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10122
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10125
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 10126
        .trainerName = _("CELINA"),
#line 10127
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10128
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 10129
F_TRAINER_FEMALE | 
#line 10130
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10131
        .doubleBattle = FALSE,
#line 10132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10134
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10135
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10138
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 10139
        .trainerName = _("BIANCA"),
#line 10140
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10141
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10142
F_TRAINER_FEMALE | 
#line 10143
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10144
        .doubleBattle = FALSE,
#line 10145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10147
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10148
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10151
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 10152
        .trainerName = _("HAYDEN"),
#line 10153
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10154
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10156
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10157
        .doubleBattle = FALSE,
#line 10158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10160
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10161
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10164
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 10165
        .trainerName = _("SOPHIE"),
#line 10166
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10167
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10168
F_TRAINER_FEMALE | 
#line 10169
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10170
        .doubleBattle = FALSE,
#line 10171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10173
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10174
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10177
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10178
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10181
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 10182
        .trainerName = _("COBY"),
#line 10183
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10184
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10186
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10187
        .doubleBattle = FALSE,
#line 10188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10190
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10191
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10194
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10195
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10198
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 10199
        .trainerName = _("LAWRENCE"),
#line 10200
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10201
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10204
        .doubleBattle = FALSE,
#line 10205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10207
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10208
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10211
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10212
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10215
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 10216
        .trainerName = _("WYATT"),
#line 10217
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 10218
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 10220
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10221
        .doubleBattle = FALSE,
#line 10222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10224
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10225
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10228
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10229
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10232
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 10233
        .trainerName = _("ANGELINA"),
#line 10234
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10235
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10236
F_TRAINER_FEMALE | 
#line 10237
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10238
        .doubleBattle = FALSE,
#line 10239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10241
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10242
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10245
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10246
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10249
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 10250
        .trainerName = _("KAI"),
#line 10251
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 10252
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 10254
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10255
        .doubleBattle = FALSE,
#line 10256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10258
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10259
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10262
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 10263
        .trainerName = _("CHARLOTTE"),
#line 10264
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10265
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10266
F_TRAINER_FEMALE | 
#line 10267
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10268
        .doubleBattle = FALSE,
#line 10269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10271
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10272
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10275
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 10276
        .trainerName = _("DEANDRE"),
#line 10277
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10278
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 10280
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10281
        .doubleBattle = FALSE,
#line 10282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10284
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10285
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10288
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10289
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10292
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10293
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10296
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 10297
        .trainerName = _("GRUNT"),
#line 10298
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10299
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10301
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10302
        .doubleBattle = FALSE,
#line 10303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10305
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10306
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10309
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 10310
        .trainerName = _("GRUNT"),
#line 10311
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10312
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10314
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10315
        .doubleBattle = FALSE,
#line 10316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10318
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10319
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10322
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 10323
        .trainerName = _("GRUNT"),
#line 10324
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10325
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10327
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10328
        .doubleBattle = FALSE,
#line 10329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10331
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10332
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10335
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 10336
        .trainerName = _("GRUNT"),
#line 10337
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10338
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10340
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10341
        .doubleBattle = FALSE,
#line 10342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10344
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10345
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10348
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10349
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10352
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 10353
        .trainerName = _("GRUNT"),
#line 10354
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10355
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10357
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10358
        .doubleBattle = FALSE,
#line 10359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10361
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10362
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10365
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10366
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10369
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 10370
        .trainerName = _("GRUNT"),
#line 10371
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10372
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10374
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10375
        .doubleBattle = FALSE,
#line 10376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10378
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10379
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10382
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 10383
        .trainerName = _("GRUNT"),
#line 10384
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10385
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10387
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10388
        .doubleBattle = FALSE,
#line 10389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10391
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10392
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10395
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 10396
        .trainerName = _("GRUNT"),
#line 10397
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10398
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10400
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10401
        .doubleBattle = FALSE,
#line 10402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10404
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10405
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10408
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 10409
        .trainerName = _("GRUNT"),
#line 10410
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10411
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10413
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10414
        .doubleBattle = FALSE,
#line 10415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10417
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10418
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10421
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 10422
        .trainerName = _("GRUNT"),
#line 10423
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10424
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10426
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10427
        .doubleBattle = FALSE,
#line 10428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10430
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10431
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10434
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 10435
        .trainerName = _("GRUNT"),
#line 10436
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10437
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10439
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10440
        .doubleBattle = FALSE,
#line 10441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10443
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10444
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10447
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 10448
        .trainerName = _("GRUNT"),
#line 10449
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10450
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10452
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10453
        .doubleBattle = FALSE,
#line 10454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10456
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10457
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10460
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 10461
        .trainerName = _("GRUNT"),
#line 10462
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10463
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 10465
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10466
        .doubleBattle = FALSE,
#line 10467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10469
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10470
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10473
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 10474
        .trainerName = _("GRUNT"),
#line 10475
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10476
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10477
F_TRAINER_FEMALE | 
#line 10478
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10479
        .doubleBattle = FALSE,
#line 10480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10482
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10483
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10486
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 10487
        .trainerName = _("GRUNT"),
#line 10488
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10489
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10490
F_TRAINER_FEMALE | 
#line 10491
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10492
        .doubleBattle = FALSE,
#line 10493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10495
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10496
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10499
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 10500
        .trainerName = _("GRUNT"),
#line 10501
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 10502
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 10503
F_TRAINER_FEMALE | 
#line 10504
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10505
        .doubleBattle = FALSE,
#line 10506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10508
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10509
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10512
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 10513
        .trainerName = _("TABITHA"),
#line 10514
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 10515
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 10517
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10518
        .doubleBattle = FALSE,
#line 10519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10521
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10523
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10522
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10525
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10527
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10526
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10529
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10531
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10530
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10533
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10535
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10534
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10537
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 10538
        .trainerName = _("DARCY"),
#line 10539
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10540
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10541
F_TRAINER_FEMALE | 
#line 10542
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10543
        .items = { ITEM_HYPER_POTION },
#line 10544
        .doubleBattle = FALSE,
#line 10545
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10547
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10548
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10551
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10552
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10555
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 10556
        .trainerName = _("MAXIE"),
#line 10557
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 10558
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 10560
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 10561
        .doubleBattle = FALSE,
#line 10562
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10564
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10566
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10565
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10568
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10570
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10569
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10572
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10574
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 10573
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10576
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 10577
        .trainerName = _("PETE"),
#line 10578
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 10579
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 10581
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10582
        .doubleBattle = FALSE,
#line 10583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10585
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10586
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10589
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 10590
        .trainerName = _("ISABELLE"),
#line 10591
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 10592
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 10593
F_TRAINER_FEMALE | 
#line 10594
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10595
        .doubleBattle = FALSE,
#line 10596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10598
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10599
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10602
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 10603
        .trainerName = _("ANDRES"),
#line 10604
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10605
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10607
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10608
        .doubleBattle = FALSE,
#line 10609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10611
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10613
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10612
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10615
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10617
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10616
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10619
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 10620
        .trainerName = _("JOSUE"),
#line 10621
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10622
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10624
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10625
        .doubleBattle = FALSE,
#line 10626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10628
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10630
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10629
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10632
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10634
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10633
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10636
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 10637
        .trainerName = _("CAMRON"),
#line 10638
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10639
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 10641
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 10642
        .doubleBattle = FALSE,
#line 10643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10645
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10646
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10649
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 10650
        .trainerName = _("CORY"),
#line 10651
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10652
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10654
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10655
        .doubleBattle = FALSE,
#line 10656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10658
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10659
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10662
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10663
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10666
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10667
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10670
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 10671
        .trainerName = _("CAROLINA"),
#line 10672
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10673
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10674
F_TRAINER_FEMALE | 
#line 10675
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10676
        .items = { ITEM_HYPER_POTION },
#line 10677
        .doubleBattle = FALSE,
#line 10678
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10680
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10682
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10681
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10684
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10686
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10685
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10688
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10690
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10689
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10692
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 10693
        .trainerName = _("ELIJAH"),
#line 10694
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10695
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10697
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10698
        .doubleBattle = FALSE,
#line 10699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10701
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10702
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10705
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10706
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10709
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 10710
        .trainerName = _("CELIA"),
#line 10711
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 10712
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 10713
F_TRAINER_FEMALE | 
#line 10714
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 10715
        .doubleBattle = FALSE,
#line 10716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10718
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10719
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10722
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10723
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10726
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 10727
        .trainerName = _("BRYAN"),
#line 10728
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 10729
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 10731
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10732
        .doubleBattle = FALSE,
#line 10733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10735
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10736
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10739
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10740
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10743
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 10744
        .trainerName = _("BRANDEN"),
#line 10745
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 10746
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 10748
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10749
        .doubleBattle = FALSE,
#line 10750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10752
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10753
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10756
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10757
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10760
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 10761
        .trainerName = _("BRYANT"),
#line 10762
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10763
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10765
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10766
        .doubleBattle = FALSE,
#line 10767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10769
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10770
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10773
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10774
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10777
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 10778
        .trainerName = _("SHAYLA"),
#line 10779
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 10780
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 10781
F_TRAINER_FEMALE | 
#line 10782
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10783
        .doubleBattle = FALSE,
#line 10784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10786
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10787
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10790
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10791
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10794
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 10795
        .trainerName = _("KYRA"),
#line 10796
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10797
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10798
F_TRAINER_FEMALE | 
#line 10799
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10800
        .doubleBattle = FALSE,
#line 10801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10803
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10804
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10807
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10808
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10811
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 10812
        .trainerName = _("JAIDEN"),
#line 10813
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 10814
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 10816
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10817
        .doubleBattle = FALSE,
#line 10818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10820
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10821
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10824
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10825
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10828
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 10829
        .trainerName = _("ALIX"),
#line 10830
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10831
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10832
F_TRAINER_FEMALE | 
#line 10833
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10834
        .doubleBattle = FALSE,
#line 10835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10837
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10838
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10841
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10842
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10845
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 10846
        .trainerName = _("HELENE"),
#line 10847
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10848
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10849
F_TRAINER_FEMALE | 
#line 10850
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10851
        .doubleBattle = FALSE,
#line 10852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10854
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10855
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10858
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10859
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10862
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 10863
        .trainerName = _("MARLENE"),
#line 10864
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10865
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10866
F_TRAINER_FEMALE | 
#line 10867
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10868
        .doubleBattle = FALSE,
#line 10869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10871
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10872
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10875
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10876
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10879
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 10880
        .trainerName = _("DEVAN"),
#line 10881
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10882
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10884
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10885
        .doubleBattle = FALSE,
#line 10886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10888
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10889
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10892
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10893
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10896
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 10897
        .trainerName = _("JOHNSON"),
#line 10898
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 10899
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 10901
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10902
        .doubleBattle = FALSE,
#line 10903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10905
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10906
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10909
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10910
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10913
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 10914
        .trainerName = _("MELINA"),
#line 10915
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 10916
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 10917
F_TRAINER_FEMALE | 
#line 10918
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10919
        .doubleBattle = FALSE,
#line 10920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10922
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10923
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10926
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 10927
        .trainerName = _("BRANDI"),
#line 10928
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10929
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10930
F_TRAINER_FEMALE | 
#line 10931
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10932
        .doubleBattle = FALSE,
#line 10933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10935
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10936
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10939
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 10940
        .trainerName = _("AISHA"),
#line 10941
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 10942
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 10943
F_TRAINER_FEMALE | 
#line 10944
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10945
        .doubleBattle = FALSE,
#line 10946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10948
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10949
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10952
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 10953
        .trainerName = _("MAKAYLA"),
#line 10954
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 10955
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 10956
F_TRAINER_FEMALE | 
#line 10957
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10958
        .items = { ITEM_HYPER_POTION },
#line 10959
        .doubleBattle = FALSE,
#line 10960
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10962
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10963
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10966
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10967
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10970
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 10971
        .trainerName = _("FABIAN"),
#line 10972
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 10973
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 10975
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10976
        .doubleBattle = FALSE,
#line 10977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10979
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10980
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10983
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 10984
        .trainerName = _("DAYTON"),
#line 10985
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 10986
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 10988
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 10989
        .doubleBattle = FALSE,
#line 10990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10992
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10993
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10996
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10997
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11000
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 11001
        .trainerName = _("RACHEL"),
#line 11002
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 11003
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 11004
F_TRAINER_FEMALE | 
#line 11005
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11006
        .doubleBattle = FALSE,
#line 11007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11009
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11010
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11013
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 11014
        .trainerName = _("LEONEL"),
#line 11015
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11016
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 11018
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11019
        .items = { ITEM_HYPER_POTION },
#line 11020
        .doubleBattle = FALSE,
#line 11021
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11023
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11025
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11024
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11026
                MOVE_THUNDER,
                MOVE_QUICK_ATTACK,
                MOVE_THUNDER_WAVE,
            },
            },
        },
    },
#line 11030
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 11031
        .trainerName = _("CALLIE"),
#line 11032
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 11033
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 11034
F_TRAINER_FEMALE | 
#line 11035
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11036
        .doubleBattle = FALSE,
#line 11037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11039
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11040
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11043
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11044
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11047
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 11048
        .trainerName = _("CALE"),
#line 11049
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11050
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 11052
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11053
        .doubleBattle = FALSE,
#line 11054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11056
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11057
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11060
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11061
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11064
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 11065
        .trainerName = _("MYLES"),
#line 11066
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11067
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 11069
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11070
        .doubleBattle = FALSE,
#line 11071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11073
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11075
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11074
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11077
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11079
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11078
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11081
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11083
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11082
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11085
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11087
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11086
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11089
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11091
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11090
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11093
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11095
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11094
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11097
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 11098
        .trainerName = _("PAT"),
#line 11099
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11100
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 11101
F_TRAINER_FEMALE | 
#line 11102
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11103
        .doubleBattle = FALSE,
#line 11104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11106
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11108
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11107
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11110
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11112
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11111
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11114
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11116
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11115
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11118
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11120
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11119
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11122
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11124
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11123
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11126
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11128
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 11127
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11130
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 11131
        .trainerName = _("CRISTIN"),
#line 11132
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11133
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 11134
F_TRAINER_FEMALE | 
#line 11135
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11136
        .items = { ITEM_HYPER_POTION },
#line 11137
        .doubleBattle = FALSE,
#line 11138
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11140
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11142
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11141
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11144
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11146
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11145
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11148
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 11149
        .trainerName = _("MAY"),
#line 11150
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11151
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 11152
F_TRAINER_FEMALE | 
#line 11153
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11154
        .doubleBattle = FALSE,
#line 11155
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11157
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11159
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11158
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11161
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11163
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11162
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11165
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 11166
        .trainerName = _("MAY"),
#line 11167
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11168
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 11169
F_TRAINER_FEMALE | 
#line 11170
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11171
        .doubleBattle = FALSE,
#line 11172
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11174
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11176
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 11175
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11178
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11180
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 11179
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11182
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_2] =
    {
#line 11183
        .trainerName = _("ROXANNE"),
#line 11184
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11185
        .trainerPic = TRAINER_PIC_LEADER_ROXANNE,
        .encounterMusic_gender =
#line 11186
F_TRAINER_FEMALE | 
#line 11187
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11188
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11189
        .doubleBattle = TRUE,
#line 11190
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11192
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11193
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11195
                MOVE_ROCK_SLIDE,
                MOVE_HYPER_BEAM,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
            },
            },
            {
#line 11200
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11202
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11201
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11203
                MOVE_FOCUS_PUNCH,
                MOVE_ROLLOUT,
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
            },
            },
            {
#line 11208
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11209
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11211
                MOVE_PROTECT,
                MOVE_ICE_BEAM,
                MOVE_ROCK_SLIDE,
                MOVE_SURF,
            },
            },
            {
#line 11216
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11216
            .heldItem = ITEM_SITRUS_BERRY,
#line 11218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11217
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11219
                MOVE_SWORDS_DANCE,
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 11224
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11225
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11227
                MOVE_IRON_TAIL,
                MOVE_EXPLOSION,
                MOVE_ROAR,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 11232
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11232
            .heldItem = ITEM_SITRUS_BERRY,
#line 11234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11233
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11235
                MOVE_DOUBLE_TEAM,
                MOVE_EXPLOSION,
                MOVE_PROTECT,
                MOVE_ROCK_SLIDE,
            },
            },
        },
    },
#line 11240
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_2] =
    {
#line 11241
        .trainerName = _("BRAWLY"),
#line 11242
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11243
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 11245
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11246
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11247
        .doubleBattle = TRUE,
#line 11248
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11250
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11251
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11253
                MOVE_MEGA_KICK,
                MOVE_FOCUS_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_BULK_UP,
            },
            },
            {
#line 11258
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11259
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11261
                MOVE_SKY_UPPERCUT,
                MOVE_PROTECT,
                MOVE_FIRE_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 11266
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11266
            .heldItem = ITEM_SITRUS_BERRY,
#line 11268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11267
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11269
                MOVE_CROSS_CHOP,
                MOVE_ROCK_SLIDE,
                MOVE_FOCUS_PUNCH,
                MOVE_BULK_UP,
            },
            },
            {
#line 11274
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11275
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11277
                MOVE_FOCUS_PUNCH,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
                MOVE_PSYCHIC,
            },
            },
            {
#line 11282
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11284
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11283
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11285
                MOVE_PURSUIT,
                MOVE_COUNTER,
                MOVE_PROTECT,
                MOVE_TRIPLE_KICK,
            },
            },
            {
#line 11290
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11290
            .heldItem = ITEM_SITRUS_BERRY,
#line 11292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11291
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11293
                MOVE_FAKE_OUT,
                MOVE_FOCUS_PUNCH,
                MOVE_BELLY_DRUM,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11298
    [DIFFICULTY_NORMAL][TRAINER_WATTSON_2] =
    {
#line 11299
        .trainerName = _("WATTSON"),
#line 11300
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11301
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 11303
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11304
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11305
        .doubleBattle = TRUE,
#line 11306
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11308
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11309
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11311
                MOVE_SWIFT,
                MOVE_FOCUS_PUNCH,
                MOVE_THUNDER_PUNCH,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11316
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11317
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11319
                MOVE_THUNDER,
                MOVE_SLAM,
                MOVE_RAIN_DANCE,
                MOVE_PROTECT,
            },
            },
            {
#line 11324
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11325
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11327
                MOVE_THUNDER,
                MOVE_PROTECT,
                MOVE_THUNDER_WAVE,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11332
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11333
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11335
                MOVE_ROLLOUT,
                MOVE_THUNDER,
                MOVE_EXPLOSION,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 11340
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11340
            .heldItem = ITEM_SITRUS_BERRY,
#line 11342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11341
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11343
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_THUNDER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 11348
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11348
            .heldItem = ITEM_SITRUS_BERRY,
#line 11350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11349
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11351
                MOVE_BITE,
                MOVE_THUNDER_WAVE,
                MOVE_THUNDER,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 11356
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_2] =
    {
#line 11357
        .trainerName = _("FLANNERY"),
#line 11358
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11359
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 11360
F_TRAINER_FEMALE | 
#line 11361
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11362
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11363
        .doubleBattle = TRUE,
#line 11364
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11366
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11368
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11367
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11369
                MOVE_HELPING_HAND,
                MOVE_FLAMETHROWER,
                MOVE_SUNNY_DAY,
                MOVE_ROAR,
            },
            },
            {
#line 11374
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11374
            .heldItem = ITEM_WHITE_HERB,
#line 11376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11375
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11377
                MOVE_OVERHEAT,
                MOVE_ATTRACT,
                MOVE_LIGHT_SCREEN,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 11382
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11383
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11385
                MOVE_ROAR,
                MOVE_SOLAR_BEAM,
                MOVE_TAUNT,
                MOVE_SUNNY_DAY,
            },
            },
            {
#line 11390
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11391
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11393
                MOVE_FLAMETHROWER,
                MOVE_ATTRACT,
                MOVE_SOLAR_BEAM,
                MOVE_BOUNCE,
            },
            },
            {
#line 11398
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11398
            .heldItem = ITEM_WHITE_HERB,
#line 11400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11399
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11401
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EARTHQUAKE,
                MOVE_ATTRACT,
            },
            },
            {
#line 11406
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11406
            .heldItem = ITEM_WHITE_HERB,
#line 11408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11407
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11409
                MOVE_OVERHEAT,
                MOVE_SUNNY_DAY,
                MOVE_EXPLOSION,
                MOVE_ATTRACT,
            },
            },
        },
    },
#line 11414
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_2] =
    {
#line 11415
        .trainerName = _("NORMAN"),
#line 11416
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11417
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 11419
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11420
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11421
        .doubleBattle = TRUE,
#line 11422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11424
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11424
            .heldItem = ITEM_SITRUS_BERRY,
#line 11426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11425
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11427
                MOVE_BLIZZARD,
                MOVE_SHADOW_BALL,
                MOVE_DOUBLE_EDGE,
                MOVE_FIRE_BLAST,
            },
            },
            {
#line 11432
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11433
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11435
                MOVE_PROTECT,
                MOVE_SING,
                MOVE_SKILL_SWAP,
                MOVE_FOCUS_PUNCH,
            },
            },
            {
#line 11440
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11441
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11443
                MOVE_FAKE_OUT,
                MOVE_DIZZY_PUNCH,
                MOVE_ENDURE,
                MOVE_REVERSAL,
            },
            },
            {
#line 11448
            .species = SPECIES_TAUROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11449
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11451
                MOVE_TAKE_DOWN,
                MOVE_PROTECT,
                MOVE_FIRE_BLAST,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11456
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11457
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11459
                MOVE_TEETER_DANCE,
                MOVE_SKILL_SWAP,
                MOVE_FACADE,
                MOVE_HYPNOSIS,
            },
            },
            {
#line 11464
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11464
            .heldItem = ITEM_SITRUS_BERRY,
#line 11466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11465
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11467
                MOVE_HYPER_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_THUNDERBOLT,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11472
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 11473
        .trainerName = _("WINONA"),
#line 11474
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11475
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 11476
F_TRAINER_FEMALE | 
#line 11477
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11478
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11479
        .doubleBattle = TRUE,
#line 11480
        .aiFlags = AI_FLAG_BASIC_TRAINER | AI_FLAG_RISKY,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11482
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11483
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11485
                MOVE_HYPNOSIS,
                MOVE_PSYCHIC,
                MOVE_REFLECT,
                MOVE_DREAM_EATER,
            },
            },
            {
#line 11490
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11491
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11493
                MOVE_SUNNY_DAY,
                MOVE_AERIAL_ACE,
                MOVE_SOLAR_BEAM,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11498
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11499
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11501
                MOVE_SURF,
                MOVE_SUPERSONIC,
                MOVE_PROTECT,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11506
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11506
            .heldItem = ITEM_SITRUS_BERRY,
#line 11508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11507
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11509
                MOVE_HYPER_BEAM,
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 11514
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11515
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11517
                MOVE_WHIRLWIND,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 11522
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11522
            .heldItem = ITEM_CHESTO_BERRY,
#line 11524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11523
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11525
                MOVE_SKY_ATTACK,
                MOVE_REST,
                MOVE_DRAGON_DANCE,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 11530
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 11531
        .trainerName = _("TATE&LIZA"),
#line 11532
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11533
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 11535
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11536
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11537
        .doubleBattle = TRUE,
#line 11538
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11540
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11541
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11543
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 11548
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11549
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11551
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 11556
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11558
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11557
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11559
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 11564
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11564
            .heldItem = ITEM_CHESTO_BERRY,
#line 11566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11565
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11567
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11572
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11572
            .heldItem = ITEM_CHESTO_BERRY,
#line 11574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11573
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11575
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 11580
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11580
            .heldItem = ITEM_SITRUS_BERRY,
#line 11582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11581
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11583
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 11588
    [DIFFICULTY_NORMAL][TRAINER_JUAN_2] =
    {
#line 11589
        .trainerName = _("JUAN"),
#line 11590
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11591
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 11593
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11594
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11595
        .doubleBattle = TRUE,
#line 11596
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11598
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11599
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11601
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
                MOVE_ICE_BEAM,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11606
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11608
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11607
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11609
                MOVE_RAIN_DANCE,
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_FISSURE,
            },
            },
            {
#line 11614
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11616
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11615
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11617
                MOVE_HYPNOSIS,
                MOVE_RAIN_DANCE,
                MOVE_HYDRO_PUMP,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 11622
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11624
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11623
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11625
                MOVE_WATER_PULSE,
                MOVE_BODY_SLAM,
                MOVE_PROTECT,
                MOVE_SHEER_COLD,
            },
            },
            {
#line 11630
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11630
            .heldItem = ITEM_CHESTO_BERRY,
#line 11632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11631
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11633
                MOVE_REST,
                MOVE_GUILLOTINE,
                MOVE_TAUNT,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 11638
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11638
            .heldItem = ITEM_CHESTO_BERRY,
#line 11640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11639
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11641
                MOVE_WATER_PULSE,
                MOVE_DOUBLE_TEAM,
                MOVE_ICE_BEAM,
                MOVE_REST,
            },
            },
        },
    },
#line 11646
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 11647
        .trainerName = _("ANGELO"),
#line 11648
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 11649
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 11651
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 11652
        .doubleBattle = FALSE,
#line 11653
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 11655
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11657
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11656
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11658
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CHARM,
            },
            },
            {
#line 11662
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11664
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 11663
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11665
                MOVE_SHOCK_WAVE,
                MOVE_QUICK_ATTACK,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 11669
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 11670
        .trainerName = _("DARIUS"),
#line 11671
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 11672
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 11674
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11675
        .doubleBattle = FALSE,
#line 11676
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11678
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11680
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 11679
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11682
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 11683
        .trainerName = _("STEVEN"),
#line 11684
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 11685
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 11687
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11688
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 11689
        .doubleBattle = FALSE,
#line 11690
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11692
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11693
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11695
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 11700
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11702
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11701
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11703
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 11708
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11709
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11711
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 11716
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11717
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11719
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 11724
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11725
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11727
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 11732
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11732
            .heldItem = ITEM_SITRUS_BERRY,
#line 11734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11733
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11735
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 11740
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 11741
        .trainerName = _("ANABEL"),
#line 11742
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 11743
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 11744
F_TRAINER_FEMALE | 
#line 11745
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11746
        .doubleBattle = FALSE,
#line 11747
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11749
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11750
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11753
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 11754
        .trainerName = _("TUCKER"),
#line 11755
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 11756
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 11758
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11759
        .doubleBattle = FALSE,
#line 11760
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11762
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11763
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11766
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 11767
        .trainerName = _("SPENSER"),
#line 11768
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 11769
        .trainerPic = TRAINER_PIC_PALACE_MAVEN_SPENSER,
        .encounterMusic_gender =
#line 11771
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11772
        .doubleBattle = FALSE,
#line 11773
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11775
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11776
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11779
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 11780
        .trainerName = _("GRETA"),
#line 11781
        .trainerClass = TRAINER_CLASS_ARENA_TYCOON,
#line 11782
        .trainerPic = TRAINER_PIC_ARENA_TYCOON_GRETA,
        .encounterMusic_gender =
#line 11783
F_TRAINER_FEMALE | 
#line 11784
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11785
        .doubleBattle = FALSE,
#line 11786
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11788
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11789
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11792
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 11793
        .trainerName = _("NOLAND"),
#line 11794
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 11795
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 11797
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11798
        .doubleBattle = FALSE,
#line 11799
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11801
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11802
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11805
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 11806
        .trainerName = _("LUCY"),
#line 11807
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 11808
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 11809
F_TRAINER_FEMALE | 
#line 11810
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11811
        .doubleBattle = FALSE,
#line 11812
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11814
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11815
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11818
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 11819
        .trainerName = _("BRANDON"),
#line 11820
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 11821
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 11823
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11824
        .doubleBattle = FALSE,
#line 11825
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 11827
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 11828
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11831
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 11832
        .trainerName = _("ANDRES"),
#line 11833
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 11834
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 11836
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11837
        .doubleBattle = FALSE,
#line 11838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11840
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11842
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11841
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11844
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11846
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11845
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11848
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11850
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11849
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11852
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 11853
        .trainerName = _("CORY"),
#line 11854
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 11855
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 11857
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11858
        .doubleBattle = FALSE,
#line 11859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11861
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11863
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11862
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11865
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11867
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11866
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11869
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11871
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11870
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11873
    [DIFFICULTY_NORMAL][TRAINER_PABLO_2] =
    {
#line 11874
        .trainerName = _("PABLO"),
#line 11875
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 11876
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 11878
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 11879
        .doubleBattle = FALSE,
#line 11880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11882
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11884
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11883
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11886
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11888
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11887
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11890
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11892
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11891
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11894
    [DIFFICULTY_NORMAL][TRAINER_KOJI_2] =
    {
#line 11895
        .trainerName = _("KOJI"),
#line 11896
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 11897
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 11899
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11900
        .doubleBattle = FALSE,
#line 11901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11903
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11905
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11904
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11907
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11909
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11908
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11911
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11913
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11912
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11915
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_2] =
    {
#line 11916
        .trainerName = _("CRISTIN"),
#line 11917
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 11918
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 11919
F_TRAINER_FEMALE | 
#line 11920
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 11921
        .items = { ITEM_HYPER_POTION },
#line 11922
        .doubleBattle = FALSE,
#line 11923
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11925
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11927
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 11926
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11929
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11931
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 11930
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11933
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11935
            .iv = TRAINER_PARTY_IVS(17, 17, 17, 17, 17, 17),
#line 11934
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11937
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_2] =
    {
#line 11938
        .trainerName = _("FERNANDO"),
#line 11939
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 11940
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 11942
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 11943
        .doubleBattle = FALSE,
#line 11944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11946
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11948
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11947
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11950
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11952
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11951
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11954
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11956
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11955
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11958
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_2] =
    {
#line 11959
        .trainerName = _("SAWYER"),
#line 11960
        .trainerClass = TRAINER_CLASS_HIKER,
#line 11961
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 11963
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 11964
        .doubleBattle = FALSE,
#line 11965
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 11967
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11969
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11968
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11971
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11973
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11972
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11975
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11977
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11976
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 11979
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_2] =
    {
#line 11980
        .trainerName = _("GABRIELLE"),
#line 11981
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 11982
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 11983
F_TRAINER_FEMALE | 
#line 11984
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11985
        .doubleBattle = FALSE,
#line 11986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11988
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11990
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11989
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11992
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11994
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11993
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 11996
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11998
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 11997
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12000
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12002
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12001
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12004
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12006
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12005
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12008
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12010
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12009
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12012
    [DIFFICULTY_NORMAL][TRAINER_THALIA_2] =
    {
#line 12013
        .trainerName = _("THALIA"),
#line 12014
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 12015
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 12016
F_TRAINER_FEMALE | 
#line 12017
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 12018
        .doubleBattle = FALSE,
#line 12019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 12021
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12023
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12022
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12025
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12027
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12026
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12029
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12031
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 12030
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12033
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 12034
        .trainerName = _("MARIELA"),
#line 12035
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12036
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 12037
F_TRAINER_FEMALE | 
#line 12038
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12039
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12041
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12042
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12045
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 12046
        .trainerName = _("ALVARO"),
#line 12047
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 12048
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 12050
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12051
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12053
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12054
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 12057
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12058
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12061
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 12062
        .trainerName = _("EVERETT"),
#line 12063
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12064
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 12066
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 12067
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12069
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12070
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12073
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 12074
        .trainerName = _("RED"),
#line 12075
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12076
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 12078
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12079
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12081
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12082
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12085
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 12086
        .trainerName = _("LEAF"),
#line 12087
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 12088
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 12089
F_TRAINER_FEMALE | 
#line 12090
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12091
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12093
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12094
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12097
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 12098
        .trainerName = _("BRENDAN"),
#line 12099
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12100
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 12102
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12103
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12105
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12106
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12109
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 12110
        .trainerName = _("MAY"),
#line 12111
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 12112
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 12113
F_TRAINER_FEMALE | 
#line 12114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 12115
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 12117
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 12118
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 12121
    [DIFFICULTY_NORMAL][TRAINER_DAD_ROUTE103_TREECKO] =
    {
#line 12122
        .trainerName = _("DAD"),
#line 12123
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12124
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 12126
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12127
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12129
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12129
            .heldItem = ITEM_ORAN_BERRY,
#line 12133
            .ev = TRAINER_PARTY_EVS(76, 36, 0, 0, 0, 0),
#line 12132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12130
            .ability = ABILITY_TRUANT,
#line 12131
            .lvl = 10,
#line 12134
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12135
                MOVE_SCRATCH,
                MOVE_YAWN,
                MOVE_FLAIL,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 12140
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12140
            .heldItem = ITEM_CHARCOAL,
#line 12146
            .ev = TRAINER_PARTY_EVS(32, 0, 0, 0, 64, 0),
#line 12145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12141
            .ability = ABILITY_BLAZE,
#line 12142
            .lvl = 12,
#line 12147
            .nature = NATURE_MODEST,
#line 12143
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 12144
            .teraType = TYPE_FIRE,
            .moves = {
#line 12148
                MOVE_SCRATCH,
                MOVE_EMBER,
                MOVE_DRAGON_PULSE,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 12153
    [DIFFICULTY_NORMAL][TRAINER_DAD_ROUTE103_MUDKIP] =
    {
#line 12154
        .trainerName = _("DAD"),
#line 12155
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12156
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 12158
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12161
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12161
            .heldItem = ITEM_ORAN_BERRY,
#line 12165
            .ev = TRAINER_PARTY_EVS(76, 36, 0, 0, 0, 0),
#line 12164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12162
            .ability = ABILITY_TRUANT,
#line 12163
            .lvl = 10,
#line 12166
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12167
                MOVE_SCRATCH,
                MOVE_YAWN,
                MOVE_FLAIL,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 12172
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12172
            .heldItem = ITEM_MIRACLE_SEED,
#line 12178
            .ev = TRAINER_PARTY_EVS(16, 0, 0, 0, 56, 0),
#line 12177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12173
            .ability = ABILITY_OVERGROW,
#line 12174
            .lvl = 12,
#line 12179
            .nature = NATURE_MODEST,
#line 12175
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 12176
            .teraType = TYPE_GRASS,
            .moves = {
#line 12180
                MOVE_TACKLE,
                MOVE_ABSORB,
                MOVE_LEECH_SEED,
                MOVE_BULLET_SEED,
            },
            },
        },
    },
#line 12185
    [DIFFICULTY_NORMAL][TRAINER_DAD_ROUTE103_TORCHIC] =
    {
#line 12186
        .trainerName = _("DAD"),
#line 12187
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 12188
        .trainerPic = TRAINER_PIC_LEADER_NORMAN,
        .encounterMusic_gender =
#line 12190
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 12191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 12193
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12193
            .heldItem = ITEM_ORAN_BERRY,
#line 12197
            .ev = TRAINER_PARTY_EVS(76, 36, 0, 0, 0, 0),
#line 12196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12194
            .ability = ABILITY_TRUANT,
#line 12195
            .lvl = 10,
#line 12198
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 12199
                MOVE_SCRATCH,
                MOVE_YAWN,
                MOVE_FLAIL,
                MOVE_SLACK_OFF,
            },
            },
            {
#line 12204
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 12204
            .heldItem = ITEM_MYSTIC_WATER,
#line 12210
            .ev = TRAINER_PARTY_EVS(24, 60, 0, 0, 0, 0),
#line 12209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 12205
            .ability = ABILITY_TORRENT,
#line 12206
            .lvl = 12,
#line 12211
            .nature = NATURE_ADAMANT,
#line 12207
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
#line 12208
            .teraType = TYPE_WATER,
            .moves = {
#line 12212
                MOVE_TACKLE,
                MOVE_FAKE_OUT,
                MOVE_AQUA_JET,
                MOVE_WATER_GUN,
            },
            },
        },
    },
