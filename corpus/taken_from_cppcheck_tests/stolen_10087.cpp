int test() {
    int test_value = 3;
    int test_array[1][1] = { { test_value } };
    return sizeof(test_array);
}