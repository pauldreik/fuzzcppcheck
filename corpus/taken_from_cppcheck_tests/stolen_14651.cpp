void f(){
    int x;
    for (int i = 0; i < 10; i++) {
        asm("foo");
        if (x & 0xf1) { }
    }
}