template <class T, size_t S>
struct Array {
    T data[S];
    T & operator [] (size_t i) { return data[i]; }
};
void foo() {
    Array<int, 10> array1;
    Array<float, 10> array2;
    printf("%u %u", array1[0], array2[0]);
}
