//#include<iostream>
//#include<climits>
//using namespace std;
/*      �޹���·Ϊ0��û�޹���·���䣬����prim�㷨����С������         */

//FILE *stream;
//   
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n;
//	while (cin >> n && n){
//		int dis[100][100]; // ����
//		int min[100];     // ��С����
//		bool mark[100];   // ����Ѽ��뼯��
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
//			if (d == 1)  // �޹���Ϊ0��û�޹��ɱ����䣻
//				dis[b][a] = dis[a][b] = 0;
//			else 
//				dis[b][a] = dis[a][b] = c;
//		}
//
//		int ans = 0;   // Ȩֵ
//		min[1] = 0;  // �ӵ�һ����ׯ��ʼ
//
//		for (int i = 1; i <= n; i++){
//			int k, j;
//			for (k = -1,j = 1; j <= n; j++)   // �ҳ�����֪�ڵ���С����ĵ�
//				if (!mark[j] && (k == -1) || min[j] < min[k])
//					k = j;
//			mark[k] = true;
//			ans += min[k];
//			for (j = 1; j <= n; j++)  // ���¼��뼯�ϵ�ʣ��ڵ����С����
//				if (!mark[j] && dis[k][j] < min[j])
//					min[j] = dis[k][j];
//		}
//
//		cout << ans << endl;
//	}
//
//	return 0;
//}