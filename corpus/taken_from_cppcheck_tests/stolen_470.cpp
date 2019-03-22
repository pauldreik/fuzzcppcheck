struct group { int gr_gid; };
void f()
{
    char group[32];
    snprintf(group, 32, "%u", 0);
    struct group *gr;
    snprintf(group, 32, "%u", gr->gr_gid);
}