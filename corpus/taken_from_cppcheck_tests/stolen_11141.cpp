template<typename T> class C { };
template<> class C<char> { };
map<int> m;
C<int> i;
C<char> c;