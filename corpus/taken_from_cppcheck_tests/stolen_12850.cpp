void func() {
    float y = 0.0f;
    auto lambda = [&]() -> bool
    {
        float x = 1.0f;
    }
    lambda();
}