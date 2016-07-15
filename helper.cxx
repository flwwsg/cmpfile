#include "cmpfile.h"



// ifstream dbfs()

inline void trimSpace(vector<string>& datas, istringstream& iss){
  string tmp;
  char ch;
  while(iss.get(ch)){
    if(isspace(ch))
      continue;
    tmp += ch;
  }
  if(tmp !="")
  datas.push_back(tmp);
}


void rFile(vector<string>& sdata, istream& ifs){
	
	string ss;
	
	while(getline(ifs, ss)){
		istringstream iss(ss);
		trimSpace(sdata, iss);
	}
	
}

void wUniq(ostream& oss, splusi s, bool t=true,char fDelimiter=',',char tDelimiter='"'){
	if(t)
	for(int i=0; i < s.vs.size(); ++i){
		oss<<tDelimiter<<s.vs[i]<<tDelimiter<<fDelimiter<<tDelimiter<<s.vi[i]<<tDelimiter<<fDelimiter<<tDelimiter<<"0"<<tDelimiter<<endl;
	}
	else
    for(int i=0; i < s.vs.size(); ++i){
		oss<<tDelimiter<<s.vs[i]<<tDelimiter<<fDelimiter<<tDelimiter<<"0"<<tDelimiter<<fDelimiter<<tDelimiter<<s.vi[i]<<tDelimiter<<endl;
	}
}
    



void wRep(ostream& oss, splusii sii, char fDelimiter=',',char tDelimiter='"'){
	for(int i=0; i < sii.vs.size(); ++i){
		oss<<tDelimiter<<sii.vs[i]<<tDelimiter<<fDelimiter<<tDelimiter<<sii.vis[i]<<tDelimiter<<fDelimiter<<tDelimiter<<sii.vic[i]<<tDelimiter<<endl;
	}
}



// void pContents(vector<string>& tmp, string tip = "printing"){
// 	cout<<tip<<endl;
// 	for(int i=0; i < tmp.size(); ++i){
// // 		cout<<i<<endl;
// 		cout<<tmp[i]<<endl;
// 	}
// }

// void pContents(vector<int>& tmp, string tip = "printing"){
// 	cout<<tip<<endl;
// 	for(int i=0; i < tmp.size(); ++i){
// // 		cout<<i<<endl;
// 		cout<<tmp[i]<<endl;
// 	}
// }
