#include <bits/stdc++.h>
using namespace std;
 
// This function prints the
// first repeating element in arr[]
void printFirstRepeating(int arr[], int n)
{
     
    // This will set k=1, if any
    // repeating element found
    int k = 0;
 
    // max = maximum from (all elements & n)
    int max = n;
    for (int i = 0; i < n; i++)
        if (max < arr[i])
            max = arr[i];
 
    // Array a is for storing
    // 1st time occurrence of element
    // initialized by 0
    int a[max + 1] = {};
 
    // Store 1 in array b
    // if element is duplicate
    // initialized by 0
    int b[max + 1] = {};
 
    for (int i = 0; i < n; i++)
    {
     
        // Duplicate element found
        if (a[arr[i]])
        {
            b[arr[i]] = 1;
            k = 1;
            continue;
        }
        else
            // storing 1st occurrence of arr[i]
            a[arr[i]] = i;
    }
 
    if (k == 0)
        cout << "No repeating element found" << endl;
    else
    {
        int min = max + 1;
       
        // trace array a & find repeating element
        // with min index
        for (int i = 0; i < max + 1; i++)
            if (a[i] && min > a[i] && b[i])
                min = a[i];
        cout << arr[min];
    }
    cout << endl;
}
 
// Driver method to test above method
int main()
{
    int arr[] = { 10, 5, 3, 4, 3, 5, 6 };
 
    int n = sizeof(arr) / sizeof(arr[0]);
    printFirstRepeating(arr, n);
}