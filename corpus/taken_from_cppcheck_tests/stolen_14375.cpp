void f(){
   char *strMsg = "This is a message";
   char *buffer=(char*)malloc(128*sizeof(char));
   strcpy(strMsg,buffer);
   free(buffer);
}