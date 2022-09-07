void getCheese(vector<vector<int>> &maze, vector<vector<int>> &visited, int x, int y)
{
    if (x < 0 or y < 0 or x >= maze.size() or y >= maze[0].size())
        return;
    if (maze[x][y] == 0)
        return;
    if (visited[x][y])
        return;

    visited[x][y] = true;
    getCheese(maze, visited, x + 1, y);
    getCheese(maze, visited, x, y + 1);
}

bool canGetCheese(vector<vector<int>> &maze)
{
    vector<vector<int>> visited(maze.size(), vector<int>(maze[0].size(), 0));

    getCheese(maze, visited, 0, 0);

    if (visited[maze.size() - 1][maze[0].size() - 1])
        return true;
    else
        return false;
}

int main()
{

    vector<vector<int>> arr = {
        {1, 1, 0, 0},
        {1, 1, 1, 1},
        {0, 1, 0, 1},
        {0, 1, 0, 1}};

    cout << canGetCheese(arr);
    return 0;
}
