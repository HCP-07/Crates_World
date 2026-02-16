// Authors- HCP
// Date & Time - 3-02-26 5:28
// Crate Opening Game
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define PINK "\033[38;2;237;13;237m" 
#define ORANGE "\033[38;2;255;95;31m" //neon
#define v   "\033[95m" //violet
#define M   "\033[35m" //magneta  //Custom Colors
int main(){
    srand(time(NULL));
    int opt=0,money=100000,opts1,opt1,r1,opt2,opt3,l=1,l1=1;
    char a[10] = {'M' , 'A' ,'J' , 'P' , 'S' ,'D'}; int r2,l2=1,min1=0,hour1=0,k=0,m,o=0;// j-M+A
    int min; string t;
      string colors[] = { "\033[31m","\033[91m","\033[33m","\033[32m","\033[34m","\033[35m","\033[95m" };
     
cout << "<*********" << PINK <<"Welcome To The Game" << RESET <<"***********>" << '\n';
cout << "Here is Welcoming Reward-> "<<", Your Money =" << GREEN << "$" << RESET << GREEN << money <<RESET << endl;
do{  do{
    time_t now = time(nullptr);
    tm* lt = localtime(&now);
    min = lt->tm_min;
   
   int hour = lt->tm_hour;

  cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
  if (hour < 10 && min < 10){
    cout <<"Your Current Time is: " <<"0"<<hour<<":"<<"0"<< min<<endl;
  }
  else if (hour < 10){
    cout <<"Your Current Time is: " <<"0"<<hour<<":"<< min<<endl;
  }
  else if (min < 10){
    cout <<"Your Current Time is: " <<hour<<":"<<"0"<< min<<endl;
  }
  else
    cout <<"Your Current Time is: " <<hour<<":"<< min<<endl;
 
        if(l2 == 1){
    	k = 1;}
      else if(min1 > min){
        min = min + (60 - min1); }
	    else {k = min - min1;}
      if(k > 0){
        for(m = 0 ; m < k ; m++){
    r2 = rand() % 6;
    }
    min1 = min;
    hour1 = hour;
    if(l2 ==1){
      cout<<RED<<"Info-->"<<RESET<<"(1.Crates Refresh Once Per Min,by Default Once at Start)\n       (2.If You Press Characters Game Exits Directly)\n";
    cout <<YELLOW<< "Crates Refreshed "<<RESET<<YELLOW<<m<<RESET<<" Times\n";}
    else cout <<YELLOW<< "Crates Refreshed "<<RESET<<YELLOW<<m<<RESET<<" Times\n";
}
    l2 = 0;
}while(l2 ==1);
cout << "Select Your Desired Option  "<< endl << "1.Crates_Section" << endl << "2.About Crates and Prices" << endl;
cout<< "3."<<RED<<"Exit\n"<<RESET;;
cin >> opt;
if(opt == 0){
exit(0);
}
switch (opt) {
    case 1: {
    cout << '\n' << "The Available Crates" << '\n';
    cout <<"1." << GREEN << "Basic Crate" << RESET << "  --> $50"<<GREEN<< " (In Stock)\n" << RESET; 
    if(a[r2] == 'M' || a[r2] == 'J')cout << "2." << BLUE << "Majestic Crate" << RESET <<  "--> $500" <<GREEN<< " (In Stock)\n" << RESET;//Majestic
    else cout << "2." << BLUE << "Majestic Crate" << RESET <<  "--> $500" <<RED<< " (Not In Stock)\n" << RESET;
 
    if(a[r2] == 'P')cout <<"3." << v << "Space Crate" << RESET <<  "   --> $850" <<GREEN<< " (In Stock)\n" << RESET; // Space
    else cout <<"3." << v << "Space Crate" << RESET <<  "   --> $850"<<RED<< " (Not In Stock)\n" << RESET;
   
    if(a[r2] == 'A' || a[r2] == 'J')cout << "4." << RED << "Ancient Crate" << RESET <<  " --> $3000" <<GREEN<< " (In Stock)\n" << RESET; // ancient
    else cout <<"4." << RED << "Ancient Crate" << RESET <<  " --> $3000" <<RED<< " (Not In Stock)\n" << RESET;
   
    if(a[r2] == 'S')cout << "5." << ORANGE << "Spooky Crate" << RESET  << "  --> $5000" <<GREEN<< " (In Stock)\n" << RESET;//spooky
    else cout << "5." << ORANGE << "Spooky Crate" << RESET  << "  --> $5000" <<RED<< " (Not In Stock)\n" << RESET;
   
    if(a[r2] == 'D'){  t = "6.Divine Crate  --> $40,000";   for (size_t i = 0; i < t.size(); i++) {
        cout << colors[i % 7] << t[i];
    }cout<<RESET<<GREEN<< " (In Stock)\n" << RESET;}//divine
    else  { t = "6.Divine Crate  --> $40,000";   for (size_t i = 0; i < t.size(); i++) {
        cout << colors[i % 7] << t[i];
    }cout<<RESET<<RED<< " (Not In Stock)\n" << RESET;;}
    cout<< "7."<<RED<<"Exit\n"<<RESET;
    cin >> opt1;
    switch (opt1){
        case 2:{ //majestic crate  \/
          if(a[r2] == 'M' || a[r2] == 'J'){		
         do{   cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;       
        cout << "Opening " << BLUE << "Majestic Crate" << RESET << '\n';
        if(money > 500){
       money -= 500;
       r1 = rand() % 6 +1;
       switch (r1){
        case 1:
        cout << "You Received an " <<RED <<  "Ancient T-Rex Fossil($900)\n" << RESET;
        money += 900;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 2:
        cout << "You Received a " << GREEN << "Jade Diamond($700)\n"  << RESET;
        money += 700;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 3:
        cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Eternal Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
        cout << "You Received an " << BLUE << "Eternal Diamond($1000)" << RESET << endl;
        money += 1000;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 4:
        cout << "You Received a " << YELLOW <<"Magic Cane($470)" << RESET << endl;
        money += 470;
      cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 5:
        cout << "You Received a " << BLUE << "Wicked Old Hat($215)" << RESET << endl;
        money += 215;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 6:
        cout << "You Received an " << RED << "Medeival Revolver($550)" << RESET << endl;
        money += 550;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;}}
       else {
        cout << RED << "Insufficient Money!!" << RESET << '\n';
         l = 0;
        break; }
      cout << endl << "Do You Want To Open Again? -->" << endl << "Press 1 --> Continue or 0 --> Stop" << endl;
      cin >> l;}
      while( l > 0 && l == 1);
      break;
  } else {
    cout << RED << "The Above Crate Is not in Stock" << RESET << endl;
  } break;
}
      case 4:{	
       if(a[r2] == 'A' || a[r2] == 'J'){	// ancient crate \/
         do{   cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;       
        cout << "Opening " << RED << "Ancient Crate" << RESET << '\n';
        if(money > 3000){
       money -= 3000;
       r1 = rand() % 6 +1;
       switch (r1){
        case 1:
        cout << "You Received the " <<RED <<  "Chrono-Compass($2500)" << RESET << endl;
        money += 2500;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 2:
        cout << "You Received the " << GREEN << "Veil of the Unseen King($4000)"  << RESET<< endl;
        money += 4000;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 3:
   
        cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Eternal Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
        cout << "You Received  " << BLUE << "The Kraken's Eye($9999)" << RESET << endl;
        money += 9999;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 4:
        cout << "You Received  " << YELLOW <<"The Iron Heart($2255)" << RESET << endl;
        money += 2255;
      cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 5:
        cout << "You Received a " << BLUE << "The Reaper's Coin($5555)" << RESET << endl;
        money += 5555;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 6:
        cout << "You Received an " << RED << "The Phoenix Feather($7777)" << RESET << endl;
        money += 7777;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        
       }}
       else {
        cout << RED << "Insufficient Money!!" << RESET << '\n';
         l = 0;
        break;
       
       }
      cout << endl << "Do You Want To Open Again? -->" << endl << "Press 1 --> Continue or 0 --> Stop" << endl;
      cin >> l;}
      while( l > 0 && l == 1);
      break;
  } else {
    cout << RED << "The Above Crate Is not in Stock" << RESET << endl;
  }   break;

}
     case 5:{
          //Spooky crate \/
            if(a[r2] == 'S')//|| a[r2] == 'J')
            {		
         do{   cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;       
        cout << "Opening " << ORANGE << "Spooky Crate" << RESET << '\n';
        if(money > 5000){
       money -= 5000;
       r1 = rand() % 6 +1;
       switch (r1){
        case 1:
        
        cout << "You Received a " <<ORANGE <<  "Pandora's Box($4100)" << RESET << endl;
        money += 4100;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 2:
        cout << "You Received a " << RED << "Cursed Tablet($5700)"  << RESET<< endl;
        money += 5700;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 3:
        cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Eternal Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
        cout << "You Received an " << BLUE << "Eternal Butcher Chain($11999)" << RESET << endl;
        money += 11999;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 4:
        cout << "You Received a " << RED <<"Goblin's Mask($6666)" << RESET << endl;
        money += 6666;
      cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 5:
        cout << "You Received  " << YELLOW << "The Magic Wand($2255)" << RESET << endl;
        money += 2255;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 6:
        cout << "You Received  " << RED << "The Goblin Dragon($4444)" << RESET << endl;
        money += 4444;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        
       }}
       else {
        cout << RED << "Insufficient Money!!" << RESET << '\n';
         l = 0;
        break;
       
       }
      cout << endl << "Do You Want To Open Again? -->" << endl << "Press 1 --> Continue or 0 --> Stop" << endl;
      cin >> l;}
      while( l > 0 && l == 1);
      break;
  } else {
    cout << RED << "The Above Crate Is not in Stock" << RESET << endl;
  } break;
}

      case 3:{
          //Space crate \/
            if(a[r2] == 'P')//|| a[r2] == 'J')
            {		
         do{          cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout << "Opening " << v << "Space Crate" << RESET << '\n';
        if(money > 850){
       money -= 850;
       r1 = rand() % 6 +1;
       switch (r1){
        case 1:
        
        cout << "You Received an " <<RED <<  "Rocket($680)" << RESET << endl;
        money += 680;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 2:
        cout << "You Received a " << v << "Asteroid ($800)"  << RESET<< endl;
        money += 800;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 3:
        cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Eternal Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
        cout << "You Received an " << BLUE << "Eternal Black Hole($2323)" << RESET << endl;
        money += 2323;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 4:
        cout << "You Received a " << GREEN <<"UFO($970)" << RESET << endl;
        money += 970;
      cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 5:
        cout << "You Received a " << BLUE << "Neutron's Star($1515)" << RESET << endl;
        money += 1515;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 6:
        cout << "You Received an " << RED << "Missile($555)" << RESET << endl;
        money += 555;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        
       }}
       else {
        cout << RED << "Insufficient Money!!" << RESET << '\n';
         l = 0;
        break;
       
       }
      cout << endl << "Do You Want To Open Again? -->" << endl << "Press 1 --> Continue or 0 --> Stop" << endl;
      cin >> l;}
      while( l > 0 && l == 1);
      break;
  } else {
    cout << RED << "The Above Crate Is not in Stock" << RESET << endl;
  } break;
}
          
        case 1:{//basic crate \/
        do{        
          cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout << "Opening Basic Crate" << '\n';
        if(money > 50){
       money -= 50;
       r1 = rand() % 6 +1;
       switch (r1){
        case 1:
        cout << "You Received an " << GREEN << "Old Bike Tyre($60)" << RESET << endl;
        money += 60;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 2:
        cout << "You Received a " << GREEN << "Modern Broken TV($100)" << RESET << endl;
        money += 100;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 3:
        cout << "You Received a " << YELLOW <<"Broken Lamp($40)" <<RESET<< endl;
        money += 40;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 4:
        cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Epic Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
        cout << "You Received an " << RED <<"Epic Ancient Radio($140)" <<RESET<< endl;
        money += 140;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 5:
        cout << "You Received a " << YELLOW <<"Bottle($15)" <<RESET<< endl;
        money += 15;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 6:
        cout << "You Received an "<< GREEN <<"Uncommon Tubelight($90)" <<RESET<< endl;
        money += 90;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
       }
       }
       else {
        cout <<RED <<  "Insufficient Money!!" << RESET << '\n';
         l = 0;
        break;
       
       }
      cout << endl << "Do You Want To Open Again? -->" << endl << "Press 1 --> Continue or 0 --> Stop" << endl;
      cin >> l;
    
    }
      while( l > 0 && l == 1);
      break;
      	
		}
    case 6:{
          //divine crate \/
            if(a[r2] == 'D')//|| a[r2] == 'J')
            {		
         do{        
           cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;

        t = "Opening Divine Chest";   for (size_t i = 0; i < t.size(); i++) {cout << colors[i % 7] << t[i];}cout<<RESET<<endl;
        if(money > 40000){
       money -= 40000;
       r1 = rand() % 6 +1;
        switch (r1){
        case 1:
         cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Eternal Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
         t = "You Received an Angel's Feather($66666)";   for (size_t i = 0; i < t.size(); i++) {cout << colors[i % 7] << t[i];}cout<<RESET<<endl;
        money += 66666;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 2:
        cout <<YELLOW<<"**->"<<RESET<< RED <<"Congrats User You Received an Eternal Item" << RESET <<YELLOW<<"<-**"<<RESET <<endl;
         t = "You Received a Celestial Crown($77777)";   for (size_t i = 0; i < t.size(); i++) {cout << colors[i % 7] << t[i];}cout<<RESET<<endl;
        money += 77777;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 3:
        cout << "You Received a " << YELLOW <<"Divine Armor($55555)" <<RESET<< endl;
        money += 55555;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 4:
        cout << "You Received an " << RED <<"Prophecy Scroll($33333)" <<RESET<< endl;
        money += 33333;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 5:
        cout << "You Received a " << YELLOW <<"Spirit Orb($22222)" <<RESET<< endl;
        money += 22222;
        cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
        case 6:
        cout << "You Received an "<< YELLOW <<"Holy Cup($11111)" <<RESET<< endl;
        money += 11111;
         cout <<"Money =" << GREEN <<"$" << money << RESET;
        break;
       }
       }
       else {
        cout <<RED <<  "Insufficient Money!!" << RESET << '\n';
         l = 0;
        break;
       
       
       
       }
      cout << endl << "Do You Want To Open Again? -->" << endl << "Press 1 --> Continue or 0 --> Stop" << endl;
      cin >> l;}
      while( l > 0 && l == 1);
      break;
    } else {
      cout << RED << "The Above Crate Is not in Stock" << RESET << endl;
     } break;
  }
     case 7:
    break;
  }
    cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;

       break;
  }



     case 2:
     	  cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
     cout << "Which Crate You Wanna Know About -->" << endl;
         cout <<"1."<< GREEN << "Basic Crate" << RESET  << "  --> $50\n"<< "2." << BLUE << "Majestic Crate" << RESET <<  "--> $500"<< '\n' << "3." << v << "Space Crate" << RESET <<  "--> $850\n"; 
    cout <<"4." << RED << "Ancient Crate" << RESET <<  "--> $3000" << '\n'<< "5." << ORANGE << "Spooky Crate" << RESET  << "--> $5000" << endl;

    t = "6.Divine Chest--> $40,000";   for (size_t i = 0; i < t.size(); i++) {
        cout << colors[i % 7] << t[i];
    }cout<<RESET<<endl;
    cout<< "7."<<RED<<"Exit\n"<<RESET;

     cin >> opts1;
     switch(opts1){
        case 2:cout <<BLUE<< "<--Majestic Crate-->\n" <<RESET;
        cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout<< "Price = $500" << endl << "It Has a Random Chance To Drop Any Of The Items Listed Above -->"<< endl;
        cout <<"1."<<RED <<  "Ancient T-Rex Fossil($900)\n" << RESET<<"2."<< GREEN << "Jade Diamond($700)\n"  << RESET<<"3."<< BLUE << "Eternal Diamond($1000)\n" << RESET; 
        cout<<"4."<< YELLOW <<"Magic Cane($470)\n" << RESET <<"5."<< BLUE << "Wicked Old Hat($215)\n" << RESET <<"6."<< RED << "Medeival Revolver($550)\n" << RESET;
        break;
        
        case 4:
        cout <<RED<< "<--Ancient Crate-->\n"<<RESET;
        cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout<< "Price = $3000\n"<< "It Has a Random Chance To Drop Any Of The Items Listed Above -->"<< endl;
        cout <<"1."<<RED <<  "Chrono-Compass($2500)\n" << RESET << "2." << GREEN << "Veil of the Unseen King($4000)\n"  << RESET<< "You Received  " << BLUE << "The Kraken's Eye($9999)\n" << RESET;
        cout << "You Received  " << YELLOW <<"The Iron Heart($2255)\n" << RESET<< "You Received a " << BLUE << "The Reaper's Coin($5555)\n" << RESET<< "You Received an " << RED << "The Phoenix Feather($7777)\n" << RESET; 
        break;
        case 5:
        cout <<ORANGE "<--Spooky Crate-->\n" <<RESET;
        cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout<< "Price = $5000\n"<< "It Has a Random Chance To Drop Any Of The Items Listed Above -->"<< endl;
        cout<<"1."<<ORANGE <<  "Pandora's Box($4100)\n" << RESET <<"2."<< RED << "Curse Tablet($5700)\n"  << RESET<<"3."<< BLUE << "Eternal Butcher Chain($11999)\n" << RESET;
        cout<<"4."<< RED <<"Goblin's Mask($6666)\n" << RESET<<"5."<< YELLOW << "The Magic Wand($2255)\n" << RESET <<"6."<< RED << "The Goblin Dragon($4444)\n" << RESET; 
        break;
         case 3:
        cout <<v << "<--Space Crate-->\n"<<RESET;
        cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout<< "Price = $850\n"<< "It Has a Random Chance To Drop Any Of The Items Listed Above -->"<< endl;
        cout <<"1."<<RED <<  "Rocket($680)" << RESET << '\n' << "2."<< v << "Asteroid ($800)"  << RESET<< '\n' << "3."<< BLUE << "Eternal Black Hole($2323)" << RESET ;
        cout << '\n' << "4."<< GREEN <<"UFO($970)" << RESET << '\n' << "5."<< BLUE << "Neutron's Star($1515)" << RESET  << '\n' <<"6."<< RED << "Missile($555)" << RESET ;
        break;

        case 1:
        cout <<GREEN<< "<--Basic Crate-->\n" <<RESET;
        cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout<< "Price = $50\n"<< "It Has a Random Chance To Drop Any Of The Items Listed Above -->\n";
        cout <<"1."<< GREEN << "Old Bike Tyre($60)\n" << RESET << GREEN <<"2."<< "Modern Broken TV($100)\n" << RESET <<"3."<< YELLOW <<"Broken Lamp($40)\n" <<RESET;
        cout<<"4."<< RED <<"Epic Ancient Radio($140)\n" <<RESET<<"5."<< YELLOW <<"Bottle($15)\n" <<RESET<<"6."<< GREEN <<"Uncommon Tubelight($90)\n" <<RESET;
        break;
        case 6:
          t = "<--Divine Chest-->";   for (size_t i = 0; i < t.size(); i++) {cout << colors[i % 7] << t[i];}cout<<RESET<<endl;
          cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;
        cout<< "Price = $40,000\n"<< "It Has a Random Chance To Drop Any Of The Items Listed Above -->"<< endl;
        cout << "1." << YELLOW <<"Divine Armor($55555)" <<RESET<< endl;
        t = "2.Angel's Feather($66666)";   for (size_t i = 0; i < t.size(); i++) {cout << colors[i % 7] << t[i];}cout<<RESET<<endl;
        cout << "3." << RED <<"Prophecy Scroll($33333)" <<RESET<< endl;
        cout << "4." << YELLOW <<"Spirit Orb($22222)" <<RESET<< endl;
        t = "5.Celestial Crown($77777)";   for (size_t i = 0; i < t.size(); i++) {cout << colors[i % 7] << t[i];}cout<<RESET<<endl;
        cout << "6."<< YELLOW <<"Holy Cup($11111)" <<RESET<< endl;
        break;
        case 7:
        break;
     }
       cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;

     break;
      case 3:
      	cout<<GREEN<<"\nThanks For Playing";
      	  cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;

      exit(0);
      
      default :
      printf("Enter a Valid Option\n");
    }
} //while(l1 > 0 && l1 == 1);
while(o == 0);
  cout<<YELLOW<<"\n<-----------()------------->\n"<<RESET;

}