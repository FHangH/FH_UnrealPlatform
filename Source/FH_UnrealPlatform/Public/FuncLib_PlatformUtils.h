#pragma once

#include "CoreMinimal.h"
#include "Platform.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FuncLib_PlatformUtils.generated.h"

UCLASS(Blueprintable)
class FH_PLATFORM_API UFuncLib_PlatformUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="依旧当前的平台,在蓝图中走不同的分支"), Category="FH|Platform")
	static void SwitchPlatform(EPlatform& PLATFORM);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="仅判断是PC, Linux"), Category="FH|Platform")
	static void SwitchPC_Linux(EPlatform_PC_Linux& PLATFORM);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="仅判断是PC, Linux, Android"), Category="FH|Platform")
	static void SwitchPC_Linux_Android(EPlatform_PC_Linux_Android& PLATFORM);

	UFUNCTION(BlueprintCallable, meta=(ExpandEnumAsExecs="PLATFORM", ToolTip="仅判断是PC, Linux, Android, IOS"), Category="FH|Platform")
	static void SwitchPC_Linux_Android_IOS(EPlatform_PC_Linux_Android_IOS& PLATFORM);
};
