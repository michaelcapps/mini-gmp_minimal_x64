#pragma once
#ifdef MINIGMP_EXPORTS
#define MINIGMP_EXPORTS_API __declspec(dllexport) 
#else
#define MINIGMP_EXPORTS_API __declspec(dllimport) 
#endif