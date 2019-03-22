void chdcd_parse_nero(FILE *infile) {
    switch (mode) {
        case 0x0300:
            fclose(infile);
            exit(0);
        case 0x0500:
            fclose(infile);
            return;
    }
}