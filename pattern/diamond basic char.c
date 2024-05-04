#include <stdio.h>

int main() {
   // char startChar = 'A'; // Start with 'A'
    int n;
    printf("ENTER A VALUE OF n :");
    scanf("%d", &n);
    int st = 1; // star
    int sp = n / 2; // space
    int mid = n / 2 + 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sp; j++) {
            printf("  ");
        }
        //char printChar = startChar;
        for (int k = 1; k <= st; k++){
            char ch = (char)(k+64);
            printf("%c ", ch);
        //    if (k < st / 2 + 1) {
         //       ch++;
         //   } else {
           //     ch--;
          //  }
        }
        if (i < mid) {
            sp--;
            st += 2;
        } else {
            sp++;
            st -= 2;
        }
        printf("\n");
    }
    return 0;
}
