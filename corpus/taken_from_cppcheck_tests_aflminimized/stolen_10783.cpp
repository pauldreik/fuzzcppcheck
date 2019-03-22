#define MUTEX_LOCK(m) pthread_mutex_lock(&(m))
void f(struct mutex *mut) {
    MUTEX_LOCK(*mut);
}
