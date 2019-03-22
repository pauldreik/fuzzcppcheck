void test() {
    float edgeResistance=1;
    std::vector<int> edges;
    BOOST_FOREACH(int edge, edges) {
        edgeResistance = (edge+1) / 2.0;
    }
}