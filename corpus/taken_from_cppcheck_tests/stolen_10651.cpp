typedef std::vector<char> X;
X f<X>(const X &in) {
    const X s = f<X>(in);
    return f<X>(s);
}