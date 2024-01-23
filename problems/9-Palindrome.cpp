#include <iostream>
using namespace std;

int main()
{
    int n, original_number;
    cout << "integer: ";
    cin >> original_number;
    n = original_number;
    long long rev_num = 0;
    while (n > 0)
    {
        rev_num = rev_num * 10 + n % 10;
        n = n / 10;
    }
    if (rev_num == original_number)
        cout << "true";
    else
        cout << "false";
    return 0;
}