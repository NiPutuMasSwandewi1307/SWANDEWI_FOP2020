#include <iostream>
using namespace std ;

int main ()
{
    float score1, score2, score3;
    float average;
    
    //Input your score
    cout<<"Input your first score :";
    cin>>score1;
    cout<<"Input your second score :";
    cin>>score2;
    cout<<"Input your third score :";
    cin>>score3;

    //Formula the score
    average = (score1+score2+score3)/3;

    //Grade od the score
    if (average>=80){
        cout<<"Congrats!!! Your grade is A";
    }
    if ((average==75)&&(average<80)){
        cout<<"Great!!! Your grade is AB";
    }
    if ((average==70)&&(average<75)){
        cout<<"Good Job! Your grade is B";
    }
    if ((average==65)&&(average<70)){
        cout<<"Your grade is BC";
    }
    if ((average==60)&&(average<65)){
        cout<<"Your grade is C";
    }
    if ((average==40)&&(average<60)){
        cout<<"Owh :( Your grade is D";
    }
    if (average<40){
        cout<<"Please improve yourself cause your grade is E";
    }
    return 0;
}
    

   