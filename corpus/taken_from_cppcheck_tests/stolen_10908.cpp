class Base {};
int main() {
    std::vector<Base*> v;
    v.push_back(new Base());
    v.push_back(new Base());
    for (std::vector<Base*>::iterator i=v.begin(); i!=v.end(); i++) {
        ;;
    }
    v.clear();
    return 0;
}