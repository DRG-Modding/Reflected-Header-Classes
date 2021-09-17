#pragma once

#include "CoreMinimal.h"
#include "enums.generated.h"

// Enum FSDAnsel.EUIControlEffectTarget
UENUM(BlueprintType)
enum class EUIControlEffectTarget : uint8 {
	Bloom,
	DepthOfField,
	ChromaticAberration,
	MotionBlur,
	EUIControlEffectTarget_MAX,
};

// Enum FSDEngine.EPreciousMaterialOptions
UENUM(BlueprintType)
enum class EPreciousMaterialOptions : uint8 {
	TurnIntoGems,
	LeaveUntouched,
	Ignore,
	EPreciousMaterialOptions_MAX,
};

// Enum FSDEngine.ECarveFilterType
UENUM(BlueprintType)
enum class ECarveFilterType : uint8 {
	ReplaceAll,
	ReplaceEmpty,
	ReplaceSolid,
	ECarveFilterType_MAX,
};

// Enum FSDEngine.CarveOptionsCellSize
UENUM(BlueprintType)
enum class CarveOptionsCellSize : uint8 {
	CARVE_CELL_SIZE_26,
	CARVE_CELL_SIZE_51,
	CARVE_CELL_SIZE_101,
	CARVE_CELL_SIZE_201,
	CARVE_CELL_SIZE_MAX,
};

// Enum FSDEngine.ECSGModifiers
UENUM(BlueprintType)
enum class ECSGModifiers : uint8 {
	AddMaterialLayers,
	HasCachedTree,
	ECSGModifiers_MAX,
};

// Enum FSDEngine.EGeneralComb
UENUM(BlueprintType)
enum class EGeneralComb : uint8 {
	Empty,
	KeepSrc,
	KeepDest,
	Replace,
	EGeneralComb_MAX,
};

// Enum FSDEngine.EGeneralCombEmpty
UENUM(BlueprintType)
enum class EGeneralCombEmpty : uint8 {
	Empty,
	Replace,
	EGeneralCombEmpty_MAX,
};

// Enum FSDEngine.EGeneralPattern
UENUM(BlueprintType)
enum class EGeneralPattern : uint8 {
	SrcSpecific,
	DestSpecific,
	EGeneralPattern_MAX,
};

// Enum FSDEngine.EPattern
UENUM(BlueprintType)
enum class EPattern : uint8 {
	Specific,
	Precious,
	EPattern_MAX,
};

// Enum FSDEngine.EBinaryComb
UENUM(BlueprintType)
enum class EBinaryComb : uint8 {
	Empty,
	Unchanged,
	Replace,
	Burn,
	EBinaryComb_MAX,
};

// Enum FSDEngine.EEmptyBinaryComb
UENUM(BlueprintType)
enum class EEmptyBinaryComb : uint8 {
	Unchanged,
	Replace,
	EEmptyBinaryComb_MAX,
};

// Enum FSDEngine.EPreviewCellSize
UENUM(BlueprintType)
enum class EPreviewCellSize : uint8 {
	PRV_CELL_SIZE_12_6,
	PRV_CELL_SIZE_26,
	PRV_CELL_SIZE_51,
	PRV_CELL_SIZE_101,
	PRV_CELL_SIZE_201,
	PRV_CELL_SIZE_MAX,
};

// Enum FSDEngine.ESDFModulateMode
UENUM(BlueprintType)
enum class ESDFModulateMode : uint8 {
	MM_Disabled,
	MM_Single,
	MM_Loop,
	MM_MAX,
};

// Enum FSDEngine.EPathfinderResult
UENUM(BlueprintType)
enum class EPathfinderResult : uint8 {
	Success,
	Failed_StartingPointNotFound,
	Failed_EndPointNotFound,
	Failed_PointsNotConnected,
	Failed_UsedTooManyNodes,
	Failed_NotReady,
	Failed_UnknownError,
	EPathfinderResult_MAX,
};

// Enum FSDEngine.PFCollisionType
UENUM(BlueprintType)
enum class PFCollisionType : uint8 {
	SolidWalkable,
	Block,
	Danger,
	PFCollisionType_MAX,
};

// Enum FSDEngine.DeepPathFinderPreference
UENUM(BlueprintType)
enum class DeepPathFinderPreference : uint8 {
	None,
	Floor,
	Walls,
	Ceiling,
	DeepPathFinderPreference_MAX,
};

// Enum FSDEngine.DeepPathFinderSize
UENUM(BlueprintType)
enum class DeepPathFinderSize : uint8 {
	Invalid,
	Small,
	Medium,
	Large,
	DeepPathFinderSize_MAX,
};

// Enum FSDEngine.DeepPathFinderType
UENUM(BlueprintType)
enum class DeepPathFinderType : uint8 {
	Walk,
	Fly,
	MAX,
};

// Enum FSD.EDrinkableAlcoholStrength
UENUM(BlueprintType)
enum class EDrinkableAlcoholStrength : uint8 {
	NonAlcoholic,
	Light,
	Regular,
	Strong,
	VeryStrong,
	InstantPassout,
	EDrinkableAlcoholStrength_MAX,
};

// Enum FSD.EIntoxicationState
UENUM(BlueprintType)
enum class EIntoxicationState : uint8 {
	NotIntoxicated,
	Intoxicated,
	PassOut,
	EIntoxicationState_MAX,
};

// Enum FSD.ECharacterState
UENUM(BlueprintType)
enum class ECharacterState : uint8 {
	Walking,
	Downed,
	Dead,
	Falling,
	Paralyzed,
	Using,
	ZipLine,
	NoMovement,
	Grabbed,
	Flying,
	Frozen,
	PassedOut,
	Photography,
	Piloting,
	Attached,
	Pushing,
	TrackMovement,
	EnemyControl,
	Invalid,
	ECharacterState_MAX,
};

// Enum FSD.ECharacterCameraMode
UENUM(BlueprintType)
enum class ECharacterCameraMode : uint8 {
	FirstPerson,
	ThirdPerson,
	Follow,
	DownCamera,
	TerrainScanner,
	PhotographyMode,
	FirstPersonHeadOnly,
	ECharacterCameraMode_MAX,
};

// Enum FSD.EOutline
UENUM(BlueprintType)
enum class EOutline : uint8 {
	OL_NONE,
	OL_FRIENDLY,
	OL_NEUTRAL,
	OL_ENEMY,
	OL_ITEM,
	EOutline_MAX,
};

// Enum FSD.EPlayerTemperatureState
UENUM(BlueprintType)
enum class EPlayerTemperatureState : uint8 {
	Normal,
	Frozen,
	Overheated,
	EPlayerTemperatureState_MAX,
};

// Enum FSD.EGroundLeechState
UENUM(BlueprintType)
enum class EGroundLeechState : uint8 {
	Idle,
	Tracking,
	Pulling,
	Retracting,
	Dying,
	Dead,
	EGroundLeechState_MAX,
};

// Enum FSD.ECharselectionCameraLocation
UENUM(BlueprintType)
enum class ECharselectionCameraLocation : uint8 {
	Selection,
	Customization,
	Crafting,
	ViewWeapon,
	EndScreen,
	Forge,
	Pickaxe,
	ECharselectionCameraLocation_MAX,
};

// Enum FSD.EMinersManualSection
UENUM(BlueprintType)
enum class EMinersManualSection : uint8 {
	FrontPage,
	Hints,
	Combat,
	Creatures,
	Biomes,
	Missions,
	Resources,
	EMinersManualSection_MAX,
};

// Enum FSD.ECharacterSelectorItemStatus
UENUM(BlueprintType)
enum class ECharacterSelectorItemStatus : uint8 {
	LeaveAsIs,
	SwitchToDefault,
	NoItemEquipped,
	ECharacterSelectorItemStatus_MAX,
};

// Enum FSD.ESteamSearchRegion
UENUM(BlueprintType)
enum class ESteamSearchRegion : uint8 {
	Close,
	Medium,
	Far,
	World,
	ESteamSearchRegion_MAX,
};

// Enum FSD.ESteamServerJoinStatus
UENUM(BlueprintType)
enum class ESteamServerJoinStatus : uint8 {
	Open,
	PasswordRequired,
	ESteamServerJoinStatus_MAX,
};

