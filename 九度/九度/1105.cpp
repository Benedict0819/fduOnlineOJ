//#include<iostream>
//#include<string>
//#include<stdio.h>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	string s;
//	while (getline(cin,s) && s != "!"){
//		int len = s.length();
//		for (int i = 0; i < len; i++){
//			if (isdigit(s[i]))
//				cout << s[i];
//			else if (!isalpha(s[i]))
//				cout << s[i];
//			else if (s[i] >= 'a')
//				printf("%c", 'z' - s[i] + 'a');
//			else if (s[i] >= 'A')
//				printf("%c",'Z' - s[i] + 'A');
//		}
//		cout << endl;
//	}
//	return 0;
//}