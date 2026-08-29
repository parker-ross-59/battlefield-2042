#include <stdio.h>
#include <stdlib.h>

static int parse_service(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 19) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", parse_service(19, 19));
    return 0;
}
