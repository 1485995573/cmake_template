#ifndef PRINT_DOUBLE_HELLO_H
#define PRINT_DOUBLE_HELLO_H

#ifdef _WIN32
    #define PROCESS_API __declspec(dllexport)
#else
    #define PROCESS_API
#endif

extern "C" PROCESS_API void printDoubleHello();

#endif // PRINT_DOUBLE_HELLO_H
