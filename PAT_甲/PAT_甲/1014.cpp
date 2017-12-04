//#include<iostream>
//#include<vector>
//#include<queue>
//#include<iomanip>
//#include<climits>
//using namespace std;
//
//FILE *stream;
//
//struct Customer{
//	int needTime = 0;  // 需要时间
//	int endTime = -1;     // 结束时间
//};
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	int n, m, k, q; // windows lines customers queries
//	cin >> n >> m >> k >> q;
//	vector<Customer> cus(k);
//	for (int i = 0; i < k; i++)
//		cin >> cus[i].needTime;
//
//	vector<queue<int>> winQueue(n);
//	vector<int> timeBase(n, 0);   // 窗口时间
//	int i = 0;
//	for (; i < n*m && i < k; i++){   // 线内
//		cus[i].endTime = timeBase[i%n] + cus[i].needTime;
//		timeBase[i%n] = cus[i].endTime;
//		winQueue[i%n].push(i);
//	}
//	for (; i < k; i++){   // 线外
//		int min = INT_MAX;
//		int index = -1;
//		for (int j = 0; j < n; j++){
//			int top = winQueue[j].front();
//			if (min > cus[top].endTime){
//				index = j;
//				min = cus[top].endTime;
//			}
//		}
//		cus[i].endTime = timeBase[index] + cus[i].needTime;
//		timeBase[index] = cus[i].endTime;
//		winQueue[index].pop();
//		winQueue[index].push(i);
//	}
//
//	int a;
//	for (int i = 0; i < q; i++){
//		cin >> a;
//		a--;
//		if (cus[a].endTime - cus[a].needTime >= 540)
//			cout << "Sorry" << endl;
//		else
//			cout << setfill('0') << setw(2) << 8 + cus[a].endTime / 60 << ":" << setw(2) << cus[a].endTime % 60 << endl;
//	}
//
//	return 0;
//}
//
