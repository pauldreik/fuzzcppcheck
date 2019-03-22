class wxThreadInternal {
public:
    void SetExitCode(wxThread::ExitCode exitcode) { m_exitcode = exitcode; }
private:
    wxThread::ExitCode m_exitcode;
};