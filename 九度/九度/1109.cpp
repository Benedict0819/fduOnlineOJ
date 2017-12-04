//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//int pre[1001];
//int root[1001];
//
//int findroot(int a){
//	int r = a;
//	while (pre[r] != r)
//		r = pre[r];
//	int i = a, j;
//	while (pre[i] != r){
//		j = pre[i];
//		pre[i] = r;
//		i = j;
//	}
//	return r;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m;
//	while (cin >> n >> m && n){
//		for (int i = 1; i <= n; i++){
//			pre[i] = i;
//			root[i] = 0;
//		}
//		int a, b;
//		for (int i = 0; i < m; i++){
//			cin >> a >> b;
//			int c = findroot(a);
//			int d = findroot(b);
//			if (d != c){
//				pre[c] = d;
//			}
//		}
//
//		for (int i = 1; i <= n; i++)
//			root[findroot(i)] = 1;
//
//		int num = 0;
//		for (int i = 1; i <= n; i++){
//			if (root[i] == 1)
//				num++;
//		}
//
//		if (num == 1)
//			cout << "YES" << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}