#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <fstream>
#include <string>
//#include <windows.h>
using namespace std;

class MathGame {
public:

    int score;
    string name;
    string strr;
    string player1;
    string player2;

    void fullspider()
    {

        cout << "      __                                                                       " << endl;
        cout << "     /  l"                                                                       << endl;
        cout << "   .'   :               __.....__..._  ____                                    " << endl;
        cout << "  /  /   \\          _.-\"        \"-.  ""    \"\"-.                           " << endl ;
        cout << " (`-: .---:    .--.'          _....J.         \"\"-.                           " << endl;
        cout << "    \"\"\"y     \\,.'    \\  __..--\"\"       `+\"\"--.     `.                 " << endl;
        cout << "    :     .'/     .-\"\"\"-. _.            `.   \"-.    `._.._                 " << endl;
        cout << "    ;  _.'.'  .-j       `.               \\     \"-.   \"-._`.                 " << endl;
        cout << "    :    / .-\" :          \\  `-.          `-      \"-.      \\               " << endl;
        cout << "     ;  /.'    ;          :;               .\"        \\      `,               " << endl;
        cout << "     :_:/      ::\\        ;:     (        /   .-\"   .')      ;               " << endl;
        cout << "       ;-\"      ; \"-.    /  ;           .^. .'    .' /    .-\"               " << endl;
        cout << "      /     .-  :    `. '.  : .- / __.-j.'.'   .-\"  /.---'                    " << endl;
        cout << "     /  /      `,\\.  .'   \"\":'  /-\"   .'       \\__.'                      " << endl;
        cout << "    :  :         ,\\\"\"       ; .'    .'      .-\"                            " << endl;
        cout << "    _J  ;         ; `.      /.'    _/    \\.-\"                                " << endl;
        cout << "   /  \"-:        /\"--.b-..-'     .'       ;                                  " << endl;
        cout << "  /     /  \"\"-..'            .--'.-'/  ,  :                                  " << endl;
        cout << "  :`.   :     / : bug         `-i\" ,',_:  _ \\                                " << endl;
        cout << "  :  \\  '._  :__;             .'.-\"; ; ; j `.l                               " << endl;
        cout << "  \\  \\          \"-._         `\"  :_/ :_/                                   " << endl;
        cout << "    `.;\\             \"-._                                                    " << endl;
        cout << "      :_\"-._             \"-.                                                 " << endl;
        cout << "       `.  l \"-.     )     `.                                                 " << endl;
        cout << "         \"\"^--\"\"^-. :        \\                                            " << endl;
        cout << "                     \";         \\                                            " << endl;
        cout << "                      :           `._                                          " << endl;
        cout << "                      ; /    \\ `._   ""---.                                   " << endl;
        cout << "                     / /    _     `.--.__.'                                    " << endl;
        cout << "                     : :   / ;  :\".  \\                                       " << endl;
        cout <<"                     ; ;  :  :  ;  `. `.                                        " << endl;
        cout << "                    /  ;  :  ;  :    `. `.                                     " << endl;
        cout << "                   /  /:  ;   :  ;     \"-'                                    " << endl;
        cout <<"                  :_.' ;  ;    ; :                                              " << endl;
        cout << "                      /  /     :_l                                             " << endl;
        cout << "                      `-'                                                      " << endl;



    }

    void spider1()
    {
        cout << "      __                                                                       " << endl;
        cout << "     /  l"                                                                       << endl;
        cout << "   .'   :               __.....__..._  ____                                    " << endl;
        cout << "  /  /   \\          _.-\"        \"-.  ""    \"\"-.                           " << endl ;
        cout << " (`-: .---:    .--.'          _....J.         \"\"-.                           " << endl;
        cout << "    \"\"\"y     \\,.'    \\  __..--\"\"       `+\"\"--.     `.                 " << endl;
        cout << "    :     .'/     .-\"\"\"-. _.            `.   \"-.    `._.._                 " << endl;
        cout << "    ;  _.'.'  .-j       `.               \\     \"-.   \"-._`.                 " << endl;
        cout << "    :    / .-\" :          \\  `-.          `-      \"-.      \\               " << endl;
    }

