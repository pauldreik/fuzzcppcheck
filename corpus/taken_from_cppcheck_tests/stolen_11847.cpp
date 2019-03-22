typedef int (*CompilerHook)();
typedef struct VirtualMachine
{
    CompilerHook *(*compilerHookVector)(void);
}VirtualMachine;