//#include<iostream>
//#include<iomanip>
//#include<algorithm>
//using namespace std;
//
//FILE *stream;
//
//bool tran(char a){
//	if (a == 'A' || a == 'B' || a == 'C')
//		return true;
//	return  false;
//}
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	double q;
//	while (cin >> q >> n && n){
//		int m;
//		double *total = new double[n];  // ÿ�ŷ�Ʊ���
//		char a, b;  // ���� ð��
//		double c;   // ���
//		for (int i = 0; i < n; i++){     // 
//			cin >> m;
//			total[n] = 0;    
//			double t = 0;          // ���㵥�ŷ�Ʊ�������    
//			int mark = 1;         // ���ڼ�¼�Ƿ����600
//			for (int j = 0; j < m; j++){
//				cin >> a >> b >> c;
//				t += c;   
//				if (c > 600 || !tran(a)){ mark = 0; break; }  // �����600���ܱ�
//			}
//			if (t <= 1000 && mark)     // С��1000�ҵ������600���Ա��� 
//				total[n] = t;
//		}
//
//		
//		cout << fixed << setprecision(2) << total << endl;
//	}
//	return 0;
//}