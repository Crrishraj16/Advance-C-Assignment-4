#include <stdio.h>

union Bytes {
    int num;
    char bytes[sizeof(int)];
};

int main() {
    union Bytes b;
    printf("Enter an integer number: ");
    scanf("%d", &b.num);

    printf("The bytes of the number %d are: ", b.num);
    for(int i = 0; i < sizeof(int); i++) {
        printf("%02X ", b.bytes[i] & 0xFF);
    }
    printf("\n");

    return 0;
}
