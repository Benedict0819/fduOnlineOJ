//#include<iostream>
//#include<string>
//using namespace std;
//
//#define N 100
//
//FILE *stream;
//struct node{
//	int child[N];
//	int num;
//} s[N];
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, que[N];  // nΪ�ڵ� mΪ��Ҷ�ڵ� que���� ����BFS
//	int k, tem, count, str, end; // ��β�����ӣ�ÿ��Ҷ�ӵ�������ÿһ���һ�����к����һ������
//	while (cin >> n >> m){
//		for (int i = 0; i < N; i++)  // ��ʼ��
//			s[i].num = 0;
//		int a;
//		for (int i = 0; i < m; i++){
//			cin >> a;
//			cin >> s[a].num;
//			for (int j = 0; j < s[a].num; j++)
//				cin >> s[a].child[j];
//		}
//
//		que[0] = 1; k = 1;  
//		int lay; //��
//		for (str = 0, end = 1, lay = 0; str < end; end = k, lay++){
//			count = 0;
//			while (str < end){
//				tem = que[str];
//				if (!s[tem].num) count++;
//				for (int i = 0; i < s[tem].num; i++)
//					que[k++] = s[tem].child[i];
//				str++;
//			}
//			if (lay)	cout << " " << count;
//			else	cout << count;
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//
