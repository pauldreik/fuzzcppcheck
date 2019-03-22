struct ABC;
class Fred
{
private:
    void addAbc(ABC* abc)
    {
        AbcPosts->Add(abc);
    }
public:
    void click()
    {
        ABC *p = new ABC;
        addAbc( p );
    }
};