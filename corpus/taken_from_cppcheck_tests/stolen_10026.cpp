int main() {
  std::cout
    << boost::format(" %d :: %s <> %s") % 0 % "a" % "b"
    << std::endl;
  return 0;
}