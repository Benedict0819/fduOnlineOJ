//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int m, n, x, y;
//	while (cin >> n && n){
//		cin >> m;
//		int *d = new int[n + 1];
//		for (int i = 1; i <= n; i++)
//			d[i] = 0;
//
//		for (int i = 0; i < m; i++){
//			cin >> x >> y;
//			d[x]++; d[y]++;
//		}
//
//		int mark = 0;
//		for (int i = 1; i <= n; i++)
//			if (d[i] % 2 != 0) {
//				mark = 1; break;
//			}
//
//		if (mark) cout << "0" << endl;
//		else cout << "1" << endl;
//
//		delete[] d;
//	}
//
//	return 0;
//}