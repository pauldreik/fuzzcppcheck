void f(){
int pipefd[1];
if (pipe(pipefd) == -1) {
    return;
  }
}