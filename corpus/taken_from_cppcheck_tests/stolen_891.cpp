P& P::operator = (const P& pc)
{
  return (P&)(*this += pc);
}