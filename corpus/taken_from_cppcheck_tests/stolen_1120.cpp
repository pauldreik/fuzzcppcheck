struct DelayBase {
    float swapSpecificDelays(int index1) {
        return delays_[index1];
    }
    float delays_[4];
};