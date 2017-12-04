//#include<iostream>
//using namespace std;
//
////FILE *stream;
//
//int main(int argc, char *argv[]){
//	int m, n;
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	while (1){
//		cin >> m;
//		if (m == 0) break;
//
//		cin >> n;
//		int **a, **b;
//		a = new int*[m];
//		b = new int*[m];
//		for (int i = 0; i < m; i++){
//			a[i] = new int[n];
//			b[i] = new int[n];
//		}
//
//		for (int i = 0; i < m; i++)
//			for (int j = 0; j < n; j++)
//				cin >> a[i][j];
//		for (int i = 0; i < m; i++)
//			for (int j = 0; j < n; j++)
//				cin >> b[i][j];
//
//		for (int i = 0; i < m; i++)
//			for (int j = 0; j < n; j++)
//				a[i][j] += b[i][j];
//
//
//		int num = 0, mark = 0;
//		for (int i = 0; i < m; i++){
//			for (int j = 0; j < n; j++)
//				if (a[i][j] != 0)
//					mark = 1;
//			if (mark == 0)
//				num++;
//			mark = 0;
//		}
//		for (int j = 0; j < n; j++){
//			for (int i = 0; i < m; i++)
//				if (a[i][j] != 0)
//					mark = 1;
//			if (mark == 0)
//				num++;
//			mark = 0;
//		}
//
//		cout << num << endl; 
//
//		for (int i = 0; i < m; i++)
//		{
//			delete[] a[i];
//			delete[] b[i];
//		}
//		delete[] a;
//		delete[] b;
//
//	}
//
//	return 0;
//}