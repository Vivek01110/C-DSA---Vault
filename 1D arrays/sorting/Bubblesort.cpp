#include <iostream>
using namespace std;
void bubblesort(int a[], int n)
{
    bool Issorted = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                Issorted = false;
            }
        }
        if (Issorted = false)
        {
            cout << "it is sorted array";
            break;
        }
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}

int main()
{
    int a[10] = {10, 3, 8, 7, 6, 5, 6, 3, 12, 1};
    bubblesort(a, 10);
    print(a, 10);
}

// time complexity =>n O(n);
