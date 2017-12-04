//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	long long m, n;
//	while (cin >> m >> n && n){
//		long long sum = 0;
//		if (m == n) sum = 1;
//		else {
//			if (m <= n) sum = 1;
//			long long left = 2 * m, right = 2 * m + 1;
//			while (n > right){
//				sum += (right - left + 1);
//				left *= 2;
//				right = right * 2 + 1;
//			}
//			if (n >= left) sum += n - left + 1;
//		}
//		cout << sum << endl;
//	}
//
//	return 0;
//}