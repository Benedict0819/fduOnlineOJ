//#include<iostream>																																		
//using namespace std;
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int k;
//	while (cin >> k&& k ){
//		int *num = new int[k];
//		for (int i = 0; i < k; i++)
//			cin >> num[i];
//
//		int max = -1, begin = 0, end = k - 1; // 最大值，起始位置，结束位置
//		int total; // 用于计算
//		int mark = 0;
//		for (int i = 0; i < k; i++){
//			if (num[i] < 0) continue;
//			total = 0;
//			mark = 1;
//			for (int j = i; j < k; j++){
//				total += num[j];
//				if (total > max){
//					max = total;
//					begin = i;
//					end = j;
//				}
//			}
//		}
//		if (mark)	cout << max << " " << num[begin] << " " << num[end] << endl;
//		else  cout << 0 << " " << num[begin] << " " << num[end] << endl;
//		delete num, total;
//	}
//	
//	return 0;
//}
//
