//#include<iostream>
//#include<string>
//#include<iostream>
//#include<stdlib.h>
//using namespace std;
//
//FILE *stream;
//
//int main(int argc,char *argv[]){
//	string a, b;
//	freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> a >> b){
//		char a1[20], b1[20];
//		int i=0,j=0;
//		for (; i < a.size(); i++){
//			if (a[i] != ','){
//				a1[j++] = a[i];
//			}
//		}
//		while (j < 20){
//			a1[j++] = '\0';
//		}
//		for ( i = 0, j = 0; i < b.size(); i++){
//			if (b[i] != ',')
//				b1[j++] = b[i];
//		}
//		while (j < 20){
//			b1[j++] = '\0';
//		}
//		cout << atol(a1) + atol(b1) << endl;
//	}
//}