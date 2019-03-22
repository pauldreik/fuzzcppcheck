class Prefs {
private:
    int xasd;
public:
    explicit Prefs(wxSize size);
};
Prefs::Prefs(wxSize size)
{
    SetMinSize( wxSize( 48,48 ) );
}