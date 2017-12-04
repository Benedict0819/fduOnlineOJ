//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//
///*
//4.begin           得到数组头的指针
//5.end             得到数组的最后一个单元+1的指针
//6.front           得到数组头的引用
//7.back            得到数组的最后一个单元的引用
//*/
//
//int main(){
//	freopen("in.txt","r",stdin);
//	int n;
//	cin>>n;
//	while( n-- ){ 
//		vector<char> vec;
//		string str;
////		vec.push_back(' ');
//		cin>>str;
//		for(int i = 0; i < str.length(); i++ ){
//			vec.push_back(str[i]);
//			if( vec.back()-1 == *(vec.end()-2) || vec.back()-2 == *(vec.end()-2) ){
//				vec.pop_back(); 
//				vec.pop_back(); 
//			} 
//		}
//		if(vec.size()==0)
//			cout<<"Yes"<<endl;
//		else
//			cout<<"No"<<endl;
//	}
//	return 0;
//} 
