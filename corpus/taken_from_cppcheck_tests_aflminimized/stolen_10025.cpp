void foo() {
  double fStepHelp = 0;
   if( (rOuterValue >>= fStepHelp) ) {
     if( fStepHelp != 0.0) {
       double fStepMain = 1;
       sal_Int32 nIntervalCount = static_cast< sal_Int32 >(fStepMain / fStepHelp);
    }
  }
}