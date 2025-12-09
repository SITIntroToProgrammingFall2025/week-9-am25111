#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct {
    double x;
    double y;
    double z;
} point;


double dissq(point a, point b) {
    return (a.x - b.x)*(a.x - b.x)
         + (a.y - b.y)*(a.y - b.y)
         + (a.z - b.z)*(a.z - b.z);
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    point input;
    printf("Enter R,G,B\n");
    scanf("%lf %lf %lf", &input.x, &input.y, &input.z);


    char *names[] = {"Black", "Red", "Green", "Blue", "White"};
    point basicColors[] = {
        {0,   0,   0  },
        {255, 0,   0  },
        {0,   255, 0  },
        {0,   0,   255},
        {255, 255, 255}
    };

    int nearestIndex = 0;
    double minDist = dissq(input, basicColors[0]);

    for (int i = 1; i < 5; i++) {
        double d = dissq(input, basicColors[i]);
        if (d < minDist) {
            minDist = d;
            nearestIndex = i;
        }
    }

    printf("The nearest color is %s\n", names[nearestIndex]);
    return 0;
}
