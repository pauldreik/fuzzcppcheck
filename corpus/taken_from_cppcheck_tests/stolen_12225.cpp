void f(std::vector<int> &ints)
{
    std::vector<int>::iterator it;
    std::vector<int>::iterator jt = ints.begin();
    for (it = ints.begin(); it != ints.end(); it = jt) {
        ++jt;
        if (*it == 1) {
            jt = ints.erase(it);
            continue;
        }
    }
}