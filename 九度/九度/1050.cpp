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
//		vector<int> a(n + 1, 0);   // Ĭ�ϲ�������
//		for (int i = 2; i <= n; i++){
//			vector<int> b;  // ���ڴ������
//			for (int j = 1; j < i; j++){
//				if (i%j == 0) b.push_back(j);
//			}
//			int c = 0;
//			for (int j = 0; j < b.size(); j++){
//				c += b[j];
//			}
//			if (c == i) a[i] = 1;
//		}
//		int flag = 0;
//		for (int i = 1; i <= n; i++){
//			if (a[i]){
//				if (flag) cout << " ";
//				cout << i; 
//				flag = 1;
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}
