void ConvertBitmapData(sal_uInt16 nDestBits) {
    BitmapBuffer aSrcBuf;
    aSrcBuf.mnBitCount = nSrcBits;
    BitmapBuffer aDstBuf;
    aSrcBuf.mnBitCount = nDestBits;
    bConverted = ::ImplFastBitmapConversion( aDstBuf, aSrcBuf, aTwoRects );
}