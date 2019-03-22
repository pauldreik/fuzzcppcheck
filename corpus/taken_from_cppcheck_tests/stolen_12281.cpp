void f()
{
    std::vector<std::string> files;
    std::vector<std::string>::const_iterator it;
    for (it = files.begin(); it < files.end(); it++) { }
    for (it = files.begin(); it < files.end(); it++) { };
}