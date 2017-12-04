//#include<iostream>
//#include<stack>
//#include<string.h>
//#include<stdlib.h>
//using namespace std;
//
//FILE *stream;
//
//int priority(char c){
//	if (c == '+')    return 1;
//	if (c == '-')    return 1;
//	if (c == '*')    return 2;
//	if (c == '/')    return 2;
//	return 0;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	char s[200];
//	while (cin >> s){
//		int len = strlen(s);
//		stack<double> nums;
//		stack<char> op;
//		double d, a;
//		for (int i = 0; i < len; i++){
//			if (isdigit(s[i])){
//				d = atof(&s[i]);
//				while (isdigit(s[i]))
//					i++;
//				i--;
//				nums.push(d);
//			}
//			else{
//				if (op.empty() || priority(s[i]) > priority(op.top()))
//					op.push(s[i]);
//				else{
//					while (!op.empty() && priority(s[i]) <= priority(op.top())){
//						d = nums.top(); 
//						nums.pop();
//						a = nums.top();
//						nums.pop();
//						if (op.top() == '+')    nums.push(a + d);
//						if (op.top() == '-')    nums.push(a - d);
//						if (op.top() == '*')    nums.push(a * d);
//						if (op.top() == '/')    nums.push(a / d);
//						op.pop();
//					}
//					op.push(s[i]);
//				}
//			}
//		} // for
//		while (!op.empty()){
//			double d = nums.top();
//			nums.pop();
//			double a = nums.top();
//			nums.pop();
//			if (op.top() == '+')    nums.push(a + d);
//			if (op.top() == '-')    nums.push(a - d);
//			if (op.top() == '*')    nums.push(a * d);
//			if (op.top() == '/')    nums.push(a / d);
//			op.pop();
//		}
//		cout << nums.top() << endl;
//		nums.pop();
//	}
//
//	return 0;
//}