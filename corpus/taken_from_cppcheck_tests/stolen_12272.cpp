void f(std::vector<int> &vec) {
    for(std::vector<int>::iterator iter = vec.begin(); iter != vec.end(); ++iter)
    {
        vec.insert(iter, 0);
        break;
    }
}