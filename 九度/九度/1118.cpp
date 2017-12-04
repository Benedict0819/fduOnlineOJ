//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//int digit(char a){
//	if (isdigit(a))
//		return a - '0';
//	else if (a >= 'a')
//		return a - 'a' + 10;
//	else
//		return a - 'A' + 10;
//}
//
//char alpha(int a){
//	if (a < 10)
//		return a + '0';
//	else
//		return a - 10 + 'A';
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a, b;
//	long tem, num;
//	string s;
//	while (cin >> a){
//		cin >> s >> b;
//		int len = s.length();  // a -> 10
//		num = digit(s[len - 1]);
//		for (int i = len - 2; i >= 0; i--){
//			tem = digit(s[i]);
//			for (int j = len - 1; j > i;j--)
//				tem *= a;
//			num += tem;
//		}
//		string s;
//		while (num != 0){
//			s = alpha(num % b) + s;
//			num /= b;
//		}
//		if (s[0] != '\0')
//			cout << s << endl;
//		else
//			cout << 0 << endl;
//	}
//	return 0;
//}