//#include<iostream>
//#include<cstring>
//using namespace std;
//
//#define max_num 1002
//
//FILE *stream;
//int pre[max_num];
//bool t[max_num];
//
//int find(int x){    
//	int r = x;
//	while (r != pre[r])   // 搜索根结点
//		r = pre[r];
//	int i = x, j;
//	while (pre[i] != r){  // 结点x的所有父结点都指向根结点
//		j = pre[i];
//		pre[i] = r;
//		i = j;
//	}
//	return r;
//}
//
//void mix(int x, int y){
//	int fx = find(x), fy = find(y);
//	if (fx != fy)
//		pre[fy] = fx;
//
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, a, b, i, ans;
//	while (cin>>n>>m && n){
//		for (i = 1; i <= n; i++)  // 初始化
//			pre[i] = i;
//		for (i = 1; i <= m; i++){
//			cin >> a >> b;
//			mix(a, b);
//		}
//
//		memset(t, 0, sizeof(t));
//
//		for (i = 1; i < n + 1; i++)   // 标记根结点
//			t[find(i)] = 1;
//		for (ans = 0, i = 1; i <= n; i++)
//			if (t[i])
//				ans++;
//
//		cout << ans - 1 << endl;
//	}
//	return 0;
//}