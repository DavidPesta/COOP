#ifndef __HEAP_CACHE__H_
#define __HEAP_CACHE__H_

#include "object.h"
#include "iCache.h"

DEF_DERIVED_CLASS(HeapCache, iCache);
END_DEF_DERIVED(HeapCache);

DERIVED_FUNCTIONS(HeapCache, iCache);
OVERIDE_FUNCTION_PTR(AddNewBlock, int block_size, void** returned);
OVERIDE_FUNCTION_PTR(RemoveBlock, void* toDelete);
END_DERIVED_FUNCTIONS(HeapCache);

FUNCTION_H(HeapCache, AddNewBlock, int block_size, void** returned);
FUNCTION_H(HeapCache, RemoveBlock, void* toDelete);

DEF_INIT_CLASS(HeapCache);


//#ifndef __I_CACHE__H_
//#include "iCache.h"
//#endif
//
//#define MAX_NUM_BLOCKS 1000
//
//DEF_DERIVED_CLASS(HeapCache, iCache) ;
//char* buffer;
//int size;
//Block allBlocks[MAX_NUM_BLOCKS];
//int nextFreeBlock;
//END_DEF_DERIVED(HeapCache);
//
//DERIVED_FUNCTIONS(HeapCache, iCache, int size)
//OVERIDE_FUNCTION_PTR(AddNewBlock, int blockSize, Block** returned);
//OVERIDE_FUNCTION_PTR(RemoveBlock, Block* toDelete);
//END_FUNCTIONS(HeapCache);
//
//FUNCTION_H(HeapCache, AddNewBlock, int blockSize, Block** returned);
//FUNCTION_H(HeapCache, RemoveBlock, Block* toDelete);
//
//DEF_INIT_CLASS(HeapCache, iCache);
//
//void HeapCache_InitCache(HeapCache* c);
//
//void HeapCache_AllocateCache(HeapCache* c, int newSize);
//
//void HeapCache_AllocateCacheFromExisingBuf(HeapCache* c, char* cacheMemroy, int newSize);
//
//bool HeapCache_isEmpty(HeapCache* c);
//
//void HeapCache_Destroy(HeapCache* c);

#endif

