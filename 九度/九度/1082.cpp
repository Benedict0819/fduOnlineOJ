//#include<iostream>
//#include<string.h>
//#include<string>
//#include<map>
//using namespace std;
//
//FILE *stream;
//map<string,int> proxy;  // ��Ŵ���
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
//		bool flag = false; // ��ֻ��һ������ʱ������ܷ����
//		memset(opt,0,sizeof(opt));
//		for(int i = 0;i < m;i++){
//			cin>>s;
//			it = proxy.find(s);
//			if(it!=proxy.end()){
//				flag = true;
//				if(k == n-1){  // �����ǰIP�Ѿ�������n-1����˵�������л�����
//					total++;
//					k = 0;  // ���ڽ������л������¿�ʼ������
//					memset(opt,0,sizeof(opt)); // ��ձ��λ
//				}
//				if(opt[it->second] == 0){  // �鿴������飬�ô���IP�Ƿ���ֹ���û�о�+1
//					opt[it->second]++;
//					k++;  // ��ʾ��ǰIP���ʵĴ��������
//				}
//			}
//		}
//		if(proxy.size() == 1 && flag)
//			cout<<-1<<endl;
//		else 
//			cout<<total<<endl;
//		proxy.clear();
//		proxy.erase(proxy.begin(),proxy.end()); // ���map���ڴ�  
//	}
//	
//	return 0;
//}