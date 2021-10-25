#include <iostream>

using namespace std;

//Program to return the last occurance of b in the vector a
int last(int a[], int l, int h, int b)
{
    int res = -1;
    while (l <= h)
    {
        int m = (l + h) / 2;

        if (a[m] == b)
        {
            res = m;
            l = m + 1;
        }
        else if (a[m] > b)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    return res;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " =====  Program to find the last occurance of a given number using Modified Binary Search  ===== \n\n";

    int i, n;

    int a[] = {2, 3, 3, 4, 4, 4, 4, 4, 5};

    n = sizeof(a) / sizeof(a[0]);

    cout << "\n\nThe elements of the input sorted array are :\n\n";

    for (i = 0; i < n; i++)
    {
        cout << a[i] << "  ";
    }

    int k = 4; //the element to find the last occurance index of

    //Calling first method to return the index of the last occurance of element k
    int l = last(a, 0, n - 1, k);

    cout << "\n\nThe index of the last occurance of " << k << " is: " << l;

    cout << "\n\n\n";

    return 0;
}
