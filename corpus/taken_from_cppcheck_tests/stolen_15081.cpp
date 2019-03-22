void foo()
{
    void* ptr = vmalloc(16, GFP_KERNEL);
    vfree(ptr);
}