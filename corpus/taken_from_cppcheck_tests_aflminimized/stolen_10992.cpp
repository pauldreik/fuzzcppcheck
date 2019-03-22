template<int N>
struct Factorial {
    enum FacHelper { value = N * Factorial<N - 1>::value };
};
template <>
struct Factorial<0> {
    enum FacHelper { value = 1 };
};
template<int DiagonalDegree>
int diagonalGroupTest() {
    return Factorial<DiagonalDegree>::value;
}
int main () {
    return diagonalGroupTest<4>();
}