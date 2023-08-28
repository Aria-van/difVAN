#pragma once

#ifdef DV_PLATFORM_WINDOWS
	#ifdef DV_BUILD_DLL
		#define DIFVAN_API __declspec(dllexport)
	#else
		#define DIFVAN_API __declspec(dllimport)
	#endif
#else
    #error difVAN only supports windows!
#endif
