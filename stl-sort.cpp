
#include <iostream>
#include <vector>
#include <string.h>
#include <algorithm>
using namespace std;

struct test {
	double a;
	int b;
	char name[10];
};
void inverse(int *array){
	int *p = array;
	int *tail = array+sizeof(array)/sizeof(array[0])+2;
	int temp;
	 
	for(int i = 0;i<5;i++,p++,tail--){
		cout<<"a "<<(*p)<<endl;
		cout<<"b "<<(*tail)<<endl;
		
		*p=temp;
		temp=*tail;
		*tail=*p;
	}
	
}
int main(void) {

	int array[]= {1,2,3,4,5,6};
	inverse(array);

	test temp[2];
	temp[0].a = 1.1;
	temp[0].b  = 2;
	strcpy(temp[0].name,"liming");
	temp[1].a = 2.2;
	temp[1].b  = 3;
	strcpy(temp[1].name,"hammeimei");
	temp[2].a = 3.3;
	temp[2].b  = 4;
	strcpy(temp[2].name,"liqiang");

	test t1;
	t1.a = 1.5;
	t1.b = 5;
	strcpy(t1.name,"dingtao");


	vector<test> v(temp,temp+3);


	//vector<int> v(array,array+sizeof(array)/sizeof(array[0]));
	//initilization

	vector<test>::const_iterator p;     //itrator
	for(p = v.end()-1; p!=v.begin()-1; p--)
		//	cout<<*p<<" "<<endl;
		cout<<(*p).a<<" "<<(*p).b<<" "<<(*p).name<<endl;
		
	sort(array,array+sizeof(array)/sizeof(array[0]));
	for(int i = 0 ;i<5; i++) {
		cout<<array[i]<<endl;
	}


	return 0;
}

