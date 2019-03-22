void foo(memoryMapEntry_t* entry, memoryMapEntry_t* memoryMapEnd) {
    memmove(entry, entry + 1, (memoryMapEnd - entry) / sizeof(entry));
}