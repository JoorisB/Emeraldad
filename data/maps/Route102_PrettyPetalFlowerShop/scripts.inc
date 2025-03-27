Route102_PrettyPetalFlowerShop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route104_PrettyPetalFlowerShop_OnTransition
	.byte 0

Route102_PrettyPetalFlowerShop_OnTransition:
	setflag FLAG_LANDMARK_FLOWER_SHOP
	end

Route102_PrettyPetalFlowerShop_EventScript_ShopOwner::
	message gText_PlayerWhatCanIDoForYou
	waitmessage
	pokemart Route102_PrettyPetalFlowerShop_HealBerries
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Route102_PrettyPetalFlowerShop_EventScript_BerrySales::
	message gText_PlayerWhatCanIDoForYou
	waitmessage
	pokemart Route102_PrettyPetalFlowerShop_ResistBerries
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

Route102_PrettyPetalFlowerShop_EventScript_BerryFamily::
	msgbox Route102_PrettyPetalFlowerShop_Text_BerriesExplanationDeep, MSGBOX_NPC
	end

Route102_PrettyPetalFlowerShop_EventScript_PlantBerryGirl::
	msgbox Route102_PrettyPetalFlowerShop_Text_BerriesExplanation, MSGBOX_NPC
	end

Route102_PrettyPetalFlowerShop_EventScript_WailmerPailGirl::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route102_PrettyPetalFlowerShop_EventScript_GiveWailmerPail
	msgbox Route102_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	release
	end

Route102_PrettyPetalFlowerShop_EventScript_GiveWailmerPail::
	msgbox Route102_PrettyPetalFlowerShop_Text_YouCanHaveThis, MSGBOX_DEFAULT
	giveitem ITEM_WAILMER_PAIL
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox Route102_PrettyPetalFlowerShop_Text_WailmerPailExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_WAILMER_PAIL
	release
	end

	.align 2
Route102_PrettyPetalFlowerShop_ResistBerries:
	.2byte ITEM_CHILAN_BERRY
	.2byte ITEM_OCCA_BERRY
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_RINDO_BERRY
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_COBA_BERRY
	.2byte ITEM_PAYAPA_BERRY
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_KASIB_BERRY
	.2byte ITEM_HABAN_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_ROSELI_BERRY
	pokemartlistend

	.align 2
Route102_PrettyPetalFlowerShop_HealBerries:
	.2byte ITEM_CHERI_BERRY
	.2byte ITEM_CHESTO_BERRY
	.2byte ITEM_PECHA_BERRY
	.2byte ITEM_RAWST_BERRY
	.2byte ITEM_ASPEAR_BERRY
	.2byte ITEM_LEPPA_BERRY
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_PERSIM_BERRY
	.2byte ITEM_LUM_BERRY
	.2byte ITEM_SITRUS_BERRY
	pokemartlistend