// Enum FSD.EAlwaysLoadedWorlds
UENUM(BlueprintType)
enum class EAlwaysLoadedWorlds : uint8 {
	CharacterViewer,
	LoaderNormal,
	LoaderDeepDive,
	EAlwaysLoadedWorlds_MAX,
};

// Enum FSD.EDisconnectReason
UENUM(BlueprintType)
enum class EDisconnectReason : uint8 {
	None,
	Kicked_HaveMyReasons,
	Kicked_ShouldBePrivate,
	Kicked_AFK,
	Banned,
	ServerQuit,
	Disconnected,
	SignInChange,
	JoinSessionFail_SessionIsFull,
	JoinSessionFail_SessionDoesNotExist,
	JoinSessionFail_Other,
	JoinSessionFail_Privilege,
	NetworkError,
	SignOutComplete,
	WrongPassword,
	DeepDiveLateJoin,
	MissionStarting,
	LatejoinNotAllowed,
	EDisconnectReason_MAX,
};

// Enum FSD.EChatSenderType
UENUM(BlueprintType)
enum class EChatSenderType : uint8 {
	NormalUser,
	DeluxUser,
	Developer,
	Streamer,
	Modder,
	EChatSenderType_MAX,
};

// Enum FSD.EChatMessageType
UENUM(BlueprintType)
enum class EChatMessageType : uint8 {
	ES_Chat,
	ES_Game,
	ES_MAX,
};

// Enum FSD.EFSDInputSource
UENUM(BlueprintType)
enum class EFSDInputSource : uint8 {
	None,
	MouseAndKeyboard,
	Controller,
	EFSDInputSource_MAX,
};

// Enum FSD.EKeyboardLayout
UENUM(BlueprintType)
enum class EKeyboardLayout : uint8 {
	QWERTY,
	AZERTY,
	QWERTZ,
	EKeyboardLayout_MAX,
};

// Enum FSD.EHUDVisibilityReason
UENUM(BlueprintType)
enum class EHUDVisibilityReason : uint8 {
	Invalid,
	UserChoice,
	StandDown,
	MenuActive,
	Photography,
	EHUDVisibilityReason_MAX,
};

// Enum FSD.ESpacerigStartType
UENUM(BlueprintType)
enum class ESpacerigStartType : uint8 {
	PlayerHub,
	Medbay,
	ESpacerigStartType_MAX,
};

// Enum FSD.EItemCategory
UENUM(BlueprintType)
enum class EItemCategory : uint8 {
	PrimaryWeapon,
	SecondaryWeapon,
	TraversalTool,
	ClassTool,
	Grenade,
	Flare,
	MiningTool,
	Armor,
	EItemCategory_MAX,
};

// Enum FSD.EFSDFaction
UENUM(BlueprintType)
enum class EFSDFaction : uint8 {
	NoFaction,
	CaveCrawlers,
	MightyMiners,
	DirtDiggers,
	EFSDFaction_MAX,
};

// Enum FSD.EHUDVisibilityMode
UENUM(BlueprintType)
enum class EHUDVisibilityMode : uint8 {
	Visible,
	Dynamic,
	Hidden,
	EHUDVisibilityMode_MAX,
};

// Enum FSD.EVanitySlot
UENUM(BlueprintType)
enum class EVanitySlot : uint8 {
	Head,
	Beard,
	Armor,
	BeardColor,
	SkinColor,
	Moustache,
	Eyebrows,
	Sideburns,
	ArmorMaterial,
	Count,
	EVanitySlot_MAX,
};

// Enum FSD.ECampaignType
UENUM(BlueprintType)
enum class ECampaignType : uint8 {
	Normal,
	Weekly,
	MatrixCoreHunt,
	ECampaignType_MAX,
};

// Enum FSD.EItemPreviewStatus
UENUM(BlueprintType)
enum class EItemPreviewStatus : uint8 {
	Normal,
	Upgraded,
	Previewed,
	PreviewReduced,
	UpgradedAndPreviewReduced,
	EItemPreviewStatus_MAX,
};

// Enum FSD.EUpgradeCalucationType
UENUM(BlueprintType)
enum class EUpgradeCalucationType : uint8 {
	Additive,
	Multiplicative,
	EUpgradeCalucationType_MAX,
};

// Enum FSD.EUpgradeClass
UENUM(BlueprintType)
enum class EUpgradeClass : uint8 {
	Class_A,
	Class_B,
	Gear_A,
	Gear_B,
	Armor,
	Pickaxe,
	Class_Bosco,
	EUpgradeClass_MAX,
};

// Enum FSD.EUpgradeTiers
UENUM(BlueprintType)
enum class EUpgradeTiers : uint8 {
	Tier_2,
	Tier_3,
	Tier_4,
	Tier_5,
	Tier_6,
	Tier_MAX,
};

// Enum FSD.EDroneAIState
UENUM(BlueprintType)
enum class EDroneAIState : uint8 {
	Follow,
	Mine,
	Fight,
	Revive,
	Light,
	GoToPlayer,
	Salute,
	CarryGem,
	UseAbillity,
	Repairing,
	EDroneAIState_MAX,
};

// Enum FSD.ERessuplyPodState
UENUM(BlueprintType)
enum class ERessuplyPodState : uint8 {
	ReadyToDrop,
	Dropping,
	Landed,
	Idle,
	ERessuplyPodState_MAX,
};

// Enum FSD.EUseRestriction
UENUM(BlueprintType)
enum class EUseRestriction : uint8 {
	Free,
	DepositOnly,
	Repair,
	Zipline,
	BlockAll,
	PickupItem,
	EUseRestriction_MAX,
};

// Enum FSD.EEnemyHealthScaling
UENUM(BlueprintType)
enum class EEnemyHealthScaling : uint8 {
	SmallEnemy,
	LargeEnemy,
	ExtraLargeEnemy,
	ExtraLargeEnemyB,
	ExtraLargeEnemyC,
	ExtraLargeEnemyD,
	NoScaling,
	EEnemyHealthScaling_MAX,
};

// Enum FSD.EHealthbarType
UENUM(BlueprintType)
enum class EHealthbarType : uint8 {
	None,
	MainLife,
	Shield,
	EHealthbarType_MAX,
};

// Enum FSD.EMissionStatType
UENUM(BlueprintType)
enum class EMissionStatType : uint8 {
	Float,
	Integer,
	Time,
	Distance,
	EMissionStatType_MAX,
};

// Enum FSD.ERefineryState
UENUM(BlueprintType)
enum class ERefineryState : uint8 {
	Landing,
	ConnectingPipes,
	PipesConnected,
	Refining,
	RefiningStalled,
	RefiningComplete,
	RocketLaunched,
	ERefineryState_MAX,
};

// Enum FSD.EFrozenBitsSize
UENUM(BlueprintType)
enum class EFrozenBitsSize : uint8 {
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	EFrozenBitsSize_MAX,
};

// Enum FSD.EDropPodState
UENUM(BlueprintType)
enum class EDropPodState : uint8 {
	WaitingToDrop,
	Drilling,
	Landed,
	PrepTakeoff,
	Departing,
	EDropPodState_MAX,
};

// Enum FSD.EPipelineBuildState
UENUM(BlueprintType)
enum class EPipelineBuildState : uint8 {
	NotStarted,
	BeginBuilt,
	Completed,
	Broken,
	EPipelineBuildState_MAX,
};

// Enum FSD.ETrackBuildPlacementState
UENUM(BlueprintType)
enum class ETrackBuildPlacementState : uint8 {
	NotBeingPlaced,
	BeingPlaced,
	Finished,
	ETrackBuildPlacementState_MAX,
};

// Enum FSD.ESchematicState
UENUM(BlueprintType)
enum class ESchematicState : uint8 {
	NotOwned,
	OwnedCannotBuild,
	OwnedCanBuild,
	OwnedBuilt,
	ESchematicState_MAX,
};

// Enum FSD.ESchematicType
UENUM(BlueprintType)
enum class ESchematicType : uint8 {
	Overclock,
	Vanity,
	Resource,
	Blank,
	ESchematicType_MAX,
};

// Enum FSD.EHUDVisibilityPresets
UENUM(BlueprintType)
enum class EHUDVisibilityPresets : uint8 {
	AllVisible,
	Recommended,
	Minimal,
	AllHidden,
	EHUDVisibilityPresets_MAX,
};

