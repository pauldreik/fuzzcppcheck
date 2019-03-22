template <class T>
struct buffer {
    size_t size();
};
buffer<int> b;
void foo() {
    printf("%u", b.size());
}
