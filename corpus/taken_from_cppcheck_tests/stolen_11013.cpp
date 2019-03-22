class Fred {
    template <typename T> T foo(T t) const { return t; }
};
const void * p = Fred::foo<const void *>(nullptr);