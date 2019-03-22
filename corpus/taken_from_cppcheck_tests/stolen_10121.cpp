long long* test(float* f, char* c) {
    foo((long long*)f);
    return reinterpret_cast<long long*>(c);
}