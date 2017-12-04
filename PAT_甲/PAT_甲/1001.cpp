//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a, b;
//	while (cin >> a >> b){
//		int c = a + b;
//		int d[10], i = 0;
//		while (c / 10 != 0){
//			d[i++] = c % 10;
//			c = c / 10;
//		}
//		cout << c;
//		if (i % 3 == 0 && i != 0) cout << ",";
//		while (i--){
//			cout << abs(d[i]);
//			if (i % 3 == 0 && i != 0) cout << ",";
//		}
//		cout << endl;
//
//	}
//	return 0;
//}