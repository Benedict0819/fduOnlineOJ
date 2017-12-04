//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n){
//		int *high = new int[n];
//		int *dp = new int[n];
//		for (int i = 0; i < n; i++)
//			cin >> high[i];
//		int m = 1;
//		for (int i = 0; i < n; i++){
//			int tmax = 1;
//			for (int j = 0; j < i; j++){
//				if (high[j] >= high[i])
//					tmax = max(tmax, dp[j] + 1);
//			}
//			dp[i] = tmax;
//			m = tmax > m ? tmax : m;
//		}
//		cout<<m<<endl;
//		delete[] high, dp;
//	}
//
//	return 0;
//}