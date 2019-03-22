void f(EventPtr *eventP, ActionPtr **actionsP) {
    EventPtr event = *eventP;
    *actionsP = &event->actions;
}