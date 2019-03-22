void f(){
int pipefd[20];
if (pipe2(pipefd,0) == -1) {
    return;
  }
}