//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	cin >> n;
//	while (n--){
//		int a, b, c = 0, d = 0;
//		cin >> a >> b;
//		int sum1 = a + b;
//		while (a != 0){
//			c = c * 10 + a % 10;
//			a /= 10;
//		}
//		while (b != 0){
//			d = d * 10 + b % 10;
//			b /= 10;
//		}
//		int tem = c + d;
//		int sum2 = 0;
//		while (tem != 0){
//			sum2 = sum2 * 10 + tem % 10;
//			tem /= 10;
//		}
//		if (sum2 == sum1)
//			cout << sum1 << endl;
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}