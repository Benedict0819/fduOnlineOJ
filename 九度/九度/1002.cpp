//#include<iostream>
//#include<iomanip>
//#include<stdlib.h>
//
//using namespace std;
//
//FILE *stream;
//
//int main(int argc,char *argv[]){
//	float p, t, g1, g2, g3, gj, g;
//	freopen_s(&stream,"in.txt","r",stdin);
//	while (cin >> p >> t >> g1 >> g2 >> g3 >> gj){
//		if(t >= abs(g1 - g2)){
//			g = (g1 + g2) / 2;
//		} else {
//			if (t >= abs(g3 - g2) && t >= abs(g3 - g1)){
//				g = g1 > g2 ? g1 : g2;
//				g = g > g3 ? g : g3;
//			}
//			else if (t < abs(g3 - g2) && t < abs(g3 - g1))
//				g = gj;
//			else {
//			g = (abs(g3 - g2) > abs(g3 - g1)) ? (g3 + g1) / 2: (g3 + g2) / 2;
//			}
//		}
//		cout << fixed << setprecision(1) << g << endl;
//	}
//	return 0;
//}