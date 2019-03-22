using namespace std;
std::string itoip(int ip) {
    stringstream out;
    out << ((ip >> 0) & 0xFF);
    return out.str();
}n