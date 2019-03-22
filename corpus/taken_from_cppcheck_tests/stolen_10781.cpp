void f(Mutex *mut) {
    pthread_mutex_lock(&*mut);
}
