#include <stdio.h>

int main() {
    int a[2][2];
    for (int i=0;i<2;i++) {
        for (int j=0;j<2;j++) {
            scanf("%d",&a[i][j]);
        }
    }
    printf("You entered\n");
    printf("%d %d\n",a[0][0],a[0][1]);
    printf("%d %d\n",a[1][0],a[1][1]);
    printf("Determinant is %lf\n",a[0][0]*a[1][1]-a[0][1]*a[1][0]);
    return 0;
}


