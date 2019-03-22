struct PaletteColorSpaceHolder: public rtl::StaticWithInit<uno::Reference<rendering::XColorSpace>,
                                                           PaletteColorSpaceHolder>
{
    uno::Reference<rendering::XColorSpace> operator()()
    {
        return vcl::unotools::createStandardColorSpace();
    }
};