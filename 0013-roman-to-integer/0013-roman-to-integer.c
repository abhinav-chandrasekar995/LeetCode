//I,V,X,L,C,D,M
int romanToInt(char* s) {
    int number=0;
    for(int i=0;i<strlen(s);i++)
    {
        char x=s[i];
        switch(x)
        {
            case 'I':
            if(s[i+1]=='V'||s[i+1]=='X')
            number=number-1;
            else
            number=number+1;
            break;
            case 'V':
            number+=5;
            break;
            case 'X':
            if(s[i+1]=='L'||s[i+1]=='C')
            number-=10;
            else
            number+=10;
            break;
            case 'L':
            number+=50;
            break;
            case 'C':
            if(s[i+1]=='D'||s[i+1]=='M')
            number-=100;
            else
            number+=100;
            break;
            case 'D':
            number+=500;
            break;
            case 'M':
            number+=1000;
            break;
            default:
            printf("invalid character");
            break;
        }
    }
    return number;
}