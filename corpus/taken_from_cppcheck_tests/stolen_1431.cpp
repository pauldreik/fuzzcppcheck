class CGreeting : public CGreetingBase<char> {
public:
 CGreeting() : CGreetingBase<char>(), MessageSet(false) {}
private:
 bool MessageSet;
};