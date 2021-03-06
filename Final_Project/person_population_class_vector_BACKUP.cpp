#include<iostream>
#include<string>
#include<random>
#include<vector>
using std::cout;
using std::endl;
using std::string;
using std::vector;

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


class population:public person {
 public:
 population(){}
 vector<person> b;
 int inf=0,pop_size=0;
 population(vector<person> n) { b=n;pop_size=b.size();};
 void random_infect() { inf = 1.0*pop_size*rand()/RAND_MAX; cout<<inf<<endl;
				  b[inf].infect(3);
		      }; 
 int count_infect() {int tot_infected =0; 
		     for (int i =0;i<pop_size;i++){
			if (b[i].status_string()=="sick"){
		      		tot_infected +=1;
		      	}
		     }
		      return tot_infected;	
		    };
 void show_state() { for (int i =0;i<pop_size;i++){
			//b[i].update();
			if (b[i].status_string() == "susceptible"){
				cout<< "?";
			}
			if (b[i].status_string() == "inoculated"){
				cout<< "I";
			}
			if (b[i].status_string() == "sick"){
				cout<< "+";
			        b[i].update();
			}
			else if (b[i].status_string() == "recovered"){
				cout<< "-";
			}
		     }
		     cout <<endl;
		   };
};







int main() 
{
 int infect =0;
 double prob_infect;
 person A,B,C,D,E;
 while (A.status_string()!="recovered")
 {
  A.update();
  prob_infect = 1.0*rand()/RAND_MAX;
  if (prob_infect >=0.9 && infect ==0)
  {
   cout << prob_infect<<endl;
   infect =1;
   A.infect(3);
  }
  //cout <<"A is "<<A.status_string()<<endl;
 }
 
 vector<person> n={A,B,C,D,E};
 population p(n);
 p.random_infect();
 p.b[0].inoculate();
 for (int i =0;i<5;i++){
  cout<<p.b[i].status_string()<<endl;
 }
 while (p.count_infect() !=0)
 {
  cout << "# sick = "<<p.count_infect()<<" state: ";
  p.show_state();
  if (p.count_infect() ==0){
   cout << "# sick = "<<p.count_infect()<<" state: ";
   p.show_state();
  }
 }
 return 0;
} 	
