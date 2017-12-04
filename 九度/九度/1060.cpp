//#include<iostream>
//#include<vector>
//using namespace std;
//
//FILE *stream;
//
//int judge(int a){
//	int x = a;
//	for (int i = 1; i < a; i++)
//		if (a%i == 0) x -= i;
//	if (x == 0) return 0;
//	else if (x < 0) return -1;
//	else return 1;
//}
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	vector<int> e, g;
//	int c;
//	for (int i = 2; i < 61; i++){
//		c = judge(i);
//		if (c == 0) e.push_back(i);
//		else if (c == -1) g.push_back(i);
//	}
//	cout << "E:";
//	for (int i = 0; i < e.size(); i++)
//		cout << " " << e[i];
//	cout << endl;
//	cout << "G:";
//	for (int i = 0; i < g.size(); i++)
//		cout << " " << g[i];
//	cout << endl;
//	return 0;
//}