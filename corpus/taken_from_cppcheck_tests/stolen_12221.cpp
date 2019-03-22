void f() {
    std::vector<int> vec(3);
    std::vector<int>::iterator it;
    std::vector<int>::iterator itEnd = vec.end();
    for (it = vec.begin(); it != itEnd; it = vec.begin(), itEnd = vec.end())
    {
        vec.erase(it);
    }
}