class NeonSession {
    void exit();
};
void NeonSession::exit()
{
    SAL_INFO("ucb.ucp.webdav", "neon commands cannot be aborted");
}