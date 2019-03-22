class PSIPTable {
public:
    PSIPTable() : _pesdata(0) { }
    const unsigned char* pesdata() const { return _pesdata; }
    unsigned char* pesdata()             { return _pesdata; }
    void SetSection(uint num) { pesdata()[6] = num; }
private:
    unsigned char *_pesdata;
};