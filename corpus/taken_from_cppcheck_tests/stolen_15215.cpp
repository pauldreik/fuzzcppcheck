template<unsigned dim>
struct Y: Y<dim-1> { };
template<>
struct Y<0> {};
void f() {
    Y y;
}