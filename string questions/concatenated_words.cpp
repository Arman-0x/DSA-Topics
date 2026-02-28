class Solution {
    unordered_map<string,bool>mp;
public:

    bool isConcatenated(string & word, set<string>&wordset){

        int l=word.size();
        if(mp.find(word)!=mp.end()){
            return mp[word];
        }
        for(int i=0;i<l;i++){
        string prefix=word.substr(0,i+1);
        string suffix=word.substr(i+1);

        if(wordset.find(prefix) != wordset.end() &&
               wordset.find(suffix) != wordset.end()) {
                return mp[word]=true;
            }

            // Case 2: prefix exists and suffix can be broken further
            if(wordset.find(prefix) != wordset.end() &&
               isConcatenated(suffix, wordset)) {
                return mp[word]=true;
            }
        }
        return mp[word]=false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        set<string>wordset;
        vector<string>result;
        for(int i=0;i<words.size();i++){
            wordset.insert(words[i]);
        }

        for(auto word:words){
            if(isConcatenated(word,wordset)){
                result.push_back(word);
            }
        }

        return result;

    }
};