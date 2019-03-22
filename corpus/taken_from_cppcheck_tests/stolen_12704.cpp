class CHyperlink : public CString
{
public:
    const CHyperlink& operator=(LPCTSTR lpsz) {
        CString::operator=(lpsz);
        return *this;
    }
};
