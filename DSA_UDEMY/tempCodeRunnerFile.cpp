for(int i = 0; i < n;i++){
        for(int j = i+1; j < n;j++){
            for(int k = j+1; k < n; k++){
                if(sum == array[i]+array[j]+array[k]){
                    s.push_back({array[i],array[j],array[k]});
                }

            }
        }
    }