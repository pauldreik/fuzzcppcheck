struct per_state_info {
    uint64_t enter, exit;
    uint64_t events;
    per_state_info() : enter(0), exit(0), events(0) {}
};