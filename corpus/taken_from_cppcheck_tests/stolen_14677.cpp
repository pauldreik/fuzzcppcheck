void getLibraryContainer() {
    Reference< XStorageBasedLibraryContainer >(*Factory)(const Reference< XComponentContext >&, const Reference< XStorageBasedDocument >&)
        = &DocumentDialogLibraryContainer::create;
    rxContainer.set((*Factory)(m_aContext, xDocument));
}