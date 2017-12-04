//#include"stdafx.h"
//#include<iostream>
//#include<algorithm>
//#include<stdlib.h>
//using namespace std;
//
//FILE* stream;
//struct num {
//	int a, b, c;
//};
//
//bool cmp(num x, num y) {
//	if (x.a == y.a) {
//		if (x.b == y.b)
//			return x.c < y.c;
//		else
//			return x.b < y.b;
//	}
//	else {
//		return x.a < y.a;
//	}
//}
//
//int main() {
//	errno_t err;
//	err=freopen_s(&stream,"in.txt", "r", stdin);
//	if (err != 0) {
//		cout << "重定向文件流错误" << endl;
//	}
//	else {
//		int m, n, m1, m2, m3, temp;
//		cin >> n;
//		while (n--) {
//			cin >> m;
//			struct num *a = new num[m];
//			for (int i = 0; i < m; i++) {
//				cin >> a[i].a >> a[i].b >> a[i].c;
//				if (a[i].b > a[i].c) {
//					temp = a[i].c;
//					a[i].c = a[i].b;
//					a[i].b = temp;
//				}
//			}
//			for (int i = 0; i < m; i++) {   // 相同的清理掉 
//				for (int j = i + 1; j < m; j++) {
//					if (a[i].a == a[j].a && a[i].b == a[j].b && a[i].c == a[j].c) {
//						a[i].a = 0;
//						break;
//					}
//				}
//			}
//			sort(a, a + m, cmp);
//			for (int i = 0; i < m; i++)
//				if (a[i].a != 0)
//					cout << a[i].a << " " << a[i].b << " " << a[i].c << endl;
//		}
//	}
//	getchar();
//	return 0;
//}
//
//
//
//
//
//
