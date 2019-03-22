void foo()
{
    if ( this->FileIndex >= 0 )
        return;

    this->FileIndex = 1 ;
    if ( this->FileIndex < 0 ) {}
}