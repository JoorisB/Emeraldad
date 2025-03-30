Route102_HikerHome_MapScripts::
	.byte 0

Route102_HikerHome_EventScript_HikerLantern::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_LANTERN, Route102_HikerHome_EventScript_HikerLanternLightsUpCaves
	msgbox Route102_HikerHome_Text_HaveLantern, MSGBOX_DEFAULT
	giveitem ITEM_LANTERN
	setflag FLAG_RECEIVED_LANTERN
	release
	end

Route102_HikerHome_EventScript_HikerLanternLightsUpCaves::
	msgbox Route102_HikerHome_Text_LanternLightsUpCaves, MSGBOX_DEFAULT
	release
	end

Route102_HikerHome_EventScript_HikerBuddy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HAMMER, Route102_HikerHome_EventScript_HikerThanksForHelp
	goto_if_set FLAG_RECEIVED_STICKS_FOR_HAMMERS, Route102_HikerHome_EventScript_SticksRustboro
	msgbox Route102_HikerHome_Text_CanYouHelpMeOut, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route102_HikerHome_EventScript_BringSticksToBuddy
	goto_if_eq VAR_RESULT, NO, Route102_HikerHome_EventScript_FindSomeoneElse
	end

Route102_HikerHome_EventScript_HikerThanksForHelp::
	msgbox Route102_HikerHome_Text_ThanksForHelpingOut, MSGBOX_DEFAULT
	release
	end

Route102_HikerHome_EventScript_SticksRustboro::
	msgbox Route102_HikerHome_Text_BringSticksToRustboro, MSGBOX_DEFAULT
	release
	end

Route102_HikerHome_EventScript_BringSticksToBuddy::
	setflag FLAG_RECEIVED_STICKS_FOR_HAMMERS
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route102_HikerHome_Text_RecieveSticks, MSGBOX_DEFAULT
	msgbox Route102_HikerHome_Text_BringSticksToRustboro, MSGBOX_DEFAULT
	release
	end

Route102_HikerHome_EventScript_FindSomeoneElse::
	msgbox Route102_HikerHome_Text_MaybeNextTime, MSGBOX_DEFAULT
	release
	end

Route102_HikerHome_Text_HaveLantern:
	.string "Have this LANTERN, it can light up super\n"
	.string "dark caves.$"

Route102_HikerHome_Text_LanternLightsUpCaves:
	.string "Using the LANTERN increases how far\n"
	.string "you can see by quite a bit.\p"
	.string "Good thing we invented it.$"

Route102_HikerHome_Text_ThanksForHelpingOut:
	.string "Thanks for helping me out with those\n"
	.string "sticks.\p"
	.string "Oh, you received one HAMMER yourself?\n"
	.string "Good for you, you deserve it.$"

Route102_HikerHome_Text_BringSticksToRustboro:
	.string "These STICKS have to be delivered to my\n"
	.string "Buddy, he lives in RUSTBORO CITY.\p"
	.string "He needs them to make HAMMERs for the\n"
	.string "project in the area.$"

Route102_HikerHome_Text_CanYouHelpMeOut:
	.string "Can you help me out, I accidentally took\n"
	.string "some Items whith me when I left by\p"
	.string "Buddy's house in RUSTBORO CITY.\p"
	.string "He needs them back.\p" 
	.string "Can you take these STICKS to\n"
	.string "RUSTBORO CITY?$"

Route102_HikerHome_Text_MaybeNextTime:
	.string "Okay, I will find someone else to help\n"
	.string "me. But if you change your mind come\p"
	.string "back, maybe I still haven't found\n"
	.string "anyone.$"

Route102_HikerHome_Text_RecieveSticks:
	.string "{PLAYER}{KUN} received STICKS.$"
