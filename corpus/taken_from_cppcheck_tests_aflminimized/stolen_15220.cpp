namespace t { namespace g {
   typedef std::pair<BoostBox, size_t> value;
} }
namespace t { namespace g {} }
namespace t {
  inline double getTime() const {
     iterator it=find();
     double& value=it->second.values[index];
     if(isnan(value)) {
       value=get();
     }
     return value;
  }
}