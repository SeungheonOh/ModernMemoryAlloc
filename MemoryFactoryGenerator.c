#include "MemoryFactoryGenerator.h"

void* MemoryFactoryGenerator(size_t __MemoryWidthToAlloc__) {
    void* __TempMemoryVoidPtrToAlloc__ = malloc(
        (size_t)(0 + (1 *
                (size_t)sizeof(__MemoryWidthToAlloc__) == (size_t)1 ?
        (size_t)1 :
        (size_t)sizeof(__MemoryWidthToAlloc__))));

    if ((size_t)sizeof(__TempMemoryVoidPtrToAlloc__) <= 0) {
        exit(1);
    }

    return (void*)__TempMemoryVoidPtrToAlloc__;
}
