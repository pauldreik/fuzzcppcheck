template<typename T>
T f1(T t) { return t; }
template const char * f1<const char *>();
template const char & f1<const char &>();