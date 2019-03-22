void foo() {
    FILE* f = fopen(name, "w");
    if(a) fwrite(buffer, 5, 6, f);
    else  fread(buffer, 5, 6, f);
}