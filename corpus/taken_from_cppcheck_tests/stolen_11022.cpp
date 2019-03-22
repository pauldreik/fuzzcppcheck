struct Fred {
    template <typename T> static void foo() { }
};
template void Fred::foo<char>();
template void Fred::foo<float>();
template <> void Fred::foo<bool>() { }
template <> void Fred::foo<int>() { }