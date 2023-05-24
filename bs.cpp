#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n];
    cout << "Enter the elements in sorted order: \n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ") ";
        cin >> a[i];
    }

    int First = 0, Last = n - 1, Mid, Num;
    cout << "Enter the number to find: ";
    cin >> Num;

    do
    {
        Mid = (First + Last) / 2;
        if (a[Mid] == Num) {
            cout << "Number found at location " << Mid + 1 << endl;
            break;
        }
        else if (a[Mid] < Num)
            First = Mid + 1;
        else
            Last = Mid - 1;
    } while (First <= Last);

    if (First > Last)
        cout << "Element not found" << endl;

    return 0;
}
