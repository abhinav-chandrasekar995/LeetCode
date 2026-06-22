class Solution {
public:
    double angleClock(int hour, int minutes) {
        double hourangle,minuteangle;
        minuteangle=(minutes%60)*6;
        hourangle=(hour%12)*30;
        for(int i=0;i<minuteangle;i++)
        {
            hourangle=hourangle+(0.08333333);
        }
        double firstdiff=abs(hourangle-minuteangle);
        double seconddiff=360-firstdiff;
        return min(firstdiff,seconddiff);
    }
};