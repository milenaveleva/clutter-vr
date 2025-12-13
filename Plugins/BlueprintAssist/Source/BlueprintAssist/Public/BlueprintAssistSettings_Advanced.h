#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "BlueprintAssistSettings_Advanced.generated.h"

UCLASS(config = EditorPerProjectUserSettings)
class BLUEPRINTASSIST_API UBASettings_Advanced final : public UObject
{
	GENERATED_BODY()

public:
	UBASettings_Advanced(const FObjectInitializer& ObjectInitializer);

	/* Fix for issue where copy-pasting material nodes will result in their material expressions having the same GUID */
	UPROPERTY(EditAnywhere, config, Category = Experimental)
	bool bGenerateUniqueGUIDForMaterialExpressions;

	UPROPERTY(EditAnywhere, config, Category = Experimental)
	bool bStoreCacheDataInPackageMetaData;

	/* Use a custom blueprint action menu for creating nodes (very prototype, not supported in 5.0 or earlier) */
	UPROPERTY(EditAnywhere, config, Category = Experimental)
	bool bUseCustomBlueprintActionMenu;

	UPROPERTY(EditAnywhere, config, Category = Default)
	TSet<FName> DisabledCommands;
};
