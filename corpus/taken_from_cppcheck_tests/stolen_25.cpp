const int* test(std::vector<int> outputs, const std::string& text) {
  auto it = std::find_if(outputs.begin(), outputs.end(), 
     [&](int ele) { return "test" == text; });
  return nullptr;
}