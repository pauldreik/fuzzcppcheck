void foo()
{
    void* ptr = kmalloc(16, GFP_KERNEL);
    kfree(ptr);
}