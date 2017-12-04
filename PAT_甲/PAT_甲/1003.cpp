//#include<iostream>
//#include<climits>
//using namespace std;
//
//#define MAX 500
//
//FILE *stream;
//int visit[MAX], road[MAX][MAX], res[MAX];   //走过，路，营救队
//int n, num = 0, maxres, mindis = INT_MAX; // 城市数，路径数，最大营救队，最小距离
//
//void dfs(int c1, int c2, int dis, int rest){
//	if (c1 == c2){
//		if (dis < mindis){
//			num = 1;
//			mindis = dis;
//			maxres = rest;
//		}
//		else if (dis == mindis){
//			num++;
//			if (maxres < rest)
//				maxres = rest;
//		}
//		return ;
//	}
//
//	if (dis > mindis)return;
//
//	for (int i = 0; i < n; i++){
//		if (visit[i] == 1 && road[c1][i] != INT_MAX){
//			visit[i] = 0;
//			dfs(i, c2, dis + road[c1][i], rest + res[i]);
//			visit[i] = 1;
//		}
//	}
//
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int m, c1, c2;
//	int a, b, c;
//	cin >> n >> m >> c1 >> c2;
//	for (int i = 0; i < n; i++)
//		cin >> res[i];
//	for (int i = 0; i < MAX; i++){  //初始化
//		visit[i] = 1;
//		for (int j = 0; j < MAX; j++)
//			road[i][j] = INT_MAX;
//	}
//	while (m--){         
//		cin >> a >> b >> c;
//		road[a][b] = road[b][a] = c;
//	}
//
//	//maxres = res[c1];
//	//visit[c1] = 0;
//	dfs(c1, c2, 0, res[c1]);
//
//	cout << num << " " << maxres << endl;
//
//	return 0;
//}
//
