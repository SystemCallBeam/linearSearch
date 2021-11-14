#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n[] = {10, 7, 3, 5, 8, 2, 9};

    int size = sizeof(n)/sizeof(int);
    //input
    int max = n[0], min = n[0];
    for (int i = 0; i < size; i++)
    {
        if (max < n[i])
            max = n[i];
        else if (min > n[i])
        {
            min = n[i];
        }
    }
    int pos, k = 2,m;
    //input
    for (int i = 0; i < k; i++)
    {
        m = n[0];
        for (int j = 0; j < size; j++)
        {
            if(m > n[j]){
                m = n[j];
                pos = j;
            }
        }
        n[pos] = max;
    }
    cout << max << " " << min << endl;
    cout << m << endl;
    cout << max - min;

    return 0;
}