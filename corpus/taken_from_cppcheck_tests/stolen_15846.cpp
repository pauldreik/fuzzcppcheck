void foo()
{
    unsigned long mask = (1UL << size_) - 1;
    return (abits_val_ & mask);
}
