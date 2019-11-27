#include <iostream>
using namespace std;
int Palindrome(long n);
/*
 2~64 진법 으로 한 수를 표현을 했을 경우에 회문인 경우에 1을 출력, 회문이 될 수 없는 것들은 전부 0으로 출려을 해달라. 한 진법이라도 회문이 가능하다면 그 수는 회문.
 */

int main()
{
    int T;      // Test case 수
    cin >> T;
    long n;
    for(int i = 0; i < T; i++)
    {cin >> n;
        cout << Palindrome(n) << endl;}
    return 0;
}

int Palindrome(long num)
{
    int arr[30];    // 테스트가 64부터 1000000 까지만 주어진다며. 1000000이 2의 20 승 이니까.
    int ret = 0;
    // 회문일 경우 1로 바꾸고 break하는 형식으로 가자
    for(int i = 2; i <= 64; i++)   // 2 진법부터 64 진법까지 확인을 할 것이다
    {
        long n = num;
        int count = 0;
        int check = 0;
        for(long j = n; j > 0; j = j/i)
            count++;    // 몇 자리인지
        for(int j = 0; j < count; j++){
            arr[j] = n % i; // 채워 넣고
            n = n/i;
        }
        for(int j = 0; j < count; j++)
        {
            if(arr[j] != arr[count - j-1])
            {   check++;    }
        }
        if(check == 0)
        {ret = 1;   break;}
        else{   ret =0;}
    }
    return ret;
}
