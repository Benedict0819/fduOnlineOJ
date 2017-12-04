//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int main(int argc, char *argv[]){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	long n, b, mid;
//	while (cin >> n){
//		vector<long> a(n);
//		for (int i = 0; i < n; i++)
//			cin >> a[i];
//		long m; cin >> m;
//		for (int i = 0; i < m; i++){
//			cin >> b;
//			a.push_back(b);
//		}
//		sort(a.begin(), a.end()); 
//		mid = (a.size() % 2 == 0) ? (a.size() / 2 - 1) : (a.size() / 2);
//		cout << a[mid] << endl;
//	}
//	return 0; 
//}