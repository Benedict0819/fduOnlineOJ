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
//		vector<int> a(n),b(n);
//		a[0] = a[1] = 1;
//		b[0] = 1;
//		cout<<1<<" "<<1<<endl;
//		for(int i = 2;i<n;i++){
//			b[i] = 1;
//			cout<<b[0]<<" ";
//			for(int j = 1;j< i;j++){
//				b[j] = a[j] + a[j-1];
//				cout<<b[j]<<" ";
//			}
//			cout<<b[i]<<endl;
//			for(int j =1;j<= i;j++)
//				a[j] = b[j];
//		}
//	}
//	return 0;
//}