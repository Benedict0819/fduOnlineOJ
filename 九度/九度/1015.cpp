//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a, b, k;
//	while (cin >> a >> b ){
//		if (a == 0 && b == 0) break;
//		cin >> k;
//		int mark = 1;  // 默认相同
//		int c = a, d = b;
//		while (k--){
//			if (c % 10 != d % 10){  // 不同跳出
//				mark = 0; 	
//				break;
//			}
//			c /= 10; 
//			d /= 10;
//		}
//
//		if (mark == 0)  
//			cout << a + b << endl;
//		else 
//			cout << "-1" << endl;
//	}
//	return 0;
//}