//#include <iostream>
//using namespace std;
//void answer(int a, int b, int n, int w);
//
//int main()
//{
//    int T;
//    cin >> T;
//    int a, b, n, w;
//    for(int i = 0; i < T; i++)
//    {
//        cin >> a>> b>> n>> w;
//        answer(a, b, n, w);
//    }
//    
//    
//    return 0;
//}
//void answer(int a, int b, int n, int w)
//{
//    int count = 0;
//    int answerx;
//    for(int x = 1; x < n;x++)
//    {
//        if(a*x + b*(n-x) == w)
//        {
//            count++;
//            answerx = x;
//        }
//    }
//    if(count == 1)
//    {
//        cout << answerx << ' ' << n-answerx << endl;
//    }
//    else{
//        cout << -1 << endl;
//    }
//}
