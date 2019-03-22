void foo(std::vector<int>& vec) {
    for (Function::iterator BB : vec) {
        for (int Inst : *BB)
        {
        }
    }
}