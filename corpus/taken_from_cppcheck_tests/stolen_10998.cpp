namespace bpp
{
template<class N, class E, class DAGraphImpl>
class AssociationDAGraphImplObserver :
  public AssociationGraphImplObserver<N, E, DAGraphImpl>
{};
template<class N, class E>
using AssociationDAGlobalGraphObserver =  AssociationDAGraphImplObserver<N, E, DAGlobalGraph>;
}
using namespace bpp;
using namespace std;
int main() {
  AssociationDAGlobalGraphObserver<string,unsigned int> grObs;
 return 1;
}