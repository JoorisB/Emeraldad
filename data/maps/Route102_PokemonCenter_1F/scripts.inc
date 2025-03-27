.set LOCALID_NURSE, 1

Route102_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route102_PokemonCenter_1F_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
	.byte 0

Route102_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_ROUTE102
	end

Route102_PokemonCenter_1F_EventScript_Nurse::
	setvar VAR_0x800B, LOCALID_NURSE
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end

Route102_PokemonCenter_1F_EventScript_AzumarillGirl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_AUQA_JET, Route102_PokemonCenter_1F_EventScript_AzumarillGirlAquaJetGoodMove
	msgbox  Route102_PokemonCenter_1F_Text_AzumarillGirlHaveThisMove, MSGBOX_DEFAULT
	giveitem ITEM_TM_AQUA_JET
	setflag FLAG_RECEIVED_AUQA_JET
	release
	end

Route102_PokemonCenter_1F_EventScript_AzumarillGirlAquaJetGoodMove::
	msgbox Route102_PokemonCenter_1F_Text_AzumarillGirlAquaJetIsGoodMove, MSGBOX_DEFAULT
	release
	end

Route102_PokemonCenter_1F_EventScript_Azumarill::
	msgbox Route102_PokemonCenter_1F_Text_Azumarill, MSGBOX_NPC
	end

Route102_PokemonCenter_1F_EventScript_LittleBoy::
	msgbox Route102_PokemonCenter_1F_Text_WhereIsMyBrother, MSGBOX_NPC
	end

Route102_PokemonCenter_1F_EventScript_CandyEnjoyer::
	msgbox Route102_PokemonCenter_1F_Text_CandyGuyEverywhere, MSGBOX_NPC
	end

Route102_PokemonCenter_1F_Text_AzumarillGirlAquaJetIsGoodMove:
	.string "Aqua Jet might seem weak, but since it\n"
	.string "goes before almost any other move it\p"
	.string "becomes good when HUGE POWER is not\n"
	.string "the problem.$"

Route102_PokemonCenter_1F_Text_AzumarillGirlHaveThisMove:
	.string "My Azumarill has the ability HUGE POWER,\n"
	.string "which doubles its ATK stat, with the\p"
	.string "priority move Aqua Jet it deals massive\n"
	.string "damage. Here have a copy of the move.$"

Route102_PokemonCenter_1F_Text_Azumarill:
	.string "Azu... MARILL!$"

Route102_PokemonCenter_1F_Text_WhereIsMyBrother:
	.string "Have you seen my brother? We left\n"
	.string "together from OLDALE TOWN, but I seem\p"
	.string "to have lost him somewhere on the way...$"

Route102_PokemonCenter_1F_Text_CandyGuyEverywhere:
	.string "There seems to be a Candy-Salesman\n"
	.string "upstairs in every POKéCENTER nowadays.$"
