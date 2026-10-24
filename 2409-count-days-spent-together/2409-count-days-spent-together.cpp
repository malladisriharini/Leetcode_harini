class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        string start=max(arriveAlice, arriveBob);
        string end=min(leaveAlice, leaveBob);

        if (start>end)
            return 0;

        int days = 0;
        int monthDays[] = {31, 28, 31, 30, 31, 30,
                           31, 31, 30, 31, 30, 31};

        for (int i = 0;i<2;i++) {
            int m=stoi(start.substr(0, 2));
            int d=stoi(start.substr(3, 2));
            int n=stoi(end.substr(0, 2));
            int e=stoi(end.substr(3, 2));
            for (int j = 1; j < m; j++)
                d += monthDays[j - 1];
            for (int j = 1; j < n; j++)
                e += monthDays[j - 1];
            return e-d+1;
        }

        return days;
    }
};