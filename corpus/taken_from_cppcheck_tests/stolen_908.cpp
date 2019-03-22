const SubTree &SubTree::operator= (const SubTree &b)
{
    CodeTree *oldtree = tree;
    tree = new CodeTree(*b.tree);
    delete oldtree;
    return *this;
}
const SubTree &SubTree::operator= (const CodeTree &b)
{
    CodeTree *oldtree = tree;
    tree = new CodeTree(b);
    delete oldtree;
    return *this;
}