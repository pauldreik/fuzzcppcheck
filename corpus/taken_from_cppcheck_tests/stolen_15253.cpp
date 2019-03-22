void action_push(int type, ...) {
    va_list args;
    va_start(args, type);
    switch (push_mode) {
    case UNDO:
        list_add(&act->node, &to_redo);
        va_end(args);
        break;
    case REDO:
        list_add(&act->node, &to_undo);
        va_end(args);
        break;
    }
}