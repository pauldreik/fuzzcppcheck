void f(struct ABC *abc) {
    ({ if (abc) dbg(); })
}