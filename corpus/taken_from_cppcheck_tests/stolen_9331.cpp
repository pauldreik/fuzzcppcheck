void foo() {
    unsigned __int32 u32;
    String string;
    string.Format("%I32d", u32);
    string.AppendFormat("%I32d", u32);
}