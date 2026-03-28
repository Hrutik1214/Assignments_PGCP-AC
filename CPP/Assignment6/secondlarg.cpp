// // Q.2. Find Second Largest Number
// // Given N numbers, find the second largest number. Input: 5
// // 10 4 8 20 15 Output: 15
// #include <iostream>
// using namespace std;
// int main()
// {
//     int num;
//     cin >> num;
//     int a[num];

//     int largest;
//     int secondlargest;

//     for (int i = 0; i < num; i++)
//     {
//         cout << "Enter the element: " << i << " th " << endl;
//         cin >> a[i];
//     }

//     if (a[0] > a[1])
//     {
//         largest = a[1];

//         secondlargest = a[0];
//     }
//     else
//     {
//         largest = a[0];

//         secondlargest = a[1];
//     }

//     for (int i = 2; i < num; i++)
//     {
//         if (a[i] > a[i - 1])
//         {
//             a[i - 1] = a[i];
//         }
//         else
//         {
//             a[i - 2] = a[i];
//         }
//     }
//     cout << "second largest is " << secondlargest << endl;
// }

// Q.2. Find Second Largest Number
// Given N numbers, find the second largest number. Input: 5
// 10 4 8 20 15 Output: 15
#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int a[num];

    int largest;
    int secondlargest;

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the element: " << i << " th " << endl;
        cin >> a[i];
    }

    if (a[1] > a[0])
    {
        largest = a[1];
        secondlargest = a[0];
    }

    else
    {
        largest = a[0];
        secondlargest = a[1];
    }

    for (int i = 2; i < num; i++)
    {

        if (a[i] > largest)
        {
            int temp = largest;
            largest = a[i];
            secondlargest = temp;
        }
        else if (a[i] > secondlargest)
        {
            secondlargest = a[i];
        }
    }

    cout << "second largest is" << secondlargest << endl;
}