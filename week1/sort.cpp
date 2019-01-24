#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>

#define VI vector<int>
#define VPII vector<pair<int, int>>

using namespace std;

void sort_ints();
void sort_pairs();
bool compare(pair<int, int> &p1, pair<int, int> &p2);

int main() {
	int mode = 0;
	cout<<"Enter mode(0:int, 1:pair)\n";
	cin>>mode;
	
	(!mode) ? sort_ints() : sort_pairs();
	
	return 0;
}

void sort_ints() {
	int num;
	VI numbers;
	while(cin>>num) {
		numbers.push_back(num);
	}
	
	sort(numbers.begin(), numbers.end());
	for(int i=0; i<numbers.size(); i++) {
		cout<<numbers[i]<<" ";
	}
	cout<<endl;
}

void sort_pairs() {
	int num1, num2;
	VPII pairs;
	while(cin>>num1>>num2) {
		pairs.push_back(make_pair(num1, num2));
	}
	
	sort(pairs.begin(), pairs.end(), compare);
	for(int i=0; i<pairs.size(); i++) {
		cout<<pairs[i].first<<" "<<pairs[i].second<<endl;
	}
}

bool compare(pair<int, int> &p1, pair<int, int> &p2) {
	if(p1.first > p2.first) return true;
	
	if(p1.first == p2.first && p1.second > p2.second) return true;
	
	return false;
}
