void foo()
{
    A *a = 0;
    if (!a) {
        nondeadcode;
        return;
        dead;
    }
    stilldead;
    a->_a;
}
