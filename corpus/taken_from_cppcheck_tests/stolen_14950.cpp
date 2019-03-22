int func() {
    std::shared_lock<std::shared_timed_mutex> lock( m );
}