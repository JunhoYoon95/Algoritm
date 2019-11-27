#include <iostream>
#include <algorithm>
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
    for(int i = 0; i < n; i++)
    { cin >> arr[i]; }
    
    sort(arr,arr+n);
    
    int maxarr[6];
    if(n>=6)
    {
        for(int i = 0; i < 3; i++)
        {
            maxarr[i] = arr[i];
            maxarr[5-i] = arr[n-i-1];
        }

        int two_max = maxarr[0]*maxarr[1];
        int three_max = maxarr[0]*maxarr[1]*maxarr[2];
        
        for(int i = 0; i < 5; i++)
        {for(int j = i+1; j < 6; j++)
        {if(maxarr[i]*maxarr[j] >= two_max)
        { two_max = maxarr[i]*maxarr[j];}}}
        
        for(int i = 0; i < 4; i++)
        {for(int j = i+1; j < 5; j++)
        {for(int k = j+1; k < 6; k++)
        {if(maxarr[i]*maxarr[j]*maxarr[k] >= three_max)
        {three_max = maxarr[i]*maxarr[j]*maxarr[k];}}}}
   

        if(two_max >= three_max)
        {cout << two_max << endl;
        }else{cout << three_max << endl;}
    }
    else{
//        cout << "6보다 작은 경우가 시작이 됨." << endl;
        int two_max = arr[0]*arr[1];
        int three_max = arr[0]*arr[1]*arr[2];
        for(int i = 0; i < n-2; i++)
        {for(int j = i+1; j < n-1; j++)
            {for(int k = j+1; k < n; k++)
                {if(arr[i]*arr[j]*arr[k] >= three_max)
                    {three_max =arr[i]*arr[j]*arr[k];}}}}
//        cout << "three_max : " << three_max << endl;
//        cout << " 3개짜리 곱들 실행" << endl;
        for(int i = 0; i < n-1;i++)
        {for(int j = i+1; j < n; j++)
            {if(arr[i]*arr[j] >= two_max)
                {two_max = arr[i]*arr[j];}}}
//        cout << " 2개짜리 곱들 실행 " << endl;
        if(two_max > three_max)
        {cout << two_max << endl;
        }else{cout << three_max << endl;}
    }
}
