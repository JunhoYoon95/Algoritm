//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//void cases(int n, int k);
//
//int main()
//{
//    int T;      // Test case 갯수
//    cin >> T;
//    int n, k;   // n개의 숫자를 주고, k와 가장 가까운 조합의 갯수
//    for(int i = 0; i < T; i++)
//    {
//        cin >> n >> k;
//        cases(n,k);
//    }
//    return 0;
//}
//
//void cases(int n, int k)
//{
//    int arr[n];
//    for(int i = 0; i < n; i++)
//    {
//        cin >> arr[i];
//    } // 배열에 수들을 다 담아 시발
//    
//    // k 에서 두 수의 합의 거리중 최소를 min 이라고 한다. abs(절대값)로 했기에 크던 작던 거리만 담는다.
//    int min = abs(k - (arr[0] + arr[1])); // 처음 두 수의 합을 min이라 하고
//    int count = 0;
//    for(int i = 0; i < n-1; i++)
//    {
//        for(int j = i+1; j < n; j++)
//        {
//            if(abs(k-(arr[i]+arr[j])) == min){
//                count++;
//            } // min과 k로 부터 두 수의 합의 거리가 같으면 카운트 증가
//            else if(abs(k-(arr[i] + arr[j])) < min)     // min 보다 작으면 min을 그거로 바꾸고
//            {
//                count = 1;
//                min = abs(k-(arr[i] + arr[j]));
//            } // count를 1로 초기화 하고.
//        }
//    }
//    
//    
//    cout << count << endl;
//}
