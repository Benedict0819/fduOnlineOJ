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
//		vector<int>min(n + 1, INT_MAX);  // ����֪·������С����
//		vector<bool>vis(n + 1, false); // ����ļ���
//		int res = 0;  // ��С��������ֵ
//		min[1] = 0;   // �ӽڵ�1��ʼ
//		for (int i = 1; i <= n; i++){  //����n���ڵ�
//			int j, k;
//			for (k = -1, j = 1; j <= n; j++)  // �������нڵ� �ҳ�����֪������С����
//				if (!vis[j] && (k == -1 || min[j] < min[k]))
//					k = j;
//			vis[k] = true; //��k���뼯��
//			res += min[k];
//			for (int i = 1; i <= n; i++)  // ����û����ĵ㵽�Ѽ���ĵ����С����
//				if (!vis[i] && dis[k][i] < min[i])
//					min[i] = dis[k][i];
//		}
//
//		cout << res << endl;
//	}
//	return 0;
//}