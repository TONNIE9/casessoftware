#include<iostream>
using namespace std;
int main(){
	char day;
	cout<<"input days between Monday- Friday"<<endl;
	cin>>day;
 switch (day){
 	case 'M':
 		cout<<"Monday";
 		break;
 		case 'T':
 		cout<<"Tuesday/Thursday";
 		break;
 		
 		case 'W':
 		cout<<"Wednesday";
 		break;
 		
 
 		case'F':
 		cout<<"Friday";
 		break;
 	
 	default:
 		cout<<"invalid";
 		break;
 	return 0;	
 		
 }
}
