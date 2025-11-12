#include<bits/stdc++.h>
using namespace std;

string lower(string s)
{
    for(int i=0; i<s.size(); i++) s[i]=tolower(s[i]);
    return s;
}



int main()
{
    cout<<"\t\t\t********** Rock Paper Scissors ********** \t\t";
    cout<<"\n\nTotal Rounds : 3\n";
    cout<<"\nEach time give a input : rock or paper or scissors\n\n\n";

    int user_win=0, computer_win=0;

    int total_rounds=3;
    int x=0;
    while(total_rounds--)
    {
        cout<<"Round : "<<++x<<"\n";
        vector<string>options= {"rock","paper","scissors"};
        string user_input;
        while(true)
        {
            cout<<"Give a input: ";


            cin>>user_input;
            user_input=lower(user_input);


            if(find(options.begin(),options.end(),user_input) !=options.end())
                break;
            else
            {
                cout<<"Invalid input. please give rock or paper or scissors.\n";
            }


        }






        srand(time(0));

        int computer_input_index=rand()%options.size();
        string  computer_input=options[computer_input_index];
        cout<<"Computer input: "<<computer_input<<"\n";


        cout<<"Result: ";
        if(user_input==computer_input) cout<<"Tie";
        else
        {
            if(user_input=="rock" && computer_input=="paper")
            {
                cout<<" Computer win";
                computer_win++;

            }
            else if(user_input=="paper" && computer_input=="rock")
            {
                cout<<"user win";
                user_win++;
            }








            if(user_input=="rock" && computer_input=="scissors")
            {
                cout<<" user win";
                user_win++;

            }
            else if(user_input=="scissors" && computer_input=="rock")
            {
                cout<<"computer win";
                computer_win++;
            }





            if(user_input=="paper" && computer_input=="scissors")
            {
                cout<<"computer win";
                computer_win++;

            }
            else if(user_input=="scissors" && computer_input=="paper")
            {
                cout<<"user win";
                user_win++;
            }


        }



        cout<<"\n\n\n";
    }
    cout<<"\n\nFinal Result:  ";
    if(user_win>computer_win) cout<<"User win!!";
    else if(user_win<computer_win) cout<<"Computer win!!";
    else cout<<"Match Tie!!";
    cout<<"\n\n\n\n";
}
