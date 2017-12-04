//#include<iostream>
//#include<climits>
//#include<algorithm>
//#include<string.h>
//using namespace std;
///* 利用Kruskal算法找最小生成树 */
//
//FILE *stream;
//int pre[101];
//
//struct Edge{
//	int s, t;
//	int cost;
//} e[5001];
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
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n && n){
//		int a, b, c, d, m = n*(n - 1) / 2;
//		for (int i = 0; i < m; i++){
//			cin >> a >> b >> c >> d;
//			if (d == 0) { e[i].s = a; e[i].t = b; e[i].cost = c; }
//			else { e[i].s = a; e[i].t = b; e[i].cost = 0; }
//		}
//		sort(e, e + m, cmp);
//		int ans = 0;
//		for (int i = 0; i <= n; i++)
//			pre[i] = i;
//
//		for (int i = 0; i < m; i++){
//			a = findroot(e[i].s);
//			b = findroot(e[i].t);
//			if (a != b){
//				pre[a] = b;
//				ans += e[i].cost;
//			}
//		}
//
//		cout << ans << endl;
//	}
//
//	return 0;
//}