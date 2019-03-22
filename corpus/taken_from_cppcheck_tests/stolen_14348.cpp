struct StgStrm {
    StgIo& rIo;
    StgStrm(StgIo&);
    virtual sal_Int32 Write();
};
void Tmp2Strm() {
    StgStrm* pNewStrm;
    if (someflag)
        pNewStrm = new StgStrm(rIo);
    else
        pNewStrm = new StgStrm(rIo);
    pNewStrm->Write();
}