// Enum FSD.EHUDVisibilityGroups
UENUM(BlueprintType)
enum class EHUDVisibilityGroups : uint8 {
	OnScreenHelp,
	EnemyHealth,
	RadarAndDepth,
	PlayerHealthShield,
	PlayerNameClassIcon,
	PlayerItems,
	PlayerResources,
	WeaponInfo,
	Grenades,
	FlashLight,
	Flares,
	Crosshair,
	Objectives,
	TeamDisplay,
	SentryGunDisplay,
	EHUDVisibilityGroups_MAX,
};

// Enum FSD.ELaserPointerTargetType
UENUM(BlueprintType)
enum class ELaserPointerTargetType : uint8 {
	Chunkable,
	Dirt,
	Player,
	Enemy,
	EmbeddedGem,
	Other,
	ELaserPointerTargetType_MAX,
};

// Enum FSD.EOnProjectileImpactBehaviourEnum
UENUM(BlueprintType)
enum class EOnProjectileImpactBehaviourEnum : uint8 {
	CallOnPredict,
	CallOnConfirmed,
	CallOnPredictAndConfirmed,
	EOnProjectileImpactBehaviourEnum_MAX,
};

// Enum FSD.ELineRotation
UENUM(BlueprintType)
enum class ELineRotation : uint8 {
	None,
	Yaw,
	Pitch,
	Roll,
	ELineRotation_MAX,
};

// Enum FSD.EImpactDecalSize
UENUM(BlueprintType)
enum class EImpactDecalSize : uint8 {
	Small,
	Medium,
	Large,
	None,
	EImpactDecalSize_MAX,
};

// Enum FSD.EPawnAttitude
UENUM(BlueprintType)
enum class EPawnAttitude : uint8 {
	Friendly,
	Neutral,
	Hostile,
	EPawnAttitude_MAX,
};

// Enum FSD.ERecallableActorState
UENUM(BlueprintType)
enum class ERecallableActorState : uint8 {
	Idle,
	RelocateRequested,
	Relocating,
	ReturnRequested,
	Returning,
	Home,
	ERecallableActorState_MAX,
};

// Enum FSD.ERedeployableSentryGunState
UENUM(BlueprintType)
enum class ERedeployableSentryGunState : uint8 {
	Deploying,
	Deployed,
	Dismantling,
	Dismantled,
	ERedeployableSentryGunState_MAX,
};

// Enum FSD.EItemSkinType
UENUM(BlueprintType)
enum class EItemSkinType : uint8 {
	Color,
	Mesh,
	EItemSkinType_MAX,
};

// Enum FSD.EThrownGrenadeItemState
UENUM(BlueprintType)
enum class EThrownGrenadeItemState : uint8 {
	NotEquipped,
	Cooking,
	Throwing,
	EThrownGrenadeItemState_MAX,
};

// Enum FSD.EFriendOnlineStatusEnum
UENUM(BlueprintType)
enum class EFriendOnlineStatusEnum : uint8 {
	Online,
	Offline,
	Away,
	EFriendOnlineStatusEnum_MAX,
};

// Enum FSD.EBlueprintablePrivilegeResults
UENUM(BlueprintType)
enum class EBlueprintablePrivilegeResults : uint8 {
	NoFailures,
	RequiredPatchAvailable,
	RequiredSystemUpdate,
	AgeRestrictionFailure,
	AccountTypeFailure,
	UserNotFound,
	UserNotLoggedIn,
	ChatRestriction,
	UGCRestriction,
	GenericFailure,
	OnlinePlayRestricted,
	NetworkConnectionUnavailable,
	EBlueprintablePrivilegeResults_MAX,
};

// Enum FSD.EBlueprintableUserPrivileges
UENUM(BlueprintType)
enum class EBlueprintableUserPrivileges : uint8 {
	CanPlay,
	CanPlayOnline,
	CanCommunicateOnline,
	CanUseUserGeneratedContent,
	CanUserCrossPlay,
	EBlueprintableUserPrivileges_MAX,
};

// Enum FSD.EDeepMovementState
UENUM(BlueprintType)
enum class EDeepMovementState : uint8 {
	Stationary,
	Controlled,
	Moving,
	WaitingForPath,
	AttackStance,
	FakePhysics,
	EDeepMovementState_MAX,
};

// Enum FSD.EFSDTargetPlatform
UENUM(BlueprintType)
enum class EFSDTargetPlatform : uint8 {
	Steam,
	XboxOne,
	Win10,
	PS4,
	PS5,
	EFSDTargetPlatform_MAX,
};

// Enum FSD.ECreatureSize
UENUM(BlueprintType)
enum class ECreatureSize : uint8 {
	Tiny,
	Small,
	Medium,
	Large,
	Huge,
	ECreatureSize_MAX,
};

// Enum FSD.EAmmoWeaponState
UENUM(BlueprintType)
enum class EAmmoWeaponState : uint8 {
	Equipping,
	Ready,
	Cycling,
	Reloading,
	BurstCycling,
	EAmmoWeaponState_MAX,
};

// Enum FSD.EAsyncLoadPriority
UENUM(BlueprintType)
enum class EAsyncLoadPriority : uint8 {
	Normal,
	High,
	Low,
	EAsyncLoadPriority_MAX,
};

// Enum FSD.EAsyncPersistence
UENUM(BlueprintType)
enum class EAsyncPersistence : uint8 {
	Manual,
	Level,
	Permanent,
	EAsyncPersistence_MAX,
};

// Enum FSD.EPlatformRestriction
UENUM(BlueprintType)
enum class EPlatformRestriction : uint8 {
	Editor,
	Steam,
	Oddish,
	UniversalWindowsPlatform,
	XBoxOne,
	PS4,
	EPlatformRestriction_MAX,
};

// Enum FSD.EBuildTypeRestriction
UENUM(BlueprintType)
enum class EBuildTypeRestriction : uint8 {
	Development,
	Shipping,
	EBuildTypeRestriction_MAX,
};

// Enum FSD.ECampaignMutators
UENUM(BlueprintType)
enum class ECampaignMutators : uint8 {
	NotAllowed,
	Allowed,
	Preffered,
	ECampaignMutators_MAX,
};

// Enum FSD.ECellCategory
UENUM(BlueprintType)
enum class ECellCategory : uint8 {
	Cave,
	Tunnel,
	ECellCategory_MAX,
};

// Enum FSD.ECaveLeechState
UENUM(BlueprintType)
enum class ECaveLeechState : uint8 {
	Idle,
	Tracking,
	Pulling,
	Retracting,
	Dying,
	Dead,
	Frozen,
	ECaveLeechState_MAX,
};

// Enum FSD.ECustomUsableType
UENUM(BlueprintType)
enum class ECustomUsableType : uint8 {
	ClearOnFrameEnd,
	ClearOnUseReleased,
	ECustomUsableType_MAX,
};

// Enum FSD.EFSDChromaEffect
UENUM(BlueprintType)
enum class EFSDChromaEffect : uint8 {
	HealthDamage,
	ShieldDamage,
	Flare,
	MissionSuccess,
	None,
	EFSDChromaEffect_MAX,
};

// Enum FSD.EExampleEnum
UENUM(BlueprintType)
enum class EExampleEnum : uint8 {
	FirstName,
	SecondName,
	EExampleEnum_MAX,
};

// Enum FSD.EShoutType
UENUM(BlueprintType)
enum class EShoutType : uint8 {
	Attention,
	Follow,
	StandingDown,
	Downed,
	RequestRevive,
	Revived,
	Resupply,
	FriendlyFire,
	KillCry,
	Dead,
	Cheating,
	ResourceFull,
	ResourceFullNoDonkey,
	CallDonkey,
	Depositing,
	DepositingNoDonkey,
	OutOfAmmo,
	Reloading,
	CharacterSelected,
	UpgradeBought,
	WaitingInDropPod,
	Carrying,
	EShoutType_MAX,
};

// Enum FSD.ECommunityGoalTier
UENUM(BlueprintType)
enum class ECommunityGoalTier : uint8 {
	Bronze,
	Silver,
	Gold,
	ECommunityGoalTier_MAX,
};

