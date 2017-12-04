//#include<iostream>
//#include<stack>
//#include<iomanip>
//#include<string.h>
//#include<stdlib.h>
//using namespace std;
//
//FILE *stream;
//
//int priority(char c){
//	if (c == '=')    return 0;
//	if (c == '+')    return 1;
//	if (c == '-')    return 1;
//	if (c == '*')    return 2;
//	if (c == '/')    return 2;
//	return 0;
//}
//
//void compute(stack<double> &num, stack<char> &op){
//	double b = num.top();
//	num.pop();
//	double a = num.top();
//	num.pop();
//	switch (op.top())
//	{
//	case '+': num.push(a + b); break;
//	case '-': num.push(a - b); break;
//	case '*': num.push(a * b); break;
//	case '/': num.push(a / b); break;
//	default:
//		break;
//	}
//	op.pop();
//}
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int z;
//	char str[1005];
//	stack<double> num; // 存放数字
//	stack<char> op;  // 存放运算符
//	cin >> z;
//	while (z--){
//		cin >> str;
//		int len = strlen(str);
//		for (int i = 0; i < len; i++){
//			if (isdigit(str[i])){
//				double n = atof(&str[i]);   // 从str[i]的地址起始读入一串单精度小数。
//				while (i < len && isdigit(str[i]) || str[i] == '.')
//					i++;
//				i--;
//				num.push(n);
//			}else{
//				if (str[i] == '(')
//					op.push(str[i]);
//				else if (str[i] == ')'){
//					while (op.top() != '(')
//						compute(num, op);
//					op.pop();  // 弹左括号
//				}
//				else if (op.empty() || priority(str[i])>priority(op.top()))
//					op.push(str[i]);
//				else{
//					while (!op.empty() && priority(str[i]) <= priority(op.top()))
//						compute(num, op);
//					op.push(str[i]);
//				}
//			}
//		}
//		op.pop();
//		cout << fixed << setprecision(2) << num.top() << endl;
//		num.pop();
//	}
//	return 0;
//}