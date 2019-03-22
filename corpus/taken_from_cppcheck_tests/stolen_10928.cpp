template <typename T> class ABC {
public:
    typedef std::vector<T> type;
    void f()
    {
      ABC<int>::type v;
      v.push_back(4);
    }
};