// Enum FSD.ECommunityGoalType
UENUM(BlueprintType)
enum class ECommunityGoalType : uint8 {
	Float,
	Integer,
	Time,
	Distance,
	ECommunityGoalType_MAX,
};

// Enum FSD.ECommunityUIState
UENUM(BlueprintType)
enum class ECommunityUIState : uint8 {
	Loading,
	SelectFaction,
	Progress,
	Recruitment,
	Reward,
	Invalid,
	ECommunityUIState_MAX,
};

// Enum FSD.ERobotState
UENUM(BlueprintType)
enum class ERobotState : uint8 {
	Enemy,
	Friendly,
	PoweredDown,
	ERobotState_MAX,
};

// Enum FSD.EKeyBindingAxis
UENUM(BlueprintType)
enum class EKeyBindingAxis : uint8 {
	None,
	Positive,
	Negative,
	EKeyBindingAxis_MAX,
};

// Enum FSD.EDealType
UENUM(BlueprintType)
enum class EDealType : uint8 {
	Buy,
	Sell,
	EDealType_MAX,
};

// Enum FSD.EDamageComponentType
UENUM(BlueprintType)
enum class EDamageComponentType : uint8 {
	Primary,
	Secondary,
	EDamageComponentType_MAX,
};

// Enum FSD.EDashPointsGenerationMode
UENUM(BlueprintType)
enum class EDashPointsGenerationMode : uint8 {
	Surround,
	Forward,
	EDashPointsGenerationMode_MAX,
};

// Enum FSD.EDebrisOrientation
UENUM(BlueprintType)
enum class EDebrisOrientation : uint8 {
	Random,
	RandomXY,
	AlignToSurfaceNormal,
	Fixed,
	EDebrisOrientation_MAX,
};

// Enum FSD.EDebrisMeshShadows
UENUM(BlueprintType)
enum class EDebrisMeshShadows : uint8 {
	Never,
	High,
	Always,
	EDebrisMeshShadows_MAX,
};

// Enum FSD.EDebrisMeshCollisionProfile
UENUM(BlueprintType)
enum class EDebrisMeshCollisionProfile : uint8 {
	NoCollision,
	HitOnly,
	HitAndCollide,
	EDebrisMeshCollisionProfile_MAX,
};

// Enum FSD.EDebrisColliderType
UENUM(BlueprintType)
enum class EDebrisColliderType : uint8 {
	Object,
	AirParticles,
	ObjectB,
	ObjectC,
	EDebrisColliderType_MAX,
};

// Enum FSD.EDebrisCarvedType
UENUM(BlueprintType)
enum class EDebrisCarvedType : uint8 {
	Large,
	Small,
	LevelGeneration,
	Resources,
	EDebrisCarvedType_MAX,
};

// Enum FSD.EDebrisItemPass
UENUM(BlueprintType)
enum class EDebrisItemPass : uint8 {
	PrePlacement,
	Main,
	EDebrisItemPass_MAX,
};

// Enum FSD.EDecalImportance
UENUM(BlueprintType)
enum class EDecalImportance : uint8 {
	High,
	Normal,
	Low,
	EDecalImportance_MAX,
};

// Enum FSD.ELandscapeCellFilter
UENUM(BlueprintType)
enum class ELandscapeCellFilter : uint8 {
	Any,
	Empty,
	Filled,
	Diggable,
	NotDiggable,
	Collidable,
	NotCollidable,
	Rubble,
	NotRubble,
	ELandscapeCellFilter_MAX,
};

// Enum FSD.EOffsetFrom
UENUM(BlueprintType)
enum class EOffsetFrom : uint8 {
	None,
	Floor,
	Ceiling,
	EOffsetFrom_MAX,
};

// Enum FSD.EDeepMovementMode
UENUM(BlueprintType)
enum class EDeepMovementMode : uint8 {
	Normal,
	Flee,
	Fly,
	BackOff,
	EDeepMovementMode_MAX,
};

// Enum FSD.EDefendPointState
UENUM(BlueprintType)
enum class EDefendPointState : uint8 {
	Idle,
	Started,
	Completed,
	Failed,
	EDefendPointState_MAX,
};

// Enum FSD.EDialogRestriction
UENUM(BlueprintType)
enum class EDialogRestriction : uint8 {
	None,
	SinglePlayerOnly,
	MultiPlayerOnly,
	EDialogRestriction_MAX,
};

// Enum FSD.EVeteranScaling
UENUM(BlueprintType)
enum class EVeteranScaling : uint8 {
	NormalEnemy,
	LargeEnemy,
	EVeteranScaling_MAX,
};

// Enum FSD.EEnemySignificance
UENUM(BlueprintType)
enum class EEnemySignificance : uint8 {
	Swarmer,
	Normal,
	Critical,
	Critter,
	EEnemySignificance_MAX,
};

// Enum FSD.EDiscordBiomeType
UENUM(BlueprintType)
enum class EDiscordBiomeType : uint8 {
	CrystallineCaverns,
	FungusBogs,
	GlacialStrata,
	DenseBiozone,
	MagmaCore,
	Radioactive,
	SaltPits,
	Sandblasted,
	CausticMire,
	AzureWeald,
	HollowBough,
	Spacerig,
	EDiscordBiomeType_MAX,
};

// Enum FSD.EDiscordMissionType
UENUM(BlueprintType)
enum class EDiscordMissionType : uint8 {
	MiningExpedition,
	EggHunt,
	Escort,
	Elimination,
	PointExtraction,
	Salvage,
	Refinery,
	None,
	EDiscordMissionType_MAX,
};

// Enum FSD.EDoubleDrillState
UENUM(BlueprintType)
enum class EDoubleDrillState : uint8 {
	Equipping,
	Idle,
	Mining,
	Overheated,
	EDoubleDrillState_MAX,
};

// Enum FSD.EBoscoAbillityTargetPreference
UENUM(BlueprintType)
enum class EBoscoAbillityTargetPreference : uint8 {
	Self,
	SelectedTarget,
	ClosestPlayer,
	ClosestEnemy,
	TargetLocation,
	EBoscoAbillityTargetPreference_MAX,
};

// Enum FSD.EDroneActions
UENUM(BlueprintType)
enum class EDroneActions : uint8 {
	Wandering,
	Mining,
	Fighting,
	Lighting,
	Reviving,
	EDroneActions_MAX,
};

// Enum FSD.EDynamicReverbSetting
UENUM(BlueprintType)
enum class EDynamicReverbSetting : uint8 {
	None,
	Small,
	Medium,
	Large,
	EDynamicReverbSetting_MAX,
};

// Enum FSD.EEnemyControlState
UENUM(BlueprintType)
enum class EEnemyControlState : uint8 {
	Connecting,
	Connected,
	ThrowingOff,
	Disconnecting,
	Disconneced,
	EEnemyControlState_MAX,
};

// Enum FSD.EEnemyFamily
UENUM(BlueprintType)
enum class EEnemyFamily : uint8 {
	Glyphid,
	Mactera,
	Naedocyte,
	Qronar,
	Xynarch,
	Nayaka,
	Deeptora,
	Korlok,
	Automaton,
	Unknown,
	EEnemyFamily_MAX,
};

// Enum FSD.EEnemyType
UENUM(BlueprintType)
enum class EEnemyType : uint8 {
	Ground,
	Flying,
	Stationary,
	EEnemyType_MAX,
};

// Enum FSD.EEscortExtractorState
UENUM(BlueprintType)
enum class EEscortExtractorState : uint8 {
	ReadyToGrab,
	Taken,
	Full,
	EEscortExtractorState_MAX,
};

// Enum FSD.EEscortMissionState
UENUM(BlueprintType)
enum class EEscortMissionState : uint8 {
	Stationary,
	Moving,
	WaitingForFuel,
	FinalEvent,
	Finished,
	ShellCracked,
	VehicleDead,
	InGarage,
	EEscortMissionState_MAX,
};

// Enum FSD.EExtractorState
UENUM(BlueprintType)
enum class EExtractorState : uint8 {
	Attached,
	OnGround,
	Equipping,
	Idle,
	Mining,
	EExtractorState_MAX,
};

// Enum FSD.EFacilityDroneState
UENUM(BlueprintType)
enum class EFacilityDroneState : uint8 {
	Idle,
	Rolling,
	Flying,
	EFacilityDroneState_MAX,
};

