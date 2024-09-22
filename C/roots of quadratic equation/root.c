#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, D, root1, root2, realPart, imagPart;
        a = 5;
        b = 2;
        c = 4;
     D = b * b - 4 * a * c;
    // D = discriminant
    // condition for real roots
    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("The real root are = %f, %f", root1, root2);
    }

    // condition for  equal roots
    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("roots are equal = %f %f;", root1,root2);
    }

    // if roots are not real
    else {
        printf("Roots are imaginary");
    }

    return 0;
} 