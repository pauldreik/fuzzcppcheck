namespace N {
    class Zzz {
    public:
        std::list<int> x;
    };
}
using namespace N;
int main() {
    Zzz * zzz;
    if (zzz->x.size() > 0) { }
}