// Enum FSD.EFSDAchievementType
UENUM(BlueprintType)
enum class EFSDAchievementType : uint8 {
	NoStatUsed,
	IncrementStatPerCall,
	SetStatIfHighscore,
	ForceNewStatEachCall,
	EFSDAchievementType_MAX,
};

// Enum FSD.ETargetStateDamageBonusType
UENUM(BlueprintType)
enum class ETargetStateDamageBonusType : uint8 {
	Frozen,
	OnFire,
	Fleeing,
	Staggered,
	ETargetStateDamageBonusType_MAX,
};

// Enum FSD.EPauseReason
UENUM(BlueprintType)
enum class EPauseReason : uint8 {
	Invalid,
	MenuActive,
	ReconnectController,
	EPauseReason_MAX,
};

// Enum FSD.ESaveSlotChangeProcedure
UENUM(BlueprintType)
enum class ESaveSlotChangeProcedure : uint8 {
	NewSave,
	Load,
	Save,
	NewModdedSave,
	ESaveSlotChangeProcedure_MAX,
};

// Enum FSD.EInputInteraction
UENUM(BlueprintType)
enum class EInputInteraction : uint8 {
	Press,
	Hold,
	EInputInteraction_MAX,
};

// Enum FSD.EVolumeType
UENUM(BlueprintType)
enum class EVolumeType : uint8 {
	CharacterVoices,
	Master,
	SFX,
	Music,
	VoiceChat,
	MissionControl,
	EVolumeType_MAX,
};

// Enum FSD.EPostProcessingType
UENUM(BlueprintType)
enum class EPostProcessingType : uint8 {
	GameWorld,
	CharacterSelector,
	EPostProcessingType_MAX,
};

// Enum FSD.EItemNotificationType
UENUM(BlueprintType)
enum class EItemNotificationType : uint8 {
	NewOverclock,
	EItemNotificationType_MAX,
};

// Enum FSD.ESteamBranch
UENUM(BlueprintType)
enum class ESteamBranch : uint8 {
	Main,
	Experimental,
	Internal_Testing,
	Other,
	ESteamBranch_MAX,
};

// Enum FSD.EMoveType
UENUM(BlueprintType)
enum class EMoveType : uint8 {
	EaseIn,
	EaseOut,
	EMoveType_MAX,
};

// Enum FSD.EPingType
UENUM(BlueprintType)
enum class EPingType : uint8 {
	EaseOut,
	Bounce,
	EPingType_MAX,
};

// Enum FSD.ECommunityGoalIndex
UENUM(BlueprintType)
enum class ECommunityGoalIndex : uint8 {
	KillBroodNexus,
	KillBulkDetonators,
	KillCaveLeeches,
	KillJellyBreeders,
	KillPretorians,
	KillShellbacks,
	KillSpitballers,
	CollectBittergem,
	CollectCompressedGold,
	CollectGold,
	CollectCraftingMaterials,
	GainXP,
	TestGoal,
	Count,
	ECommunityGoalIndex_MAX,
};

// Enum FSD.EFSDGoogleAnalyticsProperties
UENUM(BlueprintType)
enum class EFSDGoogleAnalyticsProperties : uint8 {
	DRG,
	Discord,
	CommunityGoals,
	DRG_Discord,
	All,
	Other,
	EFSDGoogleAnalyticsProperties_MAX,
};

// Enum FSD.EGrabberState
UENUM(BlueprintType)
enum class EGrabberState : uint8 {
	StandBy,
	Chase,
	Wander,
	Carry,
	Flee,
	EGrabberState_MAX,
};

// Enum FSD.EGrabbedStateCameraMode
UENUM(BlueprintType)
enum class EGrabbedStateCameraMode : uint8 {
	FirstPerson,
	ThirdPerson,
	EGrabbedStateCameraMode_MAX,
};

// Enum FSD.ERicochetBehavior
UENUM(BlueprintType)
enum class ERicochetBehavior : uint8 {
	All,
	PawnsOnly,
	NotPawns,
	ERicochetBehavior_MAX,
};

// Enum FSD.EKeyBindingSlot
UENUM(BlueprintType)
enum class EKeyBindingSlot : uint8 {
	Primary,
	Secondary,
	EKeyBindingSlot_MAX,
};

// Enum FSD.ECharacterAnimSet
UENUM(BlueprintType)
enum class ECharacterAnimSet : uint8 {
	Pistol,
	Rifle,
	HeavyLow,
	NoHands,
	HeavyDual,
	DualPistol,
	HeavyFront,
	ECharacterAnimSet_MAX,
};

// Enum FSD.EItemSkinCollectionType
UENUM(BlueprintType)
enum class EItemSkinCollectionType : uint8 {
	PerCharacter,
	PerItem,
	EItemSkinCollectionType_MAX,
};

// Enum FSD.EProjectileLauncherBaseUpgradeType
UENUM(BlueprintType)
enum class EProjectileLauncherBaseUpgradeType : uint8 {
	VerticalSpread,
	HorizontalSpread,
	TransferVelocityFromCharacter,
	EProjectileLauncherBaseUpgradeType_MAX,
};

// Enum FSD.EDetPackUpgrades
UENUM(BlueprintType)
enum class EDetPackUpgrades : uint8 {
	CanPickUp,
	CarveDiameter,
	ExplodeOnDeath,
	ExtraFearRadius,
	ExtraStaggerRadius,
	EDetPackUpgrades_MAX,
};

// Enum FSD.EPlatformGunUpgrades
UENUM(BlueprintType)
enum class EPlatformGunUpgrades : uint8 {
	BiggerPlatform,
	LessFallDamage,
	BugRepellant,
	CubePlatform,
	EPlatformGunUpgrades_MAX,
};

// Enum FSD.EBoscoUpgrades
UENUM(BlueprintType)
enum class EBoscoUpgrades : uint8 {
	MiningSpeedUpgrade,
	ExtraRevive,
	ActiveLightRadius,
	Missile,
	CryoGrenade,
	SACooldownReduction,
	ExtraAbillityCharge,
	EBoscoUpgrades_MAX,
};

// Enum FSD.EArmorUpgradeType
UENUM(BlueprintType)
enum class EArmorUpgradeType : uint8 {
	RegenDelay,
	RegenRate,
	ReviveInvulnerability,
	EArmorUpgradeType_MAX,
};

// Enum FSD.ETriggeredStatusEffectType
UENUM(BlueprintType)
enum class ETriggeredStatusEffectType : uint8 {
	ShieldDestroyed,
	GrapplingHookReleased,
	NONE,
	ETriggeredStatusEffectType_MAX,
};

// Enum FSD.EArmorRegeneratorUpgrades
UENUM(BlueprintType)
enum class EArmorRegeneratorUpgrades : uint8 {
	Radius,
	Duration,
	DeployTime,
	RechargeTime,
	RechargeCount,
	PushStatusEffect,
	EArmorRegeneratorUpgrades_MAX,
};

// Enum FSD.ESentryGunUpgradeType
UENUM(BlueprintType)
enum class ESentryGunUpgradeType : uint8 {
	MaxAmmo,
	ReloadSpeed,
	ExtraSentry,
	AngleRestriction,
	ManualTargeting,
	MaxRange,
	RotationSpeed,
	BurstCooldown,
	ESentryGunUpgradeType_MAX,
};

// Enum FSD.EGrapplingHookUpgrade
UENUM(BlueprintType)
enum class EGrapplingHookUpgrade : uint8 {
	MaxDistance,
	MaxSpeed,
	WindUpTime,
	EGrapplingHookUpgrade_MAX,
};

// Enum FSD.EZiplineGunUpgrades
UENUM(BlueprintType)
enum class EZiplineGunUpgrades : uint8 {
	MaxAngle,
	MaxDistance,
	MovementSpeed,
	FallDamageReduction,
	EZiplineGunUpgrades_MAX,
};

// Enum FSD.EElectricalSMGUpgrades
UENUM(BlueprintType)
enum class EElectricalSMGUpgrades : uint8 {
	AoEChance,
	PlasmaBeam,
	TurretEMPDischarge,
	EElectricalSMGUpgrades_MAX,
};

// Enum FSD.EChargedProjectileUpgrades
UENUM(BlueprintType)
enum class EChargedProjectileUpgrades : uint8 {
	ExplodesOnDamage,
	AoEDamageInFlight,
	PersistentExplosion,
	EChargedProjectileUpgrades_MAX,
};

