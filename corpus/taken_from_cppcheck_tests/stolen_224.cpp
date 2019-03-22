map<string,string> const &getVariableTable() {
static map<string,string> const s_var = []{
    map<string,string> var;
    return var;
  }();
return s_var;
}