//#include<iostream>
//#include<math.h>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int n;
//	long a, num, count;
//	while (cin >> n && n){
//		for (int i = 0; i < n; i++){
//			cin >> num;
//			a = sqrt(num);
//			count = 0;
//			for (int j = 1; j <= a; j++){
//				if (num%j == 0)
//					count = count + 2;
//			}
//			if (a*a == num) count--;
//			cout << count << endl;
//		}
//	}
//	
//	return 0;
//}