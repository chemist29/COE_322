#include<iostream>
#include<string>
#include<random>
#include<vector>
using std::cout;
using std::cin;
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
			 if (sick == true && sick_day >0){
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
 int inf=0,pop_size=0,num_inoculated=0;
 double p_disease_transfer;
 population(vector<person> n) { b=n;pop_size=b.size();};
 void random_infect() { inf = 1.0*pop_size*rand()/RAND_MAX; cout<<inf<<"index person infected"<<endl;
				  b[inf].infect(3);
		      }; 
 void random_inoculate(double p_ino) { num_inoculated = p_ino*pop_size;
				       cout << num_inoculated<<" total inoculated"<<endl;
				       int ino;
				       for (int i =0;i<=num_inoculated; i++){
					ino = pop_size*1.0*rand()/RAND_MAX;
					cout <<ino<<" index of person inoculated"<<endl;
				        b[ino].inoculate();
				       }
		      }; 
 int count_infect() {int tot_infected =0; 
		     for (int i =0;i<pop_size;i++){
			if (b[i].status_string()=="sick"){
		      		tot_infected +=1;
		      	}
		     }
		      return tot_infected;	
		    };
 void set_probability_transfer(double k) { p_disease_transfer =k;};
 void show_state() { for (int i =0;i<pop_size;i++){
			if (b[i].status_string() == "susceptible"){
				cout<< "?";
			        b[i].update();
			}
			if (b[i].status_string() == "inoculated"){
				cout<< "I";
			        b[i].update();
			}
			if (b[i].status_string() == "sick"){
				cout<< "+";
				if (p_disease_transfer >=0.7 &&(i-1)>=0 && (i+1)<=pop_size){
					//if (b[i+1].status_string() != "sick")
					 b[i+1].infect(3);
					//if (b[i-1].status_string() != "sick")
					 //b[i-1].infect(3);
				}
			        b[i].update();
			}
			else if (b[i].status_string() == "recovered"){
				cout<< "-";
			        b[i].update();
			}
		     }
		     cout <<endl;
		   };
};







int main() 
{
 int infect =0;
 double prob_infect,k,percent_inoculate;
 person A,B,C,D,E,F,G,H,I,J,K,L,M,N,O,P;
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
 cout << "Total time to recover = "<<(p.b[1].update() - 1)<<endl;
 cout<<endl;
 cout << "Made it here" << endl;
 cout<<"Disease Propagation Now :"<<endl;
 vector<person> m={F,G,H,I,J,K,L,M,N,O,P};
 population q(m);
 cout <<"probability transfer >=.7"<<endl;
 cin >> k;
 cout << "Probability inoculate "<<endl;
 cin >> percent_inoculate;
 q.random_infect();
 q.random_inoculate(percent_inoculate);
 q.set_probability_transfer(k);
 for (int i =0;i<5;i++){
  cout<<q.b[i].status_string()<<endl;
 }
 while (q.count_infect() >1)
 {
  cout << q.count_infect() << endl;
  cout << "# sick = "<<q.count_infect()<<" state: ";
  q.show_state();
  
 }
 cout << "# sick = "<<q.count_infect()<<" state: ";
 q.show_state();
 cout << "Total time to recover = "<<(q.b[2].update() - 1)<<endl;
 cout << "Run Complete" << endl;
} 	
