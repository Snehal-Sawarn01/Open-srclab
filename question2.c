#include <stdio.h>

int main() {
    int n, i, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    double avg = (double)sum / n;
    printf("%.2lf\n", avg);
    return 0;
}
