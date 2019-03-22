C::C()
:v{}
{
    for (int dim = 0; dim < v.size(); ++dim) {
        v[dim]->f();
    }
};