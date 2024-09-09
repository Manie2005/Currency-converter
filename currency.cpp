#include<iostream>
using namespace std;
int main(){
	std::cout<<"                                                     CURRENCY   CONVERTER                                                                \n";
	std::cout<<"                                                CONVERT       WITH       EASE.                                       \n";
	std::cout<<"                                                                                                              \n";

	const double dollar=1.02; 
	const double rupee=81.02;
	const double pound=0.84;
    const double naira=426.64;
    const double _franc=655.77;
    const double cad=1.32;
   	const double rouble=62.38;
   	const double yen=136.08;
   	const double won=1327.45;
	const double rand=17.01;
	const double aud=1.47;
	const double swiss =0.98;

std::cout<<"                                               ENTER YOUR AMOUNT IN EUROS BELOW:"<<endl;
double  a;
cin>>a;
std::cout<<                                                    "SELECT SUITABLE CURRENCY";
std::cout<<                "\n DOLLARS\n RUPEE\n POUND \n NAIRA \n FRANC \n CAD \n ROUBLE \n YEN \n WON \n RAND \n AUD \n SWISS "<<endl;
string b;
cin>>b;
if(b=="dollars"||b=="DOLLARS"||b=="dollar"){
	double c =a*dollar;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<" DOLLARS"<<endl;
	}
  if(b=="rupee"||b=="RUPEE"){
	double c =a*rupee;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<" RUPEES"<<endl;
	}
  if(b=="pound"||b=="POUND"||b=="pounds"){
	double c =a*pound;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"EUROS"<<endl;
	}
  if(b=="naira"||b=="NAIRA"){
	double c =a*naira;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"NAIRA"<<endl;
	}
  if(b=="franc"||b=="FRANC"){
	double c =a*_franc;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"FRANC"<<endl;
	}
	 if(b=="cad"||b=="CAD"){
	double c =a*cad;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"CAD"<<endl;
	}
	 if(b=="rouble"||b=="ROUBLE"){
	double c =a*rouble;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"ROUBLE"<<endl;
	return 0;
	}
	 if(b=="YEN"||b=="yen"){
	double c =a*yen;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"YEN"<<endl;
	}
	 if(b=="won"||b=="WON"){
	double c =a*won;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"WON"<<endl;
	}
   if(b=="rand"||b=="RAND"){
	double c =a*rand;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"RAND"<<endl;
	}
   if(b=="aud"||b=="AUD"){
	double c =a*aud;
	std::cout<<"THE VALUE OF "<<a<<" EUROS = "<<c<<"AUD"<<endl;
	;
  
  else{
  	std::cout<<"SORRY CURRENCY TYPE WASN'T STORED!"<<endl;
  }}
std::cout<<"THANKS FOR  CONVERTING";    
}
