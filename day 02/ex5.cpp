// Find the average value of the elements of an arraay.

#include <iostream>

using namespace std;

double findAverage(int arr[], int n)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return (double)sum / n;
}

int main()
{
    int n;
    cout << "enter the number of elements: " << endl;

    cin >> n;

    int arr[n];
    cout << "enter elements" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Average value of the elements: " << findAverage(arr, n);

    return 0;
}