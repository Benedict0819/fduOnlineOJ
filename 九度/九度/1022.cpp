//#include<iostream>
//#include<string>
//#include<iomanip>
//using namespace std;
//
//FILE *stream;
//
//struct boat{
//	int flag;
//	int s;
//};
//
//int isClock(string s){
//	return  (s[0] * 10 + s[1]) * 60 + s[3]*10 + s[4];
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int a;
//	string t;
//	while (cin >> a && a != -1){
//		int count = 0;
//		char key;
//		boat boats[101];
//		double time = 0; // 次数和时间
//		while (a){    //只要不为0
//			cin >> key >> t;
//			if (key == 'S'){
//				boats[a].flag = 1;
//				boats[a].s = isClock(t);
//			}
//			if (key == 'E' && boats[a].flag == 1 ){
//				count++; 
//				time += (isClock(t) - boats[a].s);
//			}
//			cin >> a;
//		}
//		if (count == 0) 
//			cout << 0 << " " << 0 << endl;
//		else 
//			cout << fixed << setprecision(0) << count << " " << time / count << endl;
//		getline(cin, t);
//	}
//	return 0;
//}