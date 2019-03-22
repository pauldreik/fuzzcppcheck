template<>
class Bar<void, void> {
};
template<typename K, typename V, int KeySize>
class Bar : private Bar<void, void> {
   void foo() {
   }
};