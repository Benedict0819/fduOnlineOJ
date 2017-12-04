//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int n;
//	while(cin>>n){
//		if(n==0) {cout<<0<<endl; continue; }
//		vector<long> a((n-1)*2+1);
//		a[0] = 0;
//		cout<<a[0]<<endl;
//		for(int i = 1;i<n;i++){
//			a[1]=a[2] =1;
//			for(int j = 3;j<2*i+1;j++){
//				a[j] = a[j-1]+a[j-2];
//			}
//			cout<<a[0];
//			for(int j = 1;j<2*i+1;j++)
//				cout<< " "<<a[j];
//			cout<<endl;
//		}
//	}
//	return 0;
//}