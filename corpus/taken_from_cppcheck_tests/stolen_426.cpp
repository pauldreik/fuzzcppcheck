void f(){
     int temp = 4;
     if(compare1(temp) > compare2(temp)){
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
     if(temp==4){
         return false;
     }
     else
         return true;
}