#pragma once

// Chivalry 2 (1.X) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Enums
//---------------------------------------------------------------------------

// Enum TBL.EKillReason
enum class EKillReason : uint8_t
{
	EKillReason__Damage            = 0,
	EKillReason__FallDamage        = 1,
	EKillReason__Suicide           = 2,
	EKillReason__TapOut            = 3,
	EKillReason__OutOfCombat       = 4,
	EKillReason__FellOutOfWorld    = 5,
	EKillReason__Disconnect        = 6,
	EKillReason__ForwardSpawn      = 7,
	EKillReason__SwitchedTeams     = 8,
	EKillReason__Spectator         = 9,
	EKillReason__EKillReason_MAX   = 10
};


// Enum TBL.ELimbGoreAction
enum class ELimbGoreAction : uint8_t
{
	ELimbGoreAction__DoNothing     = 0,
	ELimbGoreAction__Dismember     = 1,
	ELimbGoreAction__ELimbGoreAction_MAX = 2
};


// Enum TBL.EHeadGoreAction
enum class EHeadGoreAction : uint8_t
{
	EHeadGoreAction__DoNothing     = 0,
	EHeadGoreAction__ExplodeHead   = 1,
	EHeadGoreAction__Decapitate    = 2,
	EHeadGoreAction__EHeadGoreAction_MAX = 3
};


// Enum TBL.ELocationBasedDamage
enum class ELocationBasedDamage : uint8_t
{
	ELocationBasedDamage__UpperBody = 0,
	ELocationBasedDamage__LowerBody = 1,
	ELocationBasedDamage__Headshot = 2,
	ELocationBasedDamage__ELocationBasedDamage_MAX = 3
};


// Enum TBL.ECrowdControlVariant
enum class ECrowdControlVariant : uint8_t
{
	ECrowdControlVariant__CrowdControlVariant1 = 0,
	ECrowdControlVariant__CrowdControlVariant2 = 1,
	ECrowdControlVariant__CrowdControlVariant3 = 2,
	ECrowdControlVariant__ECrowdControlVariant_MAX = 3
};


// Enum TBL.EConditionType
enum class EConditionType : uint8_t
{
	EConditionType__None           = 0,
	EConditionType__Downed         = 1,
	EConditionType__ShellShock     = 2,
	EConditionType__Bleeding       = 3,
	EConditionType__BleedingFatal  = 4,
	EConditionType__Burning        = 5,
	EConditionType__OnFire         = 6,
	EConditionType__Crippled       = 7,
	EConditionType__OutOfCombat    = 8,
	EConditionType__LeftArmMissing = 9,
	EConditionType__RightArmMissing = 10,
	EConditionType__LeftLegMissing = 11,
	EConditionType__RightLegMissing = 12,
	EConditionType__BandageKit     = 13,
	EConditionType__Inspired       = 14,
	EConditionType__MAX            = 15
};


// Enum TBL.EHealingSource
enum class EHealingSource : uint8_t
{
	EHealingSource__None           = 0,
	EHealingSource__Bandage        = 1,
	EHealingSource__BandageKit     = 2,
	EHealingSource__Banner         = 3,
	EHealingSource__Food           = 4,
	EHealingSource__Restoration    = 5,
	EHealingSource__InspiredHorn   = 6,
	EHealingSource__EHealingSource_MAX = 7
};


// Enum TBL.EStat
enum class EStat : uint8_t
{
	EStat__None                    = 0,
	EStat__Health                  = 1,
	EStat__MaxHealth               = 2,
	EStat__Overheal                = 3,
	EStat__Stamina                 = 4,
	EStat__MaxStamina              = 5,
	EStat__EStat_MAX               = 6
};


// Enum TBL.EComboTimingPolicy
enum class EComboTimingPolicy : uint8_t
{
	EComboTimingPolicy__StandardTimings = 0,
	EComboTimingPolicy__ComboTimings = 1,
	EComboTimingPolicy__GlobalParryComboTiming = 2,
	EComboTimingPolicy__EComboTimingPolicy_MAX = 3
};


// Enum TBL.EAttackTransition
enum class EAttackTransition : uint8_t
{
	EAttackTransition__Normal      = 0,
	EAttackTransition__Combo       = 1,
	EAttackTransition__Riposte     = 2,
	EAttackTransition__EAttackTransition_MAX = 3
};


// Enum TBL.ECrowdControlDirection
enum class ECrowdControlDirection : uint8_t
{
	ECrowdControlDirection__Default = 0,
	ECrowdControlDirection__Front  = 1,
	ECrowdControlDirection__Left   = 2,
	ECrowdControlDirection__Back   = 3,
	ECrowdControlDirection__Right  = 4,
	ECrowdControlDirection__ECrowdControlDirection_MAX = 5
};


// Enum TBL.EResultCode
enum class EResultCode : uint8_t
{
	EResultCode__Success           = 0,
	EResultCode__AbilityCannotCast = 1,
	EResultCode__AbilityNotWhileDead = 2,
	EResultCode__AbilityNotWhileSilenced = 3,
	EResultCode__AbilityOnCooldown = 4,
	EResultCode__AbilityAlreadyCasting = 5,
	EResultCode__AbilityActivationCosts = 6,
	EResultCode__AbilityInitiatorPrerequisites = 7,
	EResultCode__AbilityTargetPrerequisites = 8,
	EResultCode__AbilityNoInvocations = 9,
	EResultCode__AbilityNoActivationMethod = 10,
	EResultCode__AbilityNoTargetMethod = 11,
	EResultCode__AbilityReachedMaxInvocations = 12,
	EResultCode__AbilityNotGranted = 13,
	EResultCode__AbilityLockedByExperienceLevel = 14,
	EResultCode__AbilityOutOfStamina = 15,
	EResultCode__AbilityDisabled   = 16,
	EResultCode__EquipInvalidSlot  = 17,
	EResultCode__EquipMustBePawn   = 18,
	EResultCode__EquipMustBePlayer = 19,
	EResultCode__EquipItemNotFound = 20,
	EResultCode__EquipWrongSlotForItem = 21,
	EResultCode__EquipNotRequiredClass = 22,
	EResultCode__EquipNotRequiredTeam = 23,
	EResultCode__EquipInvalidItem  = 24,
	EResultCode__GenericError      = 25,
	EResultCode__EquipItemNeedsReload = 26,
	EResultCode__QuickThrowItemNotFound = 27,
	EResultCode__EResultCode_MAX   = 28
};


// Enum TBL.EInventoryItemDamagedState
enum class EInventoryItemDamagedState : uint8_t
{
	EInventoryItemDamagedState__Healthy = 0,
	EInventoryItemDamagedState__Damaged = 1,
	EInventoryItemDamagedState__Destroyed = 2,
	EInventoryItemDamagedState__EInventoryItemDamagedState_MAX = 3
};


// Enum TBL.EWeaponAbilitySlotKey
enum class EWeaponAbilitySlotKey : uint8_t
{
	EWeaponAbilitySlotKey__Slash   = 0,
	EWeaponAbilitySlotKey__Stab    = 1,
	EWeaponAbilitySlotKey__Overhead = 2,
	EWeaponAbilitySlotKey__Parry   = 3,
	EWeaponAbilitySlotKey__Special = 4,
	EWeaponAbilitySlotKey__Shove   = 5,
	EWeaponAbilitySlotKey__KickLow = 6,
	EWeaponAbilitySlotKey__SprintAttack = 7,
	EWeaponAbilitySlotKey__SprintCharge = 8,
	EWeaponAbilitySlotKey__SprintShove = 9,
	EWeaponAbilitySlotKey__SprintJump = 10,
	EWeaponAbilitySlotKey__Jab     = 11,
	EWeaponAbilitySlotKey__Headbutt = 12,
	EWeaponAbilitySlotKey__Throw   = 13,
	EWeaponAbilitySlotKey__QuickThrow = 14,
	EWeaponAbilitySlotKey__Flourish = 15,
	EWeaponAbilitySlotKey__Emote   = 16,
	EWeaponAbilitySlotKey__DashLeft = 17,
	EWeaponAbilitySlotKey__DashRight = 18,
	EWeaponAbilitySlotKey__DashBack = 19,
	EWeaponAbilitySlotKey__Jump    = 20,
	EWeaponAbilitySlotKey__SwitchInventoryItem = 21,
	EWeaponAbilitySlotKey__LoadItem = 22,
	EWeaponAbilitySlotKey__UseItem = 23,
	EWeaponAbilitySlotKey__HorseFrontKick = 24,
	EWeaponAbilitySlotKey__HorseRearKick = 25,
	EWeaponAbilitySlotKey__HorseEmote = 26,
	EWeaponAbilitySlotKey__HorseSpecial = 27,
	EWeaponAbilitySlotKey__HorseJump = 28,
	EWeaponAbilitySlotKey__HorseDashForward = 29,
	EWeaponAbilitySlotKey__HorseDashForwardRight = 30,
	EWeaponAbilitySlotKey__HorseDashRight = 31,
	EWeaponAbilitySlotKey__HorseDashBackRight = 32,
	EWeaponAbilitySlotKey__HorseDashBack = 33,
	EWeaponAbilitySlotKey__HorseDashBackLeft = 34,
	EWeaponAbilitySlotKey__HorseDashLeft = 35,
	EWeaponAbilitySlotKey__HorseDashForwardLeft = 36,
	EWeaponAbilitySlotKey__HorseCharge = 37,
	EWeaponAbilitySlotKey__LanceCharge = 38,
	EWeaponAbilitySlotKey__EmoteHeld = 39,
	EWeaponAbilitySlotKey__UseBandage = 40,
	EWeaponAbilitySlotKey__None    = 41,
	EWeaponAbilitySlotKey__EWeaponAbilitySlotKey_MAX = 42
};


// Enum TBL.EFailedInventoryAction
enum class EFailedInventoryAction : uint8_t
{
	EFailedInventoryAction__None   = 0,
	EFailedInventoryAction__EquipBandage = 1,
	EFailedInventoryAction__BandageAtFullHealth = 2,
	EFailedInventoryAction__BandageRegenAtFullHealth = 3,
	EFailedInventoryAction__NoThrowableEquipped = 4,
	EFailedInventoryAction__NoStacks = 5,
	EFailedInventoryAction__CannotUseItem = 6,
	EFailedInventoryAction__CannotEquipSpecial = 7,
	EFailedInventoryAction__CannotEquipPrimary = 8,
	EFailedInventoryAction__CannotEquipSecondary = 9,
	EFailedInventoryAction__CannotEquipKnife = 10,
	EFailedInventoryAction__CannotEquipFists = 11,
	EFailedInventoryAction__CannotEquipItem = 12,
	EFailedInventoryAction__CannotEquipNovelty = 13,
	EFailedInventoryAction__OutOfCombat = 14,
	EFailedInventoryAction__EFailedInventoryAction_MAX = 15
};


// Enum TBL.ESpecialItemChargeType
enum class ESpecialItemChargeType : uint8_t
{
	ESpecialItemChargeType__Time   = 0,
	ESpecialItemChargeType__Kill   = 1,
	ESpecialItemChargeType__Death  = 2,
	ESpecialItemChargeType__TeamDamage = 3,
	ESpecialItemChargeType__HeadHunter = 4,
	ESpecialItemChargeType__Charger = 5,
	ESpecialItemChargeType__Medic  = 6,
	ESpecialItemChargeType__Unbreakable = 7,
	ESpecialItemChargeType__Murderer = 8,
	ESpecialItemChargeType__Respawn = 9,
	ESpecialItemChargeType__UseCharge = 10,
	ESpecialItemChargeType__Cleaver = 11,
	ESpecialItemChargeType__Cheat  = 12,
	ESpecialItemChargeType__ESpecialItemChargeType_MAX = 13
};


// Enum TBL.EObjectiveState
enum class EObjectiveState : uint8_t
{
	EObjectiveState__Disabled      = 0,
	EObjectiveState__Neutral       = 1,
	EObjectiveState__Active        = 2,
	EObjectiveState__Blocked       = 3,
	EObjectiveState__Complete      = 4,
	EObjectiveState__EObjectiveState_MAX = 5
};


// Enum TBL.EFaction
enum class EFaction : uint8_t
{
	EFaction__Agatha               = 0,
	EFaction__Mason                = 1,
	EFaction__FFA                  = 2,
	EFaction__None                 = 3,
	EFaction__All                  = 4,
	EFaction__Tenosia              = 5,
	EFaction__MAX                  = 6
};


// Enum TBL.EGamepadNavigationMode
enum class EGamepadNavigationMode : uint8_t
{
	EGamepadNavigationMode__Mouse  = 0,
	EGamepadNavigationMode__KeyboardGamepad = 1,
	EGamepadNavigationMode__EGamepadNavigationMode_MAX = 2
};


// Enum TBL.EGamepadInputMode
enum class EGamepadInputMode : uint8_t
{
	EGamepadInputMode__MouseKeyboard = 0,
	EGamepadInputMode__Gamepad     = 1,
	EGamepadInputMode__Any         = 2,
	EGamepadInputMode__EGamepadInputMode_MAX = 3
};


// Enum TBL.ECharacterSignificanceLevel
enum class ECharacterSignificanceLevel : uint8_t
{
	ECharacterSignificanceLevel__Hidden = 0,
	ECharacterSignificanceLevel__Low = 1,
	ECharacterSignificanceLevel__Medium = 2,
	ECharacterSignificanceLevel__High = 3,
	ECharacterSignificanceLevel__Critical = 4,
	ECharacterSignificanceLevel__Num = 5,
	ECharacterSignificanceLevel__None = 6,
	ECharacterSignificanceLevel__ECharacterSignificanceLevel_MAX = 7
};


// Enum TBL.EDefenderBlockedPolicy
enum class EDefenderBlockedPolicy : uint8_t
{
	EDefenderBlockedPolicy__None   = 0,
	EDefenderBlockedPolicy__Parry  = 1,
	EDefenderBlockedPolicy__WeakParry = 2,
	EDefenderBlockedPolicy__TakeHit = 3,
	EDefenderBlockedPolicy__Stagger = 4,
	EDefenderBlockedPolicy__Stun   = 5,
	EDefenderBlockedPolicy__Knockdown = 6,
	EDefenderBlockedPolicy__ParryBreak = 7,
	EDefenderBlockedPolicy__BreakShield = 8,
	EDefenderBlockedPolicy__Blocked = 9,
	EDefenderBlockedPolicy__Thwack = 10,
	EDefenderBlockedPolicy__EDefenderBlockedPolicy_MAX = 11
};


// Enum TBL.EAttackerBlockedPolicy
enum class EAttackerBlockedPolicy : uint8_t
{
	EAttackerBlockedPolicy__None   = 0,
	EAttackerBlockedPolicy__Parried = 1,
	EAttackerBlockedPolicy__Stagger = 2,
	EAttackerBlockedPolicy__Thwack = 3,
	EAttackerBlockedPolicy__ParryBreak = 4,
	EAttackerBlockedPolicy__HitSuccess = 5,
	EAttackerBlockedPolicy__Deflect = 6,
	EAttackerBlockedPolicy__EAttackerBlockedPolicy_MAX = 7
};


// Enum TBL.EDismountType
enum class EDismountType : uint8_t
{
	EDismountType__Immediate       = 0,
	EDismountType__Knockdown       = 1,
	EDismountType__EDismountType_MAX = 2
};


// Enum TBL.ERadialVOMenuPage
enum class ERadialVOMenuPage : uint8_t
{
	ERadialVOMenuPage__PersonalPage = 0,
	ERadialVOMenuPage__TacticalPage = 1,
	ERadialVOMenuPage__EmotePage   = 2,
	ERadialVOMenuPage__Battlecry   = 3,
	ERadialVOMenuPage__None        = 4,
	ERadialVOMenuPage__ERadialVOMenuPage_MAX = 5
};


