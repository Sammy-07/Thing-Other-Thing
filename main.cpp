#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //main variables
    bool exit = false;
    string answer = "empty";

    //sum variables
    int num1 = 0;
    int num2 = 0;
    int sum_result = 0;

    //Sudo
    bool sudo = false;
    string password = "samcpp";
    string sudotry = "a";



    cout << "\n THING OTHER THING \n";
    cout << "--------------------------------------------------------------------------------";

    while (exit == false) {
        cout << "\nYou: ";
        cin >> answer;

        //Version
        if (answer == "version")
        {
            cout << "The running version is: 1.9.7c";
        }
        

        //Sudo?
        if (answer == "sudo?")
        {
            if (sudo == true)
            {
                cout << "Sudo is ON";
            } else {
                cout << "Sudo is OFF";
            }
            
        }
        

        //SUDO
        if (answer == "sudo")
        {
            cout << "Password: ";
            cin >> sudotry;
            
            if (sudotry == password)
            {
                if (sudo == false)
                {
                    sudo = true;
                    cout << "Admin is now ON";
                } else {
                    sudo = false;
                    cout << "Admin is now OFF";
                }
            } else {
                cout << "NICE TRY FOOL";
            }
        }
        

        //EXIT
        if (answer == "exit") {
            exit = true;
            cout << "Bye";
        }

        //HI
        if (answer == "hi") {
            cout << "Hello, how may i help you?";
        }
        
        //SUM
         if (answer == "sum") {
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;
            sum_result = num1 + num2;
            cout << "Result: " << sum_result;
            
        }

        //Random large
        if (answer == "rand-l") {
            int randomlarge = rand() % 999999999999999999;
            cout << "Your random number: " << randomlarge;
        }

        //Random 10
        if (answer == "rand-10") {
            int random10 = rand() % 11;
            cout << "Your random number: " << random10;
        }

        //Flip a coin
        if (answer == "coinflip") {
            int coinflip = rand() % 2;
            cout << "Your coins side is: " << coinflip;
        }

        if (sudo == true)
        {
            //Runtime
            if (answer == "runtime") {
                cout << "The runtime is: " << clock();
            }

            //VARIABLES
            if (answer == "var") {
                cout << "sudo: " << sudo << "\n";
                cout << "answer: " << answer << "\n";
                cout << "num1: " << num1 << "\n";
                cout << "num2: " << num2 << "\n";
                cout << "exit: " << exit << "\n";
            }
            
        }
        
    }
    return 0;
}


   