#include <stdio.h>
#include <stdlib.h>

static int parse_engine(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 43) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", parse_engine(43, 43));
    return 0;
}
