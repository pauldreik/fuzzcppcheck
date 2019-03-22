struct custom_type { custom_type(int) {} };
void func(int) {}
int var;
void init() { func(var); }
UNKNOWN_MACRO_EXPANDING_TO_SIGNATURE { custom_type a(var); }