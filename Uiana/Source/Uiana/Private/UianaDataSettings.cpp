#include "UianaDataSettings.h"
#include "Internationalization/Text.h"

UUianaDataSettings::UUianaDataSettings(const FObjectInitializer& ObjectInitializer)
{
	ExportFolder.Path = "D:/Documents/pavimports";
	PaksFolder.Path = "D:/Documents/pavimports/421paks";
	Map = Santorini;
	ImportMeshes = true;
	ImportMaterials = true;
	ImportDecals = true;
	ImportLights = true;
	ImportBlueprints = true;
	UseSubLevels = true;
	LightmapResolutionMultiplier = 1;
}
