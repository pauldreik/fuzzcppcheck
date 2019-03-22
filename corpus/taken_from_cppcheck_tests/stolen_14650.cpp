void f(int i) {
    float *buffer;
    if(i>10) buffer = f;
    if(i>10) {
        for (int i=0;i<10;i++)
            buffer[i] = 0;
    }
}