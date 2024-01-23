#include <iostream>
using namespace std;
void inputAndOutput(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array:[ ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "]" << endl;
}

// this subset function returns duplicate also
void subsets(int arr[], int n)
{
    cout << "Subsets: " << endl;
    for (int i = 0; i < (1 << n); i++)
    {
        cout << "[ ";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << arr[j] << " ";
            }
        }
        cout << "]" << endl;
    }
}

int main()
{
    int n;
    cout << "size: ";
    cin >> n;
    int arr[n];
    inputAndOutput(arr, n);
    subsets(arr, n);
    return 0;
}