void f(){
int pipefd[1];
if (pipe2(pipefd,0) == -1) {
    return;
  }
}