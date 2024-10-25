#include<iostream>
#include<iostream>
using namespace std;
class Phone{
public:
string name;
float price;
double rateing;

};
void change(Phone p){
  cout<<" "<<p.name<<""<<p.price<<p.rateing<<endl;
}
int main(){
  Phone p1;
  p1.name="Redmi note 9";
  p1.price=12000.345;
  p1.rateing=4.5;

  
  
}