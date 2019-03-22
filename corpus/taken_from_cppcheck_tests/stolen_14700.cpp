void f() {
    wxAuiToolBarItem* former_hover = NULL;
    for (i = 0, count = m_items.GetCount(); i < count; ++i) {
        wxAuiToolBarItem item = m_items.Item(i);
        former_hover = &item;
    }
    if (former_hover != pitem)
        dosth();
}