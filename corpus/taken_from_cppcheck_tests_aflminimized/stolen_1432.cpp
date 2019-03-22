class A : public wxDialog
{
private:
    DECLARE_EVENT_TABLE()
public:
    A(wxWindow *parent,
      wxWindowID id = 1,
      const wxString &title = wxT(),
      const wxPoint& pos = wxDefaultPosition,
      const wxSize& size = wxDefaultSize,
      long style = wxDIALOG_NO_PARENT | wxMINIMIZE_BOX | wxMAXIMIZE_BOX | wxCLOSE_BOX);
    virtual ~A();
private:
    wxTimer *WxTimer1;
};
