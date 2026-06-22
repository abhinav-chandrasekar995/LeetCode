int lengthOfLastWord(char* s) 
{
    int length=0;
    if (strlen(s)==1)
    {
        length=1;
        return length;
    }
    else
    {
    int last=strlen(s)-1;
    for(int i=last;i>=0;i--)
    {
         if(length==0 && s[i]==32)
         continue;
         else if(length!=0 && s[i]==32)
         break;
         else
         length++;
    }
    }
    return length;
}