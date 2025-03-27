OldaleTown_Mart_MapScripts::
	.byte 0

OldaleTown_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_PETALBURG_MART_EXPANDED_ITEMS, OldaleTown_Mart_ExpandedItems
	pokemart OldaleTown_Mart_Pokemart_Basic
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_BattleItem_Shop::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OldaleTown_Mart_Pokemart_BattleItem
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

OldaleTown_Mart_EventScript_TM_Shop::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart OldaleTown_Mart_Pokemart_TM
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Basic:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	pokemartlistend
	
	.align 2
OldaleTown_Mart_Pokemart_TM:
	.2byte ITEM_TM_TRAILBLAZE
	.2byte ITEM_TM_CHILLING_WATER
	.2byte ITEM_TM_SHADOW_CLAW
	.2byte ITEM_TM_CHARGE_BEAM
	pokemartlistend

	.align 2
OldaleTown_Mart_Pokemart_BattleItem:
	.2byte ITEM_MYSTIC_WATER
	.2byte ITEM_CHARCOAL
	.2byte ITEM_MIRACLE_SEED
	.2byte ITEM_SILK_SCARF
	.2byte ITEM_EXPERT_BELT
	.2byte ITEM_SHELL_BELL
	pokemartlistend

OldaleTown_Mart_ExpandedItems::
	pokemart OldaleTown_Mart_Pokemart_Expanded
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
OldaleTown_Mart_Pokemart_Expanded:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_ORANGE_MAIL
	pokemartlistend

OldaleTown_Mart_EventScript_Woman::
	msgbox OldaleTown_Mart_Text_Poor, MSGBOX_NPC
	end

OldaleTown_Mart_EventScript_Boy::
	msgbox OldaleTown_Mart_Text_PokeBallsAreSoUgly, MSGBOX_NPC
	end

OldaleTown_Mart_Text_PokeBallsAreSoUgly:
	.string "POKé BALLS are so ugly, I wish they\n"
	.string "would sell SUPER BALLS here.$"

OldaleTown_Mart_Text_Poor:
	.string "I would love to buy anything, but i am\n"
	.string "poor.$"

