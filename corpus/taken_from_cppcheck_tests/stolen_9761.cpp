void foo(P *p)
{
  while (p)
    if (p->check())
      break;
    else
      p = p->next();
}