void foo(struct ABC *abc);

void f(struct ABC *abc) {
    abc->a = 0;
    foo(abc);
    if (abc) { }
}