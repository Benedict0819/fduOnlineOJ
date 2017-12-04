//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//
//FILE *stream;
//string num[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	char s;
//	long long total = 0;
//	while (cin >> s){
//		total = total + int(s - '0');
//	}
//
//	stack<string> a;
//	while (total / 10 != 0){
//		a.push(num[total % 10]);
//		total = total / 10;
//	}
//	a.push(num[total]);
//
//	int size = a.size();
//	for (int i = 0; i < size; i++){
//		cout << a.top();
//		a.pop();
//		if (i != size - 1)
//			cout << " ";
//	}
//
//	return 0;
//}