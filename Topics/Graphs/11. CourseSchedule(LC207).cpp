// App 1 O(v + e)
bool dfs(int course, unordered_map<int, vector<int>> res, unordered_set<int> mes){
    if (mes.find(course) != mes.end()) return false;
    if (res[course].empty()) return false;

    mes.insert(course);

    for (int i = 0; i < res[course].size(); i++){
        int nextCourse = res[course][i];
        if (!dfs(nextCourse, res, mes)) return false;
    }

    res[course].clear();
    mes.erase(course);
    return true;


}

   bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    unordered_map<int, vector<int>> res;

    for (int i = 0; i < prerequisites.size(); i++){
        res[prerequisites[i][0]].push_back(prerequisites[i][1]);
    }

    unordered_set<int> mes;
    for (int course = 0; course < numCourses; course++){
        if (!dfs(course, res, mes)) return false;
    }

    return true;

        
}
