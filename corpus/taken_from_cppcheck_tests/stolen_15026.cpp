void foo()
{
    BROWSEINFO    info;
    char          szDisplayName[MAX_PATH];
    info.pszDisplayName = szDisplayName;
    SHBrowseForFolder(&info);
}