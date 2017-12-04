//#include<iostream>
//#include<vector>
//#include<climits>
//using namespace std;
//
//FILE *stream;
//vector< vector<int> > dis;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, a, b, c;
//	while (cin >> n && n){
//		dis.assign(n + 1, vector<int>(n + 1, INT_MAX));
//		for (int i = 1; i <= n*(n - 1) / 2; i++){
//			cin >> a >> b >> c;
//			dis[a][b] =	dis[b][a] = c;
//		}
//		// prim
//		vector<int>min(n + 1, INT_MAX);  // 到已知路径的最小距离
//		vector<bool>vis(n + 1, false); // 加入的集合
//		int res = 0;  // 最小生成树的值
//		min[1] = 0;   // 从节点1开始
//		for (int i = 1; i <= n; i++){  //遍历n个节点
//			int j, k;
//			for (k = -1, j = 1; j <= n; j++)  // 遍历所有节点 找出到已知集合最小距离
//				if (!vis[j] && (k == -1 || min[j] < min[k]))
//					k = j;
//			vis[k] = true; //点k加入集合
//			res += min[k];
//			for (int i = 1; i <= n; i++)  // 更新没加入的点到已加入的点的最小距离
//				if (!vis[i] && dis[k][i] < min[i])
//					min[i] = dis[k][i];
//		}
//
//		cout << res << endl;
//	}
//	return 0;
//}