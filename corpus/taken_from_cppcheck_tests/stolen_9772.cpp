void f(struct ABC *abc) {
    abc = (*abc->ptr);
    if (abc) { }
}