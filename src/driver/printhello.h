#ifndef PRINTHELLO_H
#define PRINTHELLO_H

#ifdef _WIN32
    #define DRIVER_API __declspec(dllexport)
#else
    #define DRIVER_API
#endif

extern "C" DRIVER_API void printHello();

#endif // PRINTHELLO_H
