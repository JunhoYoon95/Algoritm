//#include <iostream>
//using namespace std;
//void answ(int a, int b, int n, int w);
//
//int main()
//{
//    int T;      // Test cases
//    cin >> T;
//    int a,b,n;
//    int w; // 양 : a그램 먹음
//    // 염소 : b 그램 먹음, 양 + 염소 = n마리, w = 소비 양
//    for(int i = 0; i < T; i++)
//    {
//        cin >> a >> b>>n>>w;
//        answ(a, b, n, w);
//    }
//    return 0;
//}
//
//void answ(int a, int b, int n, int w)
//{
//    // x가 정수인 경우만 취해야지
//
//    if(a == b)  //  a=b면 n = w/b로 정리된다. 같은 행위 반복.
//    {
//
//        if(b*n == w)
//        {
//            if(n == 2)  //  이 경우 아니면 절대 안됨. 경우의 수가.
//            {
//                cout << 1 << ' ' << 1 << endl;
//            }
//            else{
//                cout << -1 << endl;
//            }
//        }
//        else{
//            cout << -1 << endl;
//        }
//
//    }else{
//        double x = (w-b*n)/(a-b);
//        //        if(x - (int)x == 0){    // x가 정수인지 판별
//        //            if((x <= 0) || (n-x <= 0))       // x가 자연수인지 판별
//        //            {
//        //                cout << -1 << endl;
//        //            }
//        //            else{   // 자연수인 경우는 취하고
//        //                cout << x << ' ' << n-x << endl;
//        //            }
//        //        }
//        //        else{   // x가 정수가 아닌 경우
//        //            cout << -1 << endl;
//        //        }
//        if(w == b*n){
//            cout << -1 << endl;
//        }
//        else{
//            if(x - (int)x == 0){    // x가 정수인지 판별
//                if((x > 0) && (n-x > 0))       // x가 자연수인지 판별
//                {
//                    cout << x << ' ' << n-x << endl;
//
//                }
//                else{   // 자연수인 경우는 취하고
//                    cout << -1 << endl;
//                }
//            }
//            else{   // x가 정수가 아닌 경우
//                cout << -1 << endl;
//            }
//        }
//    }
//}
