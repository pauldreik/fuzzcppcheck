const CXXRecordDecl *CXXRecordDecl::getTemplateInstantiationPattern() const {
    if (auto *TD = dyn_cast<ClassTemplateSpecializationDecl>(this)) {
        auto From = TD->getInstantiatedFrom();
    }
    return nullptr;
}