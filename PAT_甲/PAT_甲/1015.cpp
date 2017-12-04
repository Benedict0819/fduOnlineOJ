//#include<iostream>
//#include<cmath>
//using namespace std;
//
//FILE *stream;
//
//int isprime(int x){
//	if (x <= 1)    // 很重要，反转后很可能出现1
//		return 0;
//	int a = sqrt(x);
//	for (int i = 2; i < a + 1; i++){   //  注意是 a + 1 
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int reverse(int a, int b){   // 这个更简单
//	int x = 0;
//	while (a){
//		x = x * b + a % b;
//		a /= b;
//	}
//	return x;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a, b;
//	while (cin >> a && a >= 0){
//		cin >> b;
//		if (a == 0 || a == 1){
//			cout << "No" << endl;
//			continue;
//		}
//		if (!isprime(a)){		//  不是质数直接跳过
//			cout << "No" << endl;
//			continue;
//		}
//
//		int c = reverse(a, b);
//		if (isprime(c))
//			cout << "Yes" << endl;
//		else
//			cout << "No" << endl;
//	}
//	return 0;
//}
//
