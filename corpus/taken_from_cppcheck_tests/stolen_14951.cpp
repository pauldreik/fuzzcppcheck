void f() {
    int (SfxUndoManager::*retrieveCount)(bool) const
        = (flag) ? &SfxUndoManager::foo : &SfxUndoManager::bar;
}