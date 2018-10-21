#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N,i;
    cin >> N;

    if (N >0 && N <= 1000)
    {
        int arr[N];
        for (i=0; i<N; i++)
        {
            cin >> arr[i];
            if (arr[i]<1 || arr[i]>10000)
            {
                cout << "array value is out of range" <<endl;
                return 0;
            }
        }
        for (i=N-1;i>=0;i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "array integer is out of range" << endl;
    }
    return 0;
}