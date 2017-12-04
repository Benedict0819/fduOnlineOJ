//#include<iostream>
//#include<string>
//using namespace std;
//FILE *stream;
//
//void createTree(string s,int a[]){
//	int len = s.length();
//	for (int i = 0; i < len; i++){
//		int temp = s[i] - '0';
//		for (int j = 1; j < 1024;){
//			if (a[j] == -1){
//				a[j] = temp; break;
//			}
//			else if (a[j] > temp)
//				j = j * 2;
//			else
//				j = j * 2 + 1;
//		}
//	}
//}
//
//int main(int argc, char *argv[]){
//	int n;
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> n && n){
//		string s; cin >> s;
//		int slen = s.length();
//		int *a = new int[slen + 1];
//		for (int i = 0; i < slen + 1; i++)  // 初始化
//			a[i] = -1;
//		createTree(s, a);
//		while (n--){
//			string c;
//			cin >> c;
//			int clen = c.length();
//			if (clen != slen){
//				cout << "NO" << endl;
//				continue;
//			}
//			int *b = new int[clen + 1];
//			int j;
//			for (j = 0; j < clen + 1; j++)  // 初始化
//				b[j] = -1;
//			createTree(c, b);
//			for (j = 1; j < slen + 1; j++)
//				if (a[j] == b[j])
//					continue;
//				else
//					break;
//			if (j == slen + 1)
//				cout << "YES" << endl;
//			else
//				cout << "NO" << endl;
//			delete[] b;
//		}
//		delete[] a;
//	}
//	return 0;
//}