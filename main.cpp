#include<iostream>
#include<cstdlib>
#include<string>
#include<ctime>

using namespace std;
const int MAX_TRIES=5;
int letterFill(char, string, string&);
class game
{
 int  num_of_wrong_guesses=0;
    char letter;
    string word;
public:
    game()
    {

    }
    void laye()
    {
            string laye[]={"chile","china","cuba","egypt","fiji","gabon","india","iran","italy","japan","oman","spain"};
              string word;
              int n=rand()%12;
              word=laye[n];
              string unknown(word.length(),'*');
              cout<<"\n\neach letter is represented by an Asterik.";
              cout<<"\nYou have to type one letter in one try";
              cout<<"\n\nYou have"<<MAX_TRIES<<" tries to try a guess the country.";
              cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
              cout<<"----LETS START----"<<endl;
              while(num_of_wrong_guesses<MAX_TRIES)
              {
                  cout<<"\n"<<unknown;
                  cout<<"\nGuess a letter:"<<endl;
                  cin>>letter;
                  if(letterFill(letter,word,unknown)==0)
                  {
                      cout<<endl<<"oops!That letter isn't in there! try again..."<<endl;
                      num_of_wrong_guesses++;
                  }
                  else
                  {
                      cout<<endl<<"You found a letter!"<<endl;
                  }
                  cout<<"You have "<<MAX_TRIES-num_of_wrong_guesses<<" guesses left"<<endl;
                  if(word==unknown)
                  {
                      cout<<word<<endl;
                      cout<<"Yeah! You got it!";
                      break;
                  }
              }
              if(num_of_wrong_guesses==MAX_TRIES)
              {
                  cout<<"\nsorry,you lose this game......"<<endl;
                  cout<<endl<<"the country was=  "<<word<<endl;
              }
              cin.ignore();
              cin.get();

    }
    void beginners()
    {
        string beginners[]={"baijan","brazil","canada","france","guyana","kuwait","london","maxico","turkey"};
      srand(time(NULL));
      int n=rand()%9;
      word=beginners[n];
      string unknown(word.length(),'*');
      cout<<"\n\nEach letter is represented by asterisk.";
      cout<<"\nYou have to type one letter in one try.";
      cout<<"\n You have "<<MAX_TRIES<<"tries to try and guess the country name.";
      cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<"----LETS START----"<<endl;
      while(num_of_wrong_guesses<MAX_TRIES)
      {
          cout<<"\n"<<unknown;
          cout<<"\nGuess a letter:"<<endl;
          cin>>letter;
          if(letterFill(letter, word, unknown)==0)
          {
              cout<<endl<<"oops! that letter isn't in there! try again..."<<endl;
              num_of_wrong_guesses++;
          }
          else
          {
              cout<<endl<<"yes you found a letter!"<<endl;
          }
          cout<<"you have "<<MAX_TRIES-num_of_wrong_guesses<<" guesses left."<<endl;
          if(word==unknown)
          {
              cout<<endl<<word<<endl;
              cout<<"\n Yeah you got it!"<<endl;
              break;
          }
      }
      if(num_of_wrong_guesses==MAX_TRIES)
      {
          cout<<"sorry you lose this game......"<<endl;
          cout<<endl<<"the country was= "<<word<<endl;
      }
      cin.ignore();
      cin.get();
    }
    void medium()
    {
        string medium[]={/*"albania","algeria","andorra","armenia","austria",*/"bahrain"/*,"belarus"*/,"belgium"/*,"belize"*/,"bolivia"/*,"burundi","comoros","croatia"*/,"denmark",/*"ecuador","eritrea","estonia","finland"*/"georgia","germany",/*"grenada","hungary",*/"iceland"/*,"jamaica","lebanon","lesotho","liberia","malaysia","moldova","morocco","myanmar","namibia","nigeria","romania","senegal","tunisia","ukraine","uruguay","vanuatu","vietnam"*/};
      srand(time(NULL));
      int n=rand()%42;
      word=medium[n];
      string unknown(word.length(),'*');
      cout<<"\n\nEach letter is represented by asterisk.";
      cout<<"\nYou have to type one letter in one try.";
      cout<<"\n You have "<<MAX_TRIES<<"tries to try and guess the country name.";
      cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<"----LETS START----"<<endl;
      while(num_of_wrong_guesses<MAX_TRIES)
      {
          cout<<"\n"<<unknown;
          cout<<"\nGuess a letter:"<<endl;
          cin>>letter;
          if(letterFill(letter, word, unknown)==0)
          {
              cout<<endl<<"oops! that letter isn't in there! try again..."<<endl;
              num_of_wrong_guesses++;
          }
          else
          {
              cout<<endl<<"yes you found a letter!"<<endl;
          }
          cout<<"you have "<<MAX_TRIES-num_of_wrong_guesses<<" guesses left."<<endl;
          if(word==unknown)
          {
              cout<<endl<<word<<endl;
              cout<<"\n Yeah you got it!"<<endl;
              break;
          }
      }
      if(num_of_wrong_guesses==MAX_TRIES)
      {
          cout<<"sorry you lose this game......"<<endl;
          cout<<endl<<"the country was= "<<word<<endl;
      }
      cin.ignore();
      cin.get();
    }
    void advanced()
    {
      string advanced[]={"cameroon","colombia","ethiopia","hungary","kiribati","malasyia"/*,"maldives","mongolia","pakistan","paraguay","portugal","slovakia","slovenia","srilanka","suriname","tanzania","thailand","zimbzbwe"*/};
      srand(time(NULL));
      int n=rand()%25;
      word=advanced[n];
      string unknown(word.length(),'*');
      cout<<"\n\nEach letter is represented by asterisk.";
      cout<<"\nYou have to type one letter in one try.";
      cout<<"\n You have "<<MAX_TRIES<<"tries to try and guess the country name.";
      cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<"----LETS START----"<<endl;
      while(num_of_wrong_guesses<MAX_TRIES)
      {
          cout<<"\n"<<unknown;
          cout<<"\nGuess a letter:"<<endl;
          cin>>letter;
          if(letterFill(letter, word, unknown)==0)
          {
              cout<<endl<<"oops! that letter isn't in there! try again..."<<endl;
              num_of_wrong_guesses++;
          }
          else
          {
              cout<<endl<<"yes you found a letter!"<<endl;
          }
          cout<<"you have "<<MAX_TRIES-num_of_wrong_guesses<<" guesses left."<<endl;
          if(word==unknown)
          {
              cout<<endl<<word<<endl;
              cout<<"\n Yeah you got it!"<<endl;
              break;
          }
      }
      if(num_of_wrong_guesses==MAX_TRIES)
      {
          cout<<"sorry you lose this game......"<<endl;
          cout<<endl<<"the country was= "<<word<<endl;
      }
      cin.ignore();
      cin.get();
    }
    void experts()
    {
      string experts[]={"afghanistan"/*,"antigua_and_barbuda","argentina",*/,"australia"/*,"azerbaijan","the_bahamas","bosnia_and_herzegovina"*/,"bangladesh"/*,"burkins_faso"*/,"cape_verde",/*"central_african_republic"*/"costa_rica"/*,"czech_republic"*/,"california","dominican_republic"/*,"east_timor","el_salvador","equitorial_guinea","the_gambia"*/};
      srand(time(NULL));
      int n=rand()%20;
      word=experts[n];
      string unknown(word.length(),'*');
      cout<<"\n\nEach letter is represented by asterisk.";
      cout<<"\nYou have to type one letter in one try.";
      cout<<"\n You have "<<MAX_TRIES<<"tries to try and guess the country name.";
      cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
      cout<<"----LETS START----"<<endl;
      while(num_of_wrong_guesses<MAX_TRIES)
      {
          cout<<"\n"<<unknown;
          cout<<"\nGuess a letter:"<<endl;
          cin>>letter;
          if(letterFill(letter, word, unknown)==0)
          {
              cout<<endl<<"oops! that letter isn't in there! try again..."<<endl;
              num_of_wrong_guesses++;
          }
          else
          {
              cout<<endl<<"yes you found a letter!"<<endl;
          }
          cout<<"you have "<<MAX_TRIES-num_of_wrong_guesses<<" guesses left."<<endl;
          if(word==unknown)
          {
              cout<<endl<<word<<endl;
              cout<<"\n Yeah you got it!"<<endl;
              break;
          }
      }
      if(num_of_wrong_guesses==MAX_TRIES)
      {
          cout<<"sorry you lose this game......"<<endl;
          cout<<endl<<"the country was= "<<word<<endl;
      }
      cin.ignore();
      cin.get();
    }
};
int main()
{
    game gm;
  string name;
  char letter;
  int num_of_wrong_guesses=0;
  string word;
  srand(time(NULL));
  //only need this once
  cout<<"\n\nWelcome to game(HOW TO MAKE MY WORD)!!\n Guess a country"<<endl;
       // ask user for for easy, average, hard
  string level;
  cout<<"\nChoose a LEVEL  (lay, beginners, medium, advanced,expert ):"<<endl;
  cin>>level;
    if(level=="lay")
    {
        gm.laye();
    }

    else if(level=="beginners")
      {
          gm.beginners();
      }
    else if(level=="medium")
      {
          gm.medium();
      }
    else if(level=="advanced")
      {
        gm.advanced();
      }
    else if(level=="expert")
      {
        gm.experts();
      }
}
int letterFill(char guess,string secretword, string&guessword)
  {
      int i;
      int matches=0;
      int len=secretword.length();
      for(i=0;i<len;i++)
      {
          if(guess==guessword[i])
            return 0;
          if(guess==secretword[i])
          {
              guessword[i]=guess;
              matches++;
          }
      }
      return matches;
  }

