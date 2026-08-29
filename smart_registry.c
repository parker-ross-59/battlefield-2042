#include <stdio.h>
#include <stdlib.h>

static int resolve_factory(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 23) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", resolve_factory(23, 23));
    return 0;
}
