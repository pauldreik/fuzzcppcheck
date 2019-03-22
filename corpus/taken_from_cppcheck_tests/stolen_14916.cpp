int main() {
    const Fred &fred = getfred();
    int *p = fred.x();
    *p = 0;}