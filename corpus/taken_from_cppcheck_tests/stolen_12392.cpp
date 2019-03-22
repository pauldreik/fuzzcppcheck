void svgFile(const std::string &content, const std::string &fileName, const double end = 1000., const double start = 0.);
void Bar(std::string filename) {
    std::string str = "bar";
    std::ofstream svgFile(filename.c_str(), std::ios::trunc);
    svgFile << "test";
}