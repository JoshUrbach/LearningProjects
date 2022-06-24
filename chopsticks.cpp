//finds max pairs of chopsticks that can be made given N sticks in an array length where length[i] is the length of that stick

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(), length.end());
    int res = 0;

    for(int i=0; i<length.size()-1; i++)
    {
        if (length[i + 1] - length[i] <= D) { res++; i++;}
    }

    return res;
}
