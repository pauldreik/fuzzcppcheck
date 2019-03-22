template<typename T>
T foo(T& value){ return value; }
template std::vector<std::vector<int>> foo<std::vector<std::vector<int>>>(std::vector<std::vector<int>>& v);