wchar_t wc;TCHAR c;PTSTR ptstr;LPTSTR lptstr;PCTSTR pctstr;LPCTSTR lpctstr;void foo() {    TCHAR tc = _T('c');     TCHAR src[10] = _T("123456789");    TCHAR dst[10];    _tcscpy(dst, src);    dst[0] = 0;    _tcscat(dst, src);    LPTSTR d = _tcsdup(str);    _tprintf(_T("Hello world!"));    _stprintf(dst, _T("Hello!"));    _sntprintf(dst, sizeof(dst) / sizeof(TCHAR), _T("Hello world!"));    _tscanf(_T("%s"), dst);    _stscanf(dst, _T("%s"), dst);}TBYTE tbyte;