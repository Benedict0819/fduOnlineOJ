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
//	char b, c;// b����������  c�������ո�
//	double d;
//	while (cin >> a && a){  // ����һ��������0����
//		stack<double> num;
//		num.push(a);
//		while (cin >> b >> a){   // ������ı��ʽ
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
//			if (c != ' ')  // ���û�пո��ʾ���ʽ����
//				break;
//		}
//
//		while (!num.empty()){    // ջ�����е������
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