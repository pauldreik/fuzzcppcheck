template <typename T>
T Value = 123;
template<>
int Value<int> = 456;
float f = Value<float>;
int i = Value<int>;