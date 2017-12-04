//#include<iostream>
//#include<stack>
//#include<string>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n && n){
//		int a;
//		string s;
//		stack<int> sta;
//		for (int i = 0; i < n; i++){
//			cin >> s;
//			if (s == "A"){
//				if (!sta.empty())
//					cout << sta.top() << endl;
//				else
//					cout << "E" << endl;
//			}
//			else if (s == "P"){
//				cin >> a;
//				sta.push(a);
//			}
//			else{
//				if (!sta.empty())
//					sta.pop();
//			}
//		}
//		cout << endl;
//	}
//	return 0;
//}