// Enum TBL.EOnlineStat
enum class EOnlineStat : uint8_t
{
	EOnlineStat__Invalid           = 0,
	EOnlineStat__Default           = 1,
	EOnlineStat__Store             = 2,
	EOnlineStat__Unknown           = 3,
	EOnlineStat__Campaign          = 4,
	EOnlineStat__Playtime          = 5,
	EOnlineStat__GlobalXp          = 6,
	EOnlineStat__ExperienceFootman = 7,
	EOnlineStat__ExperienceArcher  = 8,
	EOnlineStat__ExperienceKnight  = 9,
	EOnlineStat__ExperienceVanguard = 10,
	EOnlineStat__ExperienceWeaponAxe = 11,
	EOnlineStat__ExperienceWeaponBastardSword = 12,
	EOnlineStat__ExperienceWeaponBattleAxe = 13,
	EOnlineStat__ExperienceWeaponCudgel = 14,
	EOnlineStat__ExperienceWeaponDagger = 15,
	EOnlineStat__ExperienceWeaponDaneAxe = 16,
	EOnlineStat__ExperienceWeaponGreatsword = 17,
	EOnlineStat__ExperienceWeaponHalberd = 18,
	EOnlineStat__ExperienceWeaponHeavyMace = 19,
	EOnlineStat__ExperienceWeaponLance = 20,
	EOnlineStat__ExperienceWeaponMace = 21,
	EOnlineStat__ExperienceWeaponMaul = 22,
	EOnlineStat__ExperienceWeaponMesser = 23,
	EOnlineStat__ExperienceWeaponPoleAxe = 24,
	EOnlineStat__ExperienceWeaponPoleHammer = 25,
	EOnlineStat__ExperienceWeaponShortSword = 26,
	EOnlineStat__ExperienceWeaponSpear = 27,
	EOnlineStat__ExperienceWeaponSword = 28,
	EOnlineStat__ExperienceWeaponWarHammer = 29,
	EOnlineStat__ExperienceWeaponBow = 30,
	EOnlineStat__ExperienceWeaponCrossbow = 31,
	EOnlineStat__ExperienceWeaponThrowingAxe = 32,
	EOnlineStat__ExperienceWeaponThrowingKnife = 33,
	EOnlineStat__ExperienceWeaponHeavyShield = 34,
	EOnlineStat__ExperienceWeaponLightShield = 35,
	EOnlineStat__ExperienceWeaponMediumShield = 36,
	EOnlineStat__ExperienceWeaponJavelin = 37,
	EOnlineStat__ExperienceWeaponFalchion = 38,
	EOnlineStat__ExperienceWeaponShovel = 39,
	EOnlineStat__ExperienceWeaponSledgeHammer = 40,
	EOnlineStat__ExperienceWeaponPickAxe = 41,
	EOnlineStat__ExperienceWeaponTwoHandedHammer = 42,
	EOnlineStat__ExperienceWeaponWarClub = 43,
	EOnlineStat__ExperienceWeaponExecutionersAxe = 44,
	EOnlineStat__ExperienceWeaponGlaive = 45,
	EOnlineStat__ExperienceWeaponKnife = 46,
	EOnlineStat__ExperienceWeaponWarAxe = 47,
	EOnlineStat__ExperienceWeaponMorningStar = 48,
	EOnlineStat__ExperienceWeaponHatchet = 49,
	EOnlineStat__ExperienceWeaponOneHandedSpear = 50,
	EOnlineStat__ExperienceWeaponThrowingMallet = 51,
	EOnlineStat__ExperienceWeaponRapier = 52,
	EOnlineStat__ExperienceWeaponHighlandSword = 53,
	EOnlineStat__ExperienceWeaponWarBow = 54,
	EOnlineStat__ExperienceWeaponHeavyCrossbow = 55,
	EOnlineStat__ExperienceWeaponKatars = 56,
	EOnlineStat__ExperienceWeaponArmouredFists = 57,
	EOnlineStat__DailyPlaytime     = 58,
	EOnlineStat__PROGRESSION_MAX   = 59,
	EOnlineStat__Kills             = 60,
	EOnlineStat__Deaths            = 61,
	EOnlineStat__Suicides          = 62,
	EOnlineStat__WinsAgatha        = 63,
	EOnlineStat__LossesAgatha      = 64,
	EOnlineStat__WinsMason         = 65,
	EOnlineStat__LossesMason       = 66,
	EOnlineStat__MatchesCompleted  = 67,
	EOnlineStat__MatchesCompletedTeamObjective = 68,
	EOnlineStat__MatchesCompletedTeamDeathmatch = 69,
	EOnlineStat__MatchesCompletedFreeForAll = 70,
	EOnlineStat__MatchesCompletedArena = 71,
	EOnlineStat__MatchesCompletedLastTeamStanding = 72,
	EOnlineStat__MatchesCompletedBrawl = 73,
	EOnlineStat__ItemsConstructed  = 74,
	EOnlineStat__Revives           = 75,
	EOnlineStat__DISUSED_A         = 76,
	EOnlineStat__DISUSED_B         = 77,
	EOnlineStat__DISUSED_C         = 78,
	EOnlineStat__DamageInflicted   = 79,
	EOnlineStat__Blocks            = 80,
	EOnlineStat__FFAFirst          = 81,
	EOnlineStat__FFASecond         = 82,
	EOnlineStat__FFAThird          = 83,
	EOnlineStat__MultiKills        = 84,
	EOnlineStat__KillingSprees     = 85,
	EOnlineStat__VoteKickSeverity  = 86,
	EOnlineStat__VoteKickTime      = 87,
	EOnlineStat__WinsTenosia       = 88,
	EOnlineStat__LossesTenosia     = 89,
	EOnlineStat__FLAVOR_MAX        = 90,
	EOnlineStat__EOnlineStat_MAX   = 91
};


// Enum TBL.EScoreGroup
enum class EScoreGroup : uint8_t
{
	EScoreGroup__Player            = 0,
	EScoreGroup__Standalone        = 1,
	EScoreGroup__Objective         = 2,
	EScoreGroup__Healing           = 3,
	EScoreGroup__EScoreGroup_MAX   = 4
};


// Enum TBL.EEpicEndGameState
enum class EEpicEndGameState : uint8_t
{
	EEpicEndGameState__None        = 0,
	EEpicEndGameState__Start       = 1,
	EEpicEndGameState__End         = 2,
	EEpicEndGameState__EEpicEndGameState_MAX = 3
};


// Enum TBL.ECinematicGameState
enum class ECinematicGameState : uint8_t
{
	ECinematicGameState__NotReplicated = 0,
	ECinematicGameState__Inactive  = 1,
	ECinematicGameState__Forced    = 2,
	ECinematicGameState__ECinematicGameState_MAX = 3
};


// Enum TBL.eSpecialSpawnType
enum class EeSpecialSpawnType : uint8_t
{
	Horse                          = 0,
	eSpecialSpawnType_MAX          = 1
};


// Enum TBL.EContextVoType
enum class EContextVoType : uint8_t
{
	EContextVoType__Repeated       = 0,
	EContextVoType__SendOnce       = 1,
	EContextVoType__EContextVoType_MAX = 2
};


// Enum TBL.EAudioAutoVOType
enum class EAudioAutoVOType : uint8_t
{
	EAudioAutoVOType__None         = 0,
	EAudioAutoVOType__Crippled     = 1,
	EAudioAutoVOType__DeathArm     = 2,
	EAudioAutoVOType__DeathGen     = 3,
	EAudioAutoVOType__DeathLeg     = 4,
	EAudioAutoVOType__HorseAccelerate = 5,
	EAudioAutoVOType__HorseControl = 6,
	EAudioAutoVOType__HorseDeath   = 7,
	EAudioAutoVOType__HorseDecelerate = 8,
	EAudioAutoVOType__HorseMount   = 9,
	EAudioAutoVOType__HorseSoothe  = 10,
	EAudioAutoVOType__Invalid      = 11,
	EAudioAutoVOType__Negative     = 12,
	EAudioAutoVOType__NoAmmo       = 13,
	EAudioAutoVOType__Pain         = 14,
	EAudioAutoVOType__Positive     = 15,
	EAudioAutoVOType__Rage         = 16,
	EAudioAutoVOType__Revived      = 17,
	EAudioAutoVOType__Reviving     = 18,
	EAudioAutoVOType__Sorry        = 19,
	EAudioAutoVOType__Thanks       = 20,
	EAudioAutoVOType__RefuseDeath  = 21,
	EAudioAutoVOType__KillArchers  = 22,
	EAudioAutoVOType__Defend       = 23,
	EAudioAutoVOType__DefendWinning = 24,
	EAudioAutoVOType__HoldWalls    = 25,
	EAudioAutoVOType__AttackWinning = 26,
	EAudioAutoVOType__Attack       = 27,
	EAudioAutoVOType__GateAttack   = 28,
	EAudioAutoVOType__CavalryIncomingEnemy = 29,
	EAudioAutoVOType__CavalryWarning = 30,
	EAudioAutoVOType__CavalryCharge = 31,
	EAudioAutoVOType__SiegeDefend  = 32,
	EAudioAutoVOType__SiegeDestroy = 33,
	EAudioAutoVOType__CavalryIncomingAlly = 34,
	EAudioAutoVOType__GateLost     = 35,
	EAudioAutoVOType__GateWon      = 36,
	EAudioAutoVOType__GateDefend   = 37,
	EAudioAutoVOType__SiegeRam     = 38,
	EAudioAutoVOType__ObjKill      = 39,
	EAudioAutoVOType__ObjBurn      = 40,
	EAudioAutoVOType__SiegeRamStop = 41,
	EAudioAutoVOType__ObjPeasantDefend = 42,
	EAudioAutoVOType__ObjPeasantKill = 43,
	EAudioAutoVOType__SiegeTower   = 44,
	EAudioAutoVOType__ObjLordDefend = 45,
	EAudioAutoVOType__ObjLordKill  = 46,
	EAudioAutoVOType__SiegeTowerStop = 47,
	EAudioAutoVOType__SiegeFire    = 48,
	EAudioAutoVOType__ObjSupplySteal = 49,
	EAudioAutoVOType__OffenseCharge = 50,
	EAudioAutoVOType__DefenseShields = 51,
	EAudioAutoVOType__ObjSupplyDefend = 52,
	EAudioAutoVOType__OffenseFire  = 53,
	EAudioAutoVOType__DefensePrepare = 54,
	EAudioAutoVOType__MAX          = 55
};


// Enum TBL.EGameModeMessageDisplayType
enum class EGameModeMessageDisplayType : uint8_t
{
	EGameModeMessageDisplayType__GameModeMessage = 0,
	EGameModeMessageDisplayType__ChatOnlyMessage = 1,
	EGameModeMessageDisplayType__GameModeOnlyMessage = 2,
	EGameModeMessageDisplayType__KillFeedMessage = 3,
	EGameModeMessageDisplayType__EGameModeMessageDisplayType_MAX = 4
};


// Enum TBL.EMessagePriority
enum class EMessagePriority : uint8_t
{
	EMessagePriority__LowPriority  = 0,
	EMessagePriority__MediumPriority = 1,
	EMessagePriority__HighPriority = 2,
	EMessagePriority__EMessagePriority_MAX = 3
};


// Enum TBL.EGlobalGameNotificationCategory
enum class EGlobalGameNotificationCategory : uint8_t
{
	EGlobalGameNotificationCategory__Display = 0,
	EGlobalGameNotificationCategory__Alert = 1,
	EGlobalGameNotificationCategory__Error = 2,
	EGlobalGameNotificationCategory__Social = 3,
	EGlobalGameNotificationCategory__Online = 4,
	EGlobalGameNotificationCategory__Matchmaking = 5,
	EGlobalGameNotificationCategory__EGlobalGameNotificationCategory_MAX = 6
};


// Enum TBL.ETeamCapturePointComponentState
enum class ETeamCapturePointComponentState : uint8_t
{
	ETeamCapturePointComponentState__Neutral = 0,
	ETeamCapturePointComponentState__Contested = 1,
	ETeamCapturePointComponentState__Neutralizing = 2,
	ETeamCapturePointComponentState__Capturing = 3,
	ETeamCapturePointComponentState__Captured = 4,
	ETeamCapturePointComponentState__Invalid = 5,
	ETeamCapturePointComponentState__ETeamCapturePointComponentState_MAX = 6
};


// Enum TBL.EHorseToCharacterImpactType
enum class EHorseToCharacterImpactType : uint8_t
{
	EHorseToCharacterImpactType__StraightImpact = 0,
	EHorseToCharacterImpactType__GlancingImpact = 1,
	EHorseToCharacterImpactType__Bump = 2,
	EHorseToCharacterImpactType__EHorseToCharacterImpactType_MAX = 3
};


// Enum TBL.EHorseImpactLocation
enum class EHorseImpactLocation : uint8_t
{
	EHorseImpactLocation__Left     = 0,
	EHorseImpactLocation__Right    = 1,
	EHorseImpactLocation__EHorseImpactLocation_MAX = 2
};


// Enum TBL.EHorseToHorseImpactType
enum class EHorseToHorseImpactType : uint8_t
{
	EHorseToHorseImpactType__StraightImpact = 0,
	EHorseToHorseImpactType__SideImpact = 1,
	EHorseToHorseImpactType__BackImpact = 2,
	EHorseToHorseImpactType__EHorseToHorseImpactType_MAX = 3
};


// Enum TBL.EHorseToWorldImpactType
enum class EHorseToWorldImpactType : uint8_t
{
	EHorseToWorldImpactType__StraightImpact = 0,
	EHorseToWorldImpactType__GlancingImpact = 1,
	EHorseToWorldImpactType__Bump  = 2,
	EHorseToWorldImpactType__EHorseToWorldImpactType_MAX = 3
};


// Enum TBL.EServerListType
enum class EServerListType : uint8_t
{
	EServerListType__Internet      = 0,
	EServerListType__Lan           = 1,
	EServerListType__Friends       = 2,
	EServerListType__History       = 3,
	EServerListType__Favorites     = 4,
	EServerListType__EServerListType_MAX = 5
};


// Enum TBL.EInputActionMode
enum class EInputActionMode : uint8_t
{
	EInputActionMode__None         = 0,
	EInputActionMode__WhitelistedOnly = 1,
	EInputActionMode__InGameWhitelistedOnly = 2,
	EInputActionMode__EInputActionMode_MAX = 3
};


// Enum TBL.EChatType
enum class EChatType : uint8_t
{
	EChatType__AllSay              = 0,
	EChatType__TeamSay             = 1,
	EChatType__Whisper             = 2,
	EChatType__Admin               = 3,
	EChatType__Objective           = 4,
	EChatType__System              = 5,
	EChatType__ServerSay           = 6,
	EChatType__Debug               = 7,
	EChatType__CrosshairMsg        = 8,
	EChatType__Backend             = 9,
	EChatType__Party               = 10,
	EChatType__Spectator           = 11,
	EChatType__ClosedCaption       = 12,
	EChatType__ClosedCaptionMason  = 13,
	EChatType__ClosedCaptionAgatha = 14,
	EChatType__MAX                 = 15
};


// Enum TBL.EFriendsListType
enum class EFriendsListType : uint8_t
{
	EFriendsListType__Friends_All  = 0,
	EFriendsListType__Friends_Online = 1,
	EFriendsListType__Friends_PlayingSameGame = 2,
	EFriendsListType__Friends_AllNotPlayingSameGame = 3,
	EFriendsListType__Friends_OnlineNotPlayingSameGame = 4,
	EFriendsListType__Party        = 5,
	EFriendsListType__PartyInvites = 6,
	EFriendsListType__Recent       = 7,
	EFriendsListType__Blocked      = 8,
	EFriendsListType__DummyList    = 9,
	EFriendsListType__EFriendsListType_MAX = 10
};


// Enum TBL.EAbilitiesComponentVersion
enum class EAbilitiesComponentVersion : uint8_t
{
	EAbilitiesComponentVersion__MigrateAbilityGrants = 0,
	EAbilitiesComponentVersion__SaveVersionAsInt = 1,
	EAbilitiesComponentVersion__Latest = 2,
	EAbilitiesComponentVersion__EAbilitiesComponentVersion_MAX = 3
};


// Enum TBL.EAbilityInvocationFlags
enum class EAbilityInvocationFlags : uint8_t
{
	EAbilityInvocationFlags__None  = 0,
	EAbilityInvocationFlags__FxAmmo = 1,
	EAbilityInvocationFlags__SkipReplication = 2,
	EAbilityInvocationFlags__EAbilityInvocationFlags_MAX = 3
};


// Enum TBL.EAttackDirection
enum class EAttackDirection : uint8_t
{
	EAttackDirection__FromInitiator = 0,
	EAttackDirection__FromShapeLocation = 1,
	EAttackDirection__EAttackDirection_MAX = 2
};


// Enum TBL.ETargetVisibilityCheck
enum class ETargetVisibilityCheck : uint8_t
{
	ETargetVisibilityCheck__NoVisibilityCheck = 0,
	ETargetVisibilityCheck__VisibleFromInitiator = 1,
	ETargetVisibilityCheck__VisibleFromShapeLocation = 2,
	ETargetVisibilityCheck__ETargetVisibilityCheck_MAX = 3
};


// Enum TBL.ERewardPolicy
enum class ERewardPolicy : uint8_t
{
	ERewardPolicy__None            = 0,
	ERewardPolicy__Immediate       = 1,
	ERewardPolicy__Notification    = 2,
	ERewardPolicy__ERewardPolicy_MAX = 3
};


// Enum TBL.EActionScaling
enum class EActionScaling : uint8_t
{
	EActionScaling__None           = 0,
	EActionScaling__OneTime        = 1,
	EActionScaling__Continuous     = 2,
	EActionScaling__EActionScaling_MAX = 3
};


// Enum TBL.EActionVersion
enum class EActionVersion : uint8_t
{
	EActionVersion__EffectSpecStructToUObject = 0,
	EActionVersion__SaveVersionAsInt = 1,
	EActionVersion__Latest         = 2,
	EActionVersion__EActionVersion_MAX = 3
};


// Enum TBL.EActionFlags
enum class EActionFlags : uint8_t
{
	EActionFlags__None             = 0,
	EActionFlags__Enabled          = 1,
	EActionFlags__Instanced        = 2,
	EActionFlags__ManualComplete   = 3,
	EActionFlags__Autonomous       = 4,
	EActionFlags__Cosmetic         = 5,
	EActionFlags__EActionFlags_MAX = 6
};


// Enum TBL.EInputPriority
enum class EInputPriority : uint8_t
{
	EInputPriority__Override       = 0,
	EInputPriority__Reaction       = 1,
	EInputPriority__High           = 2,
	EInputPriority__Low            = 3,
	EInputPriority__Idle           = 4,
	EInputPriority__EInputPriority_MAX = 5
};


// Enum TBL.EAlwaysOnMusicState
enum class EAlwaysOnMusicState : uint8_t
{
	EAlwaysOnMusicState__None      = 0,
	EAlwaysOnMusicState__Tier1     = 1,
	EAlwaysOnMusicState__Tier2     = 2,
	EAlwaysOnMusicState__Tier3     = 3,
	EAlwaysOnMusicState__Tier4     = 4,
	EAlwaysOnMusicState__EndStageTransition = 5,
	EAlwaysOnMusicState__ObjectiveComplete = 6,
	EAlwaysOnMusicState__EAlwaysOnMusicState_MAX = 7
};


// Enum TBL.EAnimalPopType
enum class EAnimalPopType : uint8_t
{
	EAnimalPopType__Flee           = 0,
	EAnimalPopType__Hide           = 1,
	EAnimalPopType__EAnimalPopType_MAX = 2
};


// Enum TBL.EAnalyticsMenuScreen
enum class EAnalyticsMenuScreen : uint8_t
{
	EAnalyticsMenuScreen__None     = 0,
	EAnalyticsMenuScreen__CustomizationClassSelection = 1,
	EAnalyticsMenuScreen__CustomizationScreen = 2,
	EAnalyticsMenuScreen__EAnalyticsMenuScreen_MAX = 3
};


// Enum TBL.ETargetMethodParameters
enum class ETargetMethodParameters : uint8_t
{
	ETargetMethodParameters__Initiator = 0,
	ETargetMethodParameters__Target = 1,
	ETargetMethodParameters__WorldLocation = 2,
	ETargetMethodParameters__CaptureFromTargetMethod = 3,
	ETargetMethodParameters__ETargetMethodParameters_MAX = 4
};


// Enum TBL.EArenaSounds
enum class EArenaSounds : uint8_t
{
	EArenaSounds__None             = 0,
	EArenaSounds__FiveSecondCountdown = 1,
	EArenaSounds__ThreeSecondCountdown = 2,
	EArenaSounds__MasonVictory     = 3,
	EArenaSounds__AgathaVictory    = 4,
	EArenaSounds__TenosiaVictory   = 5,
	EArenaSounds__ThirtySecondsRemainging = 6,
	EArenaSounds__FifteenSecondsRemainging = 7,
	EArenaSounds__MatchNearEndingMusicStart = 8,
	EArenaSounds__MatchNearEndingMusicStop = 9,
	EArenaSounds__RoundStart       = 10,
	EArenaSounds__RoundFight       = 11,
	EArenaSounds__AgathaMatchPoint = 12,
	EArenaSounds__MasonMatchPoint  = 13,
	EArenaSounds__TenosiaMatchPoint = 14,
	EArenaSounds__MatchPoint       = 15,
	EArenaSounds__EArenaSounds_MAX = 16
};


