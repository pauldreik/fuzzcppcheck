namespace ns {
template <class T>
struct is_floating_point 
: std::integral_constant<bool, std::is_floating_point<T>::value || true>
{};
}
void f() {
    if(std::is_floating_point<float>::value) {}
}