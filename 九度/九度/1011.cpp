//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int main(){  
//	int n;
//	freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> n && n){
//		int *a = new int[n];
//		for (int i = 0; i < n; i++)   // 赋值
//			cin >> a[i];
//
//		int **total = new int*[n];
//		for (int i = 0; i < n; i++){   // 初始化赋值
//			total[i] = new int[n];
//			for (int j = 0; j < n; j++)
//				total[i][j] = 0;
//		}
//
//		int begin = 0, end = n - 1, max = 0;
//		for (int i = 0; i < n; i++){   // 计算
//			total[i][i] = a[i];
//			if (n == 1){
//				begin = i; end = i;
//				max = total[i][i]>0 ? total[i][i] : 0;
//				break;
//			}
//			if (total[i][i] < 0) continue;
//			if (total[i][i] == 0 && max ==0){
//				begin = i; end = i; max = total[i][i];
//			}
//			for (int j = i; j < n; j++){
//				total[i][j] = total[i][j - 1] + a[j];
//				if (total[i][j] > max ){
//					begin = i; end = j; max = total[i][j];
//				}
//			}
//		}
//		cout << max << " " << a[begin] << " " << a[end] << endl;
//
//
//		for (int i = 0; i < n; i++)
//			delete[] total[i];
//		delete[] a,total;
//	}
//	return 0;
//}