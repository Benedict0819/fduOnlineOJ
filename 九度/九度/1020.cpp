//#include<iostream>
//using namespace std;
//
//#define min -232
//#define max 232
//
//FILE *stream;
//
//int main(){
//	//freopen_s(&stream, "in.txt", "r", stdin);
//	int max_x, max_y, min_x, min_y;
//	int x, y;
//	while (cin >> x >> y){
//		if (x == 0 && y == 0) break; 
//		min_x = max_x = x;
//		min_y = max_y = y;
//		while (cin >> x >> y){
//			if (x == 0 && y == 0) break;
//			max_x = x > max_x ? x : max_x;
//			max_y = y > max_y ? y : max_y;
//			min_x = x < min_x ? x : min_x;
//			min_y = y < min_y ? y : min_y;
//		}
//		cout << min_x << " " << min_y << " ";
//		cout << max_x << " " << max_y << endl;
//	}
//	return 0;
//}