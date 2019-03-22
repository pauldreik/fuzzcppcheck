void function(Entry& entry) {
    for (auto* expr : entry.exprs) {
        expr->operate();
        expr->operate();
    }
}