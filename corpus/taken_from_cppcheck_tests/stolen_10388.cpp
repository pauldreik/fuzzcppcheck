void f(const Bar &bar) {
    bool a = bar.isSet() && bar->isSet();
    bool b = bar.isSet() && bar.isSet();
}