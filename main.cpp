//#include <iostream>
//using namespace std;
//void pizza(int n, int m);
//
//int main()
//{
//    int T;
//    int n, m;
//    cin >> T;
//    for(int i = 0; i < T; i++)
//    {
//        cin >> n >> m;
//        pizza(n, m);
//    }
//    return 0;
//}
//
//void pizza(int n, int m)
//{
//    int arr[n][m];
//    int maxarr[n];
//    int maxhi[m];
//    int sum = 0;
//
//    for(int i = 0; i < n; i++)
//    {
//       int max = 0;
//        for(int j = 0; j < m; j++)
//        {
//            int num;
//            cin >> num;
//            arr[i][j] = num;
//            if(num > max)
//            {
//                max = arr[i][j];
//                maxarr[i] = max;
//            }
//        }
//    }
//    
//    for(int i = 0; i < m; i++)
//    {
//       int max = 0;
//        for(int j = 0; j < n; j++)
//        {
//             if(arr[j][i] > max)
//            {
//                max = arr[j][i];
//                maxhi[i] = max;
//            }
//        }
//    }
//    
//    for(int i = 0; i < n; i++)
//    {
//        for(int j = 0; j < m; j++)
//        {
//            if((arr[i][j] != maxarr[i])  && (arr[i][j] != maxhi[j]))
//            {
//                sum += arr[i][j];
//            }
//        }
//    }
//    cout << sum << endl;
//}
