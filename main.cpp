#include <string>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
#include <string.h>
using namespace std;

typedef struct Ans{
    char c;
    string s;
}Ans;

vector<Ans> ans;

int main(){
   fstream infile("table.txt");
    char ch;

    char asd;
    while(infile){
            string s;
        infile.get(ch);
//        cout<<ch;
        infile>>s;
        infile.get(asd);
        Ans temp;
        temp.c=ch;
        temp.s=s;
        ans.push_back(temp);
    }
infile.close();
puts("");
//    for(int i=0;i<ans.size()-1;i++){
//        cout<<ans[i].s;
//    }
fstream code("code.txt");
string sss;
char ss;
while(code){
    code.get(ss);
    sss+=ss;
    for(int i=0;i<ans.size()-1;i++){
        if(ans[i].s==sss){
                printf("%c",ans[i].c);
        sss.clear();
            break;
        }
    }
}
code.close();
    return 0;
}
