// Interface class to cppcheck, to
// swallow output.
// Inspired by https://github.com/orbitcowboy/afl_cppcheck/blob/master/fuzzer-cli/main.cpp
// By Paul Dreik 2019
#include "errorlogger.h"

class VoidLogger : public ErrorLogger
{
  void reportOut(const std::string&) {}
  void reportErr(const ErrorLogger::ErrorMessage&) {}
  void reportProgress(const std::string& ,
                      const char [],
                      const unsigned int )
  {}
};