// Enum FSD.EFlaregunProjectileUpgrades
UENUM(BlueprintType)
enum class EFlaregunProjectileUpgrades : uint8 {
	Duration,
	EFlaregunProjectileUpgrades_MAX,
};

// Enum FSD.EFlaregunUpgrades
UENUM(BlueprintType)
enum class EFlaregunUpgrades : uint8 {
	AutoReload,
	EFlaregunUpgrades_MAX,
};

// Enum FSD.EProjectileUpgrade
UENUM(BlueprintType)
enum class EProjectileUpgrade : uint8 {
	Velocity,
	Bouncy,
	Lifetime,
	DoOnImpact,
	DoOnImpact2,
	DoOnImpact3,
	DoOnSpawn,
	EProjectileUpgrade_MAX,
};

// Enum FSD.ELineCutterProjectileUpgradeType
UENUM(BlueprintType)
enum class ELineCutterProjectileUpgradeType : uint8 {
	LineSize,
	LineSizeMultiplier,
	ExplosiveRound,
	SetDeployDelay,
	AddDeployTime,
	ExplodeOnNextProjectile,
	DoubleLine,
	LineSizeAdd,
	SetDeployTime,
	RollUntilStop,
	Yawing,
	PlasmaTrail,
	ELineCutterProjectileUpgradeType_MAX,
};

// Enum FSD.ELineCutterUpgradeType
UENUM(BlueprintType)
enum class ELineCutterUpgradeType : uint8 {
	ReverseDirection,
	ExplodeLastProjectile,
	ELineCutterUpgradeType_MAX,
};

// Enum FSD.EGrenadeUpgradeType
UENUM(BlueprintType)
enum class EGrenadeUpgradeType : uint8 {
	MaxGrenades,
	FuseTime,
	EGrenadeUpgradeType_MAX,
};

// Enum FSD.EFlareUpgradeType
UENUM(BlueprintType)
enum class EFlareUpgradeType : uint8 {
	Duration,
	MaxFlares,
	ProductionTime,
	EFlareUpgradeType_MAX,
};

// Enum FSD.ESingleUsableUpgradeType
UENUM(BlueprintType)
enum class ESingleUsableUpgradeType : uint8 {
	UseDuration,
	ESingleUsableUpgradeType_MAX,
};

// Enum FSD.EExplosionUpgrade
UENUM(BlueprintType)
enum class EExplosionUpgrade : uint8 {
	NOTUSED,
	EExplosionUpgrade_MAX,
};

// Enum FSD.EDamageUpgrade
UENUM(BlueprintType)
enum class EDamageUpgrade : uint8 {
	Damage,
	WeakpointDamageMultiplier,
	StaggerChance,
	StaggerDuration,
	RadialDamage,
	RadialRange,
	ArmorDamageMultiplier,
	FearFactor,
	RadialRangeMultiplier,
	StaggerOnWeakpointOnly,
	FriendlyFireModifier,
	EDamageUpgrade_MAX,
};

// Enum FSD.EHitScanBaseUpgradeType
UENUM(BlueprintType)
enum class EHitScanBaseUpgradeType : uint8 {
	MaxVerticalSpread,
	MaxHorizontalSpread,
	MaxPenetrations,
	WeaponAccuracySpreadMultiplier,
	SpreadPerShot,
	MinSpreadWhileMoving,
	SpreadRecoveryMultiplier,
	MinSpreadWhileSprinting,
	MaxSpread,
	RicochetChance,
	RicochetOnWeakspotOnly,
	RicochetBehaviourAll,
	RicochetBehaviourPawnsOnly,
	RicochetBehaviourNotPawns,
	EHitScanBaseUpgradeType_MAX,
};

// Enum FSD.EMultiHitscanUpgradeType
UENUM(BlueprintType)
enum class EMultiHitscanUpgradeType : uint8 {
	BulletsPerShot,
	EMultiHitscanUpgradeType_MAX,
};

// Enum FSD.EInventoryItemUpgradeType
UENUM(BlueprintType)
enum class EInventoryItemUpgradeType : uint8 {
	MovementSpeedWhileUsing,
	CooldownRate,
	UnJamDuration,
	ManualCooldownDelay,
	EInventoryItemUpgradeType_MAX,
};

// Enum FSD.EDoubleDrillUpgradeType
UENUM(BlueprintType)
enum class EDoubleDrillUpgradeType : uint8 {
	MiningRate,
	MaxFuel,
	HeatRemovalOnKill,
	HeatRemovalOnDamage,
	MovementPenalty,
	EDoubleDrillUpgradeType_MAX,
};

// Enum FSD.EFlameThrowerUpgradeType
UENUM(BlueprintType)
enum class EFlameThrowerUpgradeType : uint8 {
	StickyFlameDuration,
	LongReach,
	AoEHeat,
	KilledTargetsExplodeChance,
	EFlameThrowerUpgradeType_MAX,
};

// Enum FSD.EPickaxeUpgradeType
UENUM(BlueprintType)
enum class EPickaxeUpgradeType : uint8 {
	RockMining,
	OneHitMineralMining,
	ReceiveBonusMineralNitra,
	ReceiveBonusMineralGold,
	EnablePowerAttack,
	PowerAttackCoolDown,
	EPickaxeUpgradeType_MAX,
};

// Enum FSD.ECryoSprayUpgrades
UENUM(BlueprintType)
enum class ECryoSprayUpgrades : uint8 {
	PressureDropMultiplier,
	PressureGainMultiplier,
	ChargeupTime,
	RePressurisationTime,
	FrozenTargetsCanShatter,
	AoECold,
	LongReach,
	ECryoSprayUpgrades_MAX,
};

// Enum FSD.ERevolerUpgrades
UENUM(BlueprintType)
enum class ERevolerUpgrades : uint8 {
	OnKillFearFactor,
	ERevolerUpgrades_MAX,
};

// Enum FSD.EBasicPistol
UENUM(BlueprintType)
enum class EBasicPistol : uint8 {
	ConsecutiveHitsDamageBonus,
	EBasicPistol_MAX,
};

// Enum FSD.EAutoShotgunUpgrades
UENUM(BlueprintType)
enum class EAutoShotgunUpgrades : uint8 {
	TurretSpecialAttackEnabled,
	RateOfFireAndAutoMatic,
	EAutoShotgunUpgrades_MAX,
};

// Enum FSD.EBurstWeaponUpgrades
UENUM(BlueprintType)
enum class EBurstWeaponUpgrades : uint8 {
	FullBurstHitBonusDamage,
	FullBurstStaggerDuraion,
	EBurstWeaponUpgrades_MAX,
};

// Enum FSD.ESawedOffShotgunUpgrades
UENUM(BlueprintType)
enum class ESawedOffShotgunUpgrades : uint8 {
	FearOnShoot,
	ShockWave,
	ShotgunJump,
	ESawedOffShotgunUpgrades_MAX,
};

// Enum FSD.EAutoCannonUpgrades
UENUM(BlueprintType)
enum class EAutoCannonUpgrades : uint8 {
	FireTimeIncreaseScaleMultiplier,
	DamageBonusAtFullROF,
	StatusEffectAtFullROF,
	StartingFireRate,
	MaxFireRate,
	EAutoCannonUpgrades_MAX,
};

// Enum FSD.EChargedWeaponUpgrades
UENUM(BlueprintType)
enum class EChargedWeaponUpgrades : uint8 {
	ShotCostAtFullCharge,
	ChargeSpeed,
	CoolingRate,
	HeatPerSecondCharging,
	HeatPerSecondCharged,
	HeatPerChargedShot,
	HeatPerNormalShot,
	EChargedWeaponUpgrades_MAX,
};

// Enum FSD.EDualMachinePistolsUpgrades
UENUM(BlueprintType)
enum class EDualMachinePistolsUpgrades : uint8 {
	TriggerStatusEffectOnEmptyClip,
	EDualMachinePistolsUpgrades_MAX,
};

