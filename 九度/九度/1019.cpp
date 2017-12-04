//#include<iostream>
//#include<string>
//#include<stack>
//#include<iomanip>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int a;
//	char b, c;// b用来读符号  c用来读空格
//	double d;
//	while (cin >> a && a){  // 读第一个数，非0继续
//		stack<double> num;
//		num.push(a);
//		while (cin >> b >> a){   // 读后面的表达式
//			cin.get(c);
//			if (b == '+')
//				num.push(a);
//			if (b == '-')
//				num.push(-1.0 * a);
//			if (b == '*'){
//				d = num.top() * a;
//				num.pop();
//				num.push(d);
//			}
//			if (b == '/'){
//				d = num.top() / a;
//				num.pop();
//				num.push(d);
//			}
//			if (c != ' ')  // 如果没有空格表示表达式结束
//				break;
//		}
//
//		while (!num.empty()){    // 栈里所有的数相加
//			if (num.size() == 1){
//				cout << fixed << setprecision(2) << num.top() << endl;
//				break;
//			}else{
//				double d1 = num.top(); num.pop();
//				double d2 = num.top(); num.pop();
//				num.push(d1 + d2);
//			}
//		}
//	}
//	return 0;
//}