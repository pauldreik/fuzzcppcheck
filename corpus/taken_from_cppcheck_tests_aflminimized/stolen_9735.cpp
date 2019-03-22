void f(ABC *abc) {
    switch ( x ) {
        case 14:
            sprintf(buf, "%d", abc->a);
            break;
        case 15:
            if ( abc ) {}
            break;
    }
}