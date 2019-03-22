class A{};
A operator + (const A &, const A &){ return A(); }
A operator - (const A &, const A &){ return A(); }
A operator * (const A &, const A &){ return A(); }
A operator / (const A &, const A &){ return A(); }
A operator % (const A &, const A &){ return A(); }
A operator & (const A &, const A &){ return A(); }
A operator | (const A &, const A &){ return A(); }
A operator ~ (const A &){ return A(); }
A operator ! (const A &){ return A(); }
bool operator < (const A &, const A &){ return true; }
bool operator > (const A &, const A &){ return true; }
A operator += (const A &, const A &){ return A(); }
A operator -= (const A &, const A &){ return A(); }
A operator *= (const A &, const A &){ return A(); }
A operator /= (const A &, const A &){ return A(); }
A operator %= (const A &, const A &){ return A(); }
A operator &= (const A &, const A &){ return A(); }
A operator ^= (const A &, const A &){ return A(); }
A operator |= (const A &, const A &){ return A(); }
A operator << (const A &, const int){ return A(); }
A operator >> (const A &, const int){ return A(); }
A operator <<= (const A &, const int){ return A(); }
A operator >>= (const A &, const int){ return A(); }
bool operator == (const A &, const A &){ return true; }
bool operator != (const A &, const A &){ return true; }
bool operator <= (const A &, const A &){ return true; }
bool operator >= (const A &, const A &){ return true; }
A operator && (const A &, const int){ return A(); }
A operator || (const A &, const int){ return A(); }
A operator ++ (const A &, const int){ return A(); }
A operator ++ (const A &){ return A(); }
A operator -- (const A &, const int){ return A(); }
A operator -- (const A &){ return A(); }
A operator , (const A &, const A &){ return A(); }
