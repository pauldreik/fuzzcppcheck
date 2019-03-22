void f() {
    std::vector<int> a;
    std::remove(a.begin(), a.end(), val);
    std::remove_if(a.begin(), a.end(), val);
    std::unique(a.begin(), a.end(), val);
    x = std::remove(a.begin(), a.end(), val);
    a.erase(std::remove(a.begin(), a.end(), val));
    std::remove("foo.txt");
}