class Solution {
public:
    double slope(int x1,int y1,int x2,int y2){
        if((x2-x1)==0) return 0;
        return ((y2-y1)/((x2-x1)*1.0));
    }
    bool checkStraightLine(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=points.size();
        int x1=points[0][0],y1=points[0][1],x2=points[1][0],y2=points[1][1];
        double m=slope(x1,y1,x2,y2);
        for(int i=1;i<n;i++){
            int x1=points[i][0];
            int y1=points[i][1];
            int x2=points[0][0];
            int y2=points[0][1];
            if(slope(x1,y1,x2,y2)!=m)
                return false;
        }
        return true;
    }
};
