void d(const char f, int o, int v)
{
     if (((f=='R') && (o == 1) && ((v < 2) || (v > 99))) ||
         ((f=='R') && (o == 2) && ((v < 2) || (v > 99))) ||
         ((f=='T') && (o == 2) && ((v < 200) || (v > 9999)))) {}
}