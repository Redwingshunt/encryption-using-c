#include <stdlib.h>
#include <stdio.h>


#define secret 's' // This is the secret sey used for encryption'

void encryption(char *data, int len) {
    for (int iter = 0; iter < len; iter++) {
        data[iter] = data[iter] ^ secret; // using  XOR for each char in data
    }
}

int main() {
    char data[100];
    printf("please enter the data:\t");

    scanf("%s",data);

    int len = sizeof(data) / sizeof(data[0]); // Calculate the length of the data

    printf("Original data: %s\n", data);

    encryption(data, len);

    printf("Encrypted data: %s\n", data);

    return 0;
}

