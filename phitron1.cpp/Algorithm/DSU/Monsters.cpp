#include<bits/stdc++.h>
using namespace std;
const int N = 1005;
int n, m;
int sx, sy, dx, dy;
char grid[N][N];
bool visited[N][N];
pair<int, int> path[N][N];

vector<pair<int, int>> moves = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

class Person{
public:
    int x;
    int y;
    char nm;

    Person(int x, int y, char nm)
    {
        this->x = x;
        this->y = y;
        this->nm = nm;

        
    }
};

bool is_valid(int x, int y){
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
}

queue<Person> q;

void bfs() {
    while(!q.empty()){
        Person head = q.front();
        q.pop();
        for(auto x: moves){
            int cx = head.x + x.first;
            int cy = head.y + x.second;

            if(is_valid(cx, cy) && !visited[cx][cy]){
                q.push(Person(cx, cy, head.nm));
                visited[cx][cy] = true;
                grid[cx][cy] = head.nm;
                if(head.nm == 'A'){
                    path[cx][cy] = {x.first, x.second};
                }
            }
        }
    }
}

bool is_outer(int x, int y){
    return x == 0 || y == 0 || x == n-1 || y == m-1;
}

bool check_possibility(){
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++){
            if(is_outer(i, j) && grid[i][j] == 'A')
            {
                dx = i; dy = j;
                return true;
            }
        }
    }
    return false;
}

int main(){
    cin >> n >> m;
    for(int i =0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
            if(grid[i][j] == 'M')
            {
                q.push(Person(i, j, 'M'));
                visited[i][j] = true;
            }
            if(grid[i][j] == 'A'){
                sx = i; sy = j;
            }
        }
    }
    q.push(Person(sx, sy, 'A'));
    visited[sx][sy] = true;

    bfs();

   if(!check_possibility())
    {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;

    // path printing

    pair<int, int> coords = {dx, dy};
    vector<pair<int, int>> ans;
    while(coords.first != sx || coords.second != sy)
    {
        ans.push_back(path[coords.first][coords.second]);
        coords.first -= ans.back().first;
        coords.second -= ans.back().second;
    }

    reverse(ans.begin(), ans.end());
    cout << ans.size() <<endl;
    for(auto x: ans){
        if(x.first == -1 && x.second == 0) cout << "U";
        if(x.first == 1 && x.second == 0) cout << "D" ;
        if(x.first == 0 && x.second == -1) cout << "L";
        if(x.first == 0 && x.second == 1) cout << "R" ;
    }
    cout << endl;

    return 0;
}
 
