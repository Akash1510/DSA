 
int count = 0;
string ans= "";
int k = 4;
int i =0;
 while (k!=count)
 
 {
    if((s[i]) != ' '){
        ans += s[i];
    }
    else{
        ans = ans+' ';
        count++;
    }
    i++;
    
 }

 cout<<ans;