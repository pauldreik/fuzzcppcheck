class C;

class B
{ virtual G* createGui(S*, C*) const = 0; };

class MS : public M
{ virtual void addController(C*) override {} };