int camelcase(string s) {
int count=1;
for(int i=1;i<s.length()-1;i++){
    if(isupper(s[i]))
    count++;
}
return count;
}
