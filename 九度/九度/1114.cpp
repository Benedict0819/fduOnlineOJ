//#include<iostream>
//using namespace std;
//
//FILE *stream;
//int list[22];
//int mark[22];
//int num, n;
//
//void dfs(int i,int weight){
//	if (weight == 0){
//		num++;
//		return;
//	}
//	if (i >= n || weight > 40)
//		return;
//	if (mark[i] == false){
//		mark[i] = true;
//		dfs(i + 1, weight - list[i]);
//		mark[i] = false;
//		dfs(i + 1, weight);
//	}
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> n){
//		for (int i = 0; i < n; i++){
//			cin >> list[i];
//			mark[i] = false;
//		}
//
//		num = 0;
//		dfs(0, 40);
//
//		cout << num << endl;
//	}
//
//	return 0;
//}