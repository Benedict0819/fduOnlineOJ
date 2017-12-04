//#include<iostream>
//using namespace std;
//class exe{
//private:
//	int n;
//	int count = 0;
//public:
//	void set_fun(int x){
//		n = x;
//	}
//	void show_fun(){
//		cout << count << endl;
//	}
//	void run(){
//		while (n != 1){
//			if (n % 2 == 0){
//				count++;
//				n = n / 2;
//			}
//			else  {
//				count++;
//				n = (3 * n + 1) / 2;
//			}
//		}
//	}
//};
//
//int main(){
//	int n;
//	exe ob;
//	cin >> n;
//	if (0<n <= 1000){
//		ob.set_fun(n);
//		ob.run();
//		ob.show_fun();
//	}
//	return 0;
//}