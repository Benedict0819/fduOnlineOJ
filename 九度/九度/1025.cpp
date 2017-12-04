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
//		double *total = new double[n];  // 每张发票金额
//		char a, b;  // 类型 冒号
//		double c;   // 金额
//		for (int i = 0; i < n; i++){     // 
//			cin >> m;
//			total[n] = 0;    
//			double t = 0;          // 计算单张发票报销额度    
//			int mark = 1;         // 用于记录是否单项超过600
//			for (int j = 0; j < m; j++){
//				cin >> a >> b >> c;
//				t += c;   
//				if (c > 600 || !tran(a)){ mark = 0; break; }  // 单项超过600不能报
//			}
//			if (t <= 1000 && mark)     // 小于1000且单项不超过600可以报销 
//				total[n] = t;
//		}
//
//		
//		cout << fixed << setprecision(2) << total << endl;
//	}
//	return 0;
//}