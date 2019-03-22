void f() {
    if (b)
        __asm__("mov ax, bx");
    else
        __asm__("mov bx, bx");
}