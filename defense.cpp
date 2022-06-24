//Defense Game
//we're given height/width of a board, and a vector of pairs where towers will be. 
//No two towers can share a row or column. They are able to defend in a + shape from width to height. 
//Find the penalty, whcih is the number of cells of the largest undefended rectangle on the board.

using ll = long long;
#define all(v) v.begin(), v.end()
int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    vector<pair<int, int>> v = position;
    int w = W, h = H;
    vector<ll> x, y;
    x.push_back(0); y.push_back(0);
    
    ll maxx = INT_MIN, maxy = INT_MIN;

    for(int i=0; i<v.size(); i++)
    {
        x.push_back(v[i].first), y.push_back(v[i].second);
    }
    // x.push_back(W); y.push_back(H);
    sort(all(x));
    sort(all(y));

    for (ll i = 1; i < x.size(); i++) maxx = max(maxx, x[i] - x[i - 1] - 1);
    for (ll i = 1; i < y.size(); i++) maxy = max(maxy, y[i] - y[i - 1] - 1);
    maxx = max(maxx, W - x[x.size() - 1] );
    maxy = max(maxy, H- y[y.size() - 1]);

    return (maxx * maxy);
    
}
