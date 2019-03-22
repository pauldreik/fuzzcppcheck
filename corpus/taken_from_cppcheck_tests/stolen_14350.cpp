struct EMFPFont {
    bool family;
    void Initialize();
};
void processObjectRecord() {
    EMFPFont *font = new EMFPFont();
    font->Initialize();
}