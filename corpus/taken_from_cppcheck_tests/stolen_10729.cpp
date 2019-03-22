void f(){
int pipefd[2];
if (pipe(pipefd) == -1) {
    return;
  }
}