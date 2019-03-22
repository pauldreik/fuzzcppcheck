int foo(const std::string& buf)
{
  if (stricmp(buf.c_str(), buf.c_str()) == 0)  {    std::cout << "Equal";  }}