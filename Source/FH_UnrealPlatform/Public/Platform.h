#pragma once

#include "Platform.generated.h"

UENUM(BlueprintType)
enum class ERuntime : uint8
{
	ER_Runtime	UMETA(Displayname="Runtime"),
	ER_Editor	UMETA(Displayname="Editor")
};

UENUM(BlueprintType)
enum class EPlatform : uint8
{
	PC		UMETA(Displayname="PC"),
	Mac		UMETA(Displayname="MAC"),
	Android	UMETA(Displayname="Android"),
	IOS		UMETA(Displayname="IOS"),
	Linux	UMETA(Displayname="Linux")
};

UENUM(BlueprintType)
enum class EPlatform_PC_Linux : uint8
{
	PC		UMETA(Displayname="PC"),
	Linux	UMETA(Displayname="Linux")
};

UENUM(BlueprintType)
enum class EPlatform_PC_Linux_Android : uint8
{
	PC		UMETA(Displayname="PC"),
	Linux	UMETA(Displayname="Linux"),
	Android	UMETA(Displayname="Android")
};

UENUM(BlueprintType)
enum class EPlatform_PC_Linux_Android_IOS : uint8
{
	PC		UMETA(Displayname="PC"),
	Linux	UMETA(Displayname="Linux"),
	Android	UMETA(Displayname="Android"),
	IOS		UMETA(Displayname="IOS")
};
