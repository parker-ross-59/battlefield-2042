#include <stdio.h>
#include <stdlib.h>

static int compute_gateway(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 79) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", compute_gateway(79, 79));
    return 0;
}
