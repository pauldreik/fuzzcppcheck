int main() {
    std::vector<int> v;
    std::vector<int>::iterator it;
    for( int i=0; i < 10; ++i ) v.push_back(i);
        unsigned int total = 0;
    std::vector<int>::reverse_iterator rit;
    rit= v.rend();
    while( rit != v.rbegin() ) {
       rit--;
    }
    return 0;
}