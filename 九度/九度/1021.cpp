//#include<iostream>
//#include<string.h>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	string a, b;
//	int num[5];
//	while (getline(cin, a) && a[0] != '#'){
//		memset(num, 0, sizeof(num));
//		getline(cin, b);
//		for (unsigned i = 0; i < b.size(); i++)
//			for (unsigned j = 0; j < a.size(); j++)
//				if (a[j] == b[i])	num[j]++;
//		for (int i = 0; i < a.size(); i++)
//			cout << a[i] << " " << num[i] << endl;
//	}
//	return 0;
//}