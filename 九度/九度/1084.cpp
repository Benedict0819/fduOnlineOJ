//#include<iostream>
//using namespace std;
//
//FILE *stream;
//int f[1000001];
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int n;
//	while (cin >> n){
//		f[1] = 1; f[2] = 2;
//		for (int i = 3; i <= n; i++){
//			if (i & 1)
//				f[i] = f[i - 1];
//			else{
//				f[i] = (f[i - 1] + f[i / 2]) % 1000000000;
//			}
//		}
//		cout << f[n] << endl;
//	}
//
//	return 0;
//}