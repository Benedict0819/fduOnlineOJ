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
//		if(n==0) {cout<<"1"<<endl; continue;}
//
//		vector<int> a(100000,0);
//		int len,i,j,t=n;
//		for(i=0;t;t/=10)
//			a[i++] = t%10;      // 把所给数分解成一个数分别存放到数组里
//		len = i;
//		for(i = 1;i < n;i++){
//			t=0;  // 进位
//			for(j = 0;j < len;j++){ // 每一位都需要i相乘
//				t += a[j] * i;
//				a[j] = t %10; // 取余
//				t /= 10;   // 作为进位
//			}
//			for(;t!=0;t/=10)
//				a[len++] = t%10;  // 最高位给分解为一位
//		}
//		for(i = len-1;i>=0;i--)
//			cout<<a[i];
//		cout<<endl;
//	}
//
//	return 0;
//}