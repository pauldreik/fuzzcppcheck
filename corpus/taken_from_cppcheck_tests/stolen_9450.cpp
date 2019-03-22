struct Wrapper {
    Thing* m_thing;
    Wrapper() : m_thing(0) {
    }
    ~Wrapper() {
        delete m_thing;
    }
    void changeThing() {
        delete m_thing;
        m_thing = new Thing;
    }
};