//#include<iostream>
//#include<string.h>
//#include<string>
//#include<map>
//using namespace std;
//
//FILE *stream;
//map<string,int> proxy;  // 存放代理
//map<string,int>::iterator it;
//int opt[1001];
//string s;
//
//int main(){
//	freopen_s(&stream,"in.txt","r",stdin);
//	int n,m;
//	while(cin>>n){
//		for(int i = 0;i < n;i++){
//			cin>>s;
//			proxy.insert(pair<string,int>(s,i));
//		}
//		cin>>m;
//		int k = 0,total = 0;
//		bool flag = false; // 当只有一个代理时，标记能否完成
//		memset(opt,0,sizeof(opt));
//		for(int i = 0;i < m;i++){
//			cin>>s;
//			it = proxy.find(s);
//			if(it!=proxy.end()){
//				flag = true;
//				if(k == n-1){  // 如果当前IP已经访问了n-1个，说明必须切换代理
//					total++;
//					k = 0;  // 由于进行了切换，从新开始计数。
//					memset(opt,0,sizeof(opt)); // 清空标记位
//				}
//				if(opt[it->second] == 0){  // 查看标记数组，该代理IP是否出现过，没有就+1
//					opt[it->second]++;
//					k++;  // 表示当前IP访问的代理的数量
//				}
//			}
//		}
//		if(proxy.size() == 1 && flag)
//			cout<<-1<<endl;
//		else 
//			cout<<total<<endl;
//		proxy.clear();
//		proxy.erase(proxy.begin(),proxy.end()); // 清空map的内存  
//	}
//	
//	return 0;
//}