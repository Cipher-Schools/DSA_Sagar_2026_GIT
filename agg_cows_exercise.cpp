/*
for(int i = 1; i < 2^n - 1; i++){

int num = i;
int count = 0;
int mask = 1;
vector<int> temp;
for(int j = 0; j < 32 ; j++){
 if(num & mask != 0){
 count++;
 temp.push_back(arr[j]);
 }
}
int ans = INT_MAX;
for(int k = 1; k < temp.size(); k++){
 ans = min(ans, temp[i] - temp[i - 1]);
}

int g_ans = max(g_ans, ans);
}

*/