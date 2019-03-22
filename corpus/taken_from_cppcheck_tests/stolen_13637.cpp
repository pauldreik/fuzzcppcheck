template <typename T, typename U>
struct CheckedDivOp< T, U, typename std::enable_if<std::is_floating_point<T>::value || std::is_floating_point<U>::value>::type> {
};
