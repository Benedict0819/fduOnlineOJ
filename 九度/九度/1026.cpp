//#include<iostream>
//#include<stack>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int m;
//	while (cin >> m && m){
//		long long int a, b;
//		cin >> a >> b;
//		stack<int> c;
//		a += b;
//		while (a / m != 0){
//			c.push(a%m);
//			a /= m;
//		}
//		cout << a;
//		while (!c.empty()){
//			cout << c.top();
//			c.pop();
//		}
//		cout << endl;
//	}
//	return 0;
//}