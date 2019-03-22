void foo(const std::string& foo) {
    for (unsigned int ii = 0; ii <= foo.length(); ++ii) {
       foo[ii] = 'x';
    }
}