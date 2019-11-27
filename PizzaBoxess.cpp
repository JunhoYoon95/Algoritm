#include <iostream>
using namespace std;
void pizza(int n, int m);

int main()
{
    int T;
    int n, m;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        cin >> n >> m;
        pizza(n, m);
    return 0;
}

/*
 일단 이차원 배열에 다 숫자들 넣고, 일다원 배열nm짜리 만들자고
 */
void pizza(int n, int m)
    {
        
    }
    int arr[n][m];  // 2차원 배열
    int copy_arr[n+m];  // 1차원
    long sum = 0;
    long minus = 0;
    for(int i = 0; i < n; i++)
    {
        int max = 0;
        for(int j = 0; j < m; j++)
        {
            int num;
            cin >> num;
            sum+=num;
            arr[i][j] = num; // 다 넣어
            if(num > max)
            {
                max = num;
            }
        }copy_arr[i] = max;
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
        }copy_arr[n+j] = max;
    }

    for(int i = 0; i < n+m; i++)
    {
        cout << copy_arr[i] << ' ';
    }

    for(int i = 0; i < n+m; i++)
    {
        int count = 0;
        for(int j = i; j < n+m; j++)
        {
            if(copy_arr[i] == copy_arr[j])
            {
                count++;
            }
        }
        if(count == 1)
        {
            minus+=copy_arr[i];
            cout << minus << endl;
        }
    }
    
    cout << 0 << endl;
}