    void spider2()
    {
        cout << "      __                                                                       " << endl;
        cout << "     /  l"                                                                       << endl;
        cout << "   .'   :               __.....__..._  ____                                    " << endl;
        cout << "  /  /   \\          _.-\"        \"-.  ""    \"\"-.                           " << endl ;
        cout << " (`-: .---:    .--.'          _....J.         \"\"-.                           " << endl;
        cout << "    \"\"\"y     \\,.'    \\  __..--\"\"       `+\"\"--.     `.                 " << endl;
        cout << "    :     .'/     .-\"\"\"-. _.            `.   \"-.    `._.._                 " << endl;
        cout << "    ;  _.'.'  .-j       `.               \\     \"-.   \"-._`.                 " << endl;
        cout << "    :    / .-\" :          \\  `-.          `-      \"-.      \\               " << endl;
        cout << "     ;  /.'    ;          :;               .\"        \\      `,               " << endl;
        cout << "     :_:/      ::\\        ;:     (        /   .-\"   .')      ;               " << endl;
        cout << "       ;-\"      ; \"-.    /  ;           .^. .'    .' /    .-\"               " << endl;
        cout << "      /     .-  :    `. '.  : .- / __.-j.'.'   .-\"  /.---'                    " << endl;
        cout << "     /  /      `,\\.  .'   \"\":'  /-\"   .'       \\__.'                      " << endl;
        cout << "    :  :         ,\\\"\"       ; .'    .'      .-\"                            " << endl;
        cout << "    _J  ;         ; `.      /.'    _/    \\.-\"                                " << endl;
    }

    void spider3()
    {
        cout << "      __                                                                       " << endl;
        cout << "     /  l"                                                                       << endl;
        cout << "   .'   :               __.....__..._  ____                                    " << endl;
        cout << "  /  /   \\          _.-\"        \"-.  ""    \"\"-.                           " << endl ;
        cout << " (`-: .---:    .--.'          _....J.         \"\"-.                           " << endl;
        cout << "    \"\"\"y     \\,.'    \\  __..--\"\"       `+\"\"--.     `.                 " << endl;
        cout << "    :     .'/     .-\"\"\"-. _.            `.   \"-.    `._.._                 " << endl;
        cout << "    ;  _.'.'  .-j       `.               \\     \"-.   \"-._`.                 " << endl;
        cout << "    :    / .-\" :          \\  `-.          `-      \"-.      \\               " << endl;
        cout << "     ;  /.'    ;          :;               .\"        \\      `,               " << endl;
        cout << "     :_:/      ::\\        ;:     (        /   .-\"   .')      ;               " << endl;
        cout << "       ;-\"      ; \"-.    /  ;           .^. .'    .' /    .-\"               " << endl;
        cout << "      /     .-  :    `. '.  : .- / __.-j.'.'   .-\"  /.---'                    " << endl;
        cout << "     /  /      `,\\.  .'   \"\":'  /-\"   .'       \\__.'                      " << endl;
        cout << "    :  :         ,\\\"\"       ; .'    .'      .-\"                            " << endl;
        cout << "    _J  ;         ; `.      /.'    _/    \\.-\"                                " << endl;
        cout << "   /  \"-:        /\"--.b-..-'     .'       ;                                  " << endl;
        cout << "  /     /  \"\"-..'            .--'.-'/  ,  :                                  " << endl;
        cout << "  :`.   :     / : bug         `-i\" ,',_:  _ \\                                " << endl;
        cout << "  :  \\  '._  :__;             .'.-\"; ; ; j `.l                               " << endl;
        cout << "  \\  \\          \"-._         `\"  :_/ :_/                                   " << endl;
        cout << "    `.;\\             \"-._                                                    " << endl;
        cout << "      :_\"-._             \"-.                                                 " << endl;
    }

    void leaderboard()
    {
        //system("cls");
        cout << "__________ScoreBoard__________" << endl;
        ifstream sb("leaderboard.txt");

        if (sb.is_open())
        {
            string line;
            while(getline(sb,line)) // display
            {
                cout << line << endl;
            }

        }

       /* string str;
        while(!sb.eof())
        {
            sb >> str;
            cout << str;
            //cout << endl;

        }
        */
        cout << endl;
        sb.close();
    }

