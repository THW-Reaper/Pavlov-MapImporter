#pragma once

#include "Engine/EngineTypes.h"
#include "UianaDataSettings.generated.h"
UENUM()
enum WeaponRole
{
	Bridge     UMETA(DisplayName = "Bridge"),
	Bunker      UMETA(DisplayName = "Bunker"),
	ContainerYard   UMETA(DisplayName = "ContainerYard"),
	ContainerYardNight     UMETA(DisplayName = "ContainerYardNight"),
	DataCenter      UMETA(DisplayName = "DataCenter"),
	DataCenterNight   UMETA(DisplayName = "DataCenterNight"),
	Hospital     UMETA(DisplayName = "Hospital"),
	Industry      UMETA(DisplayName = "Industry"),
	IndustryNight   UMETA(DisplayName = "IndustryNight"),
	KillHouse   UMETA(DisplayName = "KillHouse"),
	PavlovWWII(Main Menu)   UMETA(DisplayName = "Menu"),
	Prisionbreak(Siberia)   UMETA(DisplayName = "Siberia"),
	Sandv2   UMETA(DisplayName = "Sandv2"),
	Sandv2Night   UMETA(DisplayName = "Sandv2Night"),
	Santorini   UMETA(DisplayName = "Santorini"),
	SantoriniNight   UMETA(DisplayName = "SantoriniNight"),
	SpectatorRoom   UMETA(DisplayName = "SpectatorRoom"),
	Subway(Station)   UMETA(DisplayName = "Station"),
	SubwayNight   UMETA(DisplayName = "StationNight"),
	tank_stalingrad   UMETA(DisplayName = "Stalingrad"),
	tank_stalingradNight   UMETA(DisplayName = "StalingradNight"),
	Tutorial   UMETA(DisplayName = "Tutorial")
};
UCLASS(config = Engine, defaultconfig,transient)

class UIANA_API UUianaDataSettings : public UObject
{
	GENERATED_BODY()
public:
	UUianaDataSettings(const FObjectInitializer& ObjectInitializer);
	UPROPERTY(config, EditAnywhere, Category = "Settings Folders", meta = (RelativeToGameContentDir, ContentDir))
		FDirectoryPath ExportFolder;
	UPROPERTY(config, EditAnywhere, Category = "Settings Folders", meta = (RelativeToGameContentDir, ContentDir))
		FDirectoryPath PaksFolder;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings")
		TEnumAsByte<WeaponRole> Map;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings")
		bool ImportMeshes;
	UPROPERTY(config, EditAnywhere, Category = "SubLevels")
		bool UseSubLevels;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings")
		bool ImportMaterials;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings")
		bool ImportDecals;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings")
		bool ImportLights;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings")
		bool ImportBlueprints;
	UPROPERTY(config, EditAnywhere, Category = "Import Settings", meta=(ClampMin=0.01, ClampMax=5))
		float LightmapResolutionMultiplier;

};