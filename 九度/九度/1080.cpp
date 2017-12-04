//#include<iostream>
//#include<string>
//#include <cstring>
//#include <ctype.h>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	freopen_s(&stream,"in.txt","r",stdin);
//	int M,N;
//	string s;
//	while(cin>>M>>N){
//		cin>>s;
//		int data[1010];  // 保存M进制下的各个位数
//		int output[1010]; // 保存N进制下的各个位数
//		memset(output,0,sizeof(output));
//		int len1 = s.length();
//		for(int i = 0;i < len1;i++){
//			if(isalpha(s[i]))
//				data[i] = s[i] - 'A' + 10;
//			else
//				data[i] = s[i] - '0';
//		}
//		int sum = 1, d = 0, len = s.length(), k = 0; 
//		while(sum){
//			sum = 0;
//			for(int i = 0;i < len;i++){
//				d = data[i] / N;
//				sum += d;
//				if(i == len - 1)
//					output[k++] = data[i] % N;
//				else
//					data[i+1] += (data[i] % N) * M;
//				data[i] = d;
//			}
//		}
//		if(k == 0){
//			output[k] = 0;
//			k--;
//		}
//		if(k == -1)
//			cout << 0 << endl;
//		else{
//			for(int i = 0;i < k;i++){
//				if(output[k-i-1] > 9)
//					cout<<(char)(output[k-i-1] + 'a' - 10);
//				else
//					cout<<output[k-i-1];
//			}
//		}
//		cout<<endl;
//	}
//	return 0;
//}