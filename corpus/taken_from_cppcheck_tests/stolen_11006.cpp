template<typename T>
void keep_range(T& value, const T mini, const T maxi){}
template void keep_range<float>(float& v, const float l, const float u);
template void keep_range<int>(int& v, const int l, const int u);