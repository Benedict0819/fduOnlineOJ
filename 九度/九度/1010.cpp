//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//string num[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//
//int compare(string a){
//	int result = 0, begin = 0;
//	for (unsigned i = 0; i < a.size(); i++){
//		if (a[i] == ' '){
//			string s = a.substr(begin, i - begin);
//			begin = i + 1;
//			for (int j = 1; j < 10; j++){
//				if (num[j] == s) result = result * 10 + j;
//			}
//		}
//	}
//	return result;
//}
//
//int main(int argc, char *argv[]){
//	string s;
//	freopen_s(&stream, "in.txt", "r", stdin);
//	while (getline(cin, s)){
//		unsigned index = 0,index2;
//		string a, b;
//		for (; index < s.size(); index++) if (s[index] == '+')	break;
//		index2 = index;
//		for (; index2 < s.size(); index2++) if (s[index2] == '=')	break;
//		a = s.substr(0, index);
//		b = s.substr(index + 2, index2 - index - 2);
//		int result = compare(a) + compare(b);
//		if (result == 0) return 0;
//		else cout << result << endl;
//
//	}
//	return 0;
//}