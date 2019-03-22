void func() {
    float y = 0.0f;
    auto lambda = [&]()
    {
        float x = 1.0f;
        y += 10.0f - x;
    }
    lambda();
}