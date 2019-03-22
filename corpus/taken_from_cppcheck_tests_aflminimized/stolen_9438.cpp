LineMarker::~LineMarker() {
  delete pxpm;
}
LineMarker &LineMarker::operator=(const LineMarker &) {
  delete pxpm;
  pxpm = NULL;
  return *this;
}