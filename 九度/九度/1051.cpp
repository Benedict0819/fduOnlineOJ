//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a, n;
//	while (cin >> a >> n){
//		int sum[101] = { 0 };
//		int c, i, j;
//		for (i = 1; i <= n; i++){ 
//			c = 0;  // 进位
//			for (j = n; j >= n - i + 1; j--){
//				if (sum[j] + a + c >= 10){
//					sum[j] = sum[j] + a + c - 10;
//					c = 1;
//				}
//				else {
//					sum[j] = sum[j] + a + c;
//					c = 0;
//				}
//			}
//			if (c == 1)
//				sum[j]++;
//			//for (int k = 0; k <= n; k++)   // 观察
//			//	cout << sum[k] << " ";
//			//cout << endl;
//		}
//		if (sum[0] != 0) cout << sum[0];
//		for (i = 1; i <= n; i++){  // 输出
//			cout << sum[i];
//		}
//		cout << endl;
//	}
//	return 0;
//}
