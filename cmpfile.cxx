#include "cmpfile.h"

struct splusi{
  vector<string> vs;
  vector<int> vi;
};

struct splusii{
	std::vector<string> vs;
	std::vector<int> vis;
	std::vector<int> vic;
};

class cmpfile{
public:
	splusi getUniq(int n =0){
		if(n < 0 || n >= s.size())
			return s[0];
		else
			return s[n];
	}

	int getUniqSize(int n=0){
		if(n < 0 || n >= s.size())
			return s[0].vs.size();
		else
			return s[n].vs.size();
	}

	splusii getRep(){
		return rep;
	}

	int getRepSize(){
		return rep.vs.size();
	}

	cmpfile(){
		splusi udb, ucmp;
		s.push_back(udb);
		s.push_back(ucmp);

	};

	int delData(vector<string>& tmp, string target);
	void gRepIterms(vector<string>& src, vector<string>& cmp);
	void gUniqIterms(vector<string>& vv, int n);
private:
	std::vector<splusi> s;
	splusii rep;
	

};

//return repeat numbers and delet target from tmp
int cmpfile::delData(vector<string>& tmp, string target){
 vector<string>::iterator ktmp;
  int num=0;
  for(ktmp = tmp.begin(); ktmp != tmp.end();){
      if(target != *ktmp){
	  ++ktmp;
	  continue;
    }else{
	  num++;
	  ktmp = tmp.erase(ktmp);
    }
  }
  
  return num;
  
}

//find repeat numbers;
void cmpfile::gRepIterms(vector<string>& src, vector<string>& cmp){
	vector<string>::iterator isrc;
	int csrc=0, ccmp=0;

	for(isrc = src.begin(); isrc != src.end();){
		string tmp = *isrc;
		///find *isrc in cmp
	  ccmp = delData(cmp, tmp);

	  if(ccmp){
	    csrc = delData(src, tmp);

	    //src and cmp both exist *idb;
	    if(csrc == ccmp){
	    	--isrc;
	    }
	    else{
	    	//count *isrc in src and cmp
	    	rep.vs.push_back(tmp);
	    	rep.vis.push_back(csrc);
	    	rep.vic.push_back(ccmp);
	    	--isrc;
	    }

	  }
	  ++isrc;
	}
}

void cmpfile::gUniqIterms(vector<string>& vv, int n=0){
  vector<string>::iterator ivv;
  splusi si;
  for(ivv = vv.begin(); ivv != vv.end();){
    string tmp = *ivv;
    int count = delData(vv, tmp);
    si.vs.push_back(tmp);
    si.vi.push_back(count);

    --ivv;
    ++ivv;
  }
  s[n] = si;
}

