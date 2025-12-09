

#include<stdio.h>

int main() {
    int a[3][2];
    int b[2][3];

    printf("Enter first matrix (3 x 2) and second matrix (2 x 3)\n");

    // Input A
    for (int i=0;i<3;i++) {
        for (int j=0;j<2;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    // Input B
    for (int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    printf("The first matrix you entered is\n");
    for (int i=0;i<3;i++) {
        printf("%d %d\n",a[i][0],a[i][1]);
    }

    printf("The second matrix you entered is\n");
    for (int i=0;i<2;i++) {
        printf("%d %d %d\n",b[i][0],b[i][1],b[i][2]);
    }

    int c[3][3];
    printf("The multiplication product of matrix A and matrix B :\n");

    for (int i=0;i<3;i++) {
        for (int j=0;j<3;j++) {
            c[i][j] = a[i][0]*b[0][j] + a[i][1]*b[1][j];
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
