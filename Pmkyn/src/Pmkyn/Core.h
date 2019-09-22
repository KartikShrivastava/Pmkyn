#pragma once

#ifdef PMK_PLATFORM_WINDOWS
	#ifdef PMK_BUILD_DLL
		#define PMK_API __declspec(dllexport)
	#else
		#define PMK_API __declspec(dllimport)
	#endif
#else
	#error Supported platforms : Windows
#endif