bool judgeCircle(char* moves) {
    int x=0,y=0;
    for(int i=0;i<strlen(moves);i++)
    {
        char ch=moves[i];
        if(ch=='U')
        y++;
        if(ch=='D')
        y--;
        if(ch=='L')
        x--;
        if(ch=='R')
        x++;
    }
    if(x==0&&y==0)
    return true;
    else
    return false;
}