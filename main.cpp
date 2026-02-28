#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

//Help
string help_command = "inited";

void manual() {
    cout << "\n--------------------------------------------------------------------------------\n";
    cout << "Type the name of the command for help with it or cmdlist for a list of commands\nIf you reached here by accident or want to leave type bye to exit\n";
    cout << "\nManual: ";
    cin >> help_command;
    if (help_command == "bye") {
        cout << "Exited help";
        cout << "\n--------------------------------------------------------------------------------\n";
    }

    if (help_command == "cmdlist") {
        cout << "\n--------------------------------------------------------------------------------\n";
        cout << "1. help\n2. version\n3. time\n4. sudo?\n5. sudo\n6. exit\n7. hi\n8. sum (Legacy)\n9. multiply (Legacy)\n10. math\n11. rand-l\n12. rand-10\n13. coinflip";
        cout << "\n--------------------------------------------------------------------------------\n";
        manual();
    }
}

int main() {

    //main variables
    bool exit = false;
    cout << "init exit\n";
    string answer = "empty";
    cout << "init answer\n";
    string program_version = "1.15.11c";
    cout << "init version\n";

    //Config file
    string writeconfig = "empty";
    cout << "init writeconfig\n";


    //Math variables
    int num1 = 0;
    cout << "init num1\n";
    int num2 = 0;
    cout << "init num2\n";
    int math_result = 0;
    cout << "init math_result\n";
    string math_operator = "empty";
    cout << "init math_operator\n";

    //Sudo
    bool sudo = false;
    cout << "init sudo\n";
    string password = "samcpp";
    cout << "init password\n";
    string sudotry = "a";
    cout << "init sudotry\n";

    if (help_command == "inited") {
        cout << "init help_command\n";
    }
    cout << "Initialization Complete\n";

    /*
    fstream configfile("config.txt", ios::app);
    if (!configfile.is_open()) {
        cout << "Failed to open config.txt\n";
    }
    */
    



    cout << "\n\n\n THING OTHER THING \n";
    cout << "--------------------------------------------------------------------------------\n";

    while (exit == false) {
        cout << "\nYou: ";
        cin >> answer;

        //Help
        if (answer == "help") 
        {
            manual();
        }

        //Version
        if (answer == "version") 
        {
            cout << "The running version is: " + program_version;
        }

        //Time
        if (answer == "time") {
            time_t timestamp;
            time(&timestamp);
            cout << ctime(&timestamp);
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
            math_result = num1 + num2;
            cout << "Result: " << math_result;
            
        }

        //Multiply
        if (answer == "multiply") {
            cout << "First number: ";
            cin >> num1;
            cout << "Second number: ";
            cin >> num2;
            math_result = num1 * num2;
            cout << "Result: " << math_result;
        }

        //Math
        if (answer == "math") {
            cout << "First number: ";
            cin >> num1;
            cout << "Operator: ";
            cin >> math_operator;
            if (math_operator == "+") {
                cout << "Second number: ";
                cin >> num2;
                math_result = num1 + num2;
            } else if (math_operator == "-") {
                cout << "Second number: ";
                cin >> num2;
                math_result = num1 - num2;
            } else if (math_operator == "*") {
                cout << "Second number: ";
                cin >> num2;
                math_result = num1 * num2;
            } else if (math_operator == "/") {
                cout << "Second number: ";
                cin >> num2;
                math_result = num1 / num2;
            }
            cout << "Result: " << math_result;
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
                cout << "math_result: " << math_result << "\n";
                cout << "sudotry: " << sudotry << "\n";
                cout << "writeconfig: " << writeconfig << "\n";
                cout << "math_operator: " << math_operator << "\n";
                cout << "program_version: " << program_version << "\n";

            }

            /*
            if (answer == "overload")
            {
                string overload = "BOOM";
                overload = overload * 999999999999999;
            }
            */
            
            /*
            //make and write to a file
            if (answer == "makefile") {
                ofstream file("config.txt");
                file << "Files can be tricky, but it is fun enough!";
                file.close();
            }
            

            //close file
            if (answer == "save-config") {
                configfile.close();
                cout << "File closed";
            }

            //write to the config file
            if (answer == "write-config") {
                cout << "Text to write to config file: ";
                cin >> writeconfig;
                configfile << writeconfig;
            }

            if (answer == "test") {
                cout << "functional";
            }
            */
            /*
            if (answer == "write-config") {
                ofstream configfile("config.txt", ios::app);
                if (!configfile) {
                    cout << "Could not open file\n";
                } else {
                    cout << "Text to write to config file: ";
                    cin.ignore();
                    getline(cin, writeconfig);
                    configfile << writeconfig << endl;
                    cout << "Written to file\n";
                }
            }
            */
            
        }
        
    }
    return 0;
}




