void f(const std::wstring& a, const std::wstring& b) {
    const std::string tp1 = std::string(a.begin(), b.end());
    const std::wstring tp2 = std::string(b.begin(), a.end());
    const std::u16string tp3(a.begin(), b.end());
    const std::u32string tp4(b.begin(), a.end());
    const std::string fp1 = std::string(a.begin(), a.end());
    const std::string tp2(a.begin(), a.end());
}