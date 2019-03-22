void f(Fred *fred) {
    if (fred == NULL) {
        x = 0;
    }
    switch (x) {
        case 1:
            fred->a();
            break;
    };
}