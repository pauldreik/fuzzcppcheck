Fred & create() {
    Fred &fred(*new Fred);
    return fred;
}