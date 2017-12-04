//#include<iostream>
//using namespace std;
//
//
//// 注意传值调用和传址调用 
//
//class Letter {
//private:
//	int n;  // 几组数据
//	char a[3];  // 记录字母
//public:
//	void compare(char &b, char &c) {
//		char t;
//		if (b > c) {
//			t = b;
//			b = c;
//			c = t;
//		}
//	}
//	void sort() {
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> a;
//			compare(a[0], a[1]);
//			compare(a[0], a[2]);
//			compare(a[1], a[2]);
//			cout << a[0] << " " << a[1] << " " << a[2] << endl;
//		}
//	}
//};
//
//int main() {
//	Letter L;
//	L.sort();
//	return 0;
//}
