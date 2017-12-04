//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int find_child(char a, char b, vector<char> vec){
//	if (a == '-' || b == '-') return 0;
//	int count = 0;
//	while (a != b){
//		if (a == '-') return 0;
//		a = vec[a - 'A'];
//		count++;
//	}
//	return count;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m;
//	while (cin >> n >> m){
//		if (n == 0 && m == 0) break;
//		char s[4];
//		vector<char> vec(26, '-');
//		for (int i = 0; i < n; i++){
//			cin >> s;
//			if (s[1] != '-')  vec[s[1] - 'A'] = s[0];
//			if (s[2] != '-')  vec[s[2] - 'A'] = s[0];
//		}
//		for (int i = 0; i < m; i++){
//			cin >> s;
//			bool flag = true;
//			int r = find_child(s[0], s[1], vec);
//			if (r == 0) {
//				r = find_child(s[1], s[0], vec);
//				flag = false;
//			}
//			if (r == 0){
//				cout << '-' << endl;
//				continue;
//			}
//			if (r > 2)
//				for (int i = 2; i < r; i++)
//					cout << "great-";
//			if (r > 1)
//				cout << "grand";
//			if (flag) cout << "parent" << endl;
//			else cout << "child" << endl;
//		}
//
//	}
//	return 0;
//}