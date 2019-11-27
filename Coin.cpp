#include <iostream>
#include <vector>
using namespace std;
void maximum(int n, int w);
int main()
{
    int T;
    cin >> T;
    int n, w;
    for(int i = 0; i < T; i++)
    {
        cin >> n >> w;
        maximum(n,w);
    }

    return 0;
}

void maximum(int n, int w)
{
    long result = 0;
    long now = w;
    int coin = 0;
    vector<int> current(n,0);
    for(int i = 0; i < n; i++)
    {
        cin >> current[i]; // 매일 코인의 환율을 받는다.
    }
    // n이 1부터 15까지 이니까 범위 나눠서 하자.

    if(n == 1)
    {
        cout << w << endl;
    }

    else if(n == 2)
    {
        if(current[0] < current[1])
        {
                coin = coin + w/current[0];
                now = now % current[0];
        }
        cout << now + coin* current[1] << endl;
    }
    
    else{
        for(int i = 0; i < n-2; i++)
        {
            if((current[i] < current[i+1]) && (current[i+1] >= current[i+2]))
            {
                coin = coin + w/current[i];
                now = now%current[i];
            }
        }
        if(current[n-2] < current[n-1])
        {
                coin = coin + w/current[n-2];
                now = now % current[n-2];
        }
        cout << now + coin* current[n-1] << endl;
    }
}
