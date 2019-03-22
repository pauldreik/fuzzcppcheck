ABC *abc;
void f() {
    abc->a = 0;
    do_stuff();
    if (abc) { }
}