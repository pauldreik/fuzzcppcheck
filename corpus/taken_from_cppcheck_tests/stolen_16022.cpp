void foo() {
    switch (event.key.keysym.sym) {
    case SDLK_LEFT:
        break;
    case SDLK_RIGHT:
        delta = 1;
        break;
    }
}