//#include<iostream>
//#include<vector>
//using namespace std;
//
//#define max_num 1002
//
//FILE *stream;
//int pre[max_num];
//int root[max_num];   // 用于标记独立块的根结点
//
//int find(int a){     // 找根结点
//	int r = a;
//	while (pre[r] != r){   // 找根结点
//		r = pre[r];
//	}
//	int j;
//	while (pre[a] != r){   // 路径压缩
//		j = pre[a];
//		pre[a] = r;
//		a = j;
//	}
//	return r;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, k; // 城市 道路 关注的城市。
//	int a, b;
//	cin >> n >> m >> k;
//	int **road = new int*[m];
//	for (int i = 0; i < m; i++){
//		road[i] = new int[2];
//		cin >> road[i][0] >> road[i][1];
//	}
//
//	for (int i = 0; i < k; i++){      // if that city is lost
//		int mark, total = 0;
//		cin >> mark;
//		for (int i = 1; i <= n; i++){  // 初始化
//			root[i] = 0;
//			pre[i] = i;
//		}
//		for (int i = 0; i < m; i++){   // 画圈
//			if (road[i][0] == mark || road[i][1] == mark)
//				continue;
//			a = find(road[i][0]);
//			b = find(road[i][1]);
//			if (a != b){
//				pre[a] = b;
//			}
//		}
//
//		for (int i = 1; i <= n; i++)
//			root[find(i)] = 1;
//		root[mark] = 0;   // 敌占 所以不属于一个圈
//		for (int i = 1; i <= n; i++)
//			if (root[i])
//				total++;
//		cout << total - 1 << endl;
//
//	}
//	
//
//	for (int i = 0; i < m; i++)
//		delete[] road[i];
//	delete road;
//	return 0;
//}
//
