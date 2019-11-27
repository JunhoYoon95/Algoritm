#include <iostream>
using namespace std;
int pizza(int n, int m);

int main()
{
    int T;
    cin >> T;
    int n,m;
    for(int i = 0; i < T; i++)
    {
        cin >> n >> m;
        cout << pizza(n, m) << endl;
    }
    return 0;
}

int pizza(int n, int m)
{
    int result = 0;
    int arr[n][m];
    int maxarr[n];
    int sum = 0;
    int minus = 0;

    int input;
    for(int i = 0; i < n; i++)
    {
        int max = 0;
        for(int j = 0; j < m; j++)
        {
            cin >> input;
            sum += input;
            arr[i][j] = input;
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }maxarr[i] = max;
    }

    for(int j = 0; j < m; j++)
    {
        int max = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(max == maxarr[i])
            {
                max = 0;
            }
        }
        minus += max;
    }

    for(int i = 0; i <n; i++)
    {
        minus += maxarr[i];
    }

    result = sum - minus;

    return result;
}
