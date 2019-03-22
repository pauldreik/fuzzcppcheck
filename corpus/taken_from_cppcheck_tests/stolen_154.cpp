bool foo( ) {
  SwTxtFld * pTxtFld = GetFldTxtAttrAt();
  delete static_cast<SwFmtFld*>(&pTxtFld->GetAttr());
}