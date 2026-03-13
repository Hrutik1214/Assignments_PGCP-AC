#include<iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int *arr = new int[n];  

    cout << "Enter numbers:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];

        sum = sum + arr[i];
    }

    float avg = (float)sum / n;

    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;
    cout << "Average value: " << avg << endl;

    delete[] arr; 

    return 0;
}