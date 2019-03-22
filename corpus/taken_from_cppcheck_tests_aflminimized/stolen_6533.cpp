void foo() {
    printf("%f %d", static_cast<int>(1.0f), reinterpret_cast<const void *>(0));
}
