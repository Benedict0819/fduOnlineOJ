//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int reve(int a){
//	int b;
//	b = (a % 10) * 1000;
//	a /= 10;
//	b += (a % 10) * 100;
//	a /= 10;
//	b += (a % 10) * 10;
//	a /= 10;
//	b += a;
//	return b;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a;
//	for (int i = 1000; i < 1112; i++){
//		a = i * 9;
//		if (reve(i) == a) cout << i << endl;
//	}
//	return 0;
//}