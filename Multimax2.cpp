#include <iostream>
#include <cstdlib>
using namespace std;

// n장의 숫자 중에서 2장 아니면 3장을 뽑아서 그 수들의 곱이 최대가 되는 경우의 곱을 출력하라.
void answer(int n);
int main()
{
    int T;
    cin >> T;
    int n;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        answer(n);
    }
    return 0;
}

void answer(int n)
{

    int arr[n];
    int maxarr[3];
    
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    
    for(int count = 0; count < 3; count++)
    {
        
        int index;
        int max = 0;
        for(int i = 0; i < n; i++)
        {
            if(abs(arr[i]) >= max)
            {
                cout << "i : " << i << endl;
                max = abs(arr[i]);
                maxarr[count] = arr[i];
                cout << " 현재의 max : "<< max << endl;
                cout << " 현재의 count : " << count << " 현재의 maxarr[count]의 값은 : " << maxarr[count] << endl;
                index = i;
            }
        }
        arr[index] = 0;
    }
    
    int max = -123456;
    for(int i = 0; i < 2; i++)
    {
        for(int j = i+1; j <3; j++)
        {
            if(maxarr[i]*maxarr[j] > max)
            {
                max = maxarr[i]*maxarr[j];
                for(int k = 0; k < 3; k++)
                {
                    if(max * maxarr[k] > max)
                    {
                        max = max * maxarr[k];
                    }
                }
            }
        }
    }
    cout << max << endl;
    
}
