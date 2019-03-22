void get_offset(long &offset)
{
    mystruct * temp; temp = 0;
    offset = (long)(&(temp->z));
}