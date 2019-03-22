void deserialize(const std::string &data) {
std::istringstream iss(data);
unsigned int len = 0;
if (!(iss >> len))
    return;
}
