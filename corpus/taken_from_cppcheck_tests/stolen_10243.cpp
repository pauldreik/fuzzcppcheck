void foo(int a)
{
        while(true) {
          if (a++ >= 100) {
            continue;
          }
          a+=2;
       }
}