#include<iostream>
#include<string>
#include<random>
#include<vector>
using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::vector;

class person {
 public:
 person(){}
 int day=0,sick_day=0;
 bool sick=false,inoculated=false,recovered = false;
 void infect(int n) {sick_day=n;
		      sick = true;
		      if (inoculated ==true){
			sick = false;
		      }
		      if (recovered ==true){
			sick = false;
		      }
		    };
 void rand_infect(int k,double pp) { double ri = 1.0 * rand()/RAND_MAX;
		      if (sick == false){
		       if (ri <= pp){
			infect(k);
		       }
		      }
		    };

 int update() { day +=1; 
		 if (sick == true &sick_day >0){
			sick_day -=1;
		 }
		 return day;	
	      };
 void inoculate() { inoculated = true; sick=false;};
 string status_string() {
			 if (inoculated == true){
			 	return "inoculated";
			 }
			 if ((sick == true && sick_day <= 0) || recovered ==true){
				recovered = true;
				//sick = false;
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
 void random_infect_pop() { inf = 1.0*pop_size*rand()/RAND_MAX; cout<<inf<<endl;
				  b.at(inf).infect(3);
		      }; 
 void random_inoculate_pop(int i) { int initial_I=i;
				    while (initial_I !=0){
				     int knf = int(1.0*pop_size*rand()/RAND_MAX); 
				     cout << knf<< " is inoculated"<<endl;
				     if (b.at(knf).status_string() != "inoculated" && b.at(knf).status_string() != "sick"){
				      b.at(knf).inoculate();
				      initial_I -=1;
				    }
				    }
		      }; 
 int count_infect() {int tot_infected =0; 
		     for (int i =0;i<pop_size;i++){
			if (b.at(i).status_string()=="sick" && b.at(i).sick_day >0){
		      		tot_infected +=1;
		      	}
		     }
		      return tot_infected;	
		    };
 void show_state() { for (int i =0;i<pop_size;i++){
			//b[i].update();
			if (b.at(i).status_string() == "susceptible"){
				cout<< "?";
				b.at(i).update();
			}
			if (b.at(i).status_string() == "inoculated"){
				cout<< "I";
				b.at(i).update();
			}
			if (b.at(i).status_string() == "sick"){
				cout<< "+";
				for ( int w= (i-3); w<(i+3);w++)
				{
				 if (w >=0 && w<pop_size && w != i){
					if (w == (i-1) || w == (i+1)){
					 b.at(w).rand_infect(3,.8);
					}
					else {
					  b.at(w).rand_infect(3,.4);
					}
				 }
				}
			        b.at(i).update();
			}
			else if (b.at(i).status_string() == "recovered"){
				cout<< "-";
				b.at(i).sick =false;
				b.at(i).update();
			}
		     }
		     cout <<endl;
		   };
};







int main() 
{
 int infect =0;
 double prob_infect;
 person A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U;
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
 
 vector<person> n={B,C,D,E,F,G,H,I,J,K,L,M,N,O,P,Q,R,S,T,U};
 population p(n);
 p.random_infect_pop();
 cout << " Population Size = " <<p.pop_size<<endl;
 int num_ino;
 cout << "How many people to inoculate?"<<endl;
 cin >> num_ino;
 p.random_inoculate_pop(num_ino);
 while (p.count_infect() !=0)
 {
  cout << "# sick = "<<p.count_infect()<<" state: ";
  p.show_state();
  if (p.count_infect() ==0){
   cout << "# sick = "<<p.count_infect()<<" state: ";
   p.show_state();
  }
 }
 cout << "Total Days Disease Lasted = "<<(p.b[1].update()-1)<<endl;
 return 0;
} 	
