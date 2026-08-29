#include <stdio.h>
#include <stdlib.h>

static int encode_service(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 38) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", encode_service(38, 38));
    return 0;
}
