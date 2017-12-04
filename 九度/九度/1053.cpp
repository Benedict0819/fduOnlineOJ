//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n){
//		vector<int> a(n);
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		int min = a[0], max = a[0];
//		int mic = 0, mac = 0;
//		for (int i = 1; i < n; i++){
//			if (min > a[i]){
//				min = a[i];
//				mic = i;
//			}
//			if (max < a[i]){
//				max = a[i];
//				mac = i;
//			}
//		}
//		int tem = a[mac];
//		a[mac] = a[mic];
//		a[mic] = tem;
//		cout << a[0];
//		for (int i = 1; i < n; i++)
//			cout << " " << a[i];
//		cout << endl;
//	}
//	return 0;
//}
