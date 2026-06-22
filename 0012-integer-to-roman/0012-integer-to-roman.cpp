class Solution {
public:
    string intToRoman(int num) {
        string answer="";
        int x=to_string(num).size();
        x=x-1;
        while(num>0)
        {
            int p=pow(10,x);
            int q=num/p;
            int r=q*p;
            string substr=builder(r);
            answer+=substr;
            num=num-r;
            x--;
        }
        return answer;
    }
    string builder(int num) {
        string sub="";
        while(num>0)
        {
        if(num>=1000)
        {
            sub+='M';
            num=num-1000;
        }
        else if(num==900)
        {
            sub+='C';
            sub+='M';
            num=num-900;
        }
        else if(num>=500)
        {
            sub+='D';
            num=num-500;
        }
        else if(num==400)
        {
            sub+='C';
            sub+='D';
            num=num-400;
        }
        else if(num>=100)
        {
            sub+='C';
            num=num-100;
        }
        else if(num==90)
        {
            sub+='X';
            sub+='C';
            num=num-90;
        }
        else if(num>=50)
        {
            sub+='L';
            num=num-50;
        }
        else if(num==40)
        {
            sub+='X';
            sub+='L';
            num=num-40;
        }
        else if(num>=10)
        {
            sub+='X';
            num=num-10;
        }
        else if(num==9)
        {
            sub+='I';
            sub+='X';
            num=num-9;
        }
        else if(num>=5)
        {
            sub+='V';
            num=num-5;
        }
        else if(num==4)
        {
            sub+='I';
            sub+='V';
            num=num-4;
        }
        else
        {
            sub+='I';
            num=num-1;
        }
        }
        return sub;
    } 
};