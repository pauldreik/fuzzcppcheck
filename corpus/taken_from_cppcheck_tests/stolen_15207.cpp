void reassign(char*& data, int size){    char* buf = new char[size];    char* tmp = data;    data = buf;    buf = tmp;    delete [] buf;}