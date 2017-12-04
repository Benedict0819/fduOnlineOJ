//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//int judge(string s){
//	int p = -1, t = -1, len = s.length();
//	for (int i = 0; i < len; i++){
//		if (s[i] != 'A' && s[i] != 'P' && s[i] != 'T') return 0;
//		if (s[i] == 'P') p = i;
//		if (s[i] == 'T') t = i;
//	}
//	if (p == -1 || t == -1) return 0;
//	//cout << p << " " << t << " " << len << endl;
//	if (p*(t - p - 1) == (len - t - 1) && p + 1 != t) return 1;
//	else return 0;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	cin >> n;
//	while (n--){
//		string s;		cin >> s;
//		cout << (judge(s) ? "YES" : "NO") << endl;
//	}
//
//	return 0; 
//}