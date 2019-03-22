void foo(const std::string& foo, unsigned int ii) {
    if (anything()) {
    } else if (ii <= foo.length()) {
       foo[ii] = 'x';
    }
}