#include <iostream>
#include<string>
using namespace std;
class freefire {
public:
    string name;
    int teamno;
    int kills;
    int deathrate;
    int damagerate;
    bool roomkey;
    freefire* next;
    freefire() {
        name = "";
        teamno = 0;
        kills = 0;
        deathrate = 0;
        damagerate = 0;
        roomkey = false;
        next = nullptr;
    }
};
class team {
public:
    string teamname;
    freefire* head;
    team() {
        teamname = "";
        head = nullptr;
    }
};
class room {
public:
    bool checkroomkey(team& team1, team& team2) {
        freefire* temp;
        temp = team1.head;
        while (temp != nullptr) {
            if (temp->roomkey == true) {
                return true;
            }
            temp = temp->next;
        }
        temp = team2.head;
        while (temp != nullptr) {
            if (temp->roomkey == true) {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }
};
void createteam(team& team) {
    cout << "Give the name of the team : " << endl;
    cin >> team.teamname;
    team.head = nullptr;
    for (int i = 1; i <= 4; i++) {
        freefire* f = new freefire();
        cout << "Enter the name of member" << endl;
        cin >> f->name;
        cout << "how many kills in 5 match : " << endl;
        cin >> f->kills;
        cout << "how many time you died : " << endl;
        cin >> f->deathrate;
        cout << "Enter people you damaged: " << endl;
        cin >> f->damagerate;
        cout << "is you have roomkey(0 or 1) : " << endl;
        cin >> f->roomkey;
        f->next = nullptr;
        if (team.head == nullptr) {
            team.head = f;
        }
        else {
            freefire* temp = team.head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = f;
        }
    }
}
void display(team& team) {
    cout << "team name : " << team.teamname << endl;
    freefire* temp = team.head;
    while (temp != nullptr) {
        cout << "Name : " << temp->name;
        cout << "kills : " << temp->kills;
        cout << "deathrate : " << temp->deathrate;
        cout << "damagerate : " << temp->damagerate;
        cout << "roomkey : " << temp->roomkey;
        temp = temp->next;
    }
}
void matchresult(team& team1, team& team2) {
    int team1wins = 0;
    int team2wins = 0;
    string winner;
    for (int i = 1; i <= 5; i++) {
        cout << "Match " << i << "Winner team name : ";
        cin >> winner;
        if (winner == team1.teamname) {
            team1wins++;
        }
        else {
            team2wins++;
        }
        if (team1wins == 3) {
            cout << "Overall winner : " << team1.teamname << endl;
        }
        if (team2wins == 3) {
            cout << "Overall winner : " << team2.teamname << endl;
        }
    }
}
void deleteteam(team& team) {
    freefire* temp = team.head;
    while (temp != nullptr) {
        freefire* del = temp;
        temp = temp->next;
        delete del;
    }
    team.head = nullptr;
}

int main()
{
    team team1, team2;
    room r;
    createteam(team1);
    createteam(team2);
    if (!r.checkroomkey(team1, team2)) {
        cout << "Room key found" << endl;
        cout << "Room key not found so room cannot be created" << endl;
        return 0;
    }
    cout << "Room created successfully" << endl;
    display(team1);
    display(team2);
    matchresult(team1, team2);
    deleteteam(team1);
    deleteteam(team2);
    cout << "Memory deleted successfully" << endl;
    return 0;
}
/*
naa ithula free fire vechi oru programe create pana poren
- 1st ennaku 2 team venu
-2nd antha team oda member details
-3rd 1 match na 5 rounds irrukum 
-athavathu room match
-room match na athuku room key venu team 4 members and 2nd team layum 4 members intha 8 members la oruthar ta room key irrunthalum room nambala create pana mudiyum athula 8 members split pani potta 2 teams ready
-aprm yethana kill pananga yethana time death ananganu pakanum 
-next orutharey neraya kill paniruntha avngaluku oru name tharalam 
-next match la win pana booyah print aganum................
*/