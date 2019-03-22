function f1(std::list<int> &l1) {
    for(std::list<int>::iterator i = l1.begin(); i != l1.end(); i++) {
        if (*i == 44) {
            l1.insert(++i, 55);
            break;
        }
    }
}