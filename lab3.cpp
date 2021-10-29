#define CRT_SECURE_NO_WARNINGS
#include <stdio.h> 

void meanVsMedian()
{
    int arr[100], len, median;
    double mean, sum;
    for (int i = 0; i < 100; i++)
        arr[i] = 0;
    printf("Enter number of numbers :\n");
    scanf_s("%d", &len);
    printf("Enter numbers: \n");
    for (int i = 0, j; i < len; i++) {
        scanf_s("%d", &j);
        arr[i] = j;
        sum += j;
    }
    mean = sum / len;
    median = arr[len / 2];
    if (median > mean) {
        printf("median");
    }
    else if (median < mean) {
        printf("mean");
    }
    else {
        printf("same");
    }
}
int main()
{
    meanVsMedian();
    return 0;
}