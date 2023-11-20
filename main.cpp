#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

double func() {
    int n;
    int m;
    scanf_s("%d%d", &n, &m);
    double s = 0;

    for (int i = 1; i <= n; i++) {
        double product = 1;

        for (int j = i; j <= m; j++) {
            double numerator = pow(j, 2);
            double denominator = (2 * j) + pow(i, 3);
            //product = product * numerator / denominator;



            product *= numerator / denominator;
        }

        s += product;
    }

    return s;

}

int main() {
    setlocale(LC_ALL,"ru");
    double S = func();
    printf("Результат S ≈ %.8f\n", S);

    return 0;
}
