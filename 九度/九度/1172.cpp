//#include<iostream>
//#include<queue>
//#include<functional>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n && n){
//		priority_queue<int, vector<int>, greater<int> > q;
//		int a, b, ans = 0;
//		for (int i = 0; i < n; i++){
//			cin >> a;
//			q.push(a);
//		}
//		while (q.size() != 1){
//			a = q.top();
//			q.pop();
//			b = q.top();
//			q.pop();
//			a += b;
//			q.push(a);
//			ans += a;
//		}
//		cout << ans << endl;
//		q.pop();
//	}
//	return 0;
//}