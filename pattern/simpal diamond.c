#include<stdio.h>

int main() {
    int n;
    printf("Enter a value of n :");
    scanf("%d", &n);
    int star = 1;
    int space = n / 2;
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= space; j++) {
            printf("  ");
        }
        for (int k = 1; k <= star; k++) {
            printf("* ");
        }
        if (i < mid) {
            space--;
            star += 2;
        } else {
            space++;
            star -= 2;
        }
        printf("\n");
    }
    return 0;
}
