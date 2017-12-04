#include<iostream>
#include<string>
using namespace std;

FILE *stream;

int main(){
	//freopen_s(&stream, "in.txt", "r", stdin);
	int m;
	string str, ea, la;
	string early = "23:59:59", last = "00:00:00", early_num, last_num;
	cin >> m;
	if (m == 0) return 0;
	for (int i = 0; i < m; i++){
		cin >>str >> ea >> la;
		if (ea <= early){
			early = ea;
			early_num = str;
		}
		if (la >= last){
			last = la;
			last_num = str;
		}
	}
	
	cout << early_num << " " << last_num << endl;
	return 0;
}

