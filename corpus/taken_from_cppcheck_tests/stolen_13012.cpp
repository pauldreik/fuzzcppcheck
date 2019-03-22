class WebGLTransformFeedback final
: public nsWrapperCache
, public WebGLRefCountedObject < WebGLTransformFeedback >
, public LinkedListElement < WebGLTransformFeedback >
{
private :
std :: vector < IndexedBufferBinding > mIndexedBindings ;
} ;
struct IndexedBufferBinding
{
IndexedBufferBinding ( ) ;
} ;
const decltype ( WebGLTransformFeedback :: mBuffersForTF ) &
WebGLTransformFeedback :: BuffersForTF ( ) const
{
mBuffersForTF . clear ( ) ;
for ( const auto & cur : mIndexedBindings ) {}
return mBuffersForTF ;
}