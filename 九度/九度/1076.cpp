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
//			a[i++] = t%10;      // ���������ֽ��һ�����ֱ��ŵ�������
//		len = i;
//		for(i = 1;i < n;i++){
//			t=0;  // ��λ
//			for(j = 0;j < len;j++){ // ÿһλ����Ҫi���
//				t += a[j] * i;
//				a[j] = t %10; // ȡ��
//				t /= 10;   // ��Ϊ��λ
//			}
//			for(;t!=0;t/=10)
//				a[len++] = t%10;  // ���λ���ֽ�Ϊһλ
//		}
//		for(i = len-1;i>=0;i--)
//			cout<<a[i];
//		cout<<endl;
//	}
//
//	return 0;
//}