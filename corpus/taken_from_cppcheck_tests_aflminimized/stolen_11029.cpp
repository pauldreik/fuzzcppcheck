template <typename T>
class Array { };
template<typename T>
Array<T> foo() {};
template <> Array<double> foo<double>() { }
template <> Array<std::complex<float>> foo<std::complex<float>>() { }
template <> Array<float> foo<float>() { }
template < typename T >
Array<T> matmul() {
    return foo<T>( );
}
template Array<std::complex<float>> matmul<std::complex<float>>();