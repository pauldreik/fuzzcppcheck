typedef int (Tcl_ObjCmdProc) (int x);
typedef struct LangVtab
{
    Tcl_ObjCmdProc * (*V_LangOptionCommand);
} LangVtab;