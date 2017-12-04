//#include<iostream>
//#include<string>
//#include<stdlib.h>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	string s;
//	while (getline(cin, s)){
//		int len = s.length();
//		int a = atol(&s[0]);
//		int num, mark = 1;
//		int i = 1;
//		while (s[i] != ' ')
//				i++;
//		i++;
//		char c = s[i++];
//		if (c == '!'){
//			num = 1;
//			for (int i = 2; i <= a; i++)
//				num *= i;
//		}
//		else{
//			int b = atoi(&s[i]);
//			if (c == '+')
//				num = a + b;
//			else if (c == '-')
//				num = a - b;
//			else if (c == '*')
//				num = a * b;
//			else if (c == '/'){
//				if (b != 0) 
//					num = a / b;
//				else
//					mark = 0;
//			}
//			else{
//				if (b != 0)
//					num = a % b;
//				else
//					mark = 0;
//			}
//		}
//		if (mark)
//			cout << num << endl;
//		else
//			cout << "error" << endl;
//	}
//	return 0;
//}