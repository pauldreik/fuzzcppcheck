template <int n> struct vec {
  vec() {}
  vec(const vec<n-1>& v) {}
};

vec<4> v;