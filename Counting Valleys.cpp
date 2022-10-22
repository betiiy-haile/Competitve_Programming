
int countingValleys(int steps, string path) {
    int sea_level = 0;
    int val = 0;
    for(int i=0; i<steps ; i++){
        if(path[i] == 'U'){
            if(sea_level == -1)
                val++;
            sea_level++; 
        }  
        else
            sea_level--;
        
    }
    return val;
}