void f(std::string s, int offset)  {
     if (!memcmp(s.c_str(), s.c_str() + offset, 42)){}
     if (!memcmp(s.c_str() + offset, s.c_str(), 42)){}
     if (!memcmp(offset + s.c_str(), s.c_str(), 42)){}
     if (!memcmp(s.c_str(), offset + s.c_str(), 42)){}
}