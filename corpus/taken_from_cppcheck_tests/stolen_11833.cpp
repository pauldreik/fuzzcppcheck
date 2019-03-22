template<typename DISPATCHER> class SomeTemplateClass {
    typedef void (SomeTemplateClass<DISPATCHER>::*MessageDispatcherFunc)(SerialInputMessage&);
};