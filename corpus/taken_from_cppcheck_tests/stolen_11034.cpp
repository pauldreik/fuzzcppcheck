template <typename T>
using unique_ptr_with_deleter = std::unique_ptr<T, std::function<void(T*)>>;
class A {};
static void func() {
    unique_ptr_with_deleter<A> tmp(new A(), [](A* a) {
        delete a;
    });
}