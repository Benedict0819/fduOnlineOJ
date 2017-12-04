//#include<iostream>
//#include<string>
//#include<queue>
//using namespace std;
//
//struct cmp{
//	bool operator()(long long &a,long long &b){
//		return a>b;
//	}
//};
//
//int main(){
//	int N;
//	cin>>N;
//	while(N--){
//		priority_queue<long long,vector<long long>,cmp> q;
//		long long n,x,i,y,s=0;
//		cin>>n;
//		for(i=1;i<=n;i++){
//			cin>>x;
//			q.push(x);
//		}
//		while(1){
//			x = q.top();
//			s += x;
//			q.pop();
//			if(!q.empty()){
//				y = q.top();
//				s += y;
//				q.pop();
//			if(q.empty())
//				break;
//			else
//				q.push(x+y);
//			} else 
//				break;
//		}
//		cout<<s<<endl;
//	}
//}
