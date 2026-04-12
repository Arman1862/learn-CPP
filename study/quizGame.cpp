#include <iostream>

using namespace std;

int main()
{
    string question[] = {
        "1. What year was C++ created? ",
        "2. Who invented C++? ",
        "3. What is the predecessor of C++? ",
        "4. Is the Earth flat? "};

    string option[][4] = {
        {"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
        {"A. Guido van Rossum", "B. Bjarne Stroustrup", "C. Johon Carmack", "D. Mark Zuckerburg"},
        {"A. C", "B. C+", "C. C--", "D. B++"},
        {"A. yes", "B. no", "C. sometimes", "D. what's earth?"}};

    char answerKey[] = {'C', 'B', 'A', 'B'};
    
    int sQuestion = sizeof(question)/sizeof(question[0]);
    char guess;
    int score = 0;

    for (int i = 0; i < sQuestion; i++) {
        cout << "************************************\n";
        cout << question[i] << endl;
        cout << "************************************\n";

        int sOption = sizeof(option[i])/sizeof(option[i][0]);
        for (int j = 0; j < sOption; j++) {
            cout << option[i][j] << endl;
        }

        cout << "your answer: ";
        cin >> guess;
        guess = toupper(guess);
        if (guess == answerKey[i]) {
            cout << "CORRECT\n";
            score++;
        } else {
            cout << "wrong\n";
            cout << "the answer is " << answerKey[i] << endl;
        };
    }

    cout << "****************************\n";
    cout << "          RESULTS           \n";
    cout << "****************************\n";
    cout << "CORRECT GUESSES: " << score << endl;
    cout << "# of Questions: " << sQuestion << endl;
    cout << "# of Questions: " << (score/(double)sQuestion)*100 << endl;


    return 0;
}