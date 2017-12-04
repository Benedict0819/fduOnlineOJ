//#include<iostream>
//#include<string>
//using namespace std;
//
//FILE *stream;
//int nums[26]={1,1,1,2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,6,7,7,7,8,8,8,8};
//int pus[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
//
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	string s;
//	while(cin>>s){
//		int len = s.length();
//		int count = pus[s[0]-'a']; // 记录按键次数
//		int pre = nums[s[0]-'a'];  // 记录上次按键位置
//		for(int i = 1;i < len;i++){
//			int cur = nums[s[i]-'a']; // 当前要按的位置
//			if(cur == pre)
//				count = count + 2 + pus[s[i]-'a'];
//			else 
//				count = count + pus[s[i]-'a'];
//			pre = cur;
//		}
//		cout<<count<<endl;
//	}
//	return 0;
//}