    void gameOver2()   {


        cout << "     ____                         ___                   " << endl;
        cout << "    / ___| __ _ _ __ ___   ___   / _ \\__   _____ _ __  " << endl;
        cout << "   | |  _ / _` | '_ ` _ \\ / _ \\ | | | \\ \\ / / _ \\ '__| " << endl;
        cout << "   | |_| | (_| | | | | | |  __/ | |_| |\\ V /  __/ |    " << endl;
        cout << "    \\____|\\__,_|_| |_| |_|\\___|  \\___/  \\_/ \\___|_|    " << endl;
        cout << "                                                     " << endl;
    }


    void play()
    {

        //system("cls");
        fflush(stdin);
        cout << "Enter your name: ";
        getline(cin, name);

       // HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        //const int Green = FOREGROUND_GREEN;

        srand(static_cast<unsigned>(time(0))); // look into this srand

        score = 0;
        int lives = 3;
        int questionNumber = 1;

        cout << "Get 16 points total to reveal the picture: " << endl;

        while (lives > 0) {
            double num1 = rand() % 10 + 1;
            double num2 = rand() % 10 + 1;
            double answer; // cannot add pointer to variable, code will run but end before you can enter anything
            char op = rand() % 4;
            char op1;

            if (op == 0) {
                op1 = '+';
                answer = num1 + num2;
            }
            else if (op == 1) {
                op1 = '-';
                answer = num1 - num2;
            }
            else if (op == 2) {
                op1 = '*';
                answer = num1 * num2;
            }
            else {
                op1 = '/';
                answer = num1 / num2;
            }
            // convert the answer to two decimal points
            double ans = floor(answer*100) / 100;

            cout << "Current Lives: " << lives << endl;
            cout << "Question #" << questionNumber << ": " << num1 << op1 << num2 << " = ";

            double userAnswer;
            cin >> userAnswer;

            if (userAnswer == ans) {
                cout << "Correct!" << endl;
                score++;
            }
            else {
                cout << "Incorrect. The correct answer is " << ans << endl;
                lives--;

                if (lives == 0) {
                    gameOver2();
                    break;
                }
            }
            questionNumber++;
            // reveal the picture if certain amount it earned
            if (score == 2) {
                cout << endl;
                cout << "You have revealed the first piece of the puzzle" << endl;
                spider1(); // calls the function (portion of the first puzzle/picture)
                cout << endl;

            }
            if (score == 4) {
                cout << endl;
                cout << "You part 2, hurray for you!!" << endl;
                spider2(); // calls the function (portion of the first puzzle/picture)
                cout << endl;

            }
            if (score == 8) {
                cout << endl;
                cout << "Almost there keep your brain pumping" << endl;
                spider3(); // calls the function (portion of the first puzzle/picture)
                cout << endl;

            }
            if (score == 10) {
                cout << endl;
                cout << "You have revealed the full picture!! Awesome, you're a math machine! " << endl;
                fullspider(); // calls the function (portion of the first puzzle/picture)
                cout << endl;

            }

        }

        //const int Purple = FOREGROUND_RED | FOREGROUND_BLUE;
       // SetConsoleTextAttribute(hConsole, Purple);

        cout << "Your final score: " << score << " point(s)" << endl;

        ofstream lb("leaderboard.txt", ios::app);

        lb << name << "------- score:" << score << "\n";
        lb.close();


    }

};


int main()
{
    // how the hell to put a leader board in main function & at the same time include the score from a class ??

    MathGame math;
    while (true) {


        /*  // trying to figure out leader board can't pass through parameters
        cout << "Enter you name: ";
        string name;
        cin >> name;
         */

        //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        //SetConsoleTextAttribute(hConsole, 0);
        cout << endl;
        cout << "Menu:" << endl;
        cout << "1. Start Game" << endl;
        cout << "2. Exit" << endl;
        cout << "3. Scoreboard" << endl;
        cout << "Enter your choice: ";

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                math.play();
                break;
            case 2:
                cout << "Exiting the game. Goodbye!" << endl;
                return 0;
            case 3 :
                math.leaderboard();
                break;
            default:
                cout << "Invalid choice. Please enter 1 to start the game or 2 to exit." << endl;
                break;
        }
    }
}


