//#include<iostream>
//#include<vector>
//using namespace std;
//
//#define max_num 1002
//
//FILE *stream;
//int pre[max_num];
//int root[max_num];   // ���ڱ�Ƕ�����ĸ����
//
//int find(int a){     // �Ҹ����
//	int r = a;
//	while (pre[r] != r){   // �Ҹ����
//		r = pre[r];
//	}
//	int j;
//	while (pre[a] != r){   // ·��ѹ��
//		j = pre[a];
//		pre[a] = r;
//		a = j;
//	}
//	return r;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, k; // ���� ��· ��ע�ĳ��С�
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
//		for (int i = 1; i <= n; i++){  // ��ʼ��
//			root[i] = 0;
//			pre[i] = i;
//		}
//		for (int i = 0; i < m; i++){   // ��Ȧ
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
//		root[mark] = 0;   // ��ռ ���Բ�����һ��Ȧ
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
