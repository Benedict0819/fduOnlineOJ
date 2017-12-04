//#include<iostream>
//#include<climits>
//using namespace std;
/*      修过的路为0，没修过的路不变，利用prim算法找最小生成树         */

//FILE *stream;
//   
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n && n){
//		int dis[100][100]; // 距离
//		int min[100];     // 最小距离
//		bool mark[100];   // 标记已加入集合
//		int a, b, c, d;
//		for (int i = 1; i <= n; i++){
//			min[i] = INT_MAX;
//			mark[i] = false;
//			for (int j = i; j <= n; j++)
//				dis[j][i] = dis[i][j] = INT_MAX;
//		}
//		int m = n*(n - 1) / 2;
//		for (int i = 0; i < m; i++){
//			cin >> a >> b >> c >> d;
//			if (d == 1)  // 修过了为0，没修过成本不变；
//				dis[b][a] = dis[a][b] = 0;
//			else 
//				dis[b][a] = dis[a][b] = c;
//		}
//
//		int ans = 0;   // 权值
//		min[1] = 0;  // 从第一个村庄开始
//
//		for (int i = 1; i <= n; i++){
//			int k, j;
//			for (k = -1,j = 1; j <= n; j++)   // 找出到已知节点最小距离的点
//				if (!mark[j] && (k == -1) || min[j] < min[k])
//					k = j;
//			mark[k] = true;
//			ans += min[k];
//			for (j = 1; j <= n; j++)  // 更新加入集合到剩余节点的最小距离
//				if (!mark[j] && dis[k][j] < min[j])
//					min[j] = dis[k][j];
//		}
//
//		cout << ans << endl;
//	}
//
//	return 0;
//}