int main() {
    auto lambda = [](double value) {
        double rounded = floor(value + 0.5);
        printf("Rounded value = %f\n", rounded);
    };
    lambda(13.3);
    return 0;
}