// Enum TBL.EOnStaminaDrainedPolicy
enum class EOnStaminaDrainedPolicy : uint8_t
{
	EOnStaminaDrainedPolicy__Nothing = 0,
	EOnStaminaDrainedPolicy__CancelAttack = 1,
	EOnStaminaDrainedPolicy__EOnStaminaDrainedPolicy_MAX = 2
};


// Enum TBL.ETeamHitDamagePolicy
enum class ETeamHitDamagePolicy : uint8_t
{
	ETeamHitDamagePolicy__DealDamage = 0,
	ETeamHitDamagePolicy__DoNotDealDamage = 1,
	ETeamHitDamagePolicy__ETeamHitDamagePolicy_MAX = 2
};


// Enum TBL.ECombatStateEvent
enum class ECombatStateEvent : uint8_t
{
	ECombatStateEvent__OnStartAttack = 0,
	ECombatStateEvent__OnActivateAbility = 1,
	ECombatStateEvent__ECombatStateEvent_MAX = 2
};


// Enum TBL.EEarlyHitPolicy
enum class EEarlyHitPolicy : uint8_t
{
	EEarlyHitPolicy__Nothing       = 0,
	EEarlyHitPolicy__Thwack        = 1,
	EEarlyHitPolicy__HitSuccess    = 2,
	EEarlyHitPolicy__Blocked       = 3,
	EEarlyHitPolicy__Interrupt     = 4,
	EEarlyHitPolicy__Stagger       = 5,
	EEarlyHitPolicy__Stun          = 6,
	EEarlyHitPolicy__Knockdown     = 7,
	EEarlyHitPolicy__WorldHit      = 8,
	EEarlyHitPolicy__Cancel        = 9,
	EEarlyHitPolicy__EEarlyHitPolicy_MAX = 10
};


// Enum TBL.EClashPolicy
enum class EClashPolicy : uint8_t
{
	EClashPolicy__Nothing          = 0,
	EClashPolicy__Clash            = 1,
	EClashPolicy__EClashPolicy_MAX = 2
};


// Enum TBL.ETeamHitPolicy
enum class ETeamHitPolicy : uint8_t
{
	ETeamHitPolicy__Nothing        = 0,
	ETeamHitPolicy__Thwack         = 1,
	ETeamHitPolicy__WorldHit       = 2,
	ETeamHitPolicy__Blocked        = 3,
	ETeamHitPolicy__ETeamHitPolicy_MAX = 4
};


// Enum TBL.EOnHitPolicy
enum class EOnHitPolicy : uint8_t
{
	EOnHitPolicy__Nothing          = 0,
	EOnHitPolicy__Cancel           = 1,
	EOnHitPolicy__HitSuccess       = 2,
	EOnHitPolicy__EOnHitPolicy_MAX = 3
};


// Enum TBL.EWorldHitPolicy
enum class EWorldHitPolicy : uint8_t
{
	EWorldHitPolicy__Nothing       = 0,
	EWorldHitPolicy__WorldHit      = 1,
	EWorldHitPolicy__Thwack        = 2,
	EWorldHitPolicy__Stagger       = 3,
	EWorldHitPolicy__Blocked       = 4,
	EWorldHitPolicy__HitSuccess    = 5,
	EWorldHitPolicy__EWorldHitPolicy_MAX = 6
};


// Enum TBL.EReleaseCancelPolicy
enum class EReleaseCancelPolicy : uint8_t
{
	EReleaseCancelPolicy__CannotBeCancelled = 0,
	EReleaseCancelPolicy__CanCancelToRecovery = 1,
	EReleaseCancelPolicy__EReleaseCancelPolicy_MAX = 2
};


// Enum TBL.EWindupInputReleasedPolicy
enum class EWindupInputReleasedPolicy : uint8_t
{
	EWindupInputReleasedPolicy__Nothing = 0,
	EWindupInputReleasedPolicy__GotoIdle = 1,
	EWindupInputReleasedPolicy__DropItem = 2,
	EWindupInputReleasedPolicy__EWindupInputReleasedPolicy_MAX = 3
};


// Enum TBL.EFullBodyCombatState
enum class EFullBodyCombatState : uint8_t
{
	EFullBodyCombatState__StartOfCombatState = 0,
	EFullBodyCombatState__EndOfCombatState = 1,
	EFullBodyCombatState__EFullBodyCombatState_MAX = 2
};


// Enum TBL.EPassiveShieldPolicy
enum class EPassiveShieldPolicy : uint8_t
{
	EPassiveShieldPolicy__TakeHit  = 0,
	EPassiveShieldPolicy__Block    = 1,
	EPassiveShieldPolicy__BreakShield = 2,
	EPassiveShieldPolicy__Ignore   = 3,
	EPassiveShieldPolicy__EPassiveShieldPolicy_MAX = 4
};


// Enum TBL.EOnHitEffect
enum class EOnHitEffect : uint8_t
{
	EOnHitEffect__None             = 0,
	EOnHitEffect__Interrupt        = 1,
	EOnHitEffect__Stagger          = 2,
	EOnHitEffect__Stun             = 3,
	EOnHitEffect__Knockdown        = 4,
	EOnHitEffect__DownedStagger    = 5,
	EOnHitEffect__Getup            = 6,
	EOnHitEffect__EOnHitEffect_MAX = 7
};


// Enum TBL.EHeldBehavior
enum class EHeldBehavior : uint8_t
{
	EHeldBehavior__None            = 0,
	EHeldBehavior__UseHoldingState = 1,
	EHeldBehavior__HoldRelease     = 2,
	EHeldBehavior__EHeldBehavior_MAX = 3
};


// Enum TBL.ECombatStateBehavior
enum class ECombatStateBehavior : uint8_t
{
	ECombatStateBehavior__MeleeAttack = 0,
	ECombatStateBehavior__DrawnRangedAttack = 1,
	ECombatStateBehavior__ImmediateRangedAttack = 2,
	ECombatStateBehavior__ChargeAttack = 3,
	ECombatStateBehavior__ECombatStateBehavior_MAX = 4
};


// Enum TBL.EAttackTypeCategory
enum class EAttackTypeCategory : uint8_t
{
	EAttackTypeCategory__Standard  = 0,
	EAttackTypeCategory__QuickStrike = 1,
	EAttackTypeCategory__Special   = 2,
	EAttackTypeCategory__PassiveCharge = 3,
	EAttackTypeCategory__EAttackTypeCategory_MAX = 4
};


// Enum TBL.EAnimationType
enum class EAnimationType : uint8_t
{
	EAnimationType__UpperBody      = 0,
	EAnimationType__LowerBody      = 1,
	EAnimationType__FullBody       = 2,
	EAnimationType__FullBodyReleaseOnly = 3,
	EAnimationType__FullBodyStartOfReleaseOnly = 4,
	EAnimationType__EAnimationType_MAX = 5
};


// Enum TBL.EActivateAbility
enum class EActivateAbility : uint8_t
{
	EActivateAbility__StartOfCombatState = 0,
	EActivateAbility__EndOfCombatState = 1,
	EActivateAbility__AnimNotify   = 2,
	EActivateAbility__EActivateAbility_MAX = 3
};


// Enum TBL.EBombardState
enum class EBombardState : uint8_t
{
	EBombardState__Disabled        = 0,
	EBombardState__Interactable    = 1,
	EBombardState__Pushable        = 2,
	EBombardState__Packaged        = 3,
	EBombardState__PackagedAndDisabled = 4,
	EBombardState__EBombardState_MAX = 5
};


// Enum TBL.EWeaponTipResult
enum class EWeaponTipResult : uint8_t
{
	EWeaponTipResult__Hit          = 0,
	EWeaponTipResult__IgnoreHit    = 1,
	EWeaponTipResult__DelayHit     = 2,
	EWeaponTipResult__EWeaponTipResult_MAX = 3
};


// Enum TBL.EBrawlAlwaysOnMusicState
enum class EBrawlAlwaysOnMusicState : uint8_t
{
	EBrawlAlwaysOnMusicState__None = 0,
	EBrawlAlwaysOnMusicState__WaitingToStart = 1,
	EBrawlAlwaysOnMusicState__RecordScratch = 2,
	EBrawlAlwaysOnMusicState__PlayJukeBox = 3,
	EBrawlAlwaysOnMusicState__StopJukeBox = 4,
	EBrawlAlwaysOnMusicState__EBrawlAlwaysOnMusicState_MAX = 5
};


// Enum TBL.ECapturePointState
enum class ECapturePointState : uint8_t
{
	ECapturePointState__Neutral    = 0,
	ECapturePointState__Contested  = 1,
	ECapturePointState__Neutralizing = 2,
	ECapturePointState__Capturing  = 3,
	ECapturePointState__Captured   = 4,
	ECapturePointState__Invalid    = 5,
	ECapturePointState__ECapturePointState_MAX = 6
};


// Enum TBL.ECatapultState
enum class ECatapultState : uint8_t
{
	ECatapultState__Disabled       = 0,
	ECatapultState__Interactable   = 1,
	ECatapultState__Pushable       = 2,
	ECatapultState__Packaged       = 3,
	ECatapultState__PackagedAndDisabled = 4,
	ECatapultState__ECatapultState_MAX = 5
};


// Enum TBL.EComboInRecoveryOptions
enum class EComboInRecoveryOptions : uint8_t
{
	EComboInRecoveryOptions__UseDefault = 0,
	EComboInRecoveryOptions__CanCombo = 1,
	EComboInRecoveryOptions__CannotCombo = 2,
	EComboInRecoveryOptions__EComboInRecoveryOptions_MAX = 3
};


// Enum TBL.ESwingThroughReason
enum class ESwingThroughReason : uint8_t
{
	STR_IsFacingTarget             = 0,
	STR_IsTargetVisible            = 1,
	STR_IsFacingWeaponTip          = 2,
	STR_IsFacingWeaponTipDelayed   = 3,
	STR_MAX                        = 4
};


// Enum TBL.ECrowdControlCombatState
enum class ECrowdControlCombatState : uint8_t
{
	ECrowdControlCombatState__Interrupt = 0,
	ECrowdControlCombatState__Stagger = 1,
	ECrowdControlCombatState__Knockdown = 2,
	ECrowdControlCombatState__Stun = 3,
	ECrowdControlCombatState__DownedStagger = 4,
	ECrowdControlCombatState__ECrowdControlCombatState_MAX = 5
};


// Enum TBL.ECreditsSectionType
enum class ECreditsSectionType : uint8_t
{
	ECreditsSectionType__Normal    = 0,
	ECreditsSectionType__MultiColumn = 1,
	ECreditsSectionType__Header1   = 2,
	ECreditsSectionType__Header2   = 3,
	ECreditsSectionType__Header3   = 4,
	ECreditsSectionType__BigSeparator = 5,
	ECreditsSectionType__Separator = 6,
	ECreditsSectionType__ECreditsSectionType_MAX = 7
};


// Enum TBL.EWeaponTag
enum class EWeaponTag : uint8_t
{
	EWeaponTag__None               = 0,
	EWeaponTag__Axe                = 1,
	EWeaponTag__BastardSword       = 2,
	EWeaponTag__BattleAxe          = 3,
	EWeaponTag__Cudgel             = 4,
	EWeaponTag__Dagger             = 5,
	EWeaponTag__DaneAxe            = 6,
	EWeaponTag__Greatsword         = 7,
	EWeaponTag__Halberd            = 8,
	EWeaponTag__HeavyMace          = 9,
	EWeaponTag__Lance              = 10,
	EWeaponTag__Mace               = 11,
	EWeaponTag__Maul               = 12,
	EWeaponTag__Messer             = 13,
	EWeaponTag__PoleAxe            = 14,
	EWeaponTag__PoleHammer         = 15,
	EWeaponTag__ShortSword         = 16,
	EWeaponTag__Spear              = 17,
	EWeaponTag__Sword              = 18,
	EWeaponTag__WarHammer          = 19,
	EWeaponTag__Bow                = 20,
	EWeaponTag__Crossbow           = 21,
	EWeaponTag__ThrowingAxe        = 22,
	EWeaponTag__ThrowingKnife      = 23,
	EWeaponTag__HeavyShield        = 24,
	EWeaponTag__LightShield        = 25,
	EWeaponTag__MediumShield       = 26,
	EWeaponTag__Javelin            = 27,
	EWeaponTag__Falchion           = 28,
	EWeaponTag__Shovel             = 29,
	EWeaponTag__SledgeHammer       = 30,
	EWeaponTag__PickAxe            = 31,
	EWeaponTag__TwoHandedHammer    = 32,
	EWeaponTag__WarClub            = 33,
	EWeaponTag__ExecutionersAxe    = 34,
	EWeaponTag__Glaive             = 35,
	EWeaponTag__Knife              = 36,
	EWeaponTag__WarAxe             = 37,
	EWeaponTag__MorningStar        = 38,
	EWeaponTag__Hatchet            = 39,
	EWeaponTag__OneHandedSpear     = 40,
	EWeaponTag__ThrowingMallet     = 41,
	EWeaponTag__Rapier             = 42,
	EWeaponTag__HighlandSword      = 43,
	EWeaponTag__WarBow             = 44,
	EWeaponTag__HeavyCrossbow      = 45,
	EWeaponTag__Katars             = 46,
	EWeaponTag__ArmouredFists      = 47,
	EWeaponTag__MAX                = 48
};


// Enum TBL.ECustomizationTag
enum class ECustomizationTag : uint8_t
{
	ECustomizationTag__Team_Agatha = 0,
	ECustomizationTag__Team_Mason  = 1,
	ECustomizationTag__Team_FFA    = 2,
	ECustomizationTag__Class_Archer = 3,
	ECustomizationTag__Class_Footman = 4,
	ECustomizationTag__Class_Knight = 5,
	ECustomizationTag__Class_Vanguard = 6,
	ECustomizationTag__Team_Tenosia = 7,
	ECustomizationTag__ECustomizationTag_MAX = 8
};


// Enum TBL.ETattooColorChannel
enum class ETattooColorChannel : uint8_t
{
	ETattooColorChannel__Red       = 0,
	ETattooColorChannel__Green     = 1,
	ETattooColorChannel__Blue      = 2,
	ETattooColorChannel__Alpha     = 3,
	ETattooColorChannel__ETattooColorChannel_MAX = 4
};


// Enum TBL.ECustomizationGroupSearchResult
enum class ECustomizationGroupSearchResult : uint8_t
{
	ECustomizationGroupSearchResult__WithoutGroups = 0,
	ECustomizationGroupSearchResult__WithGroups = 1,
	ECustomizationGroupSearchResult__ECustomizationGroupSearchResult_MAX = 2
};


// Enum TBL.EGenerationMode
enum class EGenerationMode : uint8_t
{
	EGenerationMode__Uniform       = 0,
	EGenerationMode__UniformRandom = 1,
	EGenerationMode__Random        = 2,
	EGenerationMode__EGenerationMode_MAX = 3
};


// Enum TBL.EMarkerType
enum class EMarkerType : uint8_t
{
	EMarkerType__Objective         = 0,
	EMarkerType__NonObjective      = 1,
	EMarkerType__Hostile           = 2,
	EMarkerType__Invalid           = 3,
	EMarkerType__EMarkerType_MAX   = 4
};


// Enum TBL.EMountVisibilityCondition
enum class EMountVisibilityCondition : uint8_t
{
	EMountVisibilityCondition__VisibleIfMounted = 0,
	EMountVisibilityCondition__VisibleIfNotMounted = 1,
	EMountVisibilityCondition__EMountVisibilityCondition_MAX = 2
};


// Enum TBL.EInventoryVisibilityCondition
enum class EInventoryVisibilityCondition : uint8_t
{
	EInventoryVisibilityCondition__VisibleIfEquipped = 0,
	EInventoryVisibilityCondition__VisibleIfUnEquipped = 1,
	EInventoryVisibilityCondition__EInventoryVisibilityCondition_MAX = 2
};


// Enum TBL.EFactionOrAttackerDefender
enum class EFactionOrAttackerDefender : uint8_t
{
	EFactionOrAttackerDefender__Agatha = 0,
	EFactionOrAttackerDefender__Mason = 1,
	EFactionOrAttackerDefender__Attacker = 2,
	EFactionOrAttackerDefender__Defender = 3,
	EFactionOrAttackerDefender__Friendly = 4,
	EFactionOrAttackerDefender__Enemy = 5,
	EFactionOrAttackerDefender__All = 6,
	EFactionOrAttackerDefender__Tenosia = 7,
	EFactionOrAttackerDefender__EFactionOrAttackerDefender_MAX = 8
};


// Enum TBL.EWidgetContainer
enum class EWidgetContainer : uint8_t
{
	EWidgetContainer__LookAt       = 0,
	EWidgetContainer__ObjectiveBar = 1,
	EWidgetContainer__AlwaysVisible = 2,
	EWidgetContainer__HudMarker    = 3,
	EWidgetContainer__HudZone      = 4,
	EWidgetContainer__EWidgetContainer_MAX = 5
};


// Enum TBL.ECinematicCameraTargetLockMode
enum class ECinematicCameraTargetLockMode : uint8_t
{
	ECinematicCameraTargetLockMode__Forward = 0,
	ECinematicCameraTargetLockMode__Tracking = 1,
	ECinematicCameraTargetLockMode__LockForward = 2,
	ECinematicCameraTargetLockMode__LockTracking = 3,
	ECinematicCameraTargetLockMode__ECinematicCameraTargetLockMode_MAX = 4
};


// Enum TBL.EAttachMethod
enum class EAttachMethod : uint8_t
{
	EAttachMethod__SocketRelative  = 0,
	EAttachMethod__SocketAbsoluteLocation = 1,
	EAttachMethod__SocketAbsoluteLocationAndRotation = 2,
	EAttachMethod__EAttachMethod_MAX = 3
};


// Enum TBL.EOnProjectileHitEffect
enum class EOnProjectileHitEffect : uint8_t
{
	EOnProjectileHitEffect__Stick  = 0,
	EOnProjectileHitEffect__Bounce = 1,
	EOnProjectileHitEffect__Destroy = 2,
	EOnProjectileHitEffect__EOnProjectileHitEffect_MAX = 3
};


// Enum TBL.EGameSparksDataType
enum class EGameSparksDataType : uint8_t
{
	EGameSparksDataType__VirtualGood = 0,
	EGameSparksDataType__Achievement = 1,
	EGameSparksDataType__EGameSparksDataType_MAX = 2
};


