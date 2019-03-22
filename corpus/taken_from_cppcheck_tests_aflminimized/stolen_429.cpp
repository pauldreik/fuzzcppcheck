void f(){
   int temp = 4;
 bool b = compare2(6);
 if(compare1(temp)> b){
         printf("foo");
 }
}
bool compare1(int temp){
 if(temp==4){
     return true;
     }
 else
     return false;
}
bool compare2(int temp){
 if(temp == 5){
     return true;
 }
 else
     return false;
}