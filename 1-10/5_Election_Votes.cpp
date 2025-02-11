#include <iostream>
using namespace std;

int main()
{
    int votes[5] = {0};  
    int spoilt = 0, numVotes, vote;

    cout << "Enter the number of votes: ";
    cin >> numVotes;

    cout << "Enter votes (1-5): \n";
    for (int i = 0; i < numVotes; i++) 
    {
        cin >> vote;
        if (vote >= 1 && vote <= 5)
            votes[vote - 1]++;
        else
            spoilt++;
    }

    cout << "Vote counts:\n";
    for (int i = 0; i < 5; i++) 
    {
        cout << "Candidate " << i + 1 << ": " << votes[i] << " votes\n";
    }
    cout << "Spoilt ballots: " << spoilt << endl;

    return 0;
}
