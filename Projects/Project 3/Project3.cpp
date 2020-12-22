

#include <iostream>
#include <iomanip>
#include <string>
using std::cout; using std::cin; using std::endl; using std::boolalpha; using std::string;


// # Strategy Functions


int strategy1(int player, int previous_play )
{
    if (previous_play == 1)
    {
        return 2;
    }
    else (previous_play == 2)
    {
        return 3;
    }
    else (previous_play == 3)
    }
    {
        return 1;
    }

}

int strategy2(){

    return 0;
}

int strategy3(){
    return 0;
}

int score_round(){
    return 0;
}




// MAIN IS BELOW, DON'T CHANGE Devin !!

int main() {

  cout << boolalpha;   // print true or false for bools
  int test;
  cin >> test;
  
  switch (test) {
  case 1 : {   // strategy 1
    long player, previous_result, previous_play, opponent_play;
    cin >> player >> previous_result >> previous_play >> opponent_play;
    cout << strategy1(player, previous_result, previous_play, opponent_play) << endl;
    break;
  } // of case 1

  case 2:{    // strategy 2
    long player, previous_result, previous_play, opponent_play;
    cin >> player >> previous_result >> previous_play >> opponent_play;
    cout << strategy2(player, previous_result, previous_play, opponent_play) << endl;
    break;
  } // of case 2

  case 3: {    // strategy 3
    long player, previous_result, previous_play, opponent_play;
    cin >> player >> previous_result >> previous_play >> opponent_play;
    cout << strategy3(player, previous_result, previous_play, opponent_play) << endl;
    break;
  } // of case 3

  case 4: {       // score result
    long p1, p2;
    cin >> p1 >> p2;
    cout << score_round(p1, p2) << endl;
    break;
  } // of case 4
    
  } // of switch
} // of main
