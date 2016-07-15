#include "cmpfile.cxx"
#include "helper.cxx"


int main(int argc, char const *argv[]){
	
	string srcName = "source.txt";
	string cmpName = "target.txt";
	
	// if(argc == 3){
	//   string dbName= argv[1];
	//   string cmpName= argv[2];	  
	// }

	ifstream srcfs(srcName.c_str());
	ifstream cmpfs(cmpName.c_str());
	
	if(!srcfs || !cmpfs){
		cout<<"No such file named "<<srcName<<" or "<<cmpName<<endl;
		return -1;
	}

	srcName = "out.csv";
	ofstream tcsv(srcName.c_str());
	// ofstream ocmp(cmpName.c_str());
	if(!tcsv){
		cout<<"can't write file named "<<srcName<<endl;
		return -1;
	}
	std::vector<string> src;
	std::vector<string> cmp;
	
	rFile(src, srcfs);
	rFile(cmp,cmpfs);

	cmpfile f;
	// cmpfile *pf = &f;
	f.gRepIterms(src, cmp);
	f.gUniqIterms(src, 0);
	f.gUniqIterms(cmp, 1);

	string title ="\"iterms\",\"src\",\"cmp\"";
	tcsv<<title<<endl;

		// wRep(ostream& oss, splusii sii, char fDelimiter=',',char tDelimiter='"')
	if(f.getRepSize())
		wRep(tcsv, f.getRep());

// wUniq(ostream& oss, splusi s, bool t=true,char fDelimiter=',',char tDelimiter='"')
	if(f.getUniqSize(0))
		wUniq(tcsv, f.getUniq(0), true);

	if(f.getUniqSize(1))
		wUniq(tcsv, f.getUniq(1), false);
	


	return 0;
}