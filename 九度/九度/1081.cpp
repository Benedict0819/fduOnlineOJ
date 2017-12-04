//#include<iostream>
//using namespace std;
//
//#define MOD 10000
//
//FILE *stream;
//
//void matrix_mul(int p[2][2],int q[2][2]){ // 将矩阵p与矩阵q相乘，结果存入p矩阵
//	int t[2][2] = {0};
//	for(int i = 0;i < 2;i++)
//		for(int j = 0;j < 2;j++)
//			for(int k = 0;k < 2;k++)
//				t[i][j] += p[i][k] * q[k][j];
//	for(int i = 0;i < 2;i++)
//		for(int j = 0;j < 2;j++)
//			p[i][j] = t[i][j] % MOD;
//}
//
//void matrix_cal(int p[2][2],int n){  // 计算p矩阵的n次方，结果存入p矩阵
//	int t[2][2];
//	for(int i = 0;i < 2;i++)
//		for(int j = 0;j < 2;j++)
//			t[i][j] = p[i][j];
//	if(n==1) return;
//	else if(n & 1){      // 奇数
//		matrix_cal(p,n-1);
//		matrix_mul(p,t);
//	} else {
//		matrix_cal(p,n/2);
//		matrix_mul(p,p);
//	}
//}
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int a0,a1,p,q,k;
//	while(cin>>a0>>a1>>p>>q>>k){
//		if(k==0) cout<<a0<<endl;
//		else if(k==1) cout<<a1<<endl;
//		else{
//			int matrix[2][2] = { {p%MOD, q%MOD}, {1, 0} };  
//			matrix_cal(matrix,k-1);
//			cout<<(a1*matrix[0][0]+a0*matrix[0][1])%MOD<<endl;
//		}
//	}
//
//	return 0;
//}