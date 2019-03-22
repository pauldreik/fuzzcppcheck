int main() {
    std::vector<int> v;
    std::vector<int>::iterator it;
    for( int i=0; i < 10; ++i ) v.push_back(i);
        unsigned int total = 0;
    it = v.begin();
    while( it != v.end() ) {
       total += *it;
       it++;
    }
    return 0;
}