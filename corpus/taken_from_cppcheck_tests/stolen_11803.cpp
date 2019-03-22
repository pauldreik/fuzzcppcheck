typedef void (*TIFFFaxFillFunc)();
void f(va_list ap)
{
    *va_arg(ap, TIFFFaxFillFunc*) = 0;
}