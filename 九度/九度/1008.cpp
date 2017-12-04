//#include<iostream>
//#include<climits>
//using namespace std;
//
//FILE *stream;
//
//int main(int argc, char *argv[]){
//	long n, m;
//	freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> n >> m){
//		if (n == 0 && m == 0) break;
//		n++; m++;
//		int **a = new int*[n];   // 长度矩阵
//		int **b = new int*[n];   // 花费矩阵
//		int *dis = new int[n];
//		int *cos = new int[n];
//		for (int i = 1; i < n; i++){
//			a[i] = new int[n];
//			b[i] = new int[n];
//		}
//		for (int i = 1; i < n; i++){
//			dis[i] = INT_MAX;
//			cos[i] = INT_MAX;
//			for (int j = 1; j < n; j++){
//				a[i][j] = i == j ? 0 : INT_MAX;
//				b[i][j] = i == j ? 0 : INT_MAX;
//			}
//		}
//
//		int c, d;
//		for (int i = 1; i < m; i++){
//			cin >> c >> d;
//			cin >> a[c][d] >> b[c][d];
//			a[d][c] = a[c][d];
//			b[d][c] = b[c][d];
//		}
//
//		int s, t;
//		cin >> s >> t;
//		for (int i = 1; i < n; i++){  // 初始化
//			dis[i] = a[s][i];
//			cos[i] = b[s][i];
//		}
//
//		for (int i = 1; i < n; i++){   //Dijstra
//			for (int j = 1; j < n; j++){
//				if (a[i][j] < INT_MAX){
//					if (dis[j] >= dis[i] + a[i][j]){   // 距离相等看花费
//						dis[j] = dis[i] + a[i][j];
//						if (cos[j] > cos[i] + b[i][j])
//							cos[j] = cos[i] + b[i][j];
//					}
//				}
//			}//for j
//		}//for i
//
//		cout << dis[t] << " " << cos[t] << endl;
//
//		for (int i = 1; i < n; i++){
//			delete[] a[i], b[i];
//		}
//		delete[] a, b;
//	}
//	return 0;
//}
//
