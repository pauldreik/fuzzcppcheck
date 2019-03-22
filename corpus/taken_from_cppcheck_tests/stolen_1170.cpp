class PESPacket {
public:
    PESPacket() : _pesdata(0) { }
    const unsigned char* pesdata() const { return _pesdata; }
    unsigned char* pesdata()             { return _pesdata; }
private:
    unsigned char *_pesdata;
};
class PSIPTable : public PESPacket
{
public:
    void SetSection(uint num) { pesdata()[6] = num; }
};