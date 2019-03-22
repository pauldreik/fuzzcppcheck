namespace binfilter
{
       BOOL EnhWMFReader::ReadEnhWMF()
       {
               pOut->CreateObject( nIndex, GDI_BRUSH, new WinMtfFillStyle( ReadColor(), ( nStyle == BS_HOLLOW ) ? TRUE : FALSE ) );
               return bStatus;
       };
}
