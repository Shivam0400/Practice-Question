#include <iostream>
using namespace std;

struct Player {
    string name;
    int runs, innings, notOut;
    
    double average() {
        return (innings - notOut == 0) ? 0 : (double)runs / (innings - notOut);
    }
};

int main() {
    Player players[3] = {
        {"Sachin", 8430, 230, 18},
        {"Saurav", 4200, 130, 9},
        {"Rahul", 3350, 105, 11}
    };

    cout << "Player\tRuns\tInnings\tNot Out\tAverage\n";
    for (int i = 0; i < 3; i++) {
        cout << players[i].name << "\t" << players[i].runs << "\t" 
             << players[i].innings << "\t" << players[i].notOut << "\t" 
             << players[i].average() << endl;
    }
    return 0;
}
