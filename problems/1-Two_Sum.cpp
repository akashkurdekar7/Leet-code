#include <iostream>
using namespace std;
void inputAndOutput(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
}

void twoSums(int num[], int n)
{
    int target;
    cout << "Target Sum: ";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] + num[j] == target)
            {
                cout << "[ " << i << " , "
                     << j << " ]" << endl;
            }
        }
    }
}

int main()
{
    int n;
    cout << "size: ";
    cin >> n;
    int num[n];
    inputAndOutput(num, n);
    twoSums(num, n);
    return 0;
}