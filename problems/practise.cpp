#include <iostream>
using namespace std;

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}

void output(int arr[], int n)
{
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
    cout << "Subsets:[ " << endl;
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
    cout << "]" << endl;
}

int duplicate(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    int temp[n];
    int j = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            temp[j++] = arr[i];
        }
    }
    temp[j++] = arr[n - 1];
    for (int i = 0; i < j; i++)
    {
        arr[i] = temp[i];
    }
    return j;
}

int main()
{
    int n;
    cout << "size: ";
    cin >> n;
    int arr[n];
    input(arr, n);
    int newArr = duplicate(arr, n);
    subsets(arr, newArr);
    output(arr, newArr);
    return 0;
}