// Enum FSD.EBoltActionRifleUpgrades
UENUM(BlueprintType)
enum class EBoltActionRifleUpgrades : uint8 {
	FocusSpeed,
	AimedShotStagger,
	AimedWeakShotKillFearFactor,
	FocusDamageBonus,
	UnZoomedAccuracySpread,
	FocusedWeakspotHitStatusEffect,
	NoGravityOnFocus,
	KillReloadTimeBoost,
	EBoltActionRifleUpgrades_MAX,
};

// Enum FSD.EAssaultRifleUpgrade
UENUM(BlueprintType)
enum class EAssaultRifleUpgrade : uint8 {
	KillResetsSpread,
	KillTriggerStatusEffect,
	EAssaultRifleUpgrade_MAX,
};

// Enum FSD.EGatlingGunUpgrade
UENUM(BlueprintType)
enum class EGatlingGunUpgrade : uint8 {
	DamageMultiplierAtMaxStabilization,
	HeatRemovedOnKill,
	CriticalOverheat,
	BarrelProximityDamage,
	EGatlingGunUpgrade_MAX,
};

// Enum FSD.EBeltDrivenWeaponUpgrade
UENUM(BlueprintType)
enum class EBeltDrivenWeaponUpgrade : uint8 {
	BarrelSpinupTime,
	BarrelSpinDownTime,
	EBeltDrivenWeaponUpgrade_MAX,
};

// Enum FSD.EAmmoDrivenWeapnUpgradeType
UENUM(BlueprintType)
enum class EAmmoDrivenWeapnUpgradeType : uint8 {
	MaxAmmo,
	ClipSize,
	RateOfFire,
	ReloadSpeed,
	RecoilMultiplier,
	BurstCount,
	BurstRateOfFire,
	ActivateBurstFireMode,
	ActivateAutomaticFireMode,
	HeatUpRateModifier,
	AutoReloadDuration,
	RecoilMass,
	CustomEvent1,
	EAmmoDrivenWeapnUpgradeType_MAX,
};

// Enum FSD.EMinersManualSinglePage
UENUM(BlueprintType)
enum class EMinersManualSinglePage : uint8 {
	Mutators,
	Warnings,
	DamageTypes,
	Weakpoints,
	Armor,
	Light,
	Ammo,
	Traversal,
	Spacerig,
	Upgrades,
	Perks,
	Bosco,
	Assignments,
	Navigation,
	EMinersManualSinglePage_MAX,
};

// Enum FSD.EArmorType
UENUM(BlueprintType)
enum class EArmorType : uint8 {
	Light,
	Heavy,
	Unbreakable,
	EArmorType_MAX,
};

// Enum FSD.EDamageType
UENUM(BlueprintType)
enum class EDamageType : uint8 {
	Fire,
	Cold,
	Melee,
	Kinetic,
	Explosive,
	Stun,
	Electrocution,
	Fear,
	Radiation,
	Pheromone,
	Poison,
	ArmorBreaking,
	Push,
	Grab,
	None,
	Slow,
	Defense,
	TemperatureShock,
	EDamageType_MAX,
};

// Enum FSD.EEnemyAttackType
UENUM(BlueprintType)
enum class EEnemyAttackType : uint8 {
	Melee,
	Ranged,
	Grab,
	Area,
	Move,
	EEnemyAttackType_MAX,
};

// Enum FSD.EMiningPodMission
UENUM(BlueprintType)
enum class EMiningPodMission : uint8 {
	DropAndReturn,
	Extraction,
	DropFromSpacerig,
	EMiningPodMission_MAX,
};

// Enum FSD.EMiningPodRampState
UENUM(BlueprintType)
enum class EMiningPodRampState : uint8 {
	Closed,
	Opening,
	Open,
	Closing,
	EMiningPodRampState_MAX,
};

// Enum FSD.EMiningPodState
UENUM(BlueprintType)
enum class EMiningPodState : uint8 {
	Dropping,
	Drilling,
	Landed,
	PrepTakeoff,
	Departing,
	WaitingForGameStart,
	InSpace,
	Destroy,
	WaitOnSpacerig,
	ExitSpacerig,
	Damaged,
	PoweringUp,
	PoweredUp,
	DeepDiveDeparture,
	EMiningPodState_MAX,
};

// Enum FSD.EMissionStructure
UENUM(BlueprintType)
enum class EMissionStructure : uint8 {
	SingleMission,
	DeepDive_Normal,
	DeepDive_Elite,
	EMissionStructure_MAX,
};

// Enum FSD.EAfflictionSocket
UENUM(BlueprintType)
enum class EAfflictionSocket : uint8 {
	CenterMass,
	Feet,
	Camera,
	EAfflictionSocket_MAX,
};

// Enum FSD.EPawnStatType
UENUM(BlueprintType)
enum class EPawnStatType : uint8 {
	Multiplicative,
	Additive,
	EPawnStatType_MAX,
};

// Enum FSD.EPerkSlotType
UENUM(BlueprintType)
enum class EPerkSlotType : uint8 {
	Available,
	LockedByPerk,
	LockedByPromotion,
	EPerkSlotType_MAX,
};

// Enum FSD.EPerkUsageType
UENUM(BlueprintType)
enum class EPerkUsageType : uint8 {
	Passive,
	Active,
	EPerkUsageType_MAX,
};

// Enum FSD.EPerkHUDActivationLocation
UENUM(BlueprintType)
enum class EPerkHUDActivationLocation : uint8 {
	Main,
	Down,
	EPerkHUDActivationLocation_MAX,
};

// Enum FSD.EPerkTierState
UENUM(BlueprintType)
enum class EPerkTierState : uint8 {
	Claimable,
	Claimed,
	Locked,
	Unaffordable,
	NotAvailable,
	EPerkTierState_MAX,
};

// Enum FSD.EPickaxeState
UENUM(BlueprintType)
enum class EPickaxeState : uint8 {
	Equipping,
	Mining,
	PowerAttack,
	End,
	EPickaxeState_MAX,
};

// Enum FSD.EPickaxePartLocation
UENUM(BlueprintType)
enum class EPickaxePartLocation : uint8 {
	Head,
	FrontBlade,
	BackBlade,
	Shaft,
	Handle,
	Pommel,
	Material,
	Count,
	EPickaxePartLocation_MAX,
};

// Enum FSD.EPickaxePart
UENUM(BlueprintType)
enum class EPickaxePart : uint8 {
	Head,
	Blade,
	Shaft,
	Handle,
	Pommel,
	Material,
	EPickaxePart_MAX,
};

// Enum FSD.EPipelineExtractorPodAnimState
UENUM(BlueprintType)
enum class EPipelineExtractorPodAnimState : uint8 {
	Folded,
	Idle,
	Running,
	Broken,
	EPipelineExtractorPodAnimState_MAX,
};

// Enum FSD.EPlaceableObstructionType
UENUM(BlueprintType)
enum class EPlaceableObstructionType : uint8 {
	Valid,
	GroundTooSteep,
	TooShort,
	TooLong,
	TurnTooSharp,
	Blocked,
	NotEnoughRoom,
	TooSteep,
	Other,
	EPlaceableObstructionType_MAX,
};

// Enum FSD.ECharacterMoveDirection
UENUM(BlueprintType)
enum class ECharacterMoveDirection : uint8 {
	None,
	Forward,
	Left,
	Right,
	Back,
	ECharacterMoveDirection_MAX,
};

// Enum FSD.EGameOwnerStatus
UENUM(BlueprintType)
enum class EGameOwnerStatus : uint8 {
	Supporter,
	ContentCreator,
	Developer,
	Modder,
	EGameOwnerStatus_Max,
};

// Enum FSD.EMovementCustomMode
UENUM(BlueprintType)
enum class EMovementCustomMode : uint8 {
	MOVE_Custom_None,
	MOVE_Custom_Track,
	MOVE_Custom_CharacterStateControlled,
	MOVE_Custom_MAX,
};

// Enum FSD.ESpawnSettings
UENUM(BlueprintType)
enum class ESpawnSettings : uint8 {
	Normal,
	NoSpawning,
	SpawnAll,
	ESpawnSettings_MAX,
};

// Enum FSD.ETerrainPlacementBoxType
UENUM(BlueprintType)
enum class ETerrainPlacementBoxType : uint8 {
	NoTerrain,
	Terrain,
	ETerrainPlacementBoxType_MAX,
};

