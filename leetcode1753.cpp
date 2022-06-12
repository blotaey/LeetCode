int maximumScore(int a, int b, int c) {
    int count = 0;
    priority_queue<int> maxh;
    maxh.push(a);
    maxh.push(b);
    maxh.push(c);

    while(1){
        int x = maxh.top();
        maxh.pop();
        int y = maxh.top();
        maxh.pop();
        if(x==0 || y == 0 ) break;
        x--; y--;
        maxh.push(x);
        maxh.push(y);
        count++;
    }  

    return count;

}