// Enum TBL.ESpawnerSelectionMode
enum class ESpawnerSelectionMode : uint8_t
{
	ESpawnerSelectionMode__UniformDistribute = 0,
	ESpawnerSelectionMode__RandomDistribute = 1,
	ESpawnerSelectionMode__SequentialFill = 2,
	ESpawnerSelectionMode__RandomFill = 3,
	ESpawnerSelectionMode__ESpawnerSelectionMode_MAX = 4
};


// Enum TBL.EHorseMovementEndCondition
enum class EHorseMovementEndCondition : uint8_t
{
	EHorseMovementEndCondition__None = 0,
	EHorseMovementEndCondition__Time = 1,
	EHorseMovementEndCondition__StrafeDistance = 2,
	EHorseMovementEndCondition__TurnAngle = 3,
	EHorseMovementEndCondition__EHorseMovementEndCondition_MAX = 4
};


// Enum TBL.EHorseTurnInput
enum class EHorseTurnInput : uint8_t
{
	EHorseTurnInput__None          = 0,
	EHorseTurnInput__TurnSlow      = 1,
	EHorseTurnInput__Turn          = 2,
	EHorseTurnInput__TurnFast      = 3,
	EHorseTurnInput__EHorseTurnInput_MAX = 4
};


// Enum TBL.EHorseMovementInput
enum class EHorseMovementInput : uint8_t
{
	EHorseMovementInput__None      = 0,
	EHorseMovementInput__Forward   = 1,
	EHorseMovementInput__ForwardTurn = 2,
	EHorseMovementInput__Turn      = 3,
	EHorseMovementInput__BackwardTurn = 4,
	EHorseMovementInput__ForwardStrafe = 5,
	EHorseMovementInput__Strafe    = 6,
	EHorseMovementInput__BackwardStafe = 7,
	EHorseMovementInput__Backward  = 8,
	EHorseMovementInput__EHorseMovementInput_MAX = 9
};


// Enum TBL.ECollisionInteraction
enum class ECollisionInteraction : uint8_t
{
	ECollisionInteraction__Knockoff = 0,
	ECollisionInteraction__Stagger = 1,
	ECollisionInteraction__Rear    = 2,
	ECollisionInteraction__BumpOff = 3,
	ECollisionInteraction__Push    = 4,
	ECollisionInteraction__None    = 5,
	ECollisionInteraction__ECollisionInteraction_MAX = 6
};


// Enum TBL.EHorseWorldCollision
enum class EHorseWorldCollision : uint8_t
{
	EHorseWorldCollision__Front    = 0,
	EHorseWorldCollision__Back     = 1,
	EHorseWorldCollision__Both     = 2,
	EHorseWorldCollision__EHorseWorldCollision_MAX = 3
};


// Enum TBL.EInfluenceMapFindMethod
enum class EInfluenceMapFindMethod : uint8_t
{
	EInfluenceMapFindMethod__Spatial = 0,
	EInfluenceMapFindMethod__Tag   = 1,
	EInfluenceMapFindMethod__EInfluenceMapFindMethod_MAX = 2
};


// Enum TBL.EInfluenceMapTypeWeaponRestriction
enum class EInfluenceMapTypeWeaponRestriction : uint8_t
{
	EInfluenceMapTypeWeaponRestriction__Any = 0,
	EInfluenceMapTypeWeaponRestriction__RangedWeaponOnly = 1,
	EInfluenceMapTypeWeaponRestriction__ThrowableWeaponOnly = 2,
	EInfluenceMapTypeWeaponRestriction__MeleeWeaponOnly = 3,
	EInfluenceMapTypeWeaponRestriction__EInfluenceMapTypeWeaponRestriction_MAX = 4
};


// Enum TBL.EAIObjectiveType
enum class EAIObjectiveType : uint8_t
{
	EAIObjectiveType__Unknown      = 0,
	EAIObjectiveType__Capture      = 1,
	EAIObjectiveType__Push         = 2,
	EAIObjectiveType__PushDefend   = 3,
	EAIObjectiveType__Flag         = 4,
	EAIObjectiveType__FlagPlant    = 5,
	EAIObjectiveType__EAIObjectiveType_MAX = 6
};


// Enum TBL.EInputReplayState
enum class EInputReplayState : uint8_t
{
	EInputReplayState__Disabled    = 0,
	EInputReplayState__Playing     = 1,
	EInputReplayState__Recording   = 2,
	EInputReplayState__EInputReplayState_MAX = 3
};


// Enum TBL.EReplayInputKeys
enum class EReplayInputKeys : uint8_t
{
	EReplayInputKeys__AltAttack    = 0,
	EReplayInputKeys__Slash        = 1,
	EReplayInputKeys__Overhead     = 2,
	EReplayInputKeys__Stab         = 3,
	EReplayInputKeys__Parry        = 4,
	EReplayInputKeys__AbilityQ     = 5,
	EReplayInputKeys__AbilityE     = 6,
	EReplayInputKeys__AbilityF     = 7,
	EReplayInputKeys__Jump         = 8,
	EReplayInputKeys__BattleCry    = 9,
	EReplayInputKeys__Crouch       = 10,
	EReplayInputKeys__CancelAttack = 11,
	EReplayInputKeys__CancelIntoParry = 12,
	EReplayInputKeys__HorseMoveForward = 13,
	EReplayInputKeys__HorseMoveBackward = 14,
	EReplayInputKeys__HorseMoveLeft = 15,
	EReplayInputKeys__HorseMoveRight = 16,
	EReplayInputKeys__HorseControlMode = 17,
	EReplayInputKeys__HorseBoost   = 18,
	EReplayInputKeys__EReplayInputKeys_MAX = 19
};


// Enum TBL.EInstanceContainerType
enum class EInstanceContainerType : uint8_t
{
	EInstanceContainerType__None   = 0,
	EInstanceContainerType__Effect = 1,
	EInstanceContainerType__EInstanceContainerType_MAX = 2
};


// Enum TBL.EInteractableRechargeRule
enum class EInteractableRechargeRule : uint8_t
{
	EInteractableRechargeRule__RechargeWhenBelowMaxUses = 0,
	EInteractableRechargeRule__RechargeWhenAtZeroUses = 1,
	EInteractableRechargeRule__RechargeByManualControl = 2,
	EInteractableRechargeRule__EInteractableRechargeRule_MAX = 3
};


// Enum TBL.EInteractableUILocation
enum class EInteractableUILocation : uint8_t
{
	EInteractableUILocation__AttachedToActor = 0,
	EInteractableUILocation__Pinned = 1,
	EInteractableUILocation__EInteractableUILocation_MAX = 2
};


// Enum TBL.EInteractionType
enum class EInteractionType : uint8_t
{
	EInteractionType__Instant      = 0,
	EInteractionType__Mounted      = 1,
	EInteractionType__LockedIn     = 2,
	EInteractionType__EInteractionType_MAX = 3
};


// Enum TBL.EGamepadBattleCryState
enum class EGamepadBattleCryState : uint8_t
{
	EGamepadBattleCryState__NONE   = 0,
	EGamepadBattleCryState__PENDING_HOLD = 1,
	EGamepadBattleCryState__HELD   = 2,
	EGamepadBattleCryState__EGamepadBattleCryState_MAX = 3
};


// Enum TBL.EPickupEquipOptions
enum class EPickupEquipOptions : uint8_t
{
	EPickupEquipOptions__Equip     = 0,
	EPickupEquipOptions__EquipImmediately = 1,
	EPickupEquipOptions__LeaveUnequipped = 2,
	EPickupEquipOptions__EPickupEquipOptions_MAX = 3
};


// Enum TBL.EParryHitLocationAdjust
enum class EParryHitLocationAdjust : uint8_t
{
	EParryHitLocationAdjust__Disable = 0,
	EParryHitLocationAdjust__ProjectToLine = 1,
	EParryHitLocationAdjust__ClosestPointOnBox = 2,
	EParryHitLocationAdjust__EParryHitLocationAdjust_MAX = 3
};


// Enum TBL.EItemSoundPolicy
enum class EItemSoundPolicy : uint8_t
{
	EItemSoundPolicy__PlaySoundOnItem = 0,
	EItemSoundPolicy__PlaySoundOnOwningCharacter = 1,
	EItemSoundPolicy__EItemSoundPolicy_MAX = 2
};


// Enum TBL.EWeaponMaterial
enum class EWeaponMaterial : uint8_t
{
	EWeaponMaterial__Metal         = 0,
	EWeaponMaterial__Wood          = 1,
	EWeaponMaterial__Shield        = 2,
	EWeaponMaterial__Body          = 3,
	EWeaponMaterial__Arrow         = 4,
	EWeaponMaterial__EWeaponMaterial_MAX = 5
};


// Enum TBL.EUpdateMode
enum class EUpdateMode : uint8_t
{
	EUpdateMode__None              = 0,
	EUpdateMode__TickEveryFrame    = 1,
	EUpdateMode__SkipAnimations    = 2,
	EUpdateMode__EUpdateMode_MAX   = 3
};


// Enum TBL.ERangedAttackCategory
enum class ERangedAttackCategory : uint8_t
{
	ERangedAttackCategory__Light   = 0,
	ERangedAttackCategory__Medium  = 1,
	ERangedAttackCategory__Heavy   = 2,
	ERangedAttackCategory__Great   = 3,
	ERangedAttackCategory__Projectile = 4,
	ERangedAttackCategory__Unblockable = 5,
	ERangedAttackCategory__ERangedAttackCategory_MAX = 6
};


// Enum TBL.EMeleeAttackCategory
enum class EMeleeAttackCategory : uint8_t
{
	EMeleeAttackCategory__Light    = 0,
	EMeleeAttackCategory__Medium   = 1,
	EMeleeAttackCategory__Heavy    = 2,
	EMeleeAttackCategory__Great    = 3,
	EMeleeAttackCategory__EMeleeAttackCategory_MAX = 4
};


// Enum TBL.EAmmoStackType
enum class EAmmoStackType : uint8_t
{
	EAmmoStackType__Exhaustable    = 0,
	EAmmoStackType__Unlimited      = 1,
	EAmmoStackType__EAmmoStackType_MAX = 2
};


// Enum TBL.EHelmetRemovalPolicy
enum class EHelmetRemovalPolicy : uint8_t
{
	EHelmetRemovalPolicy__DoNothing = 0,
	EHelmetRemovalPolicy__RemoveHelmet = 1,
	EHelmetRemovalPolicy__EHelmetRemovalPolicy_MAX = 2
};


// Enum TBL.ESpeedPenalty
enum class ESpeedPenalty : uint8_t
{
	ESpeedPenalty__Light           = 0,
	ESpeedPenalty__Medium          = 1,
	ESpeedPenalty__Heavy           = 2,
	ESpeedPenalty__SuperHeavy      = 3,
	ESpeedPenalty__LightCarryable  = 4,
	ESpeedPenalty__MediumCarryable = 5,
	ESpeedPenalty__HeavyCarryable  = 6,
	ESpeedPenalty__ESpeedPenalty_MAX = 7
};


// Enum TBL.EWeaponType
enum class EWeaponType : uint8_t
{
	EWeaponType__Sword2h           = 0,
	EWeaponType__Sword1h           = 1,
	EWeaponType__Axe1h             = 2,
	EWeaponType__Mace1h            = 3,
	EWeaponType__ProjectileWeapon  = 4,
	EWeaponType__EWeaponType_MAX   = 5
};


// Enum TBL.EInventoryItemCondition
enum class EInventoryItemCondition : uint8_t
{
	EInventoryItemCondition__NoCondition = 0,
	EInventoryItemCondition__OffHandMustBeFree = 1,
	EInventoryItemCondition__MustBePrimaryWeapon = 2,
	EInventoryItemCondition__MustBeOffHandWeapon = 3,
	EInventoryItemCondition__OnlyAs1hWeapon = 4,
	EInventoryItemCondition__OnlyAs2hWeapon = 5,
	EInventoryItemCondition__EInventoryItemCondition_MAX = 6
};


// Enum TBL.EAttachedState
enum class EAttachedState : uint8_t
{
	EAttachedState__Free           = 0,
	EAttachedState__Attached       = 1,
	EAttachedState__Detached       = 2,
	EAttachedState__Hide           = 3,
	EAttachedState__EAttachedState_MAX = 4
};


// Enum TBL.EEquippedHand
enum class EEquippedHand : uint8_t
{
	EEquippedHand__Unequipped      = 0,
	EEquippedHand__PrimaryHand     = 1,
	EEquippedHand__OffHand         = 2,
	EEquippedHand__TwoHands        = 3,
	EEquippedHand__NoHands         = 4,
	EEquippedHand__EEquippedHand_MAX = 5
};


// Enum TBL.EEquippedState
enum class EEquippedState : uint8_t
{
	EEquippedState__Free           = 0,
	EEquippedState__Equipping      = 1,
	EEquippedState__Equipped       = 2,
	EEquippedState__Unequipping    = 3,
	EEquippedState__Unequipped     = 4,
	EEquippedState__Hide           = 5,
	EEquippedState__Using          = 6,
	EEquippedState__Pickup         = 7,
	EEquippedState__EquipFromStanding = 8,
	EEquippedState__UnequipToStanding = 9,
	EEquippedState__Reloading      = 10,
	EEquippedState__EquippingFromParryBreak = 11,
	EEquippedState__EEquippedState_MAX = 12
};


// Enum TBL.EInventoryItemSlot
enum class EInventoryItemSlot : uint8_t
{
	EInventoryItemSlot__Carryable  = 0,
	EInventoryItemSlot__Primary    = 1,
	EInventoryItemSlot__Secondary  = 2,
	EInventoryItemSlot__Shield     = 3,
	EInventoryItemSlot__Knife      = 4,
	EInventoryItemSlot__Fists      = 5,
	EInventoryItemSlot__Item       = 6,
	EInventoryItemSlot__Bandage    = 7,
	EInventoryItemSlot__Ammo       = 8,
	EInventoryItemSlot__Custom     = 9,
	EInventoryItemSlot__OffhandPrimary = 10,
	EInventoryItemSlot__Downed     = 11,
	EInventoryItemSlot__Quiver     = 12,
	EInventoryItemSlot__Novelty    = 13,
	EInventoryItemSlot__Special    = 14,
	EInventoryItemSlot__MAX        = 15
};


// Enum TBL.EInventoryType
enum class EInventoryType : uint8_t
{
	EInventoryType__None           = 0,
	EInventoryType__Axe            = 1,
	EInventoryType__Ballista       = 2,
	EInventoryType__BandageKit     = 3,
	EInventoryType__BastardSword   = 4,
	EInventoryType__BattleAxe      = 5,
	EInventoryType__Bow            = 6,
	EInventoryType__Catapult       = 7,
	EInventoryType__Crossbow       = 8,
	EInventoryType__Cudgel         = 9,
	EInventoryType__Dagger         = 10,
	EInventoryType__DaneAxe        = 11,
	EInventoryType__Greatsword     = 12,
	EInventoryType__Halberd        = 13,
	EInventoryType__HeavyMace      = 14,
	EInventoryType__HeavyShield    = 15,
	EInventoryType__Horse          = 16,
	EInventoryType__Fists          = 17,
	EInventoryType__Lance          = 18,
	EInventoryType__LightShield    = 19,
	EInventoryType__Mace           = 20,
	EInventoryType__Maul           = 21,
	EInventoryType__MediumShield   = 22,
	EInventoryType__Messer         = 23,
	EInventoryType__PoleAxe        = 24,
	EInventoryType__PoleHammer     = 25,
	EInventoryType__ShortSword     = 26,
	EInventoryType__Spear          = 27,
	EInventoryType__Sword          = 28,
	EInventoryType__ThrowingAxe    = 29,
	EInventoryType__ThrowingKnife  = 30,
	EInventoryType__WarHammer      = 31,
	EInventoryType__Javelin        = 32,
	EInventoryType__Absurd         = 33,
	EInventoryType__BatteringRam   = 34,
	EInventoryType__TopplingStone  = 35,
	EInventoryType__Bombard        = 36,
	EInventoryType__MAX            = 37
};


// Enum TBL.EQuestDifficulty
enum class EQuestDifficulty : uint8_t
{
	EQuestDifficulty__Easy         = 0,
	EQuestDifficulty__Normal       = 1,
	EQuestDifficulty__Hard         = 2,
	EQuestDifficulty__Impossible   = 3,
	EQuestDifficulty__EQuestDifficulty_MAX = 4
};


// Enum TBL.EHorseMovementStateOp
enum class EHorseMovementStateOp : uint8_t
{
	EHorseMovementStateOp__GreaterThan = 0,
	EHorseMovementStateOp__EqualTo = 1,
	EHorseMovementStateOp__LessThanOrEqualTo = 2,
	EHorseMovementStateOp__EHorseMovementStateOp_MAX = 3
};


// Enum TBL.EIsTypeVersion
enum class EIsTypeVersion : uint8_t
{
	EIsTypeVersion__Multiple       = 0,
	EIsTypeVersion__Latest         = 1,
	EIsTypeVersion__EIsTypeVersion_MAX = 2
};


// Enum TBL.EMatchVictoryType
enum class EMatchVictoryType : uint8_t
{
	EMatchVictoryType__Victory     = 0,
	EMatchVictoryType__Defeat      = 1,
	EMatchVictoryType__Either      = 2,
	EMatchVictoryType__EMatchVictoryType_MAX = 3
};


// Enum TBL.EMatchWinType
enum class EMatchWinType : uint8_t
{
	EMatchWinType__Team            = 0,
	EMatchWinType__Map             = 1,
	EMatchWinType__Both            = 2,
	EMatchWinType__EMatchWinType_MAX = 3
};


// Enum TBL.EMovementFrameOfReference
enum class EMovementFrameOfReference : uint8_t
{
	EMovementFrameOfReference__InitiatorToTarget = 0,
	EMovementFrameOfReference__CharacterRotation = 1,
	EMovementFrameOfReference__AttackDirectionHit = 2,
	EMovementFrameOfReference__AttackDirectionParry = 3,
	EMovementFrameOfReference__Default = 4,
	EMovementFrameOfReference__EMovementFrameOfReference_MAX = 5
};


// Enum TBL.EObjectiveZoneVisibilityMode
enum class EObjectiveZoneVisibilityMode : uint8_t
{
	EObjectiveZoneVisibilityMode__None = 0,
	EObjectiveZoneVisibilityMode__HideWhenInside = 1,
	EObjectiveZoneVisibilityMode__HideWhenOutside = 2,
	EObjectiveZoneVisibilityMode__EObjectiveZoneVisibilityMode_MAX = 3
};


