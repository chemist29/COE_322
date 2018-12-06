#include<iostream>
#include<string>
#include<random>
using std::cout;
using std::endl;
using std::string;


class person {
 public:
 person(){}
 int day=0,sick_day=0;
 bool sick=false,inoculated=false;
 void infect(int n) {sick_day=n;
		      sick = true;
		      if (inoculated ==true){
			sick = false;
		      }
		    };
 int update() { day +=1; 
		 if (sick == true){
			sick_day -=1;
		 }
		 return day;	
	      };
 void inoculate() { inoculated = true; sick=false;};
 		
 string status_string() {
			 if (inoculated == true){
			 	return "inoculated";
			 }
			 if (sick == true && sick_day <= 0){
				return "recovered";
			 }
			 if (sick == true && sick_day !=0){
			 	return "sick";
			 }
			 else{
			 	return "susceptible";
			 }
			};
};


int main() 
{
 int infect =0;
 double prob_infect;
 person A;
 for (int i =0;i<9; i++)
 {
  A.update();
  prob_infect = 1.0*rand()/RAND_MAX;
  if (prob_infect >=0.9 && infect ==0)
  {
   cout << prob_infect<<endl;
   infect =1;
   A.infect(3);
  }
  cout <<"A is "<<A.status_string()<<endl;
 }
 cout <<"Total days for A to recover is "<<(A.update()-1)<<endl;
 return 0;
} 	
