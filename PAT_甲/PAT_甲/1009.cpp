//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//
//#define max 2000
//FILE *stream;
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, c, num = 0;
//	float a[max], b[max], re[max];
//	for (int i = 0; i < max; i++){
//		a[i] = 0; b[i] = 0; re[i] = 0;
//	}
//	cin >> n;
//	while (n--){
//		cin >> m;
//		cin >> a[m];
//	}
//	cin >> n;
//	while (n--){
//		cin >> m;
//		cin >> b[m];
//	}
//	for (int i = 0; i < max; i++){		//¼ÆËã
//		if (a[i] == 0) continue;
//		for (int j = 0; j < max; j++){
//			if (b[j] == 0) continue;
//			c = i + j;
//			re[c] += (a[i] * b[j]);
//		}
//	}
//	for (int i = 0; i < max; i++)
//		if (re[i] != 0) num++;
//
//	cout << num;
//	for (int i = max - 1; i >= 0; i--)
//		if ((re[i] != 0))
//			cout << fixed << setprecision(1) << " " << i << " " << re[i];
//	cout << endl;
//	return 0;
//}
//
