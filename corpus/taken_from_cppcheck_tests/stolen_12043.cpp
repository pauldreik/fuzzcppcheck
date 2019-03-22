int f(char* aug) {
  memmove(aug + extra_string, aug, buf - (bfd_byte *)aug);
}