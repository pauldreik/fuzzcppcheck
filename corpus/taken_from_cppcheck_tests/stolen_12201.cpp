void foo(const std::string& foo, unsigned int ii) {
    do {
       foo[ii] = 'x';
       ++i;
    } while(ii <= foo.length());
}