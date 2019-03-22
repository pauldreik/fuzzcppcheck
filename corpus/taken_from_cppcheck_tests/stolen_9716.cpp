void foo(struct ABC *abc) {
    bar(abc->a);
    bar(x, abc->a);
    bar(x, y, abc->a);
    if (!abc)
        ;
}