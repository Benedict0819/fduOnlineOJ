//#include<iostream>
//using namespace std;
//
//FILE *stream;
//int days[12]={31,28,31,30,31,30,31,31,30,31,30,31};
//
//int isRun(int y){
//	if(y%100 == 0) 
//		if(y%400 == 0)
//			return 1;
//		else return 0;
//	else if(y%4 == 0)
//		return 1;
//	else return 0;
//}
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int y,m,d;
//	while(cin>>y>>m>>d){
//		int sum = 0;
//		for(int i = 0;i<m-1;i++)
//			sum += days[i];
//		sum += d;
//		if(isRun(y) && m>2) sum++;
//		cout<<sum<<endl;
//	}
//	return 0;
//}