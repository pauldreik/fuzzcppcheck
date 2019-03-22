using Func = std::pair<int(*)(void*), void*>;
using CallQueue = std::vector<Func>;
int main() {
 CallQueue q;
}