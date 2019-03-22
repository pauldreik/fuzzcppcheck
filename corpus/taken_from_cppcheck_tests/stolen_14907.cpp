void foo()
{
    struct DATA *data = DATA;
    char *k = data->req;
    char *ptr;
    char *line_start;
    ptr = data->buffer;
    line_start = ptr;
    data->info = k;
    line_start = ptr;
}