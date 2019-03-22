// Entry point for AFL to fuzz cppcheck.
// By Paul Dreik 2019
#include "VoidLogger.h"
#include "cppcheck.h"
#include "slurp.h"

int
main(int argc, char* argv[])
{
  VoidLogger voidlogger;
  for (int i = 1; i < argc; ++i) {
    CppCheck cppcheck(voidlogger, false);
    cppcheck.settings().addEnabled("all");
    cppcheck.settings().inconclusive = true;
    const auto garbage = slurp(argv[i]);
    cppcheck.check("garbage.cpp", garbage);
  }
}

