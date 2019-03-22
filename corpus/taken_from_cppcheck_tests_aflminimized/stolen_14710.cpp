class C {
public:
    void callback();
    void start();
};

void C::callback() {}

void C::start() { ev.set<C, &C::callback>(this); }