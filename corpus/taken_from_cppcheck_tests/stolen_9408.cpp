void parse() {
    struct Buf {
        Buf(uint32_t len) : m_buf(new uint8_t[len]) {}
        ~Buf() { delete[]m_buf; }
        uint8_t *m_buf;
    };
}