// Enum TBL.ENameType
enum class ENameType : uint8_t
{
	ENameType__PersonName          = 0,
	ENameType__FirstName           = 1,
	ENameType__LastName            = 2,
	ENameType__ServerName          = 3,
	ENameType__SpecialBotName      = 4,
	ENameType__ENameType_MAX       = 5
};


// Enum TBL.ERankTitleFormat
enum class ERankTitleFormat : uint8_t
{
	ERankTitleFormat__NoFormat     = 0,
	ERankTitleFormat__RomanNumerals = 1,
	ERankTitleFormat__ArabicNumberals = 2,
	ERankTitleFormat__ERankTitleFormat_MAX = 3
};


// Enum TBL.EOnlineAccountProperty
enum class EOnlineAccountProperty : uint8_t
{
	EOnlineAccountProperty__None   = 0,
	EOnlineAccountProperty__Title  = 1,
	EOnlineAccountProperty__Level  = 2,
	EOnlineAccountProperty__Debug  = 3,
	EOnlineAccountProperty__EOnlineAccountProperty_MAX = 4
};


// Enum TBL.EOutOfCombatZoneVolumeActivateDeactivateAction
enum class EOutOfCombatZoneVolumeActivateDeactivateAction : uint8_t
{
	EOutOfCombatZoneVolumeActivateDeactivateAction__Activate = 0,
	EOutOfCombatZoneVolumeActivateDeactivateAction__Deactivate = 1,
	EOutOfCombatZoneVolumeActivateDeactivateAction__EOutOfCombatZoneVolumeActivateDeactivateAction_MAX = 2
};


// Enum TBL.EDisplayPerk
enum class EDisplayPerk : uint8_t
{
	EDisplayPerk__DisplayAsPerk    = 0,
	EDisplayPerk__DisplayAsAbility = 1,
	EDisplayPerk__DisplayAsVulnerability = 2,
	EDisplayPerk__DisplayAsChargingMethod = 3,
	EDisplayPerk__EDisplayPerk_MAX = 4
};


// Enum TBL.EEmoteType
enum class EEmoteType : uint8_t
{
	EEmoteType__VO                 = 0,
	EEmoteType__UpperBody          = 1,
	EEmoteType__UpperBodyInterruptible = 2,
	EEmoteType__RootMotion         = 3,
	EEmoteType__RootMotionInterruptible = 4,
	EEmoteType__Lasting            = 5,
	EEmoteType__Dynamic            = 6,
	EEmoteType__EEmoteType_MAX     = 7
};


// Enum TBL.EEmoteAnimationSource
enum class EEmoteAnimationSource : uint8_t
{
	EEmoteAnimationSource__None    = 0,
	EEmoteAnimationSource__Character = 1,
	EEmoteAnimationSource__Weapon  = 2,
	EEmoteAnimationSource__EEmoteAnimationSource_MAX = 3
};


// Enum TBL.EAudioVOType
enum class EAudioVOType : uint8_t
{
	EAudioVOType__None             = 0,
	EAudioVOType__FollowMe         = 1,
	EAudioVOType__Forward          = 2,
	EAudioVOType__Retreat          = 3,
	EAudioVOType__Confusion        = 4,
	EAudioVOType__Disappointment   = 5,
	EAudioVOType__HoldGround       = 6,
	EAudioVOType__Panic            = 7,
	EAudioVOType__Incoming         = 8,
	EAudioVOType__BehindUs         = 9,
	EAudioVOType__Awe              = 10,
	EAudioVOType__BattlecryStanding = 11,
	EAudioVOType__BattlecrySprinting = 12,
	EAudioVOType__BattlecryCrouching = 13,
	EAudioVOType__Yes              = 14,
	EAudioVOType__No               = 15,
	EAudioVOType__Help             = 16,
	EAudioVOType__Maybe            = 17,
	EAudioVOType__Thanks           = 18,
	EAudioVOType__Welcome          = 19,
	EAudioVOType__Sorry            = 20,
	EAudioVOType__Taunt            = 21,
	EAudioVOType__Laugh            = 22,
	EAudioVOType__RespectAlly      = 23,
	EAudioVOType__RespectEnemy     = 24,
	EAudioVOType__PersonalPersonalityOption1 = 25,
	EAudioVOType__PersonalPersonalityOption2 = 26,
	EAudioVOType__TacticalPersonalityOption1 = 27,
	EAudioVOType__TacticalPersonalityOption2 = 28,
	EAudioVOType__EmotePersonalityOption1 = 29,
	EAudioVOType__EmotePersonalityOption2 = 30,
	EAudioVOType__RequestHelp      = 31,
	EAudioVOType__RequestDeath     = 32,
	EAudioVOType__RefuseDeath      = 33,
	EAudioVOType__AcceptDeath      = 34,
	EAudioVOType__Cheer            = 35,
	EAudioVOType__Goodbye          = 36,
	EAudioVOType__Hello            = 37,
	EAudioVOType__BegCower         = 38,
	EAudioVOType__Soliloquy        = 39,
	EAudioVOType__Customization    = 40,
	EAudioVOType__Friendly         = 41,
	EAudioVOType__Enemy            = 42,
	EAudioVOType__Cry              = 43,
	EAudioVOType__Cower            = 44,
	EAudioVOType__IdleChatter      = 45,
	EAudioVOType__LetMeIn          = 46,
	EAudioVOType__Pain             = 47,
	EAudioVOType__DeathCry         = 48,
	EAudioVOType__DefendMe         = 49,
	EAudioVOType__Hymn             = 50,
	EAudioVOType__Chant            = 51,
	EAudioVOType__YouAreWelcome    = 52,
	EAudioVOType__Prayer           = 53,
	EAudioVOType__Rally            = 54,
	EAudioVOType__RequestHeal      = 55,
	EAudioVOType__AncientCurse     = 56,
	EAudioVOType__AnimalKinship    = 57,
	EAudioVOType__MAX              = 58
};


// Enum TBL.ECharacterClassType
enum class ECharacterClassType : uint8_t
{
	ECharacterClassType__Invalid   = 0,
	ECharacterClassType__Archetype = 1,
	ECharacterClassType__Subclass  = 2,
	ECharacterClassType__Special   = 3,
	ECharacterClassType__ECharacterClassType_MAX = 4
};


// Enum TBL.ECharacterClass
enum class ECharacterClass : uint8_t
{
	ECharacterClass__None          = 0,
	ECharacterClass__Archer        = 1,
	ECharacterClass__Longbowman    = 2,
	ECharacterClass__Crossbowman   = 3,
	ECharacterClass__Skirmisher    = 4,
	ECharacterClass__ARCHER_CUSTOM_SUBCLASS = 5,
	ECharacterClass__Vanguard      = 6,
	ECharacterClass__Devastator    = 7,
	ECharacterClass__Raider        = 8,
	ECharacterClass__Ambusher      = 9,
	ECharacterClass__Highlander    = 10,
	ECharacterClass__Footman       = 11,
	ECharacterClass__Poleman       = 12,
	ECharacterClass__ManAtArms     = 13,
	ECharacterClass__FieldEngineer = 14,
	ECharacterClass__FOOTMAN_CUSTOM_SUBCLASS = 15,
	ECharacterClass__Knight        = 16,
	ECharacterClass__Officer       = 17,
	ECharacterClass__Guardian      = 18,
	ECharacterClass__Crusader      = 19,
	ECharacterClass__KNIGHT_CUSTOM_SUBCLASS = 20,
	ECharacterClass__Duke          = 21,
	ECharacterClass__Botman        = 22,
	ECharacterClass__Peasant       = 23,
	ECharacterClass__CUSTOM_ARCHETYPE = 24,
	ECharacterClass__ARCHETYPE_CUSTOM_SUBCLASS1 = 25,
	ECharacterClass__ARCHETYPE_CUSTOM_SUBCLASS2 = 26,
	ECharacterClass__ARCHETYPE_CUSTOM_SUBCLASS3 = 27,
	ECharacterClass__ARCHETYPE_CUSTOM_SUBCLASS4 = 28,
	ECharacterClass__MAX           = 29
};


// Enum TBL.EAudioClassType
enum class EAudioClassType : uint8_t
{
	EAudioClassType__Archer        = 0,
	EAudioClassType__Footman       = 1,
	EAudioClassType__Knight        = 2,
	EAudioClassType__Vanguard      = 3,
	EAudioClassType__Peasant       = 4,
	EAudioClassType__PeasantAI     = 5,
	EAudioClassType__Duke          = 6,
	EAudioClassType__Bot           = 7,
	EAudioClassType__Monk          = 8,
	EAudioClassType__PeasantAIFemale = 9,
	EAudioClassType__Druid         = 10,
	EAudioClassType__MAX           = 11
};


// Enum TBL.EAudioPersonalityType
enum class EAudioPersonalityType : uint8_t
{
	EAudioPersonalityType__Chiv1_Ag_Archer = 0,
	EAudioPersonalityType__Chiv1_Ag_Knight = 1,
	EAudioPersonalityType__Chiv1_Ag_Maa = 2,
	EAudioPersonalityType__Chiv1_Ag_Vanguard = 3,
	EAudioPersonalityType__Chiv1_Ma_Archer = 4,
	EAudioPersonalityType__Chiv1_Ma_Knight = 5,
	EAudioPersonalityType__Chiv1_Ma_Maa = 6,
	EAudioPersonalityType__Chiv1_Ma_Vanguard = 7,
	EAudioPersonalityType__FilthyPeasant1 = 8,
	EAudioPersonalityType__Chiv2_DrillSgt = 9,
	EAudioPersonalityType__Chiv2_SnobbyNoble = 10,
	EAudioPersonalityType__Chiv2_RighteousKnight = 11,
	EAudioPersonalityType__Chiv2_ToughGuy = 12,
	EAudioPersonalityType__Chiv2_DemiGod = 13,
	EAudioPersonalityType__Chiv2_SellSword = 14,
	EAudioPersonalityType__Chiv2_DarkPrince = 15,
	EAudioPersonalityType__Chiv2_Imposter = 16,
	EAudioPersonalityType__Chiv2_SquireBoy = 17,
	EAudioPersonalityType__Peasant_Pillaged_Veteran = 18,
	EAudioPersonalityType__Peasant_Player_01 = 19,
	EAudioPersonalityType__Peasant_Player_02 = 20,
	EAudioPersonalityType__Peasant_Player_03 = 21,
	EAudioPersonalityType__Peasant_Player_04 = 22,
	EAudioPersonalityType__Peasant_AI_Buckley = 23,
	EAudioPersonalityType__Peasant_AI_JackSepticeye = 24,
	EAudioPersonalityType__Peasant_AI_Unknown3 = 25,
	EAudioPersonalityType__Peasant_AI_Unknown4 = 26,
	EAudioPersonalityType__Peasant_AI_Unknown5 = 27,
	EAudioPersonalityType__Duke_Mason = 28,
	EAudioPersonalityType__Duke_Agatha = 29,
	EAudioPersonalityType__Bot_Agatha = 30,
	EAudioPersonalityType__Bot_Agatha01 = 31,
	EAudioPersonalityType__Bot_Agatha02 = 32,
	EAudioPersonalityType__Bot_Agatha03 = 33,
	EAudioPersonalityType__Bot_Agatha04 = 34,
	EAudioPersonalityType__Bot_Mason = 35,
	EAudioPersonalityType__Bot_Mason01 = 36,
	EAudioPersonalityType__Bot_Mason02 = 37,
	EAudioPersonalityType__Bot_Mason03 = 38,
	EAudioPersonalityType__Bot_Mason04 = 39,
	EAudioPersonalityType__Chiv2_FemAgatha = 40,
	EAudioPersonalityType__Chiv2_FemMason = 41,
	EAudioPersonalityType__Chiv2_BarMaid = 42,
	EAudioPersonalityType__Chiv2_EvilQueen = 43,
	EAudioPersonalityType__Peasant_AI_Unknown6 = 44,
	EAudioPersonalityType__Peasant_AI_Unknown7 = 45,
	EAudioPersonalityType__Peasant_AI_Unknown8 = 46,
	EAudioPersonalityType__Peasant_Fem_AI_Unknown1 = 47,
	EAudioPersonalityType__Peasant_Fem_AI_Unknown2 = 48,
	EAudioPersonalityType__Peasant_Fem_AI_Unknown3 = 49,
	EAudioPersonalityType__Peasant_Fem_AI_Unknown4 = 50,
	EAudioPersonalityType__Monk_Agatha = 51,
	EAudioPersonalityType__Monk_Agatha01 = 52,
	EAudioPersonalityType__Monk_Agatha02 = 53,
	EAudioPersonalityType__Monk_Agatha03 = 54,
	EAudioPersonalityType__Monk_Agatha04 = 55,
	EAudioPersonalityType__Monk_Agatha05 = 56,
	EAudioPersonalityType__Druid_Mason = 57,
	EAudioPersonalityType__Druid_Mason01 = 58,
	EAudioPersonalityType__Druid_Mason02 = 59,
	EAudioPersonalityType__Druid_Mason03 = 60,
	EAudioPersonalityType__Peasant_Fem_AI_Mason_Unknown1 = 61,
	EAudioPersonalityType__Peasant_Fem_AI_Mason_Unknown2 = 62,
	EAudioPersonalityType__Peasant_Fem_AI_Mason_Unknown3 = 63,
	EAudioPersonalityType__Peasant_Fem_AI_Mason_Unknown4 = 64,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown0 = 65,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown1 = 66,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown2 = 67,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown3 = 68,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown4 = 69,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown5 = 70,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown6 = 71,
	EAudioPersonalityType__Peasant_AI_Mason_Unknown7 = 72,
	EAudioPersonalityType__Chiv2_Highlander = 73,
	EAudioPersonalityType__Chiv2_Berserker = 74,
	EAudioPersonalityType__Chiv2_JollyChef = 75,
	EAudioPersonalityType__Chiv2_HaughtyCouncillor = 76,
	EAudioPersonalityType__Chiv2_ProAssassin = 77,
	EAudioPersonalityType__Chiv2_GrizzledSentinel = 78,
	EAudioPersonalityType__Bot_Tenosia = 79,
	EAudioPersonalityType__Bot_Tenosia01 = 80,
	EAudioPersonalityType__Bot_Tenosia02 = 81,
	EAudioPersonalityType__Bot_Tenosia03 = 82,
	EAudioPersonalityType__Bot_Tenosia04 = 83,
	EAudioPersonalityType__MAX     = 84
};


// Enum TBL.EVOType
enum class EVOType : uint8_t
{
	EVOType__Manual                = 0,
	EVOType__Auto                  = 1,
	EVOType__Context               = 2,
	EVOType__None                  = 3,
	EVOType__EVOType_MAX           = 4
};


// Enum TBL.EPushableComponentMovementState
enum class EPushableComponentMovementState : uint8_t
{
	EPushableComponentMovementState__STATIONARY = 0,
	EPushableComponentMovementState__ACCELERATING = 1,
	EPushableComponentMovementState__DECELERATING = 2,
	EPushableComponentMovementState__MAXSPEED = 3,
	EPushableComponentMovementState__DEACTIVATED = 4,
	EPushableComponentMovementState__EPushableComponentMovementState_MAX = 5
};


// Enum TBL.EPushableMovementType
enum class EPushableMovementType : uint8_t
{
	EPushableMovementType__INDEPENDENT = 0,
	EPushableMovementType__LEADER  = 1,
	EPushableMovementType__FOLLOWER = 2,
	EPushableMovementType__EPushableMovementType_MAX = 3
};


// Enum TBL.ESiegeActorState
enum class ESiegeActorState : uint8_t
{
	ESiegeActorState__None         = 0,
	ESiegeActorState__Idle         = 1,
	ESiegeActorState__Pushing      = 2,
	ESiegeActorState__Open         = 3,
	ESiegeActorState__Close        = 4,
	ESiegeActorState__ESiegeActorState_MAX = 5
};


// Enum TBL.EPushingDirection
enum class EPushingDirection : uint8_t
{
	EPushingDirection__LeftOrRight = 0,
	EPushingDirection__Forward     = 1,
	EPushingDirection__Backwards   = 2,
	EPushingDirection__EPushingDirection_MAX = 3
};


// Enum TBL.EButtonAnimationStyle
enum class EButtonAnimationStyle : uint8_t
{
	EButtonAnimationStyle__Normal  = 0,
	EButtonAnimationStyle__Click   = 1,
	EButtonAnimationStyle__Hovered = 2,
	EButtonAnimationStyle__Leave   = 3,
	EButtonAnimationStyle__HoveredSelected = 4,
	EButtonAnimationStyle__LeaveSelected = 5,
	EButtonAnimationStyle__Release = 6,
	EButtonAnimationStyle__EButtonAnimationStyle_MAX = 7
};


// Enum TBL.ESeatSelectionMode
enum class ESeatSelectionMode : uint8_t
{
	ESeatSelectionMode__Sequential = 0,
	ESeatSelectionMode__Random     = 1,
	ESeatSelectionMode__ESeatSelectionMode_MAX = 2
};


// Enum TBL.EShapeTargetMethodVersion
enum class EShapeTargetMethodVersion : uint8_t
{
	EShapeTargetMethodVersion__QueryObjectTypes = 0,
	EShapeTargetMethodVersion__SaveVersionAsInt = 1,
	EShapeTargetMethodVersion__Latest = 2,
	EShapeTargetMethodVersion__EShapeTargetMethodVersion_MAX = 3
};


// Enum TBL.ESiegeEngineType
enum class ESiegeEngineType : uint8_t
{
	ESiegeEngineType__None         = 0,
	ESiegeEngineType__Horse        = 1,
	ESiegeEngineType__Catapult     = 2,
	ESiegeEngineType__Ballista     = 3,
	ESiegeEngineType__BatteringRam = 4,
	ESiegeEngineType__CharacterMountableActor = 5,
	ESiegeEngineType__Bombard      = 6,
	ESiegeEngineType__ESiegeEngineType_MAX = 7
};


// Enum TBL.ESingleTargetMethodVersion
enum class ESingleTargetMethodVersion : uint8_t
{
	ESingleTargetMethodVersion__MultipleTraces = 0,
	ESingleTargetMethodVersion__SaveVersionAsInt = 1,
	ESingleTargetMethodVersion__TargetObjectTypes = 2,
	ESingleTargetMethodVersion__Latest = 3,
	ESingleTargetMethodVersion__ESingleTargetMethodVersion_MAX = 4
};


// Enum TBL.EPendingSpawnRequestResult
enum class EPendingSpawnRequestResult : uint8_t
{
	EPendingSpawnRequestResult__Pending = 0,
	EPendingSpawnRequestResult__Consumed = 1,
	EPendingSpawnRequestResult__Failed = 2,
	EPendingSpawnRequestResult__Deferred = 3,
	EPendingSpawnRequestResult__EPendingSpawnRequestResult_MAX = 4
};


