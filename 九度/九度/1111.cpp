//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	string s, a, b;
//	while (getline(cin, s)){
//		getline(cin, a);
//		getline(cin, b);
//		int x = s.find(a);
//		while (x != string::npos){
//			if ((x + a.size() < s.size() && s[x + a.size()] != ' ') || (x != 0 && s[x - 1] != ' ')){
//				x = s.find(a, x + 1);
//				continue;
//			}
//			s.replace(x, a.size(), b);
//			x = s.find(a, x + 1);
//		}
//		cout << s << endl;
//	}
//	return 0;
//}