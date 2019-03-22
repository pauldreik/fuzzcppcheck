void foo() {
    for (int i = 0; (pci = cdi_list_get(pciDevices, i)); i++)
    {}
}