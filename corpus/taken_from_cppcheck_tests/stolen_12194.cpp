void f(std::vector<int> &ints) {
    std::vector<int>::iterator iter;
    for (iter=ints.begin();iter!=ints.end();++iter) {
        if (*iter == 2) {
            ints.erase(iter);
            break;
        }
        if (*iter == 3) {
            ints.erase(iter);
            break;
        }
    }
}