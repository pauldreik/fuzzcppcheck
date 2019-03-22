class DelayBase {
public:
void swapSpecificDelays(int index1, int index2) {
    std::swap<float>(delays_[index1], delays_[index2]);
}
float delays_[4];
};
