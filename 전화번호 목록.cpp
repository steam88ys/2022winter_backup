#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;    
    unordered_map<string,int> hash_map;
    
    for(int i=0; i<phone_book.size(); i++) {
        hash_map[phone_book[i]] = 1;
    }
    for(int i=0; i<phone_book.size(); i++) {  //행번호     
        string phone_number="";
        for(int j = 0; j<phone_book[i].size(); j++) {//열번호
            phone_number += phone_book[i][j];
            if(hash_map[phone_number] && phone_number != phone_book[i]) answer = false;
        }
    }    
    return answer;
}