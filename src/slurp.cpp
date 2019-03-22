// Reads a file into a string,
// after https://stackoverflow.com/questions/116038/what-is-the-best-way-to-read-an-entire-file-into-a-stdstring-in-c/116220#116220
// By Paul Dreik 2019

#include "slurp.h"
#include <cassert>
#include <fstream>
#include <sstream>
std::string
slurp(const char* filename)
{
  std::ifstream in(filename);
  assert(in);
  std::stringstream sstr;
  sstr << in.rdbuf();
  return sstr.str();
}

