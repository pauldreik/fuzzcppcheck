void f(){
int pipefd[2];
if (pipe2(pipefd,0) == -1) {
    return;
  }
}