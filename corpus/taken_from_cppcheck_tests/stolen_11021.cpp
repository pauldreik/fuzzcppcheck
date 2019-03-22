class CTest {
public:
    template <typename T>
    static void Greeting(T val) {
        std::cout << val << std::endl;
    }
private:
    static void SayHello() {
        std::cout << "Hello World!" << std::endl;
    }
};
template<>
void CTest::Greeting(bool) {
	CTest::SayHello();
}
int main() {
    CTest::Greeting<bool>(true);
    return 0;
}