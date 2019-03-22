static void __iomem *f(unsigned int port_no) {
  void __iomem *mmio = hpriv->mmio;
  return mmio + (port_no * 0x80);
}