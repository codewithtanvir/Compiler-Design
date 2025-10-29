#include <iostream>
#include "findaverage.h"
#include "findMinMax.h"

using namespace std;

int main()
{
    // int arr[] = {1, 2, 3, 4, 5};
    int arr[] = {33, 11, 17, 44, 2, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    double avg = findAverageOfArray(arr, n);

    int min = findMin(arr, n);
    int max = findMax(arr, n);

    cout << "Average: " << avg << endl;
    cout << "Min elements: " << min << endl;
    cout << "Max elements: " << max << endl;

    return 0;
}