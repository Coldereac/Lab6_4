#include <stdio.h>
#include <string.h>

char* toBinary(int n) {
    static char bin[32];
    if (n == 0) {
        return bin;
    }
    toBinary(n / 2);
    strcat(bin, (n % 2 == 0) ? "0" : "1");
}
//

int main() {
    int n;
    printf("Введіть число: ");
    scanf("%d", &n);

    printf("Двійкове число: %s\n", toBinary(n));

    return 0;
}