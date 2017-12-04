//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//int cmp(int a, int b){
//	return a > b;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m;
//	while (cin >> n >> m){
//		if (n == 0 && m == 0) break;
//		vector<int> gold(n);
//		for (int i = 0; i < n; i++)
//			cin >> gold[i];
//
//		sort(gold.begin(), gold.end(), cmp);
//
//		int flag = 0;
//		n = n < m ? n : m;
//		for (int i = 0; i < m; i++){
//			if (flag) cout << " ";
//			cout << gold[i];
//			flag = 1;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}