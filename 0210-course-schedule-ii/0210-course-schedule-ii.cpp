class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        vector<int> ans;
 

       vector<int> inDeg(numCourses,0);

       for(auto it : prerequisites){
        int course = it[0];
        int preq = it[1];
        adj[preq].push_back(course);
        inDeg[course]++;
       }
       queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(inDeg[i]==0) q.push(i);
        }

        while(!q.empty()){
            int front = q.front();
            q.pop();
            ans.push_back(front);

            for(auto neighbour: adj[front]){
                inDeg[neighbour]--;
                if(inDeg[neighbour]==0) q.push(neighbour);
            }
        }
    if(ans.size() == numCourses) return ans;

    return vector<int>();
    }
};