void foo(ABC *abc) {
    abc->a = 0;
    if (abc && abc->b == 0)
        ;
}