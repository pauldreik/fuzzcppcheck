void foo()
{
    const char *msgid1, *msgid2;
    int ret = bar(&msgid1);
    if (ret > 0) {
        ret = bar(&msgid2);
    }
    ret = ret <= 0 ? -1 :
          strcmp(msgid1, msgid2) == 0;
}