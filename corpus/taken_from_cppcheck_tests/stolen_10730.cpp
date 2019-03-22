void f(){
int pipefd[20];
if (pipe(pipefd) == -1) {
    return;
  }
}