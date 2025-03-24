OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, OldaleTown_House1_EventScript_FishingOld
	msgbox OldaleTown_House1_Text_GettingItchToFish, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox OldaleTown_House1_Text_Hooked, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_FishingOld::
	msgbox OldaleTown_House1_Text_FishingOld, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_GoodRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_GOOD_ROD, OldaleTown_House1_EventScript_ReceivedGoodRod
	msgbox OldaleTown_House1_Text_GoodRodIsGood, MSGBOX_DEFAULT
	giveitem ITEM_GOOD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_GOOD_ROD
	msgbox OldaleTown_House1_Text_GoodLuck, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_ReceivedGoodRod::
	msgbox OldaleTown_House1_Text_TryCatchingMonWithGoodRod, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_SuperRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_SUPER_ROD, OldaleTown_House1_EventScript_ReceivedSuperRod
	msgbox OldaleTown_House1_Text_SuperRodMan, MSGBOX_DEFAULT
	giveitem ITEM_SUPER_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_SUPER_ROD
	msgbox OldaleTown_House1_Text_Superb, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_EventScript_ReceivedSuperRod::
	msgbox OldaleTown_House1_Text_EventScript_ReceivedSuperRod, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_Text_FishingOld:
	.string "Has fishing gotten old yet?$"

OldaleTown_House1_Text_GettingItchToFish:
	.string "This town is home to renowned\n"
	.string "fisherman. Here join the legacy.$"

OldaleTown_House1_Text_Hooked:
	.string "You will be hooked on fishing in no time.$"

OldaleTown_House1_Text_TryCatchingMonWithGoodRod:
	.string "You can catch GOOD POKéMON\n"
	.string "with your GOOD ROD.$"

OldaleTown_House1_Text_GoodRodIsGood:
	.string "You know what would be GOOD now?$"

OldaleTown_House1_Text_GoodLuck:
	.string "GOOD luck in your fishing.$"

OldaleTown_House1_Text_EventScript_ReceivedSuperRod:
	.string "I wish I could have offered you some\n"
	.string "Soup. But best I could do is this SUPER\p"
	.string "ROD. Hope its close enough.$"

OldaleTown_House1_Text_SuperRodMan:
	.string "You could call me SUPER ROD MAN the way\n"
	.string "I hand out these.$"

OldaleTown_House1_Text_Superb:
	.string "This can catch some superb POKéMON.$"
