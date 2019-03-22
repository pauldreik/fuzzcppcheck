void hw_copyarea() {
   de_ctrl = (nDirection == RIGHT_TO_LEFT) ?
    ( (0 & ~(((1 << (1 - (0 ? DE_CONTROL_DIRECTION))) - 1) << (0 ? DE_CONTROL_DIRECTION))) )
    : 42;
}