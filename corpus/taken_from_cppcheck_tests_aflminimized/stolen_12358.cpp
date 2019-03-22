namespace N {
    class Zzz {
    public:
        std::list<int> x;
    };
}
using namespace N;
Zzz * zzz;
int main() {
    if (zzz->x.size() > 0) { }
}