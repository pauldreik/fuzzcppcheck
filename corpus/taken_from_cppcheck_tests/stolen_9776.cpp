struct A
{
    B* W;

    void f() {
        switch (InData) {
            case 2:
                if (!W) return;
                W->foo();
                break;
            case 3:
                f();
                if (!W) return;
                break;
        }
    }
}