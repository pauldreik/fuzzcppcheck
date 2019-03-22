void foo(FILE* f) {
    if(a) f = fopen(name, "w");
    else  f = fopen(name, "r");
    if(a) fwrite(buffer, 5, 6, f);
    else  fread(buffer, 5, 6, f);
}