string getHint(string secret, string guess) {
    unordered_map<char,int> lookup;
    int x = 0;
    int y = 0;

    int n = secret.size();

    for(int i =0; i < n; i++){
        char s = secret[i];
        char g = guess[i];
        if(s == g){
            x++;
        }
        else{
            y += int(lookup[s]++ < 0) + int(lookup[g]-- > 0);
        }
    }            

    return to_string(x).append("A").append(to_string(y)).append("B");    
}