void foo(const std::string& foo, unsigned int ii) {
    if (ii <= foo.length()) {
       foo[ii] = 'x';
    }
}