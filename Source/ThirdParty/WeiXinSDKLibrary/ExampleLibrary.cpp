#if defined _WIN32 || defined _WIN64
#include "AllowWindowsPlatformTypes.h"
#include "windows.h" // any native windows header
#include "HideWindowsPlatformTypes.h"

    #define DLLEXPORT __declspec(dllexport)
#else
    #include <stdio.h>
#endif

#ifndef DLLEXPORT
    #define DLLEXPORT
#endif

DLLEXPORT void ExampleLibraryFunction()
{
#if defined _WIN32 || defined _WIN64
	MessageBox(NULL, TEXT("Hello world!"), NULL, MB_OK);
#else
    printf("Hello World");
#endif
}