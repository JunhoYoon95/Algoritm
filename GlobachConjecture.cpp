#include <iostream>
using namespace std;

/*
 한 숫자가 주어지게 된다면 그 숫자에 대해서 두 소수의 합으로 표현을 하라. 그 두 소수를 출력하라.
 */

void TwoOut(int n);

int main()
{
    int T;
    int n;
    cin >>T;
    for(int i = 0; i < T; i++)
    {
        cin >> n;
        TwoOut(n);
    }
    return 0;
}

void TwoOut(int n)
{
    
    for(int x = n/2; x >= 2; x++)
    {
        int countx = 0;
        
        for(int i = 2; i <= x; i++)
        {
            if(x % i == 0)
            {
                countx++;
            }
        }
        if(countx == 1)
        {
            int county = 0;
            for(int j = 2; j <= n-x; j++)
            {
                if((n-x) % j == 0)
                {
                    county++;
                }
            }
            if(county == 1)
            {
                cout << n-x << ' ' << x << endl;
                break;
            }
        }
        
    }
    
}

