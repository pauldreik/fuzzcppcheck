template <typename Type>
struct SortWith {
    SortWith(Type);
};
template <typename Type>
SortWith<Type>::SortWith(Type) {}
int main() {
    SortWith<int>(0);
}