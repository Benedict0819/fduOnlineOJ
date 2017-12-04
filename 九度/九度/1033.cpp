//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, q;
//	while (cin >> n && n){
//		vector<int> a(n);  
//		set<int> b;   // b用于存放覆盖数
//		for (int i = 0; i < n; i++){
//			cin >> a[i];
//		}
//
//		for (int i = 0; i < n; i++){
//			q = a[i];        // 找a[0]的覆盖数
//			while (q != 1){
//				if (q % 2 == 0){
//					q = q / 2; ;
//				}
//				else{
//					q = (q * 3 + 1) / 2;
//				}
//				b.insert(q);
//			}
//		}
//	
//		int flag = 0;
//		set<int>::iterator iter;
//		for (int i = n - 1; i >= 0; i--){
//			iter = b.find(a[i]);
//			if (iter == b.end()){
//				if (flag == 1) cout << " ";
//				cout << a[i];
//				flag = 1;
//			}
//		}
//		cout << endl;
//	}
//
//	return 0;
//}