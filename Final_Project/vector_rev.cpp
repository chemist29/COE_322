#include<iostream>
#include<vector>
#include<string>
using std::cout;
using std::endl;
using std::vector;
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
 vector<int> x ={1,2,3,4};
 int num_sick =0;
 vector<person> p(5);
 p[2].infect(3);
 for (int i =0;i<4;i++){
  cout <<p[i].status_string()<<endl;
 }
 return 0;
}


