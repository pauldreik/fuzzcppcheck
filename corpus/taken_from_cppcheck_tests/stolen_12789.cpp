namespace swizzle {
  template <comp> void swizzle(tvec2<f16>) {}
  template <comp x, comp y> void swizzle(tvec2<f16> v) {}
}