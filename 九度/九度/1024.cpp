//#include<iostream>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//
//#define N 101
//
//struct Edge{  // 边结构体
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
//int findroot(int x){      // 找到根 并把所有的父节点指向根
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
//		sort(e, e + n, cmp);  // 对边进行升序排序
//		int ans = 0;  // 求最小权值
//		for (int i = 0; i < n; i++){
//			int a = findroot(e[i].a);
//			int b = findroot(e[i].b);
//			if (a != b){
//				pre[a] = b;   // 累计计算根节点的子孙数
//				sum[b] += sum[a];
//				ans += e[i].cost;
//			}
//		}
//		int flag = 0;
//		for (int i = 1; i <= m; i++)    // 判断是否有最小生成树
//			if (pre[i] == i && sum[i] == m){  // 即是否有根节点的集合是m
//				flag = 1; break;
//			}
//		if (flag == 1) cout << ans << endl;
//		else cout << "?" << endl;
//	}
//	return 0;
//}