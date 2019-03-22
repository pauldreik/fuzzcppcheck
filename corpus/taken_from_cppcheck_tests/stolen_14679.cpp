void getLibraryContainer() {
    Reference< XStorageBasedLibraryContainer >(*Factory)(const Reference< XComponentContext >&, const Reference< XStorageBasedDocument >&);
    rxContainer.set((*Factory)(m_aContext, xDocument));
}