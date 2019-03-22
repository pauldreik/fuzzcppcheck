struct ABC;
class Fred
{
private:
    void addAbc(ABC *abc);
public:
    void click();
};

void Fred::addAbc(ABC* abc)
{
    AbcPosts->Add(abc);
}

void Fred::click()
{
    ABC *p = new ABC;
    addAbc( p );
}