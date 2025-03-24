OldaleTown_House2_MapScripts::
	.byte 0

OldaleTown_House2_EventScript_Woman::
	msgbox OldaleTown_House2_Text_DontLikeFish, MSGBOX_NPC
	end

OldaleTown_House2_EventScript_OldMan::
	msgbox OldaleTown_House2_Text_RetiredFisherman, MSGBOX_NPC
	end

OldaleTown_House2_Text_DontLikeFish:
	.string "If you don't like fish, this place wont\n"
	.string "be your favorite town.$"

OldaleTown_House2_Text_RetiredFisherman:
	.string "When I was younger I sued to be a\n"
	.string "fisherman. Back in the glory days of\p"
	.string "OLDALE TOWN. Our town used to be the\n"
	.string "epicenter of fishing back in the days.$"
