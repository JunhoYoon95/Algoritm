//
//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <stdio.h>
//using namespace std;
//
//int main() {
//
//   int W, N;
//   int testCase = 0;
//   scanf("%d", &testCase);
//   for (int t = 0; t < testCase; t++) {
//      cin >> W >> N;
//
//      vector<int> arr(N, 0), sum(W, 0);     // N의 길이인데 0으로 값들을 초기화
//       // W의 길이인데 0으로 값들을 초기화
//
//      for (int i = 0; i < N; i++) {
//         scanf("%d", &arr[i]);
//      }
//
//      sort(arr.begin(), arr.end()); // Vector를 정렬을 할때에는 이러한 방식으로 시작, 끝을 써 준다.
//
//      for (int i = 0; i < N && arr[i] < W; i++) {   // for(;조건식;) 의 구조기에 조건식 부분에 && 나 || 가 다 가능한 것.
//         for (int j = i + 1; j < N && arr[j] < W; j++) {
//            int s = arr[i] + arr[j];    //s라는 변수에 넣어 주면서 s 선언
//            if (s >= W) continue;   //s가 그 W 보다 ㄱ크다면 continue(뒤 부분을 실행하지 않고 for(;;증감식) 증감식을 실행하라.
//            if (sum[s] == 0) sum[s] = i;    // 그 때에 해당하는 인덱스 i를 넣는다.
//         }
//      }
//
//      bool result = false;  // default가 false 인 result라는 불린 타입을 선언
//      for (int i = 0; i < W; i++) { // arr[i] + arr[j] 가 w를 넘으면 저장 조차 안했어. 그러니까 w까지만 봐라.
//         int j = sum[i], k = sum[W - i];
//         if (j == 0 || k == 0) continue;
//         if (i - arr[j] < arr[k]) {
//            result = true;
//            break;
//         }
//      }
//
//      if (result) cout << "YES" << endl;
//      else cout << "NO" << endl;
//
//
//   }
//   return 0;
//}
