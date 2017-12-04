//#include<iostream>
//using namespace std;
///*
//标准解法：先从3和5、3和7、5和7的公倍数中相应地找出分别被7、5、3除均余1的较小数15、21、70
//再用找到的三个较小数分别乘以所要求的数被7、5、3除所得的余数的积连加
//最后用和233除以3、5、7三个除数的最小公倍数
//*/
//
//int main(){
//	int a,b,c,i=10;
//	cin>>a>>b>>c;
//	for(;i<=100;i++){
//		if( i%3==a && i%5==b && i%7==c )
//			break;
//	} 
//	cout<<i;
//	return 0;
//} 
//
///*
// 
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c;
//	cin>>a>>b>>c;
//	int n=(a*70+b*21+c*15)%105;
//	if(n>100||n<10) cout<<"No answer"<<endl;
//	else cout<<n<<endl;
//}         
//*/ 
