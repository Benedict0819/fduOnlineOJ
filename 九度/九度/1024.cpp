//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//
//#define N 101
//
//struct Edge{  // �߽ṹ��
//	int a, b;
//	int cost;
//} e[101];
//
//FILE *stream;
//int pre[N];
//int sum[N];
//
//int cmp(Edge e1, Edge e2){
//	return e1.cost < e2.cost;
//}
//
//int findroot(int x){      // �ҵ��� �������еĸ��ڵ�ָ���
//	int r = x;
//	while (pre[r] != r) r = pre[r];
//	int i = x, j;
//	while (pre[i] != r){
//		j = pre[i];
//		pre[i] = r;
//		i = j;
//	}
//	return r;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m;
//	while (cin >> n >> m && n){
//		for (int i = 1; i <= m; i++){
//			sum[i] = 1;
//			pre[i] = i;
//		}
//		for (int i = 0; i < n; i++)
//			cin >> e[i].a >> e[i].b >> e[i].cost;
//		sort(e, e + n, cmp);  // �Ա߽�����������
//		int ans = 0;  // ����СȨֵ
//		for (int i = 0; i < n; i++){
//			int a = findroot(e[i].a);
//			int b = findroot(e[i].b);
//			if (a != b){
//				pre[a] = b;   // �ۼƼ�����ڵ��������
//				sum[b] += sum[a];
//				ans += e[i].cost;
//			}
//		}
//		int flag = 0;
//		for (int i = 1; i <= m; i++)    // �ж��Ƿ�����С������
//			if (pre[i] == i && sum[i] == m){  // ���Ƿ��и��ڵ�ļ�����m
//				flag = 1; break;
//			}
//		if (flag == 1) cout << ans << endl;
//		else cout << "?" << endl;
//	}
//	return 0;
//}