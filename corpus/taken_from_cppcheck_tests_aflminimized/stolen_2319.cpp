template <typename...>
void templ_fun_with_ty_pack() {}
 
namespace PR20047 {
        template <typename T>
        struct A {};
        using AliasA = A<T>;
}
