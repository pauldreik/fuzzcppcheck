bool pred(int x);
void foo() {
    std::vector<int> c;
    for(int x:v) {
        if (pred(x)) {
            c.push_back(x + 1); 
        }
    }
}
