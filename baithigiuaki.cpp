#include<iostream>
using namespace std;
int main()
{
	float s; //so tien gui ban dau
	float lx; //lai xuat theo nam
	float kv; //so tien ky vong nhan duoc
	int sn=0; //so nam can de dat duoc so tien ky vong
	
	
	cout<<"nhap vao so tien , lai xuat, so tien ky vong ";
	cin>>s>>lx>>kv;
	if(s>0 && lx>0 && kv>0)
		{
			while ( s <= kv)
				{
					s=s+(s*lx)/100;
					sn++;
				}
		}
	else do
			{
	 			cout<<"ban da nhap xai vui long nhap lai ";
				cin>>s>>lx>>kv; 
	 		}  while (s<0 || lx<0 || kv<0); 
	while ( s <= kv)
		{
			s=s+(s*lx)/100;
			sn++;
		}
		cout<<"sau "<<sn<<" nam thi ban da nhan duoc so tien la "<<kv<<endl;
		return 0;
}
