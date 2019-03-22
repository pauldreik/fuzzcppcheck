std::vector<int> array;
char * p = 0;
char q[] = "abc";
char r[10] = { 0 };
size_t s;
void foo() {
    printf("%zu %zu", array.size(), s);
    printf("%u %u %u", p, q, r);
    printf("%u %u", array.size(), s);
    printf("%lu %lu", array.size(), s);
    printf("%llu %llu", array.size(), s);
}
