void f() {
    const std::string greeting("Hello World !!!");
    const std::string::size_type npos = greeting.rfind(" ");
    if (npos != std::string::npos)
        std::cout << greeting.substr(0, npos) << std::endl;
}