// Enum TBL.EQueueResponse
enum class EQueueResponse : uint8_t
{
	EQueueResponse__Success        = 0,
	EQueueResponse__Failed         = 1,
	EQueueResponse__InvalidController = 2,
	EQueueResponse__SpawnerFull    = 3,
	EQueueResponse__ControllerNotAllowed = 4,
	EQueueResponse__MAX            = 5
};


// Enum TBL.ESpawnSequenceActivateDeactivateAction
enum class ESpawnSequenceActivateDeactivateAction : uint8_t
{
	ESpawnSequenceActivateDeactivateAction__Activate = 0,
	ESpawnSequenceActivateDeactivateAction__Deactivate = 1,
	ESpawnSequenceActivateDeactivateAction__ESpawnSequenceActivateDeactivateAction_MAX = 2
};


// Enum TBL.ESpawnWaveState
enum class ESpawnWaveState : uint8_t
{
	ESpawnWaveState__EWaveState_NotStarted = 0,
	ESpawnWaveState__EWaveState_Spawning = 1,
	ESpawnWaveState__EWaveState_Ending = 2,
	ESpawnWaveState__EWaveState_MAX = 3
};


// Enum TBL.ESphereHitDirection
enum class ESphereHitDirection : uint8_t
{
	ESphereHitDirection__FromSphereCenter = 0,
	ESphereHitDirection__InitiatorHorseForward = 1,
	ESphereHitDirection__InitiatorHorseBackward = 2,
	ESphereHitDirection__ESphereHitDirection_MAX = 3
};


// Enum TBL.EDamageProperty
enum class EDamageProperty : uint8_t
{
	EDamageProperty__Damage        = 0,
	EDamageProperty__SiegeDamage   = 1,
	EDamageProperty__EDamageProperty_MAX = 2
};


// Enum TBL.ETeamDamageOptions
enum class ETeamDamageOptions : uint8_t
{
	ETeamDamageOptions__IgnoreDamage = 0,
	ETeamDamageOptions__ScaledDamage = 1,
	ETeamDamageOptions__FullDamage = 2,
	ETeamDamageOptions__ETeamDamageOptions_MAX = 3
};


// Enum TBL.EMod
enum class EMod : uint8_t
{
	EMod__Invulnerable             = 0,
	EMod__DisableStaminaDrain      = 1,
	EMod__UnlimitedAmmo            = 2,
	EMod__CannotUseInteractables   = 3,
	EMod__EMod_MAX                 = 4
};


// Enum TBL.EAiComboMode
enum class EAiComboMode : uint8_t
{
	EAiComboMode__Always           = 0,
	EAiComboMode__Never            = 1,
	EAiComboMode__AdvantageOnly    = 2,
	EAiComboMode__EAiComboMode_MAX = 3
};


// Enum TBL.EAiAttackMoveMode
enum class EAiAttackMoveMode : uint8_t
{
	EAiAttackMoveMode__CurrentLocation = 0,
	EAiAttackMoveMode__IdealRange  = 1,
	EAiAttackMoveMode__FaceHug     = 2,
	EAiAttackMoveMode__EAiAttackMoveMode_MAX = 3
};


// Enum TBL.EVariancePattern
enum class EVariancePattern : uint8_t
{
	EVariancePattern__None         = 0,
	EVariancePattern__SineWave     = 1,
	EVariancePattern__SquareWave   = 2,
	EVariancePattern__JDWave       = 3,
	EVariancePattern__EVariancePattern_MAX = 4
};


// Enum TBL.EStrafeDirection
enum class EStrafeDirection : uint8_t
{
	EStrafeDirection__None         = 0,
	EStrafeDirection__Left         = 1,
	EStrafeDirection__Right        = 2,
	EStrafeDirection__EStrafeDirection_MAX = 3
};


// Enum TBL.EAiCombatStrafing
enum class EAiCombatStrafing : uint8_t
{
	EAiCombatStrafing__SafeStrafe  = 0,
	EAiCombatStrafing__BypassParry = 1,
	EAiCombatStrafing__CirclyStrafe = 2,
	EAiCombatStrafing__EAiCombatStrafing_MAX = 3
};


// Enum TBL.EAiCombatDistance
enum class EAiCombatDistance : uint8_t
{
	EAiCombatDistance__Facehug     = 0,
	EAiCombatDistance__MyAttackRange = 1,
	EAiCombatDistance__OutsideEnemyAttackRange = 2,
	EAiCombatDistance__StandoffRange = 3,
	EAiCombatDistance__EAiCombatDistance_MAX = 4
};


// Enum TBL.EAiMeleeCombatMode
enum class EAiMeleeCombatMode : uint8_t
{
	EAiMeleeCombatMode__OutOfCombat = 0,
	EAiMeleeCombatMode__Engaging   = 1,
	EAiMeleeCombatMode__InCombat   = 2,
	EAiMeleeCombatMode__Disengaging = 3,
	EAiMeleeCombatMode__EAiMeleeCombatMode_MAX = 4
};


// Enum TBL.EAnimGraphBranch01
enum class EAnimGraphBranch01 : uint8_t
{
	EAnimGraphBranch01__Default    = 0,
	EAnimGraphBranch01__IsDeath    = 1,
	EAnimGraphBranch01__IsMiniAnim = 2,
	EAnimGraphBranch01__IsServer   = 3,
	EAnimGraphBranch01__IsSimulatedCloth = 4,
	EAnimGraphBranch01__EAnimGraphBranch01_MAX = 5
};


// Enum TBL.EMeshVisibilityFlag
enum class EMeshVisibilityFlag : uint8_t
{
	EMeshVisibilityFlag__None      = 0,
	EMeshVisibilityFlag__SpawnIn   = 1,
	EMeshVisibilityFlag__Cinematic = 2,
	EMeshVisibilityFlag__MAX       = 3
};


// Enum TBL.EAutorunEndOfSplineAction
enum class EAutorunEndOfSplineAction : uint8_t
{
	EAutorunEndOfSplineAction__RestoreFullControl = 0,
	EAutorunEndOfSplineAction__Nothing = 1,
	EAutorunEndOfSplineAction__EAutorunEndOfSplineAction_MAX = 2
};


// Enum TBL.EAutorunMovementMode
enum class EAutorunMovementMode : uint8_t
{
	EAutorunMovementMode__Invalid  = 0,
	EAutorunMovementMode__Stop     = 1,
	EAutorunMovementMode__Sprint   = 2,
	EAutorunMovementMode__Run      = 3,
	EAutorunMovementMode__Walk     = 4,
	EAutorunMovementMode__Crouchwalk = 5,
	EAutorunMovementMode__EAutorunMovementMode_MAX = 6
};


// Enum TBL.EAutorunStartSpeed
enum class EAutorunStartSpeed : uint8_t
{
	EAutorunStartSpeed__StartStopped = 0,
	EAutorunStartSpeed__StartFullSpeed = 1,
	EAutorunStartSpeed__EAutorunStartSpeed_MAX = 2
};


// Enum TBL.EStartMovementResult
enum class EStartMovementResult : uint8_t
{
	EStartMovementResult__Invalid  = 0,
	EStartMovementResult__NoSequence = 1,
	EStartMovementResult__CanExecuteFailed = 2,
	EStartMovementResult__LowPriority = 3,
	EStartMovementResult__Success  = 4,
	EStartMovementResult__EStartMovementResult_MAX = 5
};


// Enum TBL.ESyncMovementType
enum class ESyncMovementType : uint8_t
{
	ESyncMovementType__Invalid     = 0,
	ESyncMovementType__StartMovement = 1,
	ESyncMovementType__StartForcedAutorun = 2,
	ESyncMovementType__SetAutorunMovementMode = 3,
	ESyncMovementType__StopForcedAutorun = 4,
	ESyncMovementType__CinematicRestrictControl = 5,
	ESyncMovementType__CinematicAllowControl = 6,
	ESyncMovementType__Downed      = 7,
	ESyncMovementType__Revive      = 8,
	ESyncMovementType__PlaySpawnAnimation = 9,
	ESyncMovementType__InitiateAbility = 10,
	ESyncMovementType__HitWorld    = 11,
	ESyncMovementType__TrapEvent   = 12,
	ESyncMovementType__StartAttack = 13,
	ESyncMovementType__StartHeavyAttack = 14,
	ESyncMovementType__StartFire   = 15,
	ESyncMovementType__CancelAttack = 16,
	ESyncMovementType__ChargeStab  = 17,
	ESyncMovementType__ReleaseStab = 18,
	ESyncMovementType__GetUp       = 19,
	ESyncMovementType__ManualReload = 20,
	ESyncMovementType__DisableAttackRootMotion = 21,
	ESyncMovementType__StartSpawnBonus = 22,
	ESyncMovementType__MountLadder = 23,
	ESyncMovementType__PlayLadderAnimation = 24,
	ESyncMovementType__EndLadderMovement = 25,
	ESyncMovementType__HorseToHorseBump = 26,
	ESyncMovementType__HorseToWorldBump = 27,
	ESyncMovementType__MaintainImpactSpeed = 28,
	ESyncMovementType__ESyncMovementType_MAX = 29
};


// Enum TBL.ECustomMovementMode
enum class ECustomMovementMode : uint8_t
{
	MOVECUSTOM_None                = 0,
	MOVECUSTOM_Ladder              = 1,
	MOVECUSTOM_Attached            = 2,
	MOVECUSTOM_InterpOnDismount    = 3,
	MOVECUSTOM_FollowGround        = 4,
	MOVECUSTOM_Formation           = 5,
	MOVECUSTOM_Spawn               = 6,
	MOVECUSTOM_CarriedAttached     = 7,
	MOVECUSTOM_MAX                 = 8
};


// Enum TBL.EDialogTypes
enum class EDialogTypes : uint8_t
{
	EDialogTypes__None             = 0,
	EDialogTypes__Ok               = 1,
	EDialogTypes__Cancel           = 2,
	EDialogTypes__OkCancel         = 3,
	EDialogTypes__YesNo            = 4,
	EDialogTypes__Exit             = 5,
	EDialogTypes__EDialogTypes_MAX = 6
};


// Enum TBL.EDialogButtons
enum class EDialogButtons : uint8_t
{
	EDialogButtons__None           = 0,
	EDialogButtons__Ok             = 1,
	EDialogButtons__Cancel         = 2,
	EDialogButtons__Yes            = 3,
	EDialogButtons__No             = 4,
	EDialogButtons__Exit           = 5,
	EDialogButtons__EDialogButtons_MAX = 6
};


// Enum TBL.EPostMatchMatchmakingMode
enum class EPostMatchMatchmakingMode : uint8_t
{
	EPostMatchMatchmakingMode__None = 0,
	EPostMatchMatchmakingMode__MigrateToNewServer = 1,
	EPostMatchMatchmakingMode__MatchmakeToNewServer = 2,
	EPostMatchMatchmakingMode__EPostMatchMatchmakingMode_MAX = 3
};


// Enum TBL.EPendingSpawnResult
enum class EPendingSpawnResult : uint8_t
{
	EPendingSpawnResult__Success   = 0,
	EPendingSpawnResult__NotReady  = 1,
	EPendingSpawnResult__Invalid   = 2,
	EPendingSpawnResult__EPendingSpawnResult_MAX = 3
};


// Enum TBL.EMatchmakingQueueCategory
enum class EMatchmakingQueueCategory : uint8_t
{
	EMatchmakingQueueCategory__Normal = 0,
	EMatchmakingQueueCategory__Competitive = 1,
	EMatchmakingQueueCategory__Ranked = 2,
	EMatchmakingQueueCategory__EMatchmakingQueueCategory_MAX = 3
};


// Enum TBL.EMatchmakingQueueType
enum class EMatchmakingQueueType : uint8_t
{
	EMatchmakingQueueType__Standalone = 0,
	EMatchmakingQueueType__Quickplay = 1,
	EMatchmakingQueueType__QuickplayAndStandalone = 2,
	EMatchmakingQueueType__EMatchmakingQueueType_MAX = 3
};


// Enum TBL.EGameUpdateType
enum class EGameUpdateType : uint8_t
{
	EGameUpdateType__Invalid       = 0,
	EGameUpdateType__Hotfix        = 1,
	EGameUpdateType__Patch         = 2,
	EGameUpdateType__ContentUpdate = 3,
	EGameUpdateType__Expansion     = 4,
	EGameUpdateType__EGameUpdateType_MAX = 5
};


// Enum TBL.EXESSOperatingMode
enum class EXESSOperatingMode : uint8_t
{
	EXESSOperatingMode__Off        = 0,
	EXESSOperatingMode__UltraPerformance = 1,
	EXESSOperatingMode__Performance = 2,
	EXESSOperatingMode__Balanced   = 3,
	EXESSOperatingMode__Quality    = 4,
	EXESSOperatingMode__UltraQuality = 5,
	EXESSOperatingMode__EXESSOperatingMode_MAX = 6
};


// Enum TBL.EDLSSOperatingMode
enum class EDLSSOperatingMode : uint8_t
{
	EDLSSOperatingMode__Off        = 0,
	EDLSSOperatingMode__Performance = 1,
	EDLSSOperatingMode__Balanced   = 2,
	EDLSSOperatingMode__Quality    = 3,
	EDLSSOperatingMode__EDLSSOperatingMode_MAX = 4
};


// Enum TBL.EAllyMarkerLevel
enum class EAllyMarkerLevel : uint8_t
{
	EAllyMarkerLevel__All          = 0,
	EAllyMarkerLevel__AllHumanPlayers = 1,
	EAllyMarkerLevel__FriendsAndParty = 2,
	EAllyMarkerLevel__None         = 3,
	EAllyMarkerLevel__EAllyMarkerLevel_MAX = 4
};


// Enum TBL.EHapticsVolumeSettings
enum class EHapticsVolumeSettings : uint8_t
{
	EHapticsVolumeSettings__HIGH_VOLUME = 0,
	EHapticsVolumeSettings__LOW_VOLUME = 1,
	EHapticsVolumeSettings__OFF    = 2,
	EHapticsVolumeSettings__EHapticsVolumeSettings_MAX = 3
};


// Enum TBL.EProConsoleOption
enum class EProConsoleOption : uint8_t
{
	EProConsoleOption__Balanced    = 0,
	EProConsoleOption__Framerate   = 1,
	EProConsoleOption__Fidelity    = 2,
	EProConsoleOption__EProConsoleOption_MAX = 3
};


// Enum TBL.EGamepadLookResponseCurveStyle
enum class EGamepadLookResponseCurveStyle : uint8_t
{
	EGamepadLookResponseCurveStyle__Standard = 0,
	EGamepadLookResponseCurveStyle__Linear = 1,
	EGamepadLookResponseCurveStyle__Exponential = 2,
	EGamepadLookResponseCurveStyle__SCurve = 3,
	EGamepadLookResponseCurveStyle__EGamepadLookResponseCurveStyle_MAX = 4
};


// Enum TBL.ECameraStyle
enum class ECameraStyle : uint8_t
{
	ECameraStyle__FirstPerson      = 0,
	ECameraStyle__ThirdPerson      = 1,
	ECameraStyle__ECameraStyle_MAX = 2
};


// Enum TBL.EKillFeedFilter
enum class EKillFeedFilter : uint8_t
{
	EKillFeedFilter__AllMessages   = 0,
	EKillFeedFilter__PersonalMessages = 1,
	EKillFeedFilter__NoMessages    = 2,
	EKillFeedFilter__EKillFeedFilter_MAX = 3
};


// Enum TBL.EGoreLevel
enum class EGoreLevel : uint8_t
{
	EGoreLevel__Full               = 0,
	EGoreLevel__NoDismemberment    = 1,
	EGoreLevel__None               = 2,
	EGoreLevel__EGoreLevel_MAX     = 3
};


// Enum TBL.eHudDrawFlags
enum class EeHudDrawFlags : uint8_t
{
	RadialEmote                    = 0,
	eHudDrawFlags_MAX              = 1
};


// Enum TBL.EGameplayEvent
enum class EGameplayEvent : uint8_t
{
	EGameplayEvent__PlayerRevived  = 0,
	EGameplayEvent__RevivedPlayer  = 1,
	EGameplayEvent__EGameplayEvent_MAX = 2
};


// Enum TBL.ESlateInputMode
enum class ESlateInputMode : uint8_t
{
	ESlateInputMode__GameOnly      = 0,
	ESlateInputMode__GameAndUI     = 1,
	ESlateInputMode__UIOnly        = 2,
	ESlateInputMode__Unknown       = 3,
	ESlateInputMode__ESlateInputMode_MAX = 4
};


// Enum TBL.EButtonAnimationStyle_deprecated
enum class EButtonAnimationStyle_deprecated : uint8_t
{
	EButtonAnimationStyle_deprecated__Normal = 0,
	EButtonAnimationStyle_deprecated__Click = 1,
	EButtonAnimationStyle_deprecated__Hovered = 2,
	EButtonAnimationStyle_deprecated__Leave = 3,
	EButtonAnimationStyle_deprecated__HoveredSelected = 4,
	EButtonAnimationStyle_deprecated__LeaveSelected = 5,
	EButtonAnimationStyle_deprecated__EButtonAnimationStyle_MAX = 6
};


// Enum TBL.ECharacterPieceType
enum class ECharacterPieceType : uint8_t
{
	ECharacterPieceType__Torso     = 0,
	ECharacterPieceType__Head      = 1,
	ECharacterPieceType__Helm      = 2,
	ECharacterPieceType__Legs      = 3,
	ECharacterPieceType__Gore      = 4,
	ECharacterPieceType__Hair      = 5,
	ECharacterPieceType__Beard     = 6,
	ECharacterPieceType__Max       = 7,
	ECharacterPieceType__Invalid   = 8
};


// Enum TBL.ETextureType
enum class ETextureType : uint8_t
{
	ETextureType__Color            = 0,
	ETextureType__Mask             = 1,
	ETextureType__Normal           = 2,
	ETextureType__Utility          = 3,
	ETextureType__Heraldry         = 4,
	ETextureType__Max              = 5
};


// Enum TBL.ETBLLinkBehavior
enum class ETBLLinkBehavior : uint8_t
{
	ETBLLinkBehavior__Walk         = 0,
	ETBLLinkBehavior__Jump         = 1,
	ETBLLinkBehavior__ETBLLinkBehavior_MAX = 2
};


// Enum TBL.EDuplicationFlags
enum class EDuplicationFlags : uint8_t
{
	EDuplicationFlags__None        = 0,
	EDuplicationFlags__DeepObjectArrays = 1,
	EDuplicationFlags__Client      = 2,
	EDuplicationFlags__EDuplicationFlags_MAX = 3
};


