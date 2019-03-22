const Callback& make() {
    struct _Wrapper {
        static ulong call(void* o, const void* f, const void*[]) {
            return 1;
        }
    };
    return _make(_Wrapper::call, pmf);
}