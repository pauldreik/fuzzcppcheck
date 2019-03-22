void which_test() {
    const char* argv[] = { "./test_runner", "TestClass" };
    options args(sizeof argv / sizeof argv[0], argv);
    args.which_test();
}