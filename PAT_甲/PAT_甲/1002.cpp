//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	float a[1001], b[1001];
//	int n, i, count = 0;
//	cin >> n;
//	for (int i = 0; i < 1001; i++){
//		a[i] = 0; b[i] = 0;
//	}
//	while (n--){
//		cin >> i;
//		cin >> a[i];
//	}
//	cin >> n;
//	while (n--){
//		cin >> i;
//		cin >> b[i];
//	}
//	for (int i = 1000; i >= 0; i--){
//		a[i] = a[i] + b[i];
//		if (a[i] != 0) count++;
//	}
//	cout << count;
//	for (int i = 1000; i >= 0; i--){
//		if (a[i] != 0) cout << fixed << setprecision(1) << " " << i << " " << a[i];
//	}
//
//	return 0;
//}