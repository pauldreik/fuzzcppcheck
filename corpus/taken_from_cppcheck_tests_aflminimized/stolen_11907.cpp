template<
typename DataType,
typename SpaceType,
typename TrafoConfig>
class AsmTraits1 {
    typedef typename SpaceType::TrafoType TrafoType;
    typedef typename TrafoType::ShapeType ShapeType;
    typedef typename TrafoType::template Evaluator<ShapeType, DataType>::Type TrafoEvaluator;
    enum  {
      domain_dim = TrafoEvaluator::domain_dim,
    };
};