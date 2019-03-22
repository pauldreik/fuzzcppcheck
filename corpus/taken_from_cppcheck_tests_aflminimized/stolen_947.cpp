class FMat
{
public:
    FMat& copy(const FMat& rhs);
    FMat& operator=(const FMat& in);
};
FMat& FMat::copy(const FMat& rhs)
{
    return *this;
}
FMat& FMat::operator=(const FMat& in)
{
    return copy(in);
}