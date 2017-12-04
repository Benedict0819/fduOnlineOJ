//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	double max, tem, total = 1;
//	int c;
//	char a[3] = { 'W', 'T', 'L' };
//	char mark[3];
//	for (int i = 0; i < 3; i++){
//		cin >> max;
//		c = 0;
//		for (int j = 1; j < 3; j++){
//			cin >> tem;
//			if (tem > max) { max = tem; c = j; }
//		}
//		mark[i] = a[c];
//		total *= max;
//	}
//	total = (total * 0.65 - 1) * 2;
//	cout << mark[0] << " " << mark[1] << " " << mark[2] << " ";
//	cout << fixed << setprecision(2) << total << endl;
//	return 0;
//}
//
