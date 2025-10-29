// 6.	Find the minimum and maximum value of the elements of an array.
#include <iostream>
using namespace std;

int findMin(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int findMax(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main()
{

    int n;
    cout << "Enter numbers of elements" << endl;
    cin >> n;
    int arr[n];
    cout << " Enter elements :" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "The Min elements : " << findMin(arr, n) << endl;
    cout << "The Max elements : " << findMax(arr, n) << endl;

    return 0;
}