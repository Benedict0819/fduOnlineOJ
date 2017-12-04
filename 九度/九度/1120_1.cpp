//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<stdio.h>
//#include<stdlib.h>
//using namespace std;
//
//FILE *stream;
//
//char a[8],s[8];
//int mark[8], len;
//
//void dfs(int cur){
//	if (cur == len){
//		a[cur] = '\0';
//		printf("%s\n", a);
//		return;
//	}
//	else{
//		for (int i = 0; i < len; i++){
//			if (mark[i] != 1){
//				mark[i] = 1;
//				a[cur] = s[i];
//				dfs(cur + 1);
//				mark[i] = 0;
//			}
//		}
//	}
//}
//
//int main(){
//	freopen_s(&stream, "in.txt", "r", stdin);
//	while (cin >> s){
//		len = strlen(s);
//		sort(s, s + len);
//		dfs(0);
//		printf("\n");
//	}
//	return 0;
//}