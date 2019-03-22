int f() {
 int i,j=0;
 start:
 i=j;
 i++;
 j=i;
 if (i<3)
     goto start;
 return i;
}