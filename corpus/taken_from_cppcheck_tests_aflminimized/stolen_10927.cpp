template <typename T> class ABC {
public:
    typedef std::vector<T> type;
};
int main() {
    ABC<int>::type v;
    v.push_back(4);
    return 0;
}
