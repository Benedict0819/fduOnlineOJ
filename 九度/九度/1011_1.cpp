//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n && n){
//		int *a = new int[n];
//		int **total = new int*[n];
//		for (int i = 0; i < n; i++){
//			cin >> a[i];
//			total[i] = new int[n-i];
//		}
//
//		int begin = 0, end = n - 1, max = 0;
//		for (int i = 0; i < n; i++){
//			if (n == 1) {
//				max = a[i] > 0 ? a[i] : 0; break;
//			}
//			if (a[i] < 0 ) continue;
//			if (a[i] == 0 && max ==0) {	begin = i; end = i;	}
//			total[i][0] = a[i];
//			for (int j = 1; j < n - i; j++){
//				total[i][j] = total[i][j - 1] + a[j + i];
//				if (total[i][j] > max){
//					begin = i; end = j + i; max = total[i][j];
//				}
//			}
//
//		}
//
//		cout << max << " " << a[begin] << " " << a[end] << endl;
//
//		for (int i = 0; i < n; i++)
//			delete[] total[i];
//		delete a,total;
//	}
//}