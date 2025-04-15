class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
     vector<vector<int>> adj(numCourses);
     vector<int> inDeg(numCourses,0);

     for(auto i : prerequisites){
        int course = i[0];
        int preq = i[1];
        adj[preq].push_back(course);
        inDeg[course]++;
     }

     queue<int> q;
     for(int i=0;i<numCourses;i++){
        if(inDeg[i]==0) q.push(i);
     }   
    int complete=0;
     while(!q.empty()){
        int front = q.front();
        q.pop();
        complete++;

        for(int neighbour : adj[front]){
            inDeg[neighbour]--;
            if(inDeg[neighbour]==0) q.push(neighbour);
        }
     }
    return complete == numCourses;
    }

};