void f(struct ABC *abc) {
    abc = (*abc).next;
    if (abc) { }
}