void set_cur_cpu_spec()
{
    t = PTRRELOC(t);
}

cpu_spec * __init setup_cpu_spec()
{
    t = PTRRELOC(t);
    *PTRRELOC(&x) = &y;
}