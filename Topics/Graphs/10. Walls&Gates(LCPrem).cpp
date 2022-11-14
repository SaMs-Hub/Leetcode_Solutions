vector<vector<int>> dirs = {
    {-1, 0}, {1, 0}, {0, -1}, {0, 1}
};
   void wallsAndGates(vector<vector<int>> &rooms) {
        int m = rooms.size();
        int n =rooms[0].size();

        queue<pair<int, int>> myRooms;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if (rooms[i][j] == 0) myRooms.push({i, j});
            }
        }


        while (!myRooms.empty()){
            int row = myRooms.front().first;
            int column = myRooms.front().second;

            myRooms.pop();

            for (int i= 0; i < 4; i++){
                int x = row + dirs[i][0];
                int y = column + dirs[i][1];

                if (x < 0 or x >= m or y < 0 or y >= n or rooms[x][y] != INT_MAX) continue;

                rooms[x][y] = rooms[row][column] + 1;
                myRooms.push({x, y});
            }
        }
    }
