#include<stdio.h>

int min(int a, int b) {
    return a < b ? a : b;
}

int main () {
    int a[5]={5,2,3,4,1};
    int rank[5]={9999,9999,9999,9999,9999};\
    int visited[5];
    for (int i=0;i<5;i++) {
        visited[i]=0;
    }
    for (int i = 0; i < 5; i++) {
        rank[i] = -1;
        double MIN = 9999999.9;

        for (int j=0;j<5;j++) {
            if (visited[j] == 0 && a[j] < MIN) {
                MIN = a[j];
                rank[i]=j;
            }
        }
        visited[rank[i]] = 1;
    }
    for (int i=0;i<5;i++) {
        printf("%d ",a[rank[i]]);
    }
    return 0;
}
