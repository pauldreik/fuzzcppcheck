void f(WhereInfo *pWInfo, int *aiCur) {
  memcpy(aiCur, pWInfo->aiCurOnePass, sizeof(int)*2);
}