// Enum FSD.ERoomMirror
UENUM(BlueprintType)
enum class ERoomMirror : uint8 {
	None,
	MirrorX,
	MirrorY,
	ERoomMirror_MAX,
};

// Enum FSD.ERoomMirroringSupport
UENUM(BlueprintType)
enum class ERoomMirroringSupport : uint8 {
	NotAllowed,
	MirrorAroundX,
	MirrorAroundY,
	MirrorBoth,
	ERoomMirroringSupport_MAX,
};

// Enum FSD.EItemAdjustmentType
UENUM(BlueprintType)
enum class EItemAdjustmentType : uint8 {
	None,
	Cieling,
	Wall,
	Floor,
	EItemAdjustmentType_MAX,
};

// Enum FSD.ECaveEntranceType
UENUM(BlueprintType)
enum class ECaveEntranceType : uint8 {
	EntranceAndExit,
	Entrance,
	Exit,
	TreassureRoom,
	ECaveEntranceType_MAX,
};

// Enum FSD.ERoomType
UENUM(BlueprintType)
enum class ERoomType : uint8 {
	Start,
	End,
	MainPath,
	Gold,
	ERoomType_MAX,
};

// Enum FSD.EEnemyPlacementMask
UENUM(BlueprintType)
enum class EEnemyPlacementMask : uint8 {
	Ground,
	Spawner,
	Cieling,
	EEnemyPlacementMask_MAX,
};

// Enum FSD.ERoomPieceSide
UENUM(BlueprintType)
enum class ERoomPieceSide : uint8 {
	Up,
	Down,
	Forward,
	Backward,
	Right,
	Left,
	ERoomPieceSide_MAX,
};

// Enum FSD.EServerSortOrder
UENUM(BlueprintType)
enum class EServerSortOrder : uint8 {
	Mission,
	Players,
	Length,
	Complexity,
	Distance,
	Time,
	Difficulty,
	EServerSortOrder_MAX,
};

// Enum FSD.EServerDistance
UENUM(BlueprintType)
enum class EServerDistance : uint8 {
	Close,
	Medium,
	Far,
	World,
	EServerDistance_MAX,
};

// Enum FSD.EFSDNATType
UENUM(BlueprintType)
enum class EFSDNATType : uint8 {
	Open,
	Moderate,
	Strict,
	Unknown,
	EFSDNATType_MAX,
};

// Enum FSD.EFSDMissionStatus
UENUM(BlueprintType)
enum class EFSDMissionStatus : uint8 {
	SpaceRig,
	InGame,
	Starting,
	EscapeSequence,
	FinalBattle,
	EFSDMissionStatus_MAX,
};

// Enum FSD.ESharkEnemyState
UENUM(BlueprintType)
enum class ESharkEnemyState : uint8 {
	Idle,
	Circling,
	Attacking,
	Vulnerable,
	Dive,
	ESharkEnemyState_MAX,
};

// Enum FSD.EShowroomScaling
UENUM(BlueprintType)
enum class EShowroomScaling : uint8 {
	NoScaling,
	EnemySmall,
	EnemyMedium,
	EnemyBig,
	EnemyHuge,
	EShowroomScaling_MAX,
};

// Enum FSD.EPiplelineConnectorAnimationState
UENUM(BlueprintType)
enum class EPiplelineConnectorAnimationState : uint8 {
	Unassembled,
	Assembling,
	Assembled,
	EPiplelineConnectorAnimationState_MAX,
};

// Enum FSD.EMaggotAnimationState
UENUM(BlueprintType)
enum class EMaggotAnimationState : uint8 {
	Idle,
	Moving,
	EMaggotAnimationState_MAX,
};

// Enum FSD.EMoveDirection
UENUM(BlueprintType)
enum class EMoveDirection : uint8 {
	None,
	Forward,
	Left,
	Right,
	Back,
	EMoveDirection_MAX,
};

// Enum FSD.EFSDSteelSeriesEffect
UENUM(BlueprintType)
enum class EFSDSteelSeriesEffect : uint8 {
	HealthDamage,
	ShieldDamage,
	Flare,
	MissionSuccess,
	None,
	EFSDSteelSeriesEffect_MAX,
};

// Enum FSD.ETemperatureIntensity
UENUM(BlueprintType)
enum class ETemperatureIntensity : uint8 {
	Cold3,
	Cold2,
	Cold1,
	Heat1,
	Heat2,
	Heat3,
	ETemperatureIntensity_MAX,
};

// Enum FSD.ETetherConnectionMode
UENUM(BlueprintType)
enum class ETetherConnectionMode : uint8 {
	Both,
	FrontOnly,
	BackOnly,
	None,
	ETetherConnectionMode_MAX,
};

// Enum FSD.EThrowableInput
UENUM(BlueprintType)
enum class EThrowableInput : uint8 {
	LeftButton,
	RightButton,
	EThrowableInput_MAX,
};

// Enum FSD.EExitTrackMode
UENUM(BlueprintType)
enum class EExitTrackMode : uint8 {
	None,
	StopInPlace,
	JumpInPlace,
	JumpInCamDir,
	JumpInTrackDir,
	EExitTrackMode_MAX,
};

// Enum FSD.ETreasureType
UENUM(BlueprintType)
enum class ETreasureType : uint8 {
	WeaponSkin,
	VictoryPose,
	PickaxePart,
	VanityItem,
	ETreasureType_MAX,
};

// Enum FSD.EItemUpgradeStatus
UENUM(BlueprintType)
enum class EItemUpgradeStatus : uint8 {
	Locked,
	AvailableCannotAfford,
	AvailableCanAfford,
	Owned,
	Equipped,
	EItemUpgradeStatus_MAX,
};

// Enum FSD.EGeneratorIconType
UENUM(BlueprintType)
enum class EGeneratorIconType : uint8 {
	Vanity,
	PickaxePart,
	EGeneratorIconType_MAX,
};

// Enum FSD.ECharacterHeadMesh
UENUM(BlueprintType)
enum class ECharacterHeadMesh : uint8 {
	Full,
	ThichNeckOnly,
	ThinNeckOnly,
	None,
	ECharacterHeadMesh_MAX,
};

// Enum FSD.EHeadVanityType
UENUM(BlueprintType)
enum class EHeadVanityType : uint8 {
	HairOnly,
	HeadGearOnly,
	HeadGearOnly_UseArmorMaterial,
	HairAndHeadGear,
	HairAndHeadGear_UseArmorMaterial,
	EHeadVanityType_MAX,
};

// Enum FSD.EArmorSetLegs
UENUM(BlueprintType)
enum class EArmorSetLegs : uint8 {
	Invalid,
	LeftUpperLeg,
	LeftLowerLeg,
	LeftFoot,
	LeftToe,
	RightUpperLeg,
	RightLowerLeg,
	RightFoot,
	RightToe,
	EArmorSetLegs_MAX,
};

// Enum FSD.EArmorSetTorso
UENUM(BlueprintType)
enum class EArmorSetTorso : uint8 {
	Invalid,
	UpperTorso,
	MiddleTorso,
	LowerTorso,
	UpperBack,
	MiddleBack,
	LowerBack,
	LeftHip,
	RightHip,
	FrontHip,
	LeftUpperLeg,
	LeftLowerLeg,
	LeftFoot,
	LeftToe,
	RightUpperLeg,
	RightLowerLeg,
	RightFoot,
	RightToe,
	EArmorSetTorso_MAX,
};

// Enum FSD.EArmorSetArms
UENUM(BlueprintType)
enum class EArmorSetArms : uint8 {
	Invalid,
	LeftShoulder,
	RightShoulder,
	LeftUpperArm,
	LeftLowerArm1,
	LeftLowerArm2,
	LeftHand,
	LeftHandAttach,
	RightUpperArm,
	RightLowerArm1,
	RightLowerArm2,
	RightHand,
	RightHandAttach,
	EArmorSetArms_MAX,
};

// Enum FSD.EVanityAquisitionType
UENUM(BlueprintType)
enum class EVanityAquisitionType : uint8 {
	UnlockedFromStart,
	Purchased,
	Schematic,
	Treasure,
	EVanityAquisitionType_MAX,
};

// Enum FSD.EWoodLouseState
UENUM(BlueprintType)
enum class EWoodLouseState : uint8 {
	Unfolded,
	Folded,
	Size,
	EWoodLouseState_MAX,
};

