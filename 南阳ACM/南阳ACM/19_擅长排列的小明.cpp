//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int a[10] = { 0 }, b[10] = { 0 };
//void dfs(int n, int m){
//	if (!m){
//		for (int i = m; i >= 1; i--)
//			cout << b[i];
//		cout << endl;
//	}
//	else {
//		for (int i = 1; i <= n; i++){
//			if (a[i] != 1){
//				a[i] = 1;
//				b[m] = i;
//				dfs(n, m - 1);
//				a[i] = 0;
//			}
//		}
//	}
//}
//
//
//int main(int argc,char *argv[]){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int N;
//	while (cin >> N){
//		while (N--){
//			int n, m;
//			cin >> n >> m;
//			dfs(n, m);
//		}
//	}
//	return 0;
//}
