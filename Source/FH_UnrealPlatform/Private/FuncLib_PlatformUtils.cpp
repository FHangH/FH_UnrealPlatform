#include "FuncLib_PlatformUtils.h"

void UFuncLib_PlatformUtils::SwitchRuntime(ERuntime& RUNTIME)
{
#if UE_EDITOR
	RUNTIME = ERuntime::ER_Editor;
#else
	RUNTIME = ERuntime::ER_Runtime;
#endif
}

void UFuncLib_PlatformUtils::SwitchRuntime_Editor_Debug_Development_Shipping(
	ERuntime_Editor_Debug_Development_Shipping& RUNTIME)
{
#if UE_EDITOR
	RUNTIME = ERuntime_Editor_Debug_Development_Shipping::ER_Editor;
#elif UE_BUILD_DEBUG
	RUNTIME = ERuntime_Editor_Debug_Development_Shipping::ER_Debug;
#elif UE_BUILD_DEVELOPMENT
	RUNTIME = ERuntime_Editor_Debug_Development_Shipping::ER_Development;
#elif UE_BUILD_SHIPPING
	RUNTIME = ERuntime_Editor_Debug_Development_Shipping::ER_Shipping;
#endif
}

void UFuncLib_PlatformUtils::SwitchPlatform(EPlatform& PLATFORM)
{
#if PLATFORM_WINDOWS
	PLATFORM = EPlatform::PC;
#elif PLATFORM_MAC
	PLATFORM = EPlatform::Mac;
#elif PLATFORM_ANDROID
	PLATFORM = EPlatform::Android;
#elif PLATFORM_IOS
	PLATFORM = EPlatform::IOS;
#elif PLATFORM_LINUX
	PLATFORM = EPlatform::Linux;
#endif
}

void UFuncLib_PlatformUtils::SwitchPC_Linux(EPlatform_PC_Linux& PLATFORM)
{
#if PLATFORM_WINDOWS
	PLATFORM = EPlatform_PC_Linux::PC;
#elif PLATFORM_LINUX
	PLATFORM = EPlatform_PC_Linux::Linux;
#endif
}

void UFuncLib_PlatformUtils::SwitchPC_Linux_Android(EPlatform_PC_Linux_Android& PLATFORM)
{
#if PLATFORM_WINDOWS
	PLATFORM = EPlatform_PC_Linux_Android::PC;
#elif PLATFORM_LINUX
	PLATFORM = EPlatform_PC_Linux_Android::Linux;
#elif PLATFORM_ANDROID
	PLATFORM = EPlatform_PC_Linux_Android::Android;
#endif
}

void UFuncLib_PlatformUtils::SwitchPC_Linux_Android_IOS(EPlatform_PC_Linux_Android_IOS& PLATFORM)
{
#if PLATFORM_WINDOWS
	PLATFORM = EPlatform_PC_Linux_Android_IOS::PC;
#elif PLATFORM_LINUX
	PLATFORM = EPlatform_PC_Linux_Android_IOS::Linux;
#elif PLATFORM_ANDROID
	PLATFORM = EPlatform_PC_Linux_Android_IOS::Android;
#elif PLATFORM_IOS
	PLATFORM = EPlatform_PC_Linux_Android_IOS::IOS;
#endif
}
