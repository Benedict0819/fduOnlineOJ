//#include<iostream>
//#include<queue>
//#include<vector>
//#include<functional>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	long long a, b, n;
//	while (cin >> n && n){
//		priority_queue<int, vector<int>, greater<int> > q;
//		for (int i = 0; i < n; i++){
//			cin >> a;
//			q.push(a);
//		}
//		if (q.size() == 1) { cout << q.top(); q.pop(); continue; }
//		long long sum = 0;
//		while (1){
//			a = q.top();
//			q.pop();
//			b = q.top();
//			q.pop();
//			sum += a + b;
//			if (q.empty())
//				break;
//			q.push(a + b);
//		}
//		cout << sum << endl;
//	}
//	return 0;
//}