    class Solution {
            int stacktop=0;
            boolean counter=false;
            char[] stack;
        public boolean isValid(String s) {
            if (s.length()==0)
            return true;
            stack=new char[s.length()];
            for(int i=0;i<s.length();i++)
            {
                if(s.charAt(i)=='('||s.charAt(i)=='{'||s.charAt(i)=='[')
                stackpush(s.charAt(i));
                else
                if(!valid(s.charAt(i))){
                    return false;
                }
            }
             if (stacktop != 0)
            counter = false;
            return counter;
        }
            void stackpush(char ch)
            {
                stack[stacktop++]=ch;
            }
            boolean valid(char ch)
            {
                if(stacktop==0)
                return false;
                if((stack[stacktop-1]=='{'&&ch=='}')||(stack[stacktop-1]=='('&&ch==')')||(stack[stacktop-1]=='['&&ch==']'))
                {
                counter=true;
                stacktop--;
                }
                else
                counter=false;
                return counter;
            }
    }         
        