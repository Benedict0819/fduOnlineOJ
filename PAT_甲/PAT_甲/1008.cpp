//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin>>n){
//		int total = 5 * n; // 总共停留的时间
//		int a=0, b;  // 记录当前电梯层数和下一个请求层数
//		for (int i = 0; i < n; i++){
//			cin >> b;
//			total += ((b - a > 0) ? (b - a) * 6 : (a - b) * 4);
//			a = b;
//		}
//		cout << total << endl;
//	}
//	return 0;
//}
//
