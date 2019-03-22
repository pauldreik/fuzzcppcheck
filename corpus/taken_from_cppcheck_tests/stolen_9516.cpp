struct dev * f() {
    struct ABC *abc = malloc(100);
    return &abc->dev;
}