// Enum TBL.ESteamAvatarSize
enum class ESteamAvatarSize : uint8_t
{
	ESteamAvatarSize__Small        = 0,
	ESteamAvatarSize__Medium       = 1,
	ESteamAvatarSize__Large        = 2,
	ESteamAvatarSize__ESteamAvatarSize_MAX = 3
};


// Enum TBL.EKeybindCategory
enum class EKeybindCategory : uint8_t
{
	EKeybindCategory__Combat       = 0,
	EKeybindCategory__Movement     = 1,
	EKeybindCategory__General      = 2,
	EKeybindCategory__Expression   = 3,
	EKeybindCategory__Communication = 4,
	EKeybindCategory__Inventory    = 5,
	EKeybindCategory__Interface    = 6,
	EKeybindCategory__Spectator    = 7,
	EKeybindCategory__Debug        = 8,
	EKeybindCategory__MAX          = 9
};


// Enum TBL.EPlayerReportCategory
enum class EPlayerReportCategory : uint8_t
{
	EPlayerReportCategory__Cheating = 0,
	EPlayerReportCategory__Greifing = 1,
	EPlayerReportCategory__NegativeBehavior = 2,
	EPlayerReportCategory__Harrassment = 3,
	EPlayerReportCategory__EPlayerReportCategory_MAX = 4
};


// Enum TBL.ETBLPS5HapticType
enum class ETBLPS5HapticType : uint8_t
{
	ETBLPS5HapticType__Pad_Rumble  = 0,
	ETBLPS5HapticType__Trigger_Effect = 1,
	ETBLPS5HapticType__Pad_And_Trigger = 2,
	ETBLPS5HapticType__ETBLPS5HapticType_MAX = 3
};


// Enum TBL.ETBLPS5AttackType
enum class ETBLPS5AttackType : uint8_t
{
	ETBLPS5AttackType__Character_Damage = 0,
	ETBLPS5AttackType__Blocked_Attack = 1,
	ETBLPS5AttackType__Environment_Attack = 2,
	ETBLPS5AttackType__ETBLPS5AttackType_MAX = 3
};


// Enum TBL.ETBLPS5DamageDirection
enum class ETBLPS5DamageDirection : uint8_t
{
	ETBLPS5DamageDirection__INVALID = 0,
	ETBLPS5DamageDirection__Left_Haptic = 1,
	ETBLPS5DamageDirection__Right_Haptic = 2,
	ETBLPS5DamageDirection__Forward = 3,
	ETBLPS5DamageDirection__MAX    = 4
};


// Enum TBL.ETBLPS5TriggerMode
enum class ETBLPS5TriggerMode : uint8_t
{
	ETBLPS5TriggerMode__Off        = 0,
	ETBLPS5TriggerMode__Weapon_Mode = 1,
	ETBLPS5TriggerMode__Vibration_Mode = 2,
	ETBLPS5TriggerMode__Feedback_Mode = 3,
	ETBLPS5TriggerMode__ETBLPS5TriggerMode_MAX = 4
};


// Enum TBL.ETBLPS5TriggerMask
enum class ETBLPS5TriggerMask : uint8_t
{
	ETBLPS5TriggerMask__Left_Trigger = 0,
	ETBLPS5TriggerMask__Right_Trigger = 1,
	ETBLPS5TriggerMask__ETBLPS5TriggerMask_MAX = 2
};


// Enum TBL.EClassRepNodeMapping
enum class EClassRepNodeMapping : uint8_t
{
	EClassRepNodeMapping__Default  = 0,
	EClassRepNodeMapping__NotRouted = 1,
	EClassRepNodeMapping__RelevantAllConnections = 2,
	EClassRepNodeMapping__RelevantAllConnectionsSlow = 3,
	EClassRepNodeMapping__LowFreq_Spatialize_Static = 4,
	EClassRepNodeMapping__LowFreq_Spatialize_Dynamic = 5,
	EClassRepNodeMapping__LowFreq_Spatialize_Dormancy = 6,
	EClassRepNodeMapping__HighFreq_Spatialize_Static = 7,
	EClassRepNodeMapping__HighFreq_Spatialize_Dynamic = 8,
	EClassRepNodeMapping__HighFreq_Spatialize_Dormancy = 9,
	EClassRepNodeMapping__MediumFreq_Spatialize_Static = 10,
	EClassRepNodeMapping__MediumFreq_Spatialize_Dynamic = 11,
	EClassRepNodeMapping__MediumFreq_Spatialize_Dynamic_NoDynamicSpatialization = 12,
	EClassRepNodeMapping__MediumFreq_Spatialize_Dormancy = 13,
	EClassRepNodeMapping__EClassRepNodeMapping_MAX = 14
};


// Enum TBL.EClassSpatialNodeMapping
enum class EClassSpatialNodeMapping : uint8_t
{
	EClassSpatialNodeMapping__LowFreq = 0,
	EClassSpatialNodeMapping__HighFreq = 1,
	EClassSpatialNodeMapping__LowFreqWithFastPath = 2,
	EClassSpatialNodeMapping__HighFreqWithFastPath = 3,
	EClassSpatialNodeMapping__MediumFreq = 4,
	EClassSpatialNodeMapping__MediumFreqNoDynamic = 5,
	EClassSpatialNodeMapping__EClassSpatialNodeMapping_MAX = 6
};


// Enum TBL.ESlackMessageColor
enum class ESlackMessageColor : uint8_t
{
	ESlackMessageColor__None       = 0,
	ESlackMessageColor__Good       = 1,
	ESlackMessageColor__Warning    = 2,
	ESlackMessageColor__Danger     = 3,
	ESlackMessageColor__ESlackMessageColor_MAX = 4
};


// Enum TBL.EInterpolateOverTimeAction
enum class EInterpolateOverTimeAction : uint8_t
{
	EInterpolateOverTimeAction__PlayFromStart = 0,
	EInterpolateOverTimeAction__Pause = 1,
	EInterpolateOverTimeAction__Resume = 2,
	EInterpolateOverTimeAction__Reset = 3,
	EInterpolateOverTimeAction__Reverse = 4,
	EInterpolateOverTimeAction__EInterpolateOverTimeAction_MAX = 5
};


// Enum TBL.ETeamPlayerStartAction
enum class ETeamPlayerStartAction : uint8_t
{
	ETeamPlayerStartAction__Add    = 0,
	ETeamPlayerStartAction__Remove = 1,
	ETeamPlayerStartAction__ETeamPlayerStartAction_MAX = 2
};


// Enum TBL.ETitleScreenMode
enum class ETitleScreenMode : uint8_t
{
	ETitleScreenMode__Start        = 0,
	ETitleScreenMode__Welcome      = 1,
	ETitleScreenMode__WelcomeWithOffline = 2,
	ETitleScreenMode__CheckMaintenance = 3,
	ETitleScreenMode__LoginPlatform = 4,
	ETitleScreenMode__LoginPlatformAuthCode = 5,
	ETitleScreenMode__PrivilegeCheck = 6,
	ETitleScreenMode__LoginPlayFab = 7,
	ETitleScreenMode__TOS          = 8,
	ETitleScreenMode__End          = 9,
	ETitleScreenMode__PlayTutorialPrompt = 10,
	ETitleScreenMode__OwnershipFailed = 11,
	ETitleScreenMode__ETitleScreenMode_MAX = 12
};


// Enum TBL.EWeaponCategoryTypes
enum class EWeaponCategoryTypes : uint8_t
{
	EWeaponCategoryTypes__None     = 0,
	EWeaponCategoryTypes__Ranged   = 1,
	EWeaponCategoryTypes__TwoHanded = 2,
	EWeaponCategoryTypes__OneHanded = 3,
	EWeaponCategoryTypes__Thrown   = 4,
	EWeaponCategoryTypes__Novelty  = 5,
	EWeaponCategoryTypes__Shield   = 6,
	EWeaponCategoryTypes__EWeaponCategoryTypes_MAX = 7
};


// Enum TBL.EFrameThrottleBranch
enum class EFrameThrottleBranch : uint8_t
{
	EFrameThrottleBranch__Allowed  = 0,
	EFrameThrottleBranch__NotAllowed = 1,
	EFrameThrottleBranch__EFrameThrottleBranch_MAX = 2
};


// Enum TBL.EPerkType
enum class EPerkType : uint8_t
{
	EPerkType__None                = 0,
	EPerkType__Fighter             = 1,
	EPerkType__Helper              = 2,
	EPerkType__Agile               = 3,
	EPerkType__Elusive             = 4,
	EPerkType__Eager               = 5,
	EPerkType__Focus               = 6,
	EPerkType__Tackle              = 7,
	EPerkType__Heavy               = 8,
	EPerkType__Sneaky              = 9,
	EPerkType__Sapper              = 10,
	EPerkType__LeapingStrike       = 11,
	EPerkType__SprintCharge        = 12,
	EPerkType__Headhunter          = 13,
	EPerkType__Charger             = 14,
	EPerkType__Medic               = 15,
	EPerkType__Unbreakable         = 16,
	EPerkType__Murderer            = 17,
	EPerkType__RangedHeadhunter    = 18,
	EPerkType__Sniper              = 19,
	EPerkType__Cleaver             = 20,
	EPerkType__EPerkType_MAX       = 21
};


// Enum TBL.EConsolePresenceStatus
enum class EConsolePresenceStatus : uint8_t
{
	EConsolePresenceStatus__AT_MENU = 0,
	EConsolePresenceStatus__IN_MATCH = 1,
	EConsolePresenceStatus__IN_CUSTOMMATCH = 2,
	EConsolePresenceStatus__EConsolePresenceStatus_MAX = 3
};


// Enum TBL.EHardwarePlatform
enum class EHardwarePlatform : uint8_t
{
	EHardwarePlatform__Platform_Windows = 0,
	EHardwarePlatform__Platform_Linux = 1,
	EHardwarePlatform__Platform_XboxOne = 2,
	EHardwarePlatform__Platform_PS4 = 3,
	EHardwarePlatform__Platform_XSX = 4,
	EHardwarePlatform__Platform_PS5 = 5,
	EHardwarePlatform__Platform_Unknown = 6,
	EHardwarePlatform__Platform_MAX = 7
};


// Enum TBL.ETrapEventResult
enum class ETrapEventResult : uint8_t
{
	ETrapEventResult__None         = 0,
	ETrapEventResult__Damage       = 1,
	ETrapEventResult__Stagger      = 2,
	ETrapEventResult__Knockdown    = 3,
	ETrapEventResult__Kill         = 4,
	ETrapEventResult__ETrapEventResult_MAX = 5
};


// Enum TBL.EProjectileSweepType
enum class EProjectileSweepType : uint8_t
{
	EProjectileSweepType__Default  = 0,
	EProjectileSweepType__SweepForPawns = 1,
	EProjectileSweepType__SpectatorCamera = 2,
	EProjectileSweepType__EProjectileSweepType_MAX = 3
};


// Enum TBL.EProjectileSpawnType
enum class EProjectileSpawnType : uint8_t
{
	EProjectileSpawnType__None     = 0,
	EProjectileSpawnType__UseInventoryItem = 1,
	EProjectileSpawnType__UseQuickThrowItem = 2,
	EProjectileSpawnType__UseAmmo  = 3,
	EProjectileSpawnType__EProjectileSpawnType_MAX = 4
};


// Enum TBL.EInteractCombatState
enum class EInteractCombatState : uint8_t
{
	EInteractCombatState__Interact = 0,
	EInteractCombatState__Loot     = 1,
	EInteractCombatState__EInteractCombatState_MAX = 2
};


// Enum TBL.EAimPenaltyType
enum class EAimPenaltyType : uint8_t
{
	EAimPenaltyType__MovementState = 0,
	EAimPenaltyType__Stamina       = 1,
	EAimPenaltyType__DrawTime      = 2,
	EAimPenaltyType__MAX           = 3
};


// Enum TBL.EStageActorActions
enum class EStageActorActions : uint8_t
{
	EStageActorActions__AwardScore = 0,
	EStageActorActions__ApplyBonusTime = 1,
	EStageActorActions__EStageActorActions_MAX = 2
};


// Enum TBL.EScaleDirection
enum class EScaleDirection : uint8_t
{
	EScaleDirection__CharacterRotation = 0,
	EScaleDirection__HitDirection  = 1,
	EScaleDirection__EScaleDirection_MAX = 2
};


// Enum TBL.ECharacterToControl
enum class ECharacterToControl : uint8_t
{
	ECharacterToControl__Initiator = 0,
	ECharacterToControl__Target    = 1,
	ECharacterToControl__Both      = 2,
	ECharacterToControl__ECharacterToControl_MAX = 3
};


// Enum TBL.ECharacterControlEvent
enum class ECharacterControlEvent : uint8_t
{
	ECharacterControlEvent__OnRelease = 0,
	ECharacterControlEvent__OnDamage = 1,
	ECharacterControlEvent__OnBlocked = 2,
	ECharacterControlEvent__OnDamageOrBlocked = 3,
	ECharacterControlEvent__ECharacterControlEvent_MAX = 4
};


// Enum TBL.ECharacterControlStat
enum class ECharacterControlStat : uint8_t
{
	ECharacterControlStat__MovementSpeed = 0,
	ECharacterControlStat__SprintBaseSpeed = 1,
	ECharacterControlStat__StrafeSpeedModifier = 2,
	ECharacterControlStat__ForwardSpeedModifier = 3,
	ECharacterControlStat__BackSpeedModifier = 4,
	ECharacterControlStat__HorizontalTurnRatePercent = 5,
	ECharacterControlStat__VerticalTurnRatePercent = 6,
	ECharacterControlStat__LeftTurnRatePercent = 7,
	ECharacterControlStat__RightTurnRatePercent = 8,
	ECharacterControlStat__UpTurnRatePercent = 9,
	ECharacterControlStat__DownTurnRatePercent = 10,
	ECharacterControlStat__ReverseTurnRatePercent = 11,
	ECharacterControlStat__MAX     = 12
};


// Enum TBL.ELockMeshAngle
enum class ELockMeshAngle : uint8_t
{
	ELockMeshAngle__UseCharacterRotation = 0,
	ELockMeshAngle__UseHorseRotation = 1,
	ELockMeshAngle__ELockMeshAngle_MAX = 2
};


// Enum TBL.ETeamBalancePlayerSelect
enum class ETeamBalancePlayerSelect : uint8_t
{
	ETeamBalancePlayerSelect__Random = 0,
	ETeamBalancePlayerSelect__HighScore = 1,
	ETeamBalancePlayerSelect__MediumScore = 2,
	ETeamBalancePlayerSelect__LowScore = 3,
	ETeamBalancePlayerSelect__RecentJoin = 4,
	ETeamBalancePlayerSelect__None = 5,
	ETeamBalancePlayerSelect__ETeamBalancePlayerSelect_MAX = 6
};


// Enum TBL.EHintInputType
enum class EHintInputType : uint8_t
{
	EHintInputType__Any            = 0,
	EHintInputType__PC_Only        = 1,
	EHintInputType__Gamepad_Only   = 2,
	EHintInputType__EHintInputType_MAX = 3
};


// Enum TBL.EHintType
enum class EHintType : uint8_t
{
	EHintType__Any                 = 0,
	EHintType__General             = 1,
	EHintType__Gameplay            = 2,
	EHintType__Frontend            = 3,
	EHintType__Specific            = 4,
	EHintType__EHintType_MAX       = 5
};


// Enum TBL.EScoreModifyType
enum class EScoreModifyType : uint8_t
{
	EScoreModifyType__Delta        = 0,
	EScoreModifyType__Absolute     = 1,
	EScoreModifyType__EScoreModifyType_MAX = 2
};


// Enum TBL.EObjectivePointCategory
enum class EObjectivePointCategory : uint8_t
{
	EObjectivePointCategory__None  = 0,
	EObjectivePointCategory__Glyph = 1,
	EObjectivePointCategory__Ark   = 2,
	EObjectivePointCategory__DjinnLamp = 3,
	EObjectivePointCategory__DemiGlyph = 4,
	EObjectivePointCategory__PlayerKill = 5,
	EObjectivePointCategory__EObjectivePointCategory_MAX = 6
};


// Enum TBL.EAbilityDescriptorCategory
enum class EAbilityDescriptorCategory : uint8_t
{
	EAbilityDescriptorCategory__None = 0,
	EAbilityDescriptorCategory__Damage = 1,
	EAbilityDescriptorCategory__DamageType = 2,
	EAbilityDescriptorCategory__CastTime = 3,
	EAbilityDescriptorCategory__CooldownTime = 4,
	EAbilityDescriptorCategory__AmmoCount = 5,
	EAbilityDescriptorCategory__MAX = 6
};


// Enum TBL.EBuildFinality
enum class EBuildFinality : uint8_t
{
	EBuildFinality__Development    = 0,
	EBuildFinality__PublicTest     = 1,
	EBuildFinality__Final          = 2,
	EBuildFinality__EBuildFinality_MAX = 3
};


// Enum TBL.EClosedCaptionType
enum class EClosedCaptionType : uint8_t
{
	EClosedCaptionType__None       = 0,
	EClosedCaptionType__ManualVoiceOver = 1,
	EClosedCaptionType__AutoVoiceOver = 2,
	EClosedCaptionType__MAX        = 3
};


// Enum TBL.ECaptureVolumeControlType
enum class ECaptureVolumeControlType : uint8_t
{
	ECaptureVolumeControlType__TeamWithGreatestNumbers = 0,
	ECaptureVolumeControlType__OneEnemyCanBlock = 1,
	ECaptureVolumeControlType__NeverBlock = 2,
	ECaptureVolumeControlType__ECaptureVolumeControlType_MAX = 3
};


// Enum TBL.EOnlineItemUnlockType
enum class EOnlineItemUnlockType : uint8_t
{
	EOnlineItemUnlockType__GrantedByProgression = 0,
	EOnlineItemUnlockType__GrantedBySpecialEdition = 1,
	EOnlineItemUnlockType__GrantedByPreOrder = 2,
	EOnlineItemUnlockType__GrantedByPlaytimeDrop = 3,
	EOnlineItemUnlockType__EOnlineItemUnlockType_MAX = 4
};


