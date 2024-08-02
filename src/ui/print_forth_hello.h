#ifndef PRINT_FORTH_HELLO_H
#define PRINT_FORTH_HELLO_H

#ifdef _WIN32
    #define UI_API __declspec(dllexport)
#else
    #define UI_API
#endif

extern "C" UI_API void printForthHello();

#endif // PRINT_FORTH_HELLO_H
