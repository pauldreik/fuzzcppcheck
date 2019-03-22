typedef int comp;
const int f16=16;
template<int x>
class tvec2 {};
template<int x>
class tvec3 {};
namespace swizzle {
template <comp> void swizzle(tvec2<f16> v) { }
template <comp x, comp y> void swizzle(tvec3<f16> v) { }
}
void foo() {
  using namespace swizzle;
  tvec2<f16> tt2;
  swizzle<1>(tt2);
  tvec3<f16> tt3;
  swizzle<2,3>(tt3);
}