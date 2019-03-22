void f(list<int> &ints)
{
    for (list<int>::iterator it = ints.begin(); it != ints.end();) {
        if (*it == 123) {
            list<int>::iterator copy = it;
            ++copy;
            ints.erase(it);
            it = copy;
        } else {
            it->second = 123;
            ++it;
        }
    }
}