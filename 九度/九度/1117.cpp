//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//int cmp1(int a,int b){
//	return a > b;
//}
//
//int cmp2(int a, int b){
//	return a < b;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a[10], b[10];
//	while (cin >> a[0]){
//		int x = 0, y = 9;
//		for (int i = 1; i < 10; i++)
//			cin >> a[i];
//		for (int i = 0; i < 10; i++){
//			if (a[i] % 2 == 1)
//				b[x++] = a[i];
//			else
//				b[y--] = a[i];
//		}
//		sort(b, b + x, cmp1);
//		sort(b + x, b + 10, cmp2);
//		cout << b[0];
//		for (int i = 1; i < 10; i++)
//			cout << " " << b[i];
//		cout << endl;
//	}
//	return 0;
//}