//#include<iostream>
//using namespace std;
//
//FILE *stream;
//
//int isSym(int x){
//	int b = 0;
//	int a = x;
//	while(a != 0){
//		b = a%10 + b *10;
//		a /= 10;
//	}
//	if(x==b) return 1;
//	else return 0;
//}
//
//int main(){
//	//freopen_s(&stream,"in.txt","r",stdin);
//	int a;
//	for(int i = 0;i<256;i++){
//		a = i*i;
//		if(isSym(a)) cout<<i<<endl;
//	}
//	return 0;
//}