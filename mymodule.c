#include <stdio.h>
#include <stdint.h>
#include "mymodule.h"


inline uint64_t warn(){
    uint64_t pc;
    __asm__ volatile("mov %0, pc" : "=r" (pc));
    return pc;
}

inline uint64_t error(){
    uint64_t pc;
    __asm__ volatile("mov %0, pc" : "=r" (pc));
    return pc;
}