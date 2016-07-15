#include "cmpfile.h"

struct splusi{
  vector<string> vs;
  vector<int> vi;
};

class cmpfile{
public:
	std::vector<int>& getNums(int n=0){
		if(n < 0 || n >= s.size())
			return s[0].vi;
		else
			return s[n].vi;
	}

	std::vector<string>& getItems(int n=0){
		if(n < 0 || n >= s.size())
			return s[0].vs;
		else
			return s[n].vs;
	};




	cmpfile(){
		
		splusi repdb, repcmp, udb, ucmp;
		s.push_back(repdb);
		s.push_back(repcmp);
		s.push_back(udb);
		s.push_back(ucmp);

	};
	// std::vector<string>& getRep(){
	// 	return rep;
	// }

	// std::vector<string>& getUdb(){
	// 	return udb;
	// }

	// std::vector<string>& getUcmp(){
	// 	return ucmp;
	// }

	// vector<int>& getRnumdb(){
	// 	return rnumdb;
	// }

	// std::vector<int>& getRnumcmp(){
	// 	return rnumcmp;
	// }
	
	// std::vector<int>& getNumudb(){
	// 	return numudb;
	// }
	
	// std::vector<int>& getNumucmp(){
	// 	return numucmp;
	// }

	// inline int delData(vector<string>& tmp, string target);	
	// void getDiff(vector<string>& db, vector<string>& cmp);
	// void getUnum(vector<string>& db, vector<string>& cmp);
private:
	// std::vector<string> rep;
	// std::vector<string> udb;
	// std::vector<string> ucmp;
	// vector<int> rnumdb;
	// vector<int> rnumcmp;
	// vector<int> numudb;
	// vector<int> numucmp;
	// splusi repdb, repcmp, udb, ucmp;
	std::vector<splusi> s;
	

};
// inline int cmpfile::delData(vector<string>& tmp, string target){
//   vector<string>::iterator ktmp;
//   int num=0;
//   for(ktmp = tmp.begin(); ktmp != tmp.end();){
//       if(target != *ktmp){
// 	  ++ktmp;
// 	  continue;
//     }else{
// 	  num++;
// 	  ktmp = tmp.erase(ktmp);
//     }
//   }
  
//   return num;
  
// }
// void cmpfile::getDiff(vector<string>& db, vector<string>& cmp){
// 	vector<string>::iterator idb;
// 	int cdb=0, ccmp=0;

// 	for(idb = db.begin(); idb != db.end();){
// 		string tmp = *idb;
// 		///find *idb in cmp
// 	  ccmp = delData(cmp, tmp);

	 
// 	  if(ccmp){
// 	    cdb = delData(db, tmp);

// 	    //db and cmp both exist *idb;
// 	    if(cdb == ccmp){
// 	    	--idb;
// 	    }
// 	    else{
// 	    	rep.push_back(tmp);
// 	    	rnumdb.push_back(cdb);
// 	    	rnumcmp.push_back(ccmp);
// 	    	--idb;
// 	    }

// 	  }
// 	  ++idb;
// 	}
// }

// void cmpfile::getUnum(vector<string>& db, vector<string>& cmp){
//   vector<string>::iterator idb, icmp;
//   for(idb = db.begin(); idb != db.end();){
//     string tmp = *idb;
//     int count = delData(db, tmp);
//     udb.push_back(tmp);
//     numudb.push_back(count);
//     --idb;
//     ++idb;
//   }
  
//    for(icmp = cmp.begin(); icmp != cmp.end();){
//     string tmp = *icmp;
//     int count = delData(cmp, tmp);
//     ucmp.push_back(tmp);
//     numucmp.push_back(count);
//     --icmp;
//     ++icmp;
//   }
// }

