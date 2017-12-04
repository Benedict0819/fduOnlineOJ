//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	string s;
//	while (cin >> s && s[0] != 'E'){
//		int num[3];
//		for (int i = 0; i < 3; i++) num[i] = 0;
//		for (int i = 0; i < s.size(); i++){
//			if (s[i] == 'Z') num[0]++;
//			if (s[i] == 'O') num[1]++;
//			if (s[i] == 'J') num[2]++;
//		}
//		while (num[0] || num[1] || num[2]){
//			if (num[0]) { cout << 'Z'; num[0]--; }
//			if (num[1]) { cout << 'O'; num[1]--; }
//			if (num[2]) { cout << 'J'; num[2]--; }
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}