// Enum TBL.EAbilitiesMovementSequence
enum class EAbilitiesMovementSequence : uint8_t
{
	EAbilitiesMovementSequence__WindupLunge = 0,
	EAbilitiesMovementSequence__Lunge = 1,
	EAbilitiesMovementSequence__LungeLeft = 2,
	EAbilitiesMovementSequence__LungeRight = 3,
	EAbilitiesMovementSequence__HorseLunge = 4,
	EAbilitiesMovementSequence__Knockback = 5,
	EAbilitiesMovementSequence__ParrySuccess = 6,
	EAbilitiesMovementSequence__Blocked = 7,
	EAbilitiesMovementSequence__EAbilitiesMovementSequence_MAX = 8
};


// Enum TBL.ELobbyDistance
enum class ELobbyDistance : uint8_t
{
	ELobbyDistance__EDIST_Near     = 0,
	ELobbyDistance__EDIST_Default  = 1,
	ELobbyDistance__EDIST_Far      = 2,
	ELobbyDistance__EDIST_Worldwide = 3,
	ELobbyDistance__EDIST_MAX      = 4
};


// Enum TBL.EPlaylistCategory
enum class EPlaylistCategory : uint8_t
{
	EPlaylistCategory__NOT_SHOWN   = 0,
	EPlaylistCategory__OBJECTIVE   = 1,
	EPlaylistCategory__ARENA       = 2,
	EPlaylistCategory__EVENT       = 3,
	EPlaylistCategory__CUSTOM_ONLY = 4,
	EPlaylistCategory__TUTORIAL    = 5,
	EPlaylistCategory__TEAM_DEATHMATCH = 6,
	EPlaylistCategory__EPlaylistCategory_MAX = 7
};


// Enum TBL.EServerType
enum class EServerType : uint8_t
{
	EServerType__None              = 0,
	EServerType__Offline           = 1,
	EServerType__Online            = 2,
	EServerType__Listen            = 3,
	EServerType__MAX               = 4
};


// Enum TBL.EGameModeType
enum class EGameModeType : uint8_t
{
	EGameModeType__TeamObjective   = 0,
	EGameModeType__TeamDeathMatch  = 1,
	EGameModeType__FreeForAll      = 2,
	EGameModeType__Symmetrical     = 3,
	EGameModeType__LastTeamStanding = 4,
	EGameModeType__CapturePoint    = 5,
	EGameModeType__Pushable        = 6,
	EGameModeType__CaptureTheFlag  = 7,
	EGameModeType__Arena           = 8,
	EGameModeType__Scenario        = 9,
	EGameModeType__Brawl           = 10,
	EGameModeType__MAX             = 11
};


// Enum TBL.EStopTimerPolicy
enum class EStopTimerPolicy : uint8_t
{
	EStopTimerPolicy__OnNextAbility = 0,
	EStopTimerPolicy__OnGameplayComplete = 1,
	EStopTimerPolicy__OnTimeOut    = 2,
	EStopTimerPolicy__EStopTimerPolicy_MAX = 3
};


// Enum TBL.EDelegateRemovalPolicy
enum class EDelegateRemovalPolicy : uint8_t
{
	EDelegateRemovalPolicy__OnNextAbility = 0,
	EDelegateRemovalPolicy__OnGameplayComplete = 1,
	EDelegateRemovalPolicy__OnTimeOut = 2,
	EDelegateRemovalPolicy__EDelegateRemovalPolicy_MAX = 3
};


// Enum TBL.EObjectiveHudType
enum class EObjectiveHudType : uint8_t
{
	EObjectiveHudType__None        = 0,
	EObjectiveHudType__PushBomb    = 1,
	EObjectiveHudType__TeamScoreVictory = 2,
	EObjectiveHudType__ScoreTicks  = 3,
	EObjectiveHudType__MAX         = 4
};


// Enum TBL.EObjectiveProgressDisplay
enum class EObjectiveProgressDisplay : uint8_t
{
	EObjectiveProgressDisplay__SingleTeamBar = 0,
	EObjectiveProgressDisplay__TwoTeamBars = 1,
	EObjectiveProgressDisplay__PushBar = 2,
	EObjectiveProgressDisplay__EObjectiveProgressDisplay_MAX = 3
};


// Enum TBL.EBlueprintOnlinePresenceState
enum class EBlueprintOnlinePresenceState : uint8_t
{
	EBlueprintOnlinePresenceState__Online = 0,
	EBlueprintOnlinePresenceState__Offline = 1,
	EBlueprintOnlinePresenceState__Away = 2,
	EBlueprintOnlinePresenceState__ExtendedAway = 3,
	EBlueprintOnlinePresenceState__DoNotDisturb = 4,
	EBlueprintOnlinePresenceState__Chat = 5,
	EBlueprintOnlinePresenceState__NotFriend = 6,
	EBlueprintOnlinePresenceState__InSameLobby = 7,
	EBlueprintOnlinePresenceState__EBlueprintOnlinePresenceState_MAX = 8
};


// Enum TBL.EScoreEventType
enum class EScoreEventType : uint8_t
{
	EScoreEventType__Invalid       = 0,
	EScoreEventType__MatchWinBonus = 1,
	EScoreEventType__MatchLossBonus = 2,
	EScoreEventType__MatchTiedBonus = 3,
	EScoreEventType__ObjStageCompleteBonus = 4,
	EScoreEventType__ObjCaptureZoneBonus = 5,
	EScoreEventType__ObjPushableBonus = 6,
	EScoreEventType__ObjBombPlantBonus = 7,
	EScoreEventType__StatKillBonus = 8,
	EScoreEventType__StatAssistBonus = 9,
	EScoreEventType__StatAssistedSuicide = 10,
	EScoreEventType__StatSuicideBonus = 11,
	EScoreEventType__StreakSpreeBonus = 12,
	EScoreEventType__StreakRampageBonus = 13,
	EScoreEventType__StreakDominatingBonus = 14,
	EScoreEventType__StreakUnstoppableBonus = 15,
	EScoreEventType__StreakGodlikeBonus = 16,
	EScoreEventType__StreakWickedSickBonus = 17,
	EScoreEventType__MKDoubleBonus = 18,
	EScoreEventType__MKTripleBonus = 19,
	EScoreEventType__MKMegaBonus   = 20,
	EScoreEventType__MKUltraBonus  = 21,
	EScoreEventType__MKMonsterBonus = 22,
	EScoreEventType__MKLudicrousBonus = 23,
	EScoreEventType__MKHolyBonus   = 24,
	EScoreEventType__KMOffenseBonus = 25,
	EScoreEventType__KMDefenseBonus = 26,
	EScoreEventType__KMFirstBloodBonus = 27,
	EScoreEventType__KMHeadshotBonus = 28,
	EScoreEventType__KMComebackBonus = 29,
	EScoreEventType__KMExecutionBonus = 30,
	EScoreEventType__KMRescueBonus = 31,
	EScoreEventType__KMShutdownBonus = 32,
	EScoreEventType__KMAvengerBonus = 33,
	EScoreEventType__KMRevengeBonus = 34,
	EScoreEventType__AKTinkerTurretBonus = 35,
	EScoreEventType__AKVigilistHealingTotemBonus = 36,
	EScoreEventType__AKTinkerMineBonus = 37,
	EScoreEventType__StatTeamKillBonus = 38,
	EScoreEventType__MAX           = 39
};


// Enum TBL.EKillEventType
enum class EKillEventType : uint8_t
{
	EKillEventType__Killer         = 0,
	EKillEventType__Killed         = 1,
	EKillEventType__MAX            = 2
};


// Enum TBL.EKillerType
enum class EKillerType : uint8_t
{
	EKillerType__Killer            = 0,
	EKillerType__PrimaryAssister   = 1,
	EKillerType__SecondaryAssister = 2,
	EKillerType__TakeDowner        = 3,
	EKillerType__MAX               = 4
};


// Enum TBL.ETeamUIColorType
enum class ETeamUIColorType : uint8_t
{
	ETeamUIColorType__Default      = 0,
	ETeamUIColorType__Light        = 1,
	ETeamUIColorType__Dark         = 2,
	ETeamUIColorType__ETeamUIColorType_MAX = 3
};


// Enum TBL.EHudMarkerMaterialType
enum class EHudMarkerMaterialType : uint8_t
{
	EHudMarkerMaterialType__Primary = 0,
	EHudMarkerMaterialType__Secondary = 1,
	EHudMarkerMaterialType__FlagPlantZone = 2,
	EHudMarkerMaterialType__MAX    = 3
};


// Enum TBL.EBlockingCategory
enum class EBlockingCategory : uint8_t
{
	EBlockingCategory__Light       = 0,
	EBlockingCategory__Standard    = 1,
	EBlockingCategory__Strong      = 2,
	EBlockingCategory__Shield      = 3,
	EBlockingCategory__EBlockingCategory_MAX = 4
};


// Enum TBL.EMovementDirection
enum class EMovementDirection : uint8_t
{
	MOVEDIR_None                   = 0,
	MOVEDIR_Forward                = 1,
	MOVEDIR_ForwardLeft            = 2,
	MOVEDIR_Left                   = 3,
	MOVEDIR_BackLeft               = 4,
	MOVEDIR_Back                   = 5,
	MOVEDIR_BackRight              = 6,
	MOVEDIR_Right                  = 7,
	MOVEDIR_ForwardRight           = 8,
	MOVEDIR_MAX                    = 9
};


// Enum TBL.EStateBasedEffectEnd
enum class EStateBasedEffectEnd : uint8_t
{
	EStateBasedEffectEnd__EndOfAttack = 0,
	EStateBasedEffectEnd__EndOfRelease = 1,
	EStateBasedEffectEnd__SoftRecovery = 2,
	EStateBasedEffectEnd__EStateBasedEffectEnd_MAX = 3
};


// Enum TBL.ETBLRarity
enum class ETBLRarity : uint8_t
{
	ETBLRarity__None               = 0,
	ETBLRarity__Common             = 1,
	ETBLRarity__Uncommon           = 2,
	ETBLRarity__Rare               = 3,
	ETBLRarity__Epic               = 4,
	ETBLRarity__Legendary          = 5,
	ETBLRarity__ETBLRarity_MAX     = 6
};


// Enum TBL.ECarryableState
enum class ECarryableState : uint8_t
{
	ECarryableState__Idle          = 0,
	ECarryableState__Locked        = 1,
	ECarryableState__Spawned       = 2,
	ECarryableState__ReadyForPickup = 3,
	ECarryableState__PickedUp      = 4,
	ECarryableState__Dropped       = 5,
	ECarryableState__Reset         = 6,
	ECarryableState__ECarryableState_MAX = 7
};


// Enum TBL.EPushableState
enum class EPushableState : uint8_t
{
	EPushableState__Neutral        = 0,
	EPushableState__Contested      = 1,
	EPushableState__Captured       = 2,
	EPushableState__Stopped        = 3,
	EPushableState__EPushableState_MAX = 4
};


// Enum TBL.ETargetMethodEvent
enum class ETargetMethodEvent : uint8_t
{
	ETargetMethodEvent__Hit        = 0,
	ETargetMethodEvent__Missed     = 1,
	ETargetMethodEvent__ETargetMethodEvent_MAX = 2
};


// Enum TBL.EInvocationScope
enum class EInvocationScope : uint8_t
{
	EInvocationScope__LastInvocation = 0,
	EInvocationScope__AllInvocations = 1,
	EInvocationScope__EInvocationScope_MAX = 2
};


// Enum TBL.ETargetMethodFlags
enum class ETargetMethodFlags : uint8_t
{
	ETargetMethodFlags__None       = 0,
	ETargetMethodFlags__Server     = 1,
	ETargetMethodFlags__StartWithParent = 2,
	ETargetMethodFlags__ETargetMethodFlags_MAX = 3
};


// Enum TBL.EAbilityTermination
enum class EAbilityTermination : uint8_t
{
	EAbilityTermination__Cancelled = 0,
	EAbilityTermination__Interrupted = 1,
	EAbilityTermination__EAbilityTermination_MAX = 2
};


// Enum TBL.EDuration
enum class EDuration : uint8_t
{
	EDuration__None                = 0,
	EDuration__Instant             = 1,
	EDuration__Lasting             = 2,
	EDuration__Infinite            = 3,
	EDuration__StateBased          = 4,
	EDuration__EDuration_MAX       = 5
};


// Enum TBL.EComparisonType
enum class EComparisonType : uint8_t
{
	EComparisonType__Equals        = 0,
	EComparisonType__NotEquals     = 1,
	EComparisonType__GreaterThan   = 2,
	EComparisonType__GreaterThanEquals = 3,
	EComparisonType__LessThan      = 4,
	EComparisonType__LessThanEquals = 5,
	EComparisonType__EComparisonType_MAX = 6
};


// Enum TBL.EInventorySlot
enum class EInventorySlot : uint8_t
{
	EInventorySlot__None           = 0,
	EInventorySlot__EyeColor       = 1,
	EInventorySlot__HairColor      = 2,
	EInventorySlot__Skin           = 3,
	EInventorySlot__Swatch         = 4,
	EInventorySlot__Gradient       = 5,
	EInventorySlot__Trim           = 6,
	EInventorySlot__Emblem         = 7,
	EInventorySlot__Tattoo         = 8,
	EInventorySlot__Helmet         = 9,
	EInventorySlot__Class          = 10,
	EInventorySlot__Generic        = 11,
	EInventorySlot__Hair           = 12,
	EInventorySlot__Weapon         = 13,
	EInventorySlot__AccentColor    = 14,
	EInventorySlot__Emote          = 15,
	EInventorySlot__Personality    = 16,
	EInventorySlot__EInventorySlot_MAX = 17
};


// Enum TBL.ETBLWorldType
enum class ETBLWorldType : uint8_t
{
	ETBLWorldType__None            = 0,
	ETBLWorldType__Game            = 1,
	ETBLWorldType__Editor          = 2,
	ETBLWorldType__PIE             = 3,
	ETBLWorldType__Preview         = 4,
	ETBLWorldType__Inactive        = 5,
	ETBLWorldType__Invalid         = 6,
	ETBLWorldType__ETBLWorldType_MAX = 7
};


// Enum TBL.EWidgetDisableType
enum class EWidgetDisableType : uint8_t
{
	EWidgetDisableType__Enabled    = 0,
	EWidgetDisableType__ShippingDisabledWIP = 1,
	EWidgetDisableType__DisabledDemoMode = 2,
	EWidgetDisableType__EWidgetDisableType_MAX = 3
};


// Enum TBL.ESonyAppType
enum class ESonyAppType : uint8_t
{
	ESony_Unknown                  = 0,
	ESony_SIEE                     = 1,
	ESony_SIEA                     = 2,
	ESony_SIEJ                     = 3,
	ESony_MAX                      = 4
};


// Enum TBL.EPlatformType
enum class EPlatformType : uint8_t
{
	EPlatform_PC                   = 0,
	EPlatform_XboxOne              = 1,
	EPlatform_PS4                  = 2,
	EPlatform_XSX                  = 3,
	EPlatform_PS5                  = 4,
	EPlatform_MAX                  = 5
};


// Enum TBL.EXCloudWidgetBehavior
enum class EXCloudWidgetBehavior : uint8_t
{
	EXCloudWidgetBehavior__Scale_ButtonCallout = 0,
	EXCloudWidgetBehavior__Toggle_Visible = 1,
	EXCloudWidgetBehavior__Toggle_NotHitTestable = 2,
	EXCloudWidgetBehavior__Toggle_Collapsed = 3,
	EXCloudWidgetBehavior__EXCloudWidgetBehavior_MAX = 4
};


// Enum TBL.EPointsOnGridTrace
enum class EPointsOnGridTrace : uint8_t
{
	EPointsOnGridTrace__NoTrace    = 0,
	EPointsOnGridTrace__AllowMissedTraces = 1,
	EPointsOnGridTrace__DiscardMissedTraces = 2,
	EPointsOnGridTrace__EPointsOnGridTrace_MAX = 3
};


// Enum TBL.EUserFeedbackType
enum class EUserFeedbackType : uint8_t
{
	EUserFeedbackType__Bug         = 0,
	EUserFeedbackType__Feedback    = 1,
	EUserFeedbackType__EUserFeedbackType_MAX = 2
};


// Enum TBL.EActionPriorityLevel
enum class EActionPriorityLevel : uint8_t
{
	EActionPriorityLevel__Standard = 0,
	EActionPriorityLevel__Emergency = 1,
	EActionPriorityLevel__EActionPriorityLevel_MAX = 2
};


// Enum TBL.EUtilityAI_Curve
enum class EUtilityAI_Curve : uint8_t
{
	EUtilityAI_Curve__Linear       = 0,
	EUtilityAI_Curve__Polynomial   = 1,
	EUtilityAI_Curve__Logistic     = 2,
	EUtilityAI_Curve__Logit        = 3,
	EUtilityAI_Curve__Normal       = 4,
	EUtilityAI_Curve__Sine         = 5,
	EUtilityAI_Curve__EUtilityAI_MAX = 6
};


// Enum TBL.EUtilityAI_EnemyOrFriendly
enum class EUtilityAI_EnemyOrFriendly : uint8_t
{
	EUtilityAI_EnemyOrFriendly__All = 0,
	EUtilityAI_EnemyOrFriendly__Enemies = 1,
	EUtilityAI_EnemyOrFriendly__Friendlies = 2,
	EUtilityAI_EnemyOrFriendly__EUtilityAI_MAX = 3
};


// Enum TBL.EUtilityAI_TargetType
enum class EUtilityAI_TargetType : uint8_t
{
	EUtilityAI_TargetType__None    = 0,
	EUtilityAI_TargetType__Actors  = 1,
	EUtilityAI_TargetType__Objects = 2,
	EUtilityAI_TargetType__Locations = 3,
	EUtilityAI_TargetType__Hybrid  = 4,
	EUtilityAI_TargetType__EUtilityAI_MAX = 5
};


// Enum TBL.EVaultType
enum class EVaultType : uint8_t
{
	EVaultType__ObstacleVault      = 0,
	EVaultType__WindowVault        = 1,
	EVaultType__LedgeVault         = 2,
	EVaultType__EVaultType_MAX     = 3
};


// Enum TBL.EAnnouncementType
enum class EAnnouncementType : uint8_t
{
	EAnnouncementType__Hotfix      = 0,
	EAnnouncementType__Patch       = 1,
	EAnnouncementType__ContentUpdate = 2,
	EAnnouncementType__MajorContentUpdate = 3,
	EAnnouncementType__DevBlog     = 4,
	EAnnouncementType__EAnnouncementType_MAX = 5
};


// Enum TBL.EVoteKickType
enum class EVoteKickType : uint8_t
{
	EVoteKickType__None            = 0,
	EVoteKickType__NoVoting        = 1,
	EVoteKickType__TeamVoting      = 2,
	EVoteKickType__AllVoting       = 3,
	EVoteKickType__EVoteKickType_MAX = 4
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
