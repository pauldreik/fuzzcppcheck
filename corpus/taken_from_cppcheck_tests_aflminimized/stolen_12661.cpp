class CodeGenerator {
  DiagnosticsEngine Diags;
public:
  void Initialize() {
    Builder.reset(Diags);
  }

  void HandleTagDeclRequiredDefinition() LLVM_OVERRIDE {
    if (Diags.hasErrorOccurred())
      return;
  }
};