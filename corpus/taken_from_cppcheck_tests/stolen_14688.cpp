struct flex_array {};
struct cgroup_taskset {};
void cgroup_attach_task() {
  struct flex_array *group;
  struct cgroup_taskset tset = { };
  do { } while_each_thread(leader, tsk);
}