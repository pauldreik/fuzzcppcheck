// Entry point for libFuzzer to fuzz cppcheck.
// By Paul Dreik 2019
#include "VoidLogger.h"
#include "cppcheck.h"
#include "slurp.h"

#include <cstdint>

namespace {
struct Init
{
  Init()
    : m_cppcheck(m_voidlogger, false)
  {
    m_cppcheck.settings().addEnabled("all");
    m_cppcheck.settings().inconclusive = true;
  }
  VoidLogger m_voidlogger;
  CppCheck m_cppcheck;
};
}

extern "C" int
LLVMFuzzerTestOneInput(const uint8_t* Data, size_t Size)
{

  static Init init;
  const std::string garbage((const char*)Data, (const char*)Data + Size);
  init.m_cppcheck.check("garbage.cpp", garbage);
  return 0;
}
