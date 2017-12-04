//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//string nums[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	string s;
//	while (cin >> s){
//		int total = 0;
//		for (unsigned i = 0; i < s.length(); i++)
//			total += s[i] - '0';
//		int a[100], i = 0;
//		while (total / 10){
//			a[i] = total % 10;
//			total /= 10;
//			i++;
//		}
//		a[i] = total;
//		for (; i > 0;i--)
//			cout << nums[a[i]] << " ";
//		cout << nums[a[0]] << endl;
//
//	}
//
//	return 0;
//}
//
