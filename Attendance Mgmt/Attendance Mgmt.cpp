#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class all
{
	public:void show()
			{
				system("cls");
				int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132,
					t,t89,t90,t91,t92,t93,t94,t95,t96,t97,t98,t99,t100,t101,t102,t103,t104,t105,t106,t107,t108,t109,t110,t111,t112,t113,t114,t115,t116,t117,t118,t119,t120,t121,t122,t123,t124,t125,t126,t127,t128,t129,t130,t131,t132,
					d,d89,d90,d91,d92,d93,d94,d95,d96,d97,d98,d99,d100,d101,d102,d103,d104,d105,d106,d107,d108,d109,d110,d111,d112,d113,d114,d115,d116,d117,d118,d119,d120,d121,d122,d123,d124,d125,d126,d127,d128,d129,d130,d131,d132,
					e,e89,e90,e91,e92,e93,e94,e95,e96,e97,e98,e99,e100,e101,e102,e103,e104,e105,e106,e107,e108,e109,e110,e111,e112,e113,e114,e115,e116,e117,e118,e119,e120,e121,e122,e123,e124,e125,e126,e127,e128,e129,e130,e131,e132,
					m,m89,m90,m91,m92,m93,m94,m95,m96,m97,m98,m99,m100,m101,m102,m103,m104,m105,m106,m107,m108,m109,m110,m111,m112,m113,m114,m115,m116,m117,m118,m119,m120,m121,m122,m123,m124,m125,m126,m127,m128,m129,m130,m131,m132,
					c,c89,c90,c91,c92,c93,c94,c95,c96,c97,c98,c99,c100,c101,c102,c103,c104,c105,c106,c107,c108,c109,c110,c111,c112,c113,c114,c115,c116,c117,c118,c119,c120,c121,c122,c123,c124,c125,c126,c127,c128,c129,c130,c131,c132;
				ifstream infile_oop("oop.txt");
				infile_oop>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
				ifstream infile_toc("toc.txt");
				infile_toc>>t>>t89>>t90>>t91>>t92>>t93>>t94>>t95>>t96>>t97>>t98>>t99>>t100>>t101>>t102>>t103>>t104>>t105>>t106>>t107>>t108>>t109>>t110>>t111>>t112>>t113>>t114>>t115>>t116>>t117>>t118>>t119>>t120>>t121>>t122>>t123>>t124>>t125>>t126>>t127>>t128>>t129>>t130>>t131>>t132;
				ifstream infile_dl("dl.txt");
				infile_dl>>d>>d89>>d90>>d91>>d92>>d93>>d94>>d95>>d96>>d97>>d98>>d99>>d100>>d101>>d102>>d103>>d104>>d105>>d106>>d107>>d108>>d109>>d110>>d111>>d112>>d113>>d114>>d115>>d116>>d117>>d118>>d119>>d120>>d121>>d122>>d123>>d124>>d125>>d126>>d127>>d128>>d129>>d130>>d131>>d132;
				ifstream infile_em("em.txt");
				infile_em>>e>>e89>>e90>>e91>>e92>>e93>>e94>>e95>>e96>>e97>>e98>>e99>>e100>>e101>>e102>>e103>>e104>>e105>>e106>>e107>>e108>>e109>>e110>>e111>>e112>>e113>>e114>>e115>>e116>>e117>>e118>>e119>>e120>>e121>>e122>>e123>>e124>>e125>>e126>>e127>>e128>>e129>>e130>>e131>>e132;
				ifstream infile_math("math.txt");
				infile_math>>m>>m89>>m90>>m91>>m92>>m93>>m94>>m95>>m96>>m97>>m98>>m99>>m100>>m101>>m102>>m103>>m104>>m105>>m106>>m107>>m108>>m109>>m110>>m111>>m112>>m113>>m114>>m115>>m116>>m117>>m118>>m119>>m120>>m121>>m122>>m123>>m124>>m125>>m126>>m127>>m128>>m129>>m130>>m131>>m132;
				ifstream infile_ect("ect.txt");
				infile_ect>>c>>c89>>c90>>c91>>c92>>c93>>c94>>c95>>c96>>c97>>c98>>c99>>c100>>c101>>c102>>c103>>c104>>c105>>c106>>c107>>c108>>c109>>c110>>c111>>c112>>c113>>c114>>c115>>c116>>c117>>c118>>c119>>c120>>c121>>c122>>c123>>c124>>c125>>c126>>c127>>c128>>c129>>c130>>c131>>c132;
				cout<<setw(75)<<"Kantipur"<<" Engineering"<<" College"<<endl<<endl;
				cout<<setw(90)<<"Attendance Report"<<endl<<endl;
				cout<<setw(70)<<"Class: BCT C"<<setw(40)<<" Class Teacher: Kobid Karki"<<endl<<endl;
				cout<<setw(20)<<"Subjects"<<setw(20)<<"C++ Programming"<<setw(29)<<"Theory Of Computation"<<setw(20)<<"Digital Logic"<<setw(25)<<"Electromagnetics"<<setw(21)<<"Mathematics"<<setw(30)<<"Electric Circuit Theory"<<endl;
				cout<<"Roll "<<endl;
				cout<<setw(14)<<"Name"<<setw(16)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<endl;
				cout<<"89.   "<<"Aakriti Ghimire";
				cout<<setw(6)<<o<<setw(5)<<o89<<setw(9)<<(int)(o89*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t89<<setw(7)<<setw(9)<<(int)(t89*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d89<<setw(7)<<setw(9)<<(int)(d89*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e89<<setw(7)<<setw(9)<<(int)(e89*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m89<<setw(7)<<setw(9)<<(int)(m89*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c89<<setw(7)<<setw(9)<<(int)(c89*100/c)<<"%"<<endl;
				cout<<"90.   "<<"Abhishek Roy";
				cout<<setw(9)<<o<<setw(5)<<o90<<setw(9)<<(int)(o90*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t90<<setw(7)<<setw(9)<<(int)(t90*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d90<<setw(7)<<setw(9)<<(int)(d90*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e90<<setw(7)<<setw(9)<<(int)(e90*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m90<<setw(7)<<setw(9)<<(int)(m90*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c90<<setw(7)<<setw(9)<<(int)(c90*100/c)<<"%"<<endl;
				cout<<"91.   "<<"Ablok Man Shakya";
				cout<<setw(5)<<o<<setw(5)<<o91<<setw(9)<<(int)(o91*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t91<<setw(7)<<setw(9)<<(int)(t91*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d91<<setw(7)<<setw(9)<<(int)(d91*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e91<<setw(7)<<setw(9)<<(int)(e91*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m91<<setw(7)<<setw(9)<<(int)(m91*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c91<<setw(7)<<setw(9)<<(int)(c91*100/c)<<"%"<<endl;
				cout<<"92.   "<<"Alisha Maharjan";
				cout<<setw(6)<<o<<setw(5)<<o92<<setw(9)<<(int)(o92*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t92<<setw(7)<<setw(9)<<(int)(t92*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d92<<setw(7)<<setw(9)<<(int)(d92*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e92<<setw(7)<<setw(9)<<(int)(e92*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m92<<setw(7)<<setw(9)<<(int)(m92*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c92<<setw(7)<<setw(9)<<(int)(c92*100/c)<<"%"<<endl;
				cout<<"93.   "<<"Amrit Giri";
				cout<<setw(11)<<o<<setw(5)<<o93<<setw(9)<<(int)(o93*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t93<<setw(7)<<setw(9)<<(int)(t93*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d93<<setw(7)<<setw(9)<<(int)(d93*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e93<<setw(7)<<setw(9)<<(int)(e93*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m93<<setw(7)<<setw(9)<<(int)(m93*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c93<<setw(7)<<setw(9)<<(int)(c93*100/c)<<"%"<<endl;
				cout<<"94.   "<<"Anuj Shrestha";
				cout<<setw(8)<<o<<setw(5)<<o94<<setw(9)<<(int)(o94*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t94<<setw(7)<<setw(9)<<(int)(t94*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d94<<setw(7)<<setw(9)<<(int)(d94*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e94<<setw(7)<<setw(9)<<(int)(e94*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m94<<setw(7)<<setw(9)<<(int)(m94*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c94<<setw(7)<<setw(9)<<(int)(c94*100/c)<<"%"<<endl;
				cout<<"95.   "<<"Ashmita Maharjan";
				cout<<setw(5)<<o<<setw(5)<<o95<<setw(9)<<(int)(o95*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t95<<setw(7)<<setw(9)<<(int)(t95*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d95<<setw(7)<<setw(9)<<(int)(d95*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e95<<setw(7)<<setw(9)<<(int)(e95*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m95<<setw(7)<<setw(9)<<(int)(m95*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c95<<setw(7)<<setw(9)<<(int)(c95*100/c)<<"%"<<endl;
				cout<<"96.   "<<"Ayush Thapa";
				cout<<setw(10)<<o<<setw(5)<<o96<<setw(9)<<(int)(o96*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t96<<setw(7)<<setw(9)<<(int)(t96*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d96<<setw(7)<<setw(9)<<(int)(d96*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e96<<setw(7)<<setw(9)<<(int)(e96*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m96<<setw(7)<<setw(9)<<(int)(m96*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c96<<setw(7)<<setw(9)<<(int)(c96*100/c)<<"%"<<endl;
				cout<<"97.   "<<"Bibesh Shrestha";
				cout<<setw(6)<<o<<setw(5)<<o97<<setw(9)<<(int)(o97*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t97<<setw(7)<<setw(9)<<(int)(t97*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d97<<setw(7)<<setw(9)<<(int)(d97*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e97<<setw(7)<<setw(9)<<(int)(e97*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m97<<setw(7)<<setw(9)<<(int)(m97*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c97<<setw(7)<<setw(9)<<(int)(c97*100/c)<<"%"<<endl;
				cout<<"98.   "<<"Bikash Thapa";
				cout<<setw(9)<<o<<setw(5)<<o98<<setw(9)<<(int)(o98*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t98<<setw(7)<<setw(9)<<(int)(t98*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d98<<setw(7)<<setw(9)<<(int)(d98*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e98<<setw(7)<<setw(9)<<(int)(e98*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m98<<setw(7)<<setw(9)<<(int)(m98*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c98<<setw(7)<<setw(9)<<(int)(c98*100/c)<<"%"<<endl;
				cout<<"99.   "<<"Binod Neupane";
				cout<<setw(8)<<o<<setw(5)<<o99<<setw(9)<<(int)(o99*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t99<<setw(7)<<setw(9)<<(int)(t99*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d99<<setw(7)<<setw(9)<<(int)(d99*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e99<<setw(7)<<setw(9)<<(int)(e99*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m99<<setw(7)<<setw(9)<<(int)(m99*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c99<<setw(7)<<setw(9)<<(int)(c99*100/c)<<"%"<<endl;
				cout<<"100.  "<<"Binod Wosti";
				cout<<setw(10)<<o<<setw(5)<<o100<<setw(9)<<(int)(o100*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t100<<setw(7)<<setw(9)<<(int)(t100*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d100<<setw(7)<<setw(9)<<(int)(d100*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e100<<setw(7)<<setw(9)<<(int)(e100*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m100<<setw(7)<<setw(9)<<(int)(m100*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c100<<setw(7)<<setw(9)<<(int)(c100*100/c)<<"%"<<endl;
				cout<<"101.  "<<"Clain Maharjan";
				cout<<setw(7)<<o<<setw(5)<<o101<<setw(9)<<(int)(o101*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t101<<setw(7)<<setw(9)<<(int)(t101*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d101<<setw(7)<<setw(9)<<(int)(d101*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e101<<setw(7)<<setw(9)<<(int)(e101*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m101<<setw(7)<<setw(9)<<(int)(m101*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c101<<setw(7)<<setw(9)<<(int)(c101*100/c)<<"%"<<endl;
				cout<<"102.  "<<"Dev Adhikari";
				cout<<setw(9)<<o<<setw(5)<<o102<<setw(9)<<(int)(o102*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t102<<setw(7)<<setw(9)<<(int)(t102*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d102<<setw(7)<<setw(9)<<(int)(d102*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e102<<setw(7)<<setw(9)<<(int)(e102*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m102<<setw(7)<<setw(9)<<(int)(m102*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c102<<setw(7)<<setw(9)<<(int)(c102*100/c)<<"%"<<endl;
				cout<<"103.  "<<"Dilip Khadka";
				cout<<setw(9)<<o<<setw(5)<<o103<<setw(9)<<(int)(o103*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t103<<setw(7)<<setw(9)<<(int)(t103*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d103<<setw(7)<<setw(9)<<(int)(d103*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e103<<setw(7)<<setw(9)<<(int)(e103*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m103<<setw(7)<<setw(9)<<(int)(m103*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c103<<setw(7)<<setw(9)<<(int)(c103*100/c)<<"%"<<endl;
				cout<<"104.  "<<"Anisha Dahal";
				cout<<setw(9)<<o<<setw(5)<<o104<<setw(9)<<(int)(o104*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t104<<setw(7)<<setw(9)<<(int)(t104*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d104<<setw(7)<<setw(9)<<(int)(d104*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e104<<setw(7)<<setw(9)<<(int)(e104*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m104<<setw(7)<<setw(9)<<(int)(m104*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c104<<setw(7)<<setw(9)<<(int)(c104*100/c)<<"%"<<endl;
				cout<<"105.  "<<"Kripendra Dahal";
				cout<<setw(6)<<o<<setw(5)<<o105<<setw(9)<<(int)(o105*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t105<<setw(7)<<setw(9)<<(int)(t105*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d105<<setw(7)<<setw(9)<<(int)(d105*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e105<<setw(7)<<setw(9)<<(int)(e105*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m105<<setw(7)<<setw(9)<<(int)(m105*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c105<<setw(7)<<setw(9)<<(int)(c105*100/c)<<"%"<<endl;
				cout<<"106.  "<<"Kritika Rajbhandari";
				cout<<setw(2)<<o<<setw(5)<<o106<<setw(9)<<(int)(o106*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t106<<setw(7)<<setw(9)<<(int)(t106*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d106<<setw(7)<<setw(9)<<(int)(d106*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e106<<setw(7)<<setw(9)<<(int)(e106*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m106<<setw(7)<<setw(9)<<(int)(m106*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c106<<setw(7)<<setw(9)<<(int)(c106*100/c)<<"%"<<endl;
				cout<<"107.  "<<"Lakesh Shrestha";
				cout<<setw(6)<<o<<setw(5)<<o107<<setw(9)<<(int)(o107*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t107<<setw(7)<<setw(9)<<(int)(t107*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d107<<setw(7)<<setw(9)<<(int)(d107*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e107<<setw(7)<<setw(9)<<(int)(e107*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m107<<setw(7)<<setw(9)<<(int)(m107*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c107<<setw(7)<<setw(9)<<(int)(c107*100/c)<<"%"<<endl;
				cout<<"108.  "<<"Mandip Giri";
				cout<<setw(10)<<o<<setw(5)<<o108<<setw(9)<<(int)(o108*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t108<<setw(7)<<setw(9)<<(int)(t108*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d108<<setw(7)<<setw(9)<<(int)(d108*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e108<<setw(7)<<setw(9)<<(int)(e108*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m108<<setw(7)<<setw(9)<<(int)(m108*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c108<<setw(7)<<setw(9)<<(int)(c108*100/c)<<"%"<<endl;
				cout<<"109.  "<<"Paritosh Ghimire";
				cout<<setw(5)<<o<<setw(5)<<o109<<setw(9)<<(int)(o109*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t109<<setw(7)<<setw(9)<<(int)(t109*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d109<<setw(7)<<setw(9)<<(int)(d109*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e109<<setw(7)<<setw(9)<<(int)(e109*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m109<<setw(7)<<setw(9)<<(int)(m109*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c109<<setw(7)<<setw(9)<<(int)(c109*100/c)<<"%"<<endl;
				cout<<"110.  "<<"Prashant Barahi";
				cout<<setw(6)<<o<<setw(5)<<o110<<setw(9)<<(int)(o110*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t110<<setw(7)<<setw(9)<<(int)(t110*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d110<<setw(7)<<setw(9)<<(int)(d110*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e110<<setw(7)<<setw(9)<<(int)(e110*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m110<<setw(7)<<setw(9)<<(int)(m110*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c110<<setw(7)<<setw(9)<<(int)(c110*100/c)<<"%"<<endl;
				cout<<"111.  "<<"Prashish Maharjan";
				cout<<setw(4)<<o<<setw(5)<<o111<<setw(9)<<(int)(o111*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t111<<setw(7)<<setw(9)<<(int)(t111*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d111<<setw(7)<<setw(9)<<(int)(d111*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e111<<setw(7)<<setw(9)<<(int)(e111*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m111<<setw(7)<<setw(9)<<(int)(m111*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c111<<setw(7)<<setw(9)<<(int)(c111*100/c)<<"%"<<endl;
				cout<<"112.  "<<"Prashish Pandey";
				cout<<setw(6)<<o<<setw(5)<<o112<<setw(9)<<(int)(o112*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t112<<setw(7)<<setw(9)<<(int)(t112*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d112<<setw(7)<<setw(9)<<(int)(d112*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e112<<setw(7)<<setw(9)<<(int)(e112*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m112<<setw(7)<<setw(9)<<(int)(m112*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c112<<setw(7)<<setw(9)<<(int)(c112*100/c)<<"%"<<endl;
				cout<<"113.  "<<"Pravesh Chapagain";
				cout<<setw(4)<<o<<setw(5)<<o113<<setw(9)<<(int)(o113*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t113<<setw(7)<<setw(9)<<(int)(t113*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d113<<setw(7)<<setw(9)<<(int)(d113*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e113<<setw(7)<<setw(9)<<(int)(e113*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m113<<setw(7)<<setw(9)<<(int)(m113*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c113<<setw(7)<<setw(9)<<(int)(c113*100/c)<<"%"<<endl;
				cout<<"114.  "<<"Pushkar Ghimire";
				cout<<setw(6)<<o<<setw(5)<<o114<<setw(9)<<(int)(o114*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t114<<setw(7)<<setw(9)<<(int)(t114*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d114<<setw(7)<<setw(9)<<(int)(d114*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e114<<setw(7)<<setw(9)<<(int)(e114*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m114<<setw(7)<<setw(9)<<(int)(m114*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c114<<setw(7)<<setw(9)<<(int)(c114*100/c)<<"%"<<endl;
				cout<<"115.  "<<"Rabins Paudel";
				cout<<setw(8)<<o<<setw(5)<<o115<<setw(9)<<(int)(o115*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t115<<setw(7)<<setw(9)<<(int)(t115*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d115<<setw(7)<<setw(9)<<(int)(d115*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e115<<setw(7)<<setw(9)<<(int)(e115*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m115<<setw(7)<<setw(9)<<(int)(m115*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c115<<setw(7)<<setw(9)<<(int)(c115*100/c)<<"%"<<endl;
				cout<<"116.  "<<"Rijan Thapa";
				cout<<setw(10)<<o<<setw(5)<<o116<<setw(9)<<(int)(o116*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t116<<setw(7)<<setw(9)<<(int)(t116*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d116<<setw(7)<<setw(9)<<(int)(d116*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e116<<setw(7)<<setw(9)<<(int)(e116*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m116<<setw(7)<<setw(9)<<(int)(m116*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c116<<setw(7)<<setw(9)<<(int)(c116*100/c)<<"%"<<endl;
				cout<<"117.  "<<"Ritendra Dahal";
				cout<<setw(7)<<o<<setw(5)<<o117<<setw(9)<<(int)(o117*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t117<<setw(7)<<setw(9)<<(int)(t117*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d117<<setw(7)<<setw(9)<<(int)(d117*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e117<<setw(7)<<setw(9)<<(int)(e117*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m117<<setw(7)<<setw(9)<<(int)(m117*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c117<<setw(7)<<setw(9)<<(int)(c117*100/c)<<"%"<<endl;
				cout<<"118.  "<<"Rojan Shrestha";
				cout<<setw(7)<<o<<setw(5)<<o118<<setw(9)<<(int)(o118*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t118<<setw(7)<<setw(9)<<(int)(t118*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d118<<setw(7)<<setw(9)<<(int)(d118*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e118<<setw(7)<<setw(9)<<(int)(e118*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m118<<setw(7)<<setw(9)<<(int)(m118*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c118<<setw(7)<<setw(9)<<(int)(c118*100/c)<<"%"<<endl;
				cout<<"119.  "<<"Sahan Awale";
				cout<<setw(10)<<o<<setw(5)<<o119<<setw(9)<<(int)(o119*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t119<<setw(7)<<setw(9)<<(int)(t119*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d119<<setw(7)<<setw(9)<<(int)(d119*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e119<<setw(7)<<setw(9)<<(int)(e119*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m119<<setw(7)<<setw(9)<<(int)(m119*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c119<<setw(7)<<setw(9)<<(int)(c119*100/c)<<"%"<<endl;
				cout<<"120.  "<<"Sangharsha Dhital";
				cout<<setw(4)<<o<<setw(5)<<o120<<setw(9)<<(int)(o120*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t120<<setw(7)<<setw(9)<<(int)(t120*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d120<<setw(7)<<setw(9)<<(int)(d120*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e120<<setw(7)<<setw(9)<<(int)(e120*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m120<<setw(7)<<setw(9)<<(int)(m120*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c120<<setw(7)<<setw(9)<<(int)(c120*100/c)<<"%"<<endl;
				cout<<"121.  "<<"Sanish Karki";
				cout<<setw(9)<<o<<setw(5)<<o121<<setw(9)<<(int)(o121*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t121<<setw(7)<<setw(9)<<(int)(t121*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d121<<setw(7)<<setw(9)<<(int)(d121*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e121<<setw(7)<<setw(9)<<(int)(e121*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m121<<setw(7)<<setw(9)<<(int)(m121*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c121<<setw(7)<<setw(9)<<(int)(c121*100/c)<<"%"<<endl;
				cout<<"122.  "<<"Sanjay Maharjan";
				cout<<setw(6)<<o<<setw(5)<<o122<<setw(9)<<(int)(o122*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t122<<setw(7)<<setw(9)<<(int)(t122*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d122<<setw(7)<<setw(9)<<(int)(d122*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e122<<setw(7)<<setw(9)<<(int)(e122*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m122<<setw(7)<<setw(9)<<(int)(m122*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c122<<setw(7)<<setw(9)<<(int)(c122*100/c)<<"%"<<endl;
				cout<<"123.  "<<"Satomi Mulmi";
				cout<<setw(9)<<o<<setw(5)<<o123<<setw(9)<<(int)(o123*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t123<<setw(7)<<setw(9)<<(int)(t123*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d123<<setw(7)<<setw(9)<<(int)(d123*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e123<<setw(7)<<setw(9)<<(int)(e123*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m123<<setw(7)<<setw(9)<<(int)(m123*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c123<<setw(7)<<setw(9)<<(int)(c123*100/c)<<"%"<<endl;
				cout<<"124.  "<<"Saurav Giri";
				cout<<setw(10)<<o<<setw(5)<<o124<<setw(9)<<(int)(o124*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t124<<setw(7)<<setw(9)<<(int)(t124*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d124<<setw(7)<<setw(9)<<(int)(d124*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e124<<setw(7)<<setw(9)<<(int)(e124*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m124<<setw(7)<<setw(9)<<(int)(m124*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c124<<setw(7)<<setw(9)<<(int)(c124*100/c)<<"%"<<endl;
				cout<<"125.  "<<"Savin Bhandari";
				cout<<setw(7)<<o<<setw(5)<<o125<<setw(9)<<(int)(o125*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t125<<setw(7)<<setw(9)<<(int)(t125*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d125<<setw(7)<<setw(9)<<(int)(d125*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e125<<setw(7)<<setw(9)<<(int)(e125*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m125<<setw(7)<<setw(9)<<(int)(m125*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c125<<setw(7)<<setw(9)<<(int)(c125*100/c)<<"%"<<endl;
				cout<<"126.  "<<"Sudeep Rijal";
				cout<<setw(9)<<o<<setw(5)<<o126<<setw(9)<<(int)(o126*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t126<<setw(7)<<setw(9)<<(int)(t126*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d126<<setw(7)<<setw(9)<<(int)(d126*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e126<<setw(7)<<setw(9)<<(int)(e126*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m126<<setw(7)<<setw(9)<<(int)(m126*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c126<<setw(7)<<setw(9)<<(int)(c126*100/c)<<"%"<<endl;
				cout<<"127.  "<<"Sudip Chetri";
				cout<<setw(9)<<o<<setw(5)<<o127<<setw(9)<<(int)(o127*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t127<<setw(7)<<setw(9)<<(int)(t127*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d127<<setw(7)<<setw(9)<<(int)(d127*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e127<<setw(7)<<setw(9)<<(int)(e127*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m127<<setw(7)<<setw(9)<<(int)(m127*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c127<<setw(7)<<setw(9)<<(int)(c127*100/c)<<"%"<<endl;
				cout<<"128.  "<<"Sumit Pradhan";
				cout<<setw(8)<<o<<setw(5)<<o128<<setw(9)<<(int)(o128*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t128<<setw(7)<<setw(9)<<(int)(t128*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d128<<setw(7)<<setw(9)<<(int)(d128*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e128<<setw(7)<<setw(9)<<(int)(e128*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m128<<setw(7)<<setw(9)<<(int)(m128*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c128<<setw(7)<<setw(9)<<(int)(c128*100/c)<<"%"<<endl;
				cout<<"129.  "<<"Suraj Maharjan";
				cout<<setw(7)<<o<<setw(5)<<o129<<setw(9)<<(int)(o129*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t129<<setw(7)<<setw(9)<<(int)(t129*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d129<<setw(7)<<setw(9)<<(int)(d129*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e129<<setw(7)<<setw(9)<<(int)(e129*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m129<<setw(7)<<setw(9)<<(int)(m129*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c129<<setw(7)<<setw(9)<<(int)(c129*100/c)<<"%"<<endl;
				cout<<"130.  "<<"Sushan Raj Shakya";
				cout<<setw(4)<<o<<setw(5)<<o130<<setw(9)<<(int)(o130*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t130<<setw(7)<<setw(9)<<(int)(t130*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d130<<setw(7)<<setw(9)<<(int)(d130*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e130<<setw(7)<<setw(9)<<(int)(e130*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m130<<setw(7)<<setw(9)<<(int)(m130*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c130<<setw(7)<<setw(9)<<(int)(c130*100/c)<<"%"<<endl;
				cout<<"131.  "<<"Sushil Shrestha";
				cout<<setw(6)<<o<<setw(5)<<o131<<setw(9)<<(int)(o131*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t131<<setw(7)<<setw(9)<<(int)(t131*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d131<<setw(7)<<setw(9)<<(int)(d131*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e131<<setw(7)<<setw(9)<<(int)(e131*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m131<<setw(7)<<setw(9)<<(int)(m131*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c131<<setw(7)<<setw(9)<<(int)(c131*100/c)<<"%"<<endl;
				cout<<"132.  "<<"Swapnil Karki";
				cout<<setw(8)<<o<<setw(5)<<o132<<setw(9)<<(int)(o132*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t132<<setw(7)<<setw(9)<<(int)(t132*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d132<<setw(7)<<setw(9)<<(int)(d132*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e132<<setw(7)<<setw(9)<<(int)(e132*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m132<<setw(7)<<setw(9)<<(int)(m132*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c132<<setw(7)<<setw(9)<<(int)(c132*100/c)<<"%"<<endl;
				cout<<endl<<endl<<setw(150)<<"WD: Working Days, DP: Days Present";
			}
};
class individual
{
	public:void show()
			{
				int r;
				int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132,
					t,t89,t90,t91,t92,t93,t94,t95,t96,t97,t98,t99,t100,t101,t102,t103,t104,t105,t106,t107,t108,t109,t110,t111,t112,t113,t114,t115,t116,t117,t118,t119,t120,t121,t122,t123,t124,t125,t126,t127,t128,t129,t130,t131,t132,
					d,d89,d90,d91,d92,d93,d94,d95,d96,d97,d98,d99,d100,d101,d102,d103,d104,d105,d106,d107,d108,d109,d110,d111,d112,d113,d114,d115,d116,d117,d118,d119,d120,d121,d122,d123,d124,d125,d126,d127,d128,d129,d130,d131,d132,
					e,e89,e90,e91,e92,e93,e94,e95,e96,e97,e98,e99,e100,e101,e102,e103,e104,e105,e106,e107,e108,e109,e110,e111,e112,e113,e114,e115,e116,e117,e118,e119,e120,e121,e122,e123,e124,e125,e126,e127,e128,e129,e130,e131,e132,
					m,m89,m90,m91,m92,m93,m94,m95,m96,m97,m98,m99,m100,m101,m102,m103,m104,m105,m106,m107,m108,m109,m110,m111,m112,m113,m114,m115,m116,m117,m118,m119,m120,m121,m122,m123,m124,m125,m126,m127,m128,m129,m130,m131,m132,
					c,c89,c90,c91,c92,c93,c94,c95,c96,c97,c98,c99,c100,c101,c102,c103,c104,c105,c106,c107,c108,c109,c110,c111,c112,c113,c114,c115,c116,c117,c118,c119,c120,c121,c122,c123,c124,c125,c126,c127,c128,c129,c130,c131,c132;
				ifstream infile_oop("oop.txt");
				infile_oop>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
				ifstream infile_toc("toc.txt");
				infile_toc>>t>>t89>>t90>>t91>>t92>>t93>>t94>>t95>>t96>>t97>>t98>>t99>>t100>>t101>>t102>>t103>>t104>>t105>>t106>>t107>>t108>>t109>>t110>>t111>>t112>>t113>>t114>>t115>>t116>>t117>>t118>>t119>>t120>>t121>>t122>>t123>>t124>>t125>>t126>>t127>>t128>>t129>>t130>>t131>>t132;
				ifstream infile_dl("dl.txt");
				infile_dl>>d>>d89>>d90>>d91>>d92>>d93>>d94>>d95>>d96>>d97>>d98>>d99>>d100>>d101>>d102>>d103>>d104>>d105>>d106>>d107>>d108>>d109>>d110>>d111>>d112>>d113>>d114>>d115>>d116>>d117>>d118>>d119>>d120>>d121>>d122>>d123>>d124>>d125>>d126>>d127>>d128>>d129>>d130>>d131>>d132;
				ifstream infile_em("em.txt");
				infile_em>>e>>e89>>e90>>e91>>e92>>e93>>e94>>e95>>e96>>e97>>e98>>e99>>e100>>e101>>e102>>e103>>e104>>e105>>e106>>e107>>e108>>e109>>e110>>e111>>e112>>e113>>e114>>e115>>e116>>e117>>e118>>e119>>e120>>e121>>e122>>e123>>e124>>e125>>e126>>e127>>e128>>e129>>e130>>e131>>e132;
				ifstream infile_math("math.txt");
				infile_math>>m>>m89>>m90>>m91>>m92>>m93>>m94>>m95>>m96>>m97>>m98>>m99>>m100>>m101>>m102>>m103>>m104>>m105>>m106>>m107>>m108>>m109>>m110>>m111>>m112>>m113>>m114>>m115>>m116>>m117>>m118>>m119>>m120>>m121>>m122>>m123>>m124>>m125>>m126>>m127>>m128>>m129>>m130>>m131>>m132;
				ifstream infile_ect("ect.txt");
				infile_ect>>c>>c89>>c90>>c91>>c92>>c93>>c94>>c95>>c96>>c97>>c98>>c99>>c100>>c101>>c102>>c103>>c104>>c105>>c106>>c107>>c108>>c109>>c110>>c111>>c112>>c113>>c114>>c115>>c116>>c117>>c118>>c119>>c120>>c121>>c122>>c123>>c124>>c125>>c126>>c127>>c128>>c129>>c130>>c131>>c132;
				cout<<"Enter the roll number of the student."<<endl;
				cin>>r;
				system("cls");
				cout<<setw(75)<<"Kantipur"<<" Engineering"<<" College"<<endl<<endl;
				cout<<setw(90)<<"Attendance Report"<<endl<<endl;
				cout<<setw(70)<<"Class: BCT C"<<setw(40)<<" Class Teacher: Kobid Karki"<<endl<<endl<<endl<<endl<<endl<<endl;
				cout<<setw(20)<<"Subjects"<<setw(20)<<"C++ Programming"<<setw(29)<<"Theory Of Computation"<<setw(20)<<"Digital Logic"<<setw(25)<<"Electromagnetics"<<setw(21)<<"Mathematics"<<setw(30)<<"Electric Circuit Theory"<<endl;
				cout<<"Roll "<<endl;
				cout<<setw(14)<<"Name"<<setw(16)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<setw(12)<<"WD   "<<"DP   "<<"Percent"<<endl;
				if(r==89)
				{
				cout<<"89.   "<<"Aakriti Ghimire";
				cout<<setw(6)<<o<<setw(5)<<o89<<setw(9)<<(int)(o89*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t89<<setw(7)<<setw(9)<<(int)(t89*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d89<<setw(7)<<setw(9)<<(int)(d89*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e89<<setw(7)<<setw(9)<<(int)(e89*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m89<<setw(7)<<setw(9)<<(int)(m89*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c89<<setw(7)<<setw(9)<<(int)(c89*100/c)<<"%"<<endl;}
				if(r==91)
				{cout<<"90.   "<<"Abhishek Roy";
				cout<<setw(9)<<o<<setw(5)<<o90<<setw(9)<<(int)(o90*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t90<<setw(7)<<setw(9)<<(int)(t90*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d90<<setw(7)<<setw(9)<<(int)(d90*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e90<<setw(7)<<setw(9)<<(int)(e90*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m90<<setw(7)<<setw(9)<<(int)(m90*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c90<<setw(7)<<setw(9)<<(int)(c90*100/c)<<"%"<<endl;}
				if(r==91)
				{cout<<"91.   "<<"Ablok Man Shakya";
				cout<<setw(5)<<o<<setw(5)<<o91<<setw(9)<<(int)(o91*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t91<<setw(7)<<setw(9)<<(int)(t91*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d91<<setw(7)<<setw(9)<<(int)(d91*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e91<<setw(7)<<setw(9)<<(int)(e91*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m91<<setw(7)<<setw(9)<<(int)(m91*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c91<<setw(7)<<setw(9)<<(int)(c91*100/c)<<"%"<<endl;}
				if(r==92)
				{cout<<"92.   "<<"Alisha Maharjan";
				cout<<setw(6)<<o<<setw(5)<<o92<<setw(9)<<(int)(o92*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t92<<setw(7)<<setw(9)<<(int)(t92*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d92<<setw(7)<<setw(9)<<(int)(d92*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e92<<setw(7)<<setw(9)<<(int)(e92*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m92<<setw(7)<<setw(9)<<(int)(m92*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c92<<setw(7)<<setw(9)<<(int)(c92*100/c)<<"%"<<endl;}
				if(r==93)
				{cout<<"93.   "<<"Amrit Giri";
				cout<<setw(11)<<o<<setw(5)<<o93<<setw(9)<<(int)(o93*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t93<<setw(7)<<setw(9)<<(int)(t93*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d93<<setw(7)<<setw(9)<<(int)(d93*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e93<<setw(7)<<setw(9)<<(int)(e93*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m93<<setw(7)<<setw(9)<<(int)(m93*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c93<<setw(7)<<setw(9)<<(int)(c93*100/c)<<"%"<<endl;}
				if(r==94)
				{cout<<"94.   "<<"Anuj Shrestha";
				cout<<setw(8)<<o<<setw(5)<<o94<<setw(9)<<(int)(o94*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t94<<setw(7)<<setw(9)<<(int)(t94*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d94<<setw(7)<<setw(9)<<(int)(d94*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e94<<setw(7)<<setw(9)<<(int)(e94*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m94<<setw(7)<<setw(9)<<(int)(m94*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c94<<setw(7)<<setw(9)<<(int)(c94*100/c)<<"%"<<endl;}
				if(r==95)
				{cout<<"95.   "<<"Ashmita Maharjan";
				cout<<setw(5)<<o<<setw(5)<<o95<<setw(9)<<(int)(o95*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t95<<setw(7)<<setw(9)<<(int)(t95*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d95<<setw(7)<<setw(9)<<(int)(d95*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e95<<setw(7)<<setw(9)<<(int)(e95*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m95<<setw(7)<<setw(9)<<(int)(m95*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c95<<setw(7)<<setw(9)<<(int)(c95*100/c)<<"%"<<endl;}
				if(r==96)
				{cout<<"96.   "<<"Ayush Thapa";
				cout<<setw(10)<<o<<setw(5)<<o96<<setw(9)<<(int)(o96*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t96<<setw(7)<<setw(9)<<(int)(t96*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d96<<setw(7)<<setw(9)<<(int)(d96*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e96<<setw(7)<<setw(9)<<(int)(e96*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m96<<setw(7)<<setw(9)<<(int)(m96*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c96<<setw(7)<<setw(9)<<(int)(c96*100/c)<<"%"<<endl;}
				if(r==97)
				{cout<<"97.   "<<"Bibesh Shrestha";
				cout<<setw(6)<<o<<setw(5)<<o97<<setw(9)<<(int)(o97*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t97<<setw(7)<<setw(9)<<(int)(t97*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d97<<setw(7)<<setw(9)<<(int)(d97*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e97<<setw(7)<<setw(9)<<(int)(e97*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m97<<setw(7)<<setw(9)<<(int)(m97*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c97<<setw(7)<<setw(9)<<(int)(c97*100/c)<<"%"<<endl;}
				if(r==98)
				{cout<<"98.   "<<"Bikash Thapa";
				cout<<setw(9)<<o<<setw(5)<<o98<<setw(9)<<(int)(o98*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t98<<setw(7)<<setw(9)<<(int)(t98*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d98<<setw(7)<<setw(9)<<(int)(d98*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e98<<setw(7)<<setw(9)<<(int)(e98*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m98<<setw(7)<<setw(9)<<(int)(m98*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c98<<setw(7)<<setw(9)<<(int)(c98*100/c)<<"%"<<endl;}
				if(r==99)
				{cout<<"99.   "<<"Binod Neupane";
				cout<<setw(8)<<o<<setw(5)<<o99<<setw(9)<<(int)(o99*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t99<<setw(7)<<setw(9)<<(int)(t99*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d99<<setw(7)<<setw(9)<<(int)(d99*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e99<<setw(7)<<setw(9)<<(int)(e99*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m99<<setw(7)<<setw(9)<<(int)(m99*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c99<<setw(7)<<setw(9)<<(int)(c99*100/c)<<"%"<<endl;}
				if(r==100)
				{cout<<"100.  "<<"Binod Wosti";
				cout<<setw(10)<<o<<setw(5)<<o100<<setw(9)<<(int)(o100*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t100<<setw(7)<<setw(9)<<(int)(t100*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d100<<setw(7)<<setw(9)<<(int)(d100*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e100<<setw(7)<<setw(9)<<(int)(e100*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m100<<setw(7)<<setw(9)<<(int)(m100*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c100<<setw(7)<<setw(9)<<(int)(c100*100/c)<<"%"<<endl;}
				if(r==101)
				{cout<<"101.  "<<"Clain Maharjan";
				cout<<setw(7)<<o<<setw(5)<<o101<<setw(9)<<(int)(o101*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t101<<setw(7)<<setw(9)<<(int)(t101*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d101<<setw(7)<<setw(9)<<(int)(d101*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e101<<setw(7)<<setw(9)<<(int)(e101*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m101<<setw(7)<<setw(9)<<(int)(m101*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c101<<setw(7)<<setw(9)<<(int)(c101*100/c)<<"%"<<endl;}
				if(r==102)
				{cout<<"102.  "<<"Dev Adhikari";
				cout<<setw(9)<<o<<setw(5)<<o102<<setw(9)<<(int)(o102*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t102<<setw(7)<<setw(9)<<(int)(t102*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d102<<setw(7)<<setw(9)<<(int)(d102*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e102<<setw(7)<<setw(9)<<(int)(e102*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m102<<setw(7)<<setw(9)<<(int)(m102*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c102<<setw(7)<<setw(9)<<(int)(c102*100/c)<<"%"<<endl;}
				if(r==103)
				{cout<<"103.  "<<"Dilip Khadka";
				cout<<setw(9)<<o<<setw(5)<<o103<<setw(9)<<(int)(o103*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t103<<setw(7)<<setw(9)<<(int)(t103*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d103<<setw(7)<<setw(9)<<(int)(d103*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e103<<setw(7)<<setw(9)<<(int)(e103*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m103<<setw(7)<<setw(9)<<(int)(m103*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c103<<setw(7)<<setw(9)<<(int)(c103*100/c)<<"%"<<endl;}
				if(r==104)
				{cout<<"104.  "<<"Anisha Dahal";
				cout<<setw(9)<<o<<setw(5)<<o104<<setw(9)<<(int)(o104*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t104<<setw(7)<<setw(9)<<(int)(t104*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d104<<setw(7)<<setw(9)<<(int)(d104*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e104<<setw(7)<<setw(9)<<(int)(e104*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m104<<setw(7)<<setw(9)<<(int)(m104*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c104<<setw(7)<<setw(9)<<(int)(c104*100/c)<<"%"<<endl;}
				if(r==105)
				{cout<<"105.  "<<"Kripendra Dahal";
				cout<<setw(6)<<o<<setw(5)<<o105<<setw(9)<<(int)(o105*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t105<<setw(7)<<setw(9)<<(int)(t105*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d105<<setw(7)<<setw(9)<<(int)(d105*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e105<<setw(7)<<setw(9)<<(int)(e105*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m105<<setw(7)<<setw(9)<<(int)(m105*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c105<<setw(7)<<setw(9)<<(int)(c105*100/c)<<"%"<<endl;}
				if(r==106)
				{cout<<"106.  "<<"Kritika Rajbhandari";
				cout<<setw(2)<<o<<setw(5)<<o106<<setw(9)<<(int)(o106*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t106<<setw(7)<<setw(9)<<(int)(t106*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d106<<setw(7)<<setw(9)<<(int)(d106*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e106<<setw(7)<<setw(9)<<(int)(e106*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m106<<setw(7)<<setw(9)<<(int)(m106*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c106<<setw(7)<<setw(9)<<(int)(c106*100/c)<<"%"<<endl;}
				if(r==107)
				{cout<<"107.  "<<"Lakesh Shrestha";
				cout<<setw(6)<<o<<setw(5)<<o107<<setw(9)<<(int)(o107*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t107<<setw(7)<<setw(9)<<(int)(t107*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d107<<setw(7)<<setw(9)<<(int)(d107*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e107<<setw(7)<<setw(9)<<(int)(e107*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m107<<setw(7)<<setw(9)<<(int)(m107*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c107<<setw(7)<<setw(9)<<(int)(c107*100/c)<<"%"<<endl;}
				if(r==108)
				{cout<<"108.  "<<"Mandip Giri";
				cout<<setw(10)<<o<<setw(5)<<o108<<setw(9)<<(int)(o108*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t108<<setw(7)<<setw(9)<<(int)(t108*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d108<<setw(7)<<setw(9)<<(int)(d108*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e108<<setw(7)<<setw(9)<<(int)(e108*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m108<<setw(7)<<setw(9)<<(int)(m108*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c108<<setw(7)<<setw(9)<<(int)(c108*100/c)<<"%"<<endl;}
				if(r==109)
				{cout<<"109.  "<<"Paritosh Ghimire";
				cout<<setw(5)<<o<<setw(5)<<o109<<setw(9)<<(int)(o109*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t109<<setw(7)<<setw(9)<<(int)(t109*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d109<<setw(7)<<setw(9)<<(int)(d109*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e109<<setw(7)<<setw(9)<<(int)(e109*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m109<<setw(7)<<setw(9)<<(int)(m109*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c109<<setw(7)<<setw(9)<<(int)(c109*100/c)<<"%"<<endl;}
				if(r==110)
				{cout<<"110.  "<<"Prashant Barahi";
				cout<<setw(6)<<o<<setw(5)<<o110<<setw(9)<<(int)(o110*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t110<<setw(7)<<setw(9)<<(int)(t110*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d110<<setw(7)<<setw(9)<<(int)(d110*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e110<<setw(7)<<setw(9)<<(int)(e110*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m110<<setw(7)<<setw(9)<<(int)(m110*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c110<<setw(7)<<setw(9)<<(int)(c110*100/c)<<"%"<<endl;}
				if(r==111)
				{cout<<"111.  "<<"Prashish Maharjan";
				cout<<setw(4)<<o<<setw(5)<<o111<<setw(9)<<(int)(o111*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t111<<setw(7)<<setw(9)<<(int)(t111*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d111<<setw(7)<<setw(9)<<(int)(d111*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e111<<setw(7)<<setw(9)<<(int)(e111*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m111<<setw(7)<<setw(9)<<(int)(m111*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c111<<setw(7)<<setw(9)<<(int)(c111*100/c)<<"%"<<endl;}
				if(r==112)
				{cout<<"112.  "<<"Prashish Pandey";
				cout<<setw(6)<<o<<setw(5)<<o112<<setw(9)<<(int)(o112*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t112<<setw(7)<<setw(9)<<(int)(t112*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d112<<setw(7)<<setw(9)<<(int)(d112*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e112<<setw(7)<<setw(9)<<(int)(e112*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m112<<setw(7)<<setw(9)<<(int)(m112*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c112<<setw(7)<<setw(9)<<(int)(c112*100/c)<<"%"<<endl;}
				if(r==113)
				{cout<<"113.  "<<"Pravesh Chapagain";
				cout<<setw(4)<<o<<setw(5)<<o113<<setw(9)<<(int)(o113*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t113<<setw(7)<<setw(9)<<(int)(t113*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d113<<setw(7)<<setw(9)<<(int)(d113*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e113<<setw(7)<<setw(9)<<(int)(e113*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m113<<setw(7)<<setw(9)<<(int)(m113*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c113<<setw(7)<<setw(9)<<(int)(c113*100/c)<<"%"<<endl;}
				if(r==114)
				{cout<<"114.  "<<"Pushkar Ghimire";
				cout<<setw(6)<<o<<setw(5)<<o114<<setw(9)<<(int)(o114*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t114<<setw(7)<<setw(9)<<(int)(t114*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d114<<setw(7)<<setw(9)<<(int)(d114*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e114<<setw(7)<<setw(9)<<(int)(e114*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m114<<setw(7)<<setw(9)<<(int)(m114*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c114<<setw(7)<<setw(9)<<(int)(c114*100/c)<<"%"<<endl;}
				if(r==115)
				{cout<<"115.  "<<"Rabins Paudel";
				cout<<setw(8)<<o<<setw(5)<<o115<<setw(9)<<(int)(o115*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t115<<setw(7)<<setw(9)<<(int)(t115*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d115<<setw(7)<<setw(9)<<(int)(d115*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e115<<setw(7)<<setw(9)<<(int)(e115*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m115<<setw(7)<<setw(9)<<(int)(m115*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c115<<setw(7)<<setw(9)<<(int)(c115*100/c)<<"%"<<endl;}
				if(r==116)
				{cout<<"116.  "<<"Rijan Thapa";
				cout<<setw(10)<<o<<setw(5)<<o116<<setw(9)<<(int)(o116*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t116<<setw(7)<<setw(9)<<(int)(t116*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d116<<setw(7)<<setw(9)<<(int)(d116*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e116<<setw(7)<<setw(9)<<(int)(e116*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m116<<setw(7)<<setw(9)<<(int)(m116*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c116<<setw(7)<<setw(9)<<(int)(c116*100/c)<<"%"<<endl;}
				if(r==117)
				{cout<<"117.  "<<"Ritendra Dahal";
				cout<<setw(7)<<o<<setw(5)<<o117<<setw(9)<<(int)(o117*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t117<<setw(7)<<setw(9)<<(int)(t117*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d117<<setw(7)<<setw(9)<<(int)(d117*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e117<<setw(7)<<setw(9)<<(int)(e117*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m117<<setw(7)<<setw(9)<<(int)(m117*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c117<<setw(7)<<setw(9)<<(int)(c117*100/c)<<"%"<<endl;}
				if(r==118)
				{cout<<"118.  "<<"Rojan Shrestha";
				cout<<setw(7)<<o<<setw(5)<<o118<<setw(9)<<(int)(o118*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t118<<setw(7)<<setw(9)<<(int)(t118*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d118<<setw(7)<<setw(9)<<(int)(d118*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e118<<setw(7)<<setw(9)<<(int)(e118*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m118<<setw(7)<<setw(9)<<(int)(m118*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c118<<setw(7)<<setw(9)<<(int)(c118*100/c)<<"%"<<endl;}
				if(r==119)
				{cout<<"119.  "<<"Sahan Awale";
				cout<<setw(10)<<o<<setw(5)<<o119<<setw(9)<<(int)(o119*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t119<<setw(7)<<setw(9)<<(int)(t119*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d119<<setw(7)<<setw(9)<<(int)(d119*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e119<<setw(7)<<setw(9)<<(int)(e119*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m119<<setw(7)<<setw(9)<<(int)(m119*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c119<<setw(7)<<setw(9)<<(int)(c119*100/c)<<"%"<<endl;}
				if(r==120)
				{cout<<"120.  "<<"Sangharsha Dhital";
				cout<<setw(4)<<o<<setw(5)<<o120<<setw(9)<<(int)(o120*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t120<<setw(7)<<setw(9)<<(int)(t120*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d120<<setw(7)<<setw(9)<<(int)(d120*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e120<<setw(7)<<setw(9)<<(int)(e120*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m120<<setw(7)<<setw(9)<<(int)(m120*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c120<<setw(7)<<setw(9)<<(int)(c120*100/c)<<"%"<<endl;}
				if(r==121)
				{cout<<"121.  "<<"Sanish Karki";
				cout<<setw(9)<<o<<setw(5)<<o121<<setw(9)<<(int)(o121*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t121<<setw(7)<<setw(9)<<(int)(t121*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d121<<setw(7)<<setw(9)<<(int)(d121*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e121<<setw(7)<<setw(9)<<(int)(e121*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m121<<setw(7)<<setw(9)<<(int)(m121*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c121<<setw(7)<<setw(9)<<(int)(c121*100/c)<<"%"<<endl;}
				if(r==122)
				{cout<<"122.  "<<"Sanjay Maharjan";
				cout<<setw(6)<<o<<setw(5)<<o122<<setw(9)<<(int)(o122*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t122<<setw(7)<<setw(9)<<(int)(t122*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d122<<setw(7)<<setw(9)<<(int)(d122*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e122<<setw(7)<<setw(9)<<(int)(e122*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m122<<setw(7)<<setw(9)<<(int)(m122*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c122<<setw(7)<<setw(9)<<(int)(c122*100/c)<<"%"<<endl;}
				if(r==123)
				{cout<<"123.  "<<"Satomi Mulmi";
				cout<<setw(9)<<o<<setw(5)<<o123<<setw(9)<<(int)(o123*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t123<<setw(7)<<setw(9)<<(int)(t123*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d123<<setw(7)<<setw(9)<<(int)(d123*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e123<<setw(7)<<setw(9)<<(int)(e123*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m123<<setw(7)<<setw(9)<<(int)(m123*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c123<<setw(7)<<setw(9)<<(int)(c123*100/c)<<"%"<<endl;}
				if(r==124)
				{cout<<"124.  "<<"Saurav Giri";
				cout<<setw(10)<<o<<setw(5)<<o124<<setw(9)<<(int)(o124*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t124<<setw(7)<<setw(9)<<(int)(t124*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d124<<setw(7)<<setw(9)<<(int)(d124*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e124<<setw(7)<<setw(9)<<(int)(e124*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m124<<setw(7)<<setw(9)<<(int)(m124*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c124<<setw(7)<<setw(9)<<(int)(c124*100/c)<<"%"<<endl;}
				if(r==125)
				{cout<<"125.  "<<"Savin Bhandari";
				cout<<setw(7)<<o<<setw(5)<<o125<<setw(9)<<(int)(o125*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t125<<setw(7)<<setw(9)<<(int)(t125*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d125<<setw(7)<<setw(9)<<(int)(d125*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e125<<setw(7)<<setw(9)<<(int)(e125*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m125<<setw(7)<<setw(9)<<(int)(m125*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c125<<setw(7)<<setw(9)<<(int)(c125*100/c)<<"%"<<endl;}
				if(r==126)
				{cout<<"126.  "<<"Sudeep Rijal";
				cout<<setw(9)<<o<<setw(5)<<o126<<setw(9)<<(int)(o126*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t126<<setw(7)<<setw(9)<<(int)(t126*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d126<<setw(7)<<setw(9)<<(int)(d126*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e126<<setw(7)<<setw(9)<<(int)(e126*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m126<<setw(7)<<setw(9)<<(int)(m126*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c126<<setw(7)<<setw(9)<<(int)(c126*100/c)<<"%"<<endl;}
				if(r==127)
				{cout<<"127.  "<<"Sudip Chetri";
				cout<<setw(9)<<o<<setw(5)<<o127<<setw(9)<<(int)(o127*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t127<<setw(7)<<setw(9)<<(int)(t127*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d127<<setw(7)<<setw(9)<<(int)(d127*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e127<<setw(7)<<setw(9)<<(int)(e127*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m127<<setw(7)<<setw(9)<<(int)(m127*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c127<<setw(7)<<setw(9)<<(int)(c127*100/c)<<"%"<<endl;}
				if(r==128)
				{cout<<"128.  "<<"Sumit Pradhan";
				cout<<setw(8)<<o<<setw(5)<<o128<<setw(9)<<(int)(o128*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t128<<setw(7)<<setw(9)<<(int)(t128*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d128<<setw(7)<<setw(9)<<(int)(d128*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e128<<setw(7)<<setw(9)<<(int)(e128*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m128<<setw(7)<<setw(9)<<(int)(m128*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c128<<setw(7)<<setw(9)<<(int)(c128*100/c)<<"%"<<endl;}
				if(r==129)
				{cout<<"129.  "<<"Suraj Maharjan";
				cout<<setw(7)<<o<<setw(5)<<o129<<setw(9)<<(int)(o129*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t129<<setw(7)<<setw(9)<<(int)(t129*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d129<<setw(7)<<setw(9)<<(int)(d129*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e129<<setw(7)<<setw(9)<<(int)(e129*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m129<<setw(7)<<setw(9)<<(int)(m129*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c129<<setw(7)<<setw(9)<<(int)(c129*100/c)<<"%"<<endl;}
				if(r==130)
				{cout<<"130.  "<<"Sushan Raj Shakya";
				cout<<setw(4)<<o<<setw(5)<<o130<<setw(9)<<(int)(o130*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t130<<setw(7)<<setw(9)<<(int)(t130*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d130<<setw(7)<<setw(9)<<(int)(d130*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e130<<setw(7)<<setw(9)<<(int)(e130*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m130<<setw(7)<<setw(9)<<(int)(m130*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c130<<setw(7)<<setw(9)<<(int)(c130*100/c)<<"%"<<endl;}
				if(r==131)
				{cout<<"131.  "<<"Sushil Shrestha";
				cout<<setw(6)<<o<<setw(5)<<o131<<setw(9)<<(int)(o131*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t131<<setw(7)<<setw(9)<<(int)(t131*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d131<<setw(7)<<setw(9)<<(int)(d131*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e131<<setw(7)<<setw(9)<<(int)(e131*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m131<<setw(7)<<setw(9)<<(int)(m131*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c131<<setw(7)<<setw(9)<<(int)(c131*100/c)<<"%"<<endl;}
				if(r==132)
				{cout<<"132.  "<<"Swapnil Karki";
				cout<<setw(8)<<o<<setw(5)<<o132<<setw(9)<<(int)(o132*100/o)<<"%";
				cout<<setw(9)<<t<<setw(5)<<t132<<setw(7)<<setw(9)<<(int)(t132*100/t)<<"%";
				cout<<setw(9)<<d<<setw(5)<<d132<<setw(7)<<setw(9)<<(int)(d132*100/d)<<"%";
				cout<<setw(9)<<e<<setw(5)<<e132<<setw(7)<<setw(9)<<(int)(e132*100/e)<<"%";
				cout<<setw(9)<<m<<setw(5)<<m132<<setw(7)<<setw(9)<<(int)(m132*100/m)<<"%";
				cout<<setw(9)<<c<<setw(5)<<c132<<setw(7)<<setw(9)<<(int)(c132*100/c)<<"%"<<endl;}
				cout<<endl<<endl<<setw(150)<<"WD: Working Days, DP: Days Present";
			}
};
class oop
{
	private: string date;
			 static int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132;
	public:        void process1(string str)
					{
						ifstream infile("oop.txt");
						infile>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
						date=str;
						int a;
						o++;o89++;o90++;o91++;o92++;o93++;o94++;o95++;o96++;o97++;o98++;o99++;o100++;o101++;o102++;o103++;o104++;o105++;o106++;o107++;o108++;o109++;o110++;o111++;o112++;o113++;o114++;o115++;o116++;o117++;o118++;o119++;o120++;o121++;o122++;o123++;o124++;o125++;o126++;o127++;o128++;o129++;o130++;o131++;o132++;
						cout<<"   Subject: oop"<<endl;
						cout<<"   Subject teacher: Anup KC"<<endl;
						cout<<"   Enter absent roll. Enter 0 when you are done."<<endl;
						while(a!=0)
						{
							cin>>a;
							process2(a);
						}
					}
					void process2(int a)
					{
						if(a==89){o89--;}
						if(a==90){o90--;}
						if(a==91){o91--;}
						if(a==92){o92--;}
						if(a==93){o93--;}
						if(a==94){o94--;}
						if(a==95){o95--;}
						if(a==96){o96--;}
						if(a==97){o97--;}
						if(a==98){o98--;}
						if(a==99){o99--;}
						if(a==100){o100--;}
						if(a==101){o101--;}
						if(a==102){o102--;}
						if(a==103){o103--;}
						if(a==104){o104--;}
						if(a==105){o105--;}
						if(a==106){o106--;}
						if(a==107){o107--;}
						if(a==108){o108--;}
						if(a==109){o109--;}
						if(a==110){o110--;}
						if(a==111){o111--;}
						if(a==112){o112--;}
						if(a==113){o113--;}
						if(a==114){o114--;}
						if(a==115){o115--;}
						if(a==116){o116--;}
						if(a==117){o117--;}
						if(a==118){o118--;}
						if(a==119){o119--;}
						if(a==120){o120--;}
						if(a==121){o121--;}
						if(a==122){o122--;}
						if(a==123){o123--;}
						if(a==124){o124--;}
						if(a==125){o125--;}
						if(a==126){o126--;}
						if(a==127){o127--;}
						if(a==128){o128--;}
						if(a==129){o129--;}
						if(a==130){o130--;}
						if(a==131){o131--;}
						if(a==132){o132--;}
						ofstream outfile("oop.txt");
						outfile<<o<<" "<<o89<<" "<<o90<<" "<<o91<<" "<<o92<<" "<<o93<<" "<<o94<<" "<<o95<<" "<<o96<<" "<<o97<<" "<<o98<<" "<<o99<<" "<<o100<<" "<<o101<<" "<<o102<<" "<<o103<<" "<<o104<<" "<<o105<<" "<<o106<<" "<<o107<<" "<<o108<<" "<<o109<<" "<<o110<<" "<<o111<<" "<<o112<<" "<<o113<<" "<<o114<<" "<<o115<<" "<<o116<<" "<<o117<<" "<<o118<<" "<<o119<<" "<<o120<<" "<<o121<<" "<<o122<<" "<<o123<<" "<<o124<<" "<<o125<<" "<<o126<<" "<<o127<<" "<<o128<<" "<<o129<<" "<<o130<<" "<<o131<<" "<<o132;
					}
};
int oop::o=0;
int oop::o89=0;
int oop::o90=0;
int oop::o91=0;
int oop::o92=0;
int oop::o93=0;
int oop::o94=0;
int oop::o95=0;
int oop::o96=0;
int oop::o97=0;
int oop::o98=0;
int oop::o99=0;
int oop::o100=0;
int oop::o101=0;
int oop::o102=0;
int oop::o103=0;
int oop::o104=0;
int oop::o105=0;
int oop::o106=0;
int oop::o107=0;
int oop::o108=0;
int oop::o109=0;
int oop::o110=0;
int oop::o111=0;
int oop::o112=0;
int oop::o113=0;
int oop::o114=0;
int oop::o115=0;
int oop::o116=0;
int oop::o117=0;
int oop::o118=0;
int oop::o119=0;
int oop::o120=0;
int oop::o121=0;
int oop::o122=0;
int oop::o123=0;
int oop::o124=0;
int oop::o125=0;
int oop::o126=0;
int oop::o127=0;
int oop::o128=0;
int oop::o129=0;
int oop::o130=0;
int oop::o131=0;
int oop::o132=0;





class toc
{
	private: string date;
			 static int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132;
	public:        void process1(string str)
					{
						ifstream infile("toc.txt");
						infile>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
						date=str;
						int a;
						o++;o89++;o90++;o91++;o92++;o93++;o94++;o95++;o96++;o97++;o98++;o99++;o100++;o101++;o102++;o103++;o104++;o105++;o106++;o107++;o108++;o109++;o110++;o111++;o112++;o113++;o114++;o115++;o116++;o117++;o118++;o119++;o120++;o121++;o122++;o123++;o124++;o125++;o126++;o127++;o128++;o129++;o130++;o131++;o132++;
						cout<<"   Subject: TOC"<<endl;
						cout<<"   Subject teacher: Dipesh Shrestha"<<endl;
						cout<<"   Enter absent roll. Enter 0 when you are done."<<endl;
						while(a!=0)
						{
							cin>>a;
							process2(a);
						}
					}
					void process2(int a)
					{
						if(a==89){o89--;}
						if(a==90){o90--;}
						if(a==91){o91--;}
						if(a==92){o92--;}
						if(a==93){o93--;}
						if(a==94){o94--;}
						if(a==95){o95--;}
						if(a==96){o96--;}
						if(a==97){o97--;}
						if(a==98){o98--;}
						if(a==99){o99--;}
						if(a==100){o100--;}
						if(a==101){o101--;}
						if(a==102){o102--;}
						if(a==103){o103--;}
						if(a==104){o104--;}
						if(a==105){o105--;}
						if(a==106){o106--;}
						if(a==107){o107--;}
						if(a==108){o108--;}
						if(a==109){o109--;}
						if(a==110){o110--;}
						if(a==111){o111--;}
						if(a==112){o112--;}
						if(a==113){o113--;}
						if(a==114){o114--;}
						if(a==115){o115--;}
						if(a==116){o116--;}
						if(a==117){o117--;}
						if(a==118){o118--;}
						if(a==119){o119--;}
						if(a==120){o120--;}
						if(a==121){o121--;}
						if(a==122){o122--;}
						if(a==123){o123--;}
						if(a==124){o124--;}
						if(a==125){o125--;}
						if(a==126){o126--;}
						if(a==127){o127--;}
						if(a==128){o128--;}
						if(a==129){o129--;}
						if(a==130){o130--;}
						if(a==131){o131--;}
						if(a==132){o132--;}
						ofstream outfile("toc.txt");
						outfile<<o<<" "<<o89<<" "<<o90<<" "<<o91<<" "<<o92<<" "<<o93<<" "<<o94<<" "<<o95<<" "<<o96<<" "<<o97<<" "<<o98<<" "<<o99<<" "<<o100<<" "<<o101<<" "<<o102<<" "<<o103<<" "<<o104<<" "<<o105<<" "<<o106<<" "<<o107<<" "<<o108<<" "<<o109<<" "<<o110<<" "<<o111<<" "<<o112<<" "<<o113<<" "<<o114<<" "<<o115<<" "<<o116<<" "<<o117<<" "<<o118<<" "<<o119<<" "<<o120<<" "<<o121<<" "<<o122<<" "<<o123<<" "<<o124<<" "<<o125<<" "<<o126<<" "<<o127<<" "<<o128<<" "<<o129<<" "<<o130<<" "<<o131<<" "<<o132;
						}
};
int toc::o=0;
int toc::o89=0;
int toc::o90=0;
int toc::o91=0;
int toc::o92=0;
int toc::o93=0;
int toc::o94=0;
int toc::o95=0;
int toc::o96=0;
int toc::o97=0;
int toc::o98=0;
int toc::o99=0;
int toc::o100=0;
int toc::o101=0;
int toc::o102=0;
int toc::o103=0;
int toc::o104=0;
int toc::o105=0;
int toc::o106=0;
int toc::o107=0;
int toc::o108=0;
int toc::o109=0;
int toc::o110=0;
int toc::o111=0;
int toc::o112=0;
int toc::o113=0;
int toc::o114=0;
int toc::o115=0;
int toc::o116=0;
int toc::o117=0;
int toc::o118=0;
int toc::o119=0;
int toc::o120=0;
int toc::o121=0;
int toc::o122=0;
int toc::o123=0;
int toc::o124=0;
int toc::o125=0;
int toc::o126=0;
int toc::o127=0;
int toc::o128=0;
int toc::o129=0;
int toc::o130=0;
int toc::o131=0;
int toc::o132=0;
class ect
{
	private: string date;
			 static int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132;
	public:        void process1(string str)
					{
						ifstream infile("ect.txt");
						infile>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
						date=str;
						int a;
						o++;o89++;o90++;o91++;o92++;o93++;o94++;o95++;o96++;o97++;o98++;o99++;o100++;o101++;o102++;o103++;o104++;o105++;o106++;o107++;o108++;o109++;o110++;o111++;o112++;o113++;o114++;o115++;o116++;o117++;o118++;o119++;o120++;o121++;o122++;o123++;o124++;o125++;o126++;o127++;o128++;o129++;o130++;o131++;o132++;
						cout<<"   Subject: ECT"<<endl;
						cout<<"   Subject teacher: Tayab Ansari"<<endl;
						cout<<"   Enter absent roll. Enter 0 when you are done."<<endl;
						while(a!=0)
						{
							cin>>a;
							process2(a);
						}
					}
					void process2(int a)
					{
						if(a==89){o89--;}
						if(a==90){o90--;}
						if(a==91){o91--;}
						if(a==92){o92--;}
						if(a==93){o93--;}
						if(a==94){o94--;}
						if(a==95){o95--;}
						if(a==96){o96--;}
						if(a==97){o97--;}
						if(a==98){o98--;}
						if(a==99){o99--;}
						if(a==100){o100--;}
						if(a==101){o101--;}
						if(a==102){o102--;}
						if(a==103){o103--;}
						if(a==104){o104--;}
						if(a==105){o105--;}
						if(a==106){o106--;}
						if(a==107){o107--;}
						if(a==108){o108--;}
						if(a==109){o109--;}
						if(a==110){o110--;}
						if(a==111){o111--;}
						if(a==112){o112--;}
						if(a==113){o113--;}
						if(a==114){o114--;}
						if(a==115){o115--;}
						if(a==116){o116--;}
						if(a==117){o117--;}
						if(a==118){o118--;}
						if(a==119){o119--;}
						if(a==120){o120--;}
						if(a==121){o121--;}
						if(a==122){o122--;}
						if(a==123){o123--;}
						if(a==124){o124--;}
						if(a==125){o125--;}
						if(a==126){o126--;}
						if(a==127){o127--;}
						if(a==128){o128--;}
						if(a==129){o129--;}
						if(a==130){o130--;}
						if(a==131){o131--;}
						if(a==132){o132--;}
						ofstream outfile("ect.txt");
						outfile<<o<<" "<<o89<<" "<<o90<<" "<<o91<<" "<<o92<<" "<<o93<<" "<<o94<<" "<<o95<<" "<<o96<<" "<<o97<<" "<<o98<<" "<<o99<<" "<<o100<<" "<<o101<<" "<<o102<<" "<<o103<<" "<<o104<<" "<<o105<<" "<<o106<<" "<<o107<<" "<<o108<<" "<<o109<<" "<<o110<<" "<<o111<<" "<<o112<<" "<<o113<<" "<<o114<<" "<<o115<<" "<<o116<<" "<<o117<<" "<<o118<<" "<<o119<<" "<<o120<<" "<<o121<<" "<<o122<<" "<<o123<<" "<<o124<<" "<<o125<<" "<<o126<<" "<<o127<<" "<<o128<<" "<<o129<<" "<<o130<<" "<<o131<<" "<<o132;
					}
};
int ect::o=0;
int ect::o89=0;
int ect::o90=0;
int ect::o91=0;
int ect::o92=0;
int ect::o93=0;
int ect::o94=0;
int ect::o95=0;
int ect::o96=0;
int ect::o97=0;
int ect::o98=0;
int ect::o99=0;
int ect::o100=0;
int ect::o101=0;
int ect::o102=0;
int ect::o103=0;
int ect::o104=0;
int ect::o105=0;
int ect::o106=0;
int ect::o107=0;
int ect::o108=0;
int ect::o109=0;
int ect::o110=0;
int ect::o111=0;
int ect::o112=0;
int ect::o113=0;
int ect::o114=0;
int ect::o115=0;
int ect::o116=0;
int ect::o117=0;
int ect::o118=0;
int ect::o119=0;
int ect::o120=0;
int ect::o121=0;
int ect::o122=0;
int ect::o123=0;
int ect::o124=0;
int ect::o125=0;
int ect::o126=0;
int ect::o127=0;
int ect::o128=0;
int ect::o129=0;
int ect::o130=0;
int ect::o131=0;
int ect::o132=0;
class dl
{
	private: string date;
			 static int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132;
	public:        void process1(string str)
					{
						ifstream infile("dl.txt");
						infile>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
						date=str;
						int a;
						o++;o89++;o90++;o91++;o92++;o93++;o94++;o95++;o96++;o97++;o98++;o99++;o100++;o101++;o102++;o103++;o104++;o105++;o106++;o107++;o108++;o109++;o110++;o111++;o112++;o113++;o114++;o115++;o116++;o117++;o118++;o119++;o120++;o121++;o122++;o123++;o124++;o125++;o126++;o127++;o128++;o129++;o130++;o131++;o132++;
						cout<<"   Subject: DL"<<endl;
						cout<<"   Subject teacher: Rajesh Kumar Paudel"<<endl;
						cout<<"   Enter absent roll. Enter 0 when you are done."<<endl;
						while(a!=0)
						{
							cin>>a;
							process2(a);
						}
					}
					void process2(int a)
					{
						if(a==89){o89--;}
						if(a==90){o90--;}
						if(a==91){o91--;}
						if(a==92){o92--;}
						if(a==93){o93--;}
						if(a==94){o94--;}
						if(a==95){o95--;}
						if(a==96){o96--;}
						if(a==97){o97--;}
						if(a==98){o98--;}
						if(a==99){o99--;}
						if(a==100){o100--;}
						if(a==101){o101--;}
						if(a==102){o102--;}
						if(a==103){o103--;}
						if(a==104){o104--;}
						if(a==105){o105--;}
						if(a==106){o106--;}
						if(a==107){o107--;}
						if(a==108){o108--;}
						if(a==109){o109--;}
						if(a==110){o110--;}
						if(a==111){o111--;}
						if(a==112){o112--;}
						if(a==113){o113--;}
						if(a==114){o114--;}
						if(a==115){o115--;}
						if(a==116){o116--;}
						if(a==117){o117--;}
						if(a==118){o118--;}
						if(a==119){o119--;}
						if(a==120){o120--;}
						if(a==121){o121--;}
						if(a==122){o122--;}
						if(a==123){o123--;}
						if(a==124){o124--;}
						if(a==125){o125--;}
						if(a==126){o126--;}
						if(a==127){o127--;}
						if(a==128){o128--;}
						if(a==129){o129--;}
						if(a==130){o130--;}
						if(a==131){o131--;}
						if(a==132){o132--;}
						ofstream outfile("dl.txt");
						outfile<<o<<" "<<o89<<" "<<o90<<" "<<o91<<" "<<o92<<" "<<o93<<" "<<o94<<" "<<o95<<" "<<o96<<" "<<o97<<" "<<o98<<" "<<o99<<" "<<o100<<" "<<o101<<" "<<o102<<" "<<o103<<" "<<o104<<" "<<o105<<" "<<o106<<" "<<o107<<" "<<o108<<" "<<o109<<" "<<o110<<" "<<o111<<" "<<o112<<" "<<o113<<" "<<o114<<" "<<o115<<" "<<o116<<" "<<o117<<" "<<o118<<" "<<o119<<" "<<o120<<" "<<o121<<" "<<o122<<" "<<o123<<" "<<o124<<" "<<o125<<" "<<o126<<" "<<o127<<" "<<o128<<" "<<o129<<" "<<o130<<" "<<o131<<" "<<o132;
					}
};
int dl::o=0;
int dl::o89=0;
int dl::o90=0;
int dl::o91=0;
int dl::o92=0;
int dl::o93=0;
int dl::o94=0;
int dl::o95=0;
int dl::o96=0;
int dl::o97=0;
int dl::o98=0;
int dl::o99=0;
int dl::o100=0;
int dl::o101=0;
int dl::o102=0;
int dl::o103=0;
int dl::o104=0;
int dl::o105=0;
int dl::o106=0;
int dl::o107=0;
int dl::o108=0;
int dl::o109=0;
int dl::o110=0;
int dl::o111=0;
int dl::o112=0;
int dl::o113=0;
int dl::o114=0;
int dl::o115=0;
int dl::o116=0;
int dl::o117=0;
int dl::o118=0;
int dl::o119=0;
int dl::o120=0;
int dl::o121=0;
int dl::o122=0;
int dl::o123=0;
int dl::o124=0;
int dl::o125=0;
int dl::o126=0;
int dl::o127=0;
int dl::o128=0;
int dl::o129=0;
int dl::o130=0;
int dl::o131=0;
int dl::o132=0;
class em
{
	private: string date;
			 static int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132;
	public:        void process1(string str)
					{
						ifstream infile("em.txt");
						infile>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
						date=str;
						int a;
						o++;o89++;o90++;o91++;o92++;o93++;o94++;o95++;o96++;o97++;o98++;o99++;o100++;o101++;o102++;o103++;o104++;o105++;o106++;o107++;o108++;o109++;o110++;o111++;o112++;o113++;o114++;o115++;o116++;o117++;o118++;o119++;o120++;o121++;o122++;o123++;o124++;o125++;o126++;o127++;o128++;o129++;o130++;o131++;o132++;
						cout<<"   Subject: EM"<<endl;
						cout<<"   Subject teacher: Kobid Karki"<<endl;
						cout<<"   Enter absent roll. Enter 0 when you are done."<<endl;
						while(a!=0)
						{
							cin>>a;
							process2(a);
						}
					}
					void process2(int a)
					{
						if(a==89){o89--;}
						if(a==90){o90--;}
						if(a==91){o91--;}
						if(a==92){o92--;}
						if(a==93){o93--;}
						if(a==94){o94--;}
						if(a==95){o95--;}
						if(a==96){o96--;}
						if(a==97){o97--;}
						if(a==98){o98--;}
						if(a==99){o99--;}
						if(a==100){o100--;}
						if(a==101){o101--;}
						if(a==102){o102--;}
						if(a==103){o103--;}
						if(a==104){o104--;}
						if(a==105){o105--;}
						if(a==106){o106--;}
						if(a==107){o107--;}
						if(a==108){o108--;}
						if(a==109){o109--;}
						if(a==110){o110--;}
						if(a==111){o111--;}
						if(a==112){o112--;}
						if(a==113){o113--;}
						if(a==114){o114--;}
						if(a==115){o115--;}
						if(a==116){o116--;}
						if(a==117){o117--;}
						if(a==118){o118--;}
						if(a==119){o119--;}
						if(a==120){o120--;}
						if(a==121){o121--;}
						if(a==122){o122--;}
						if(a==123){o123--;}
						if(a==124){o124--;}
						if(a==125){o125--;}
						if(a==126){o126--;}
						if(a==127){o127--;}
						if(a==128){o128--;}
						if(a==129){o129--;}
						if(a==130){o130--;}
						if(a==131){o131--;}
						if(a==132){o132--;}
						ofstream outfile("em.txt");
						outfile<<o<<" "<<o89<<" "<<o90<<" "<<o91<<" "<<o92<<" "<<o93<<" "<<o94<<" "<<o95<<" "<<o96<<" "<<o97<<" "<<o98<<" "<<o99<<" "<<o100<<" "<<o101<<" "<<o102<<" "<<o103<<" "<<o104<<" "<<o105<<" "<<o106<<" "<<o107<<" "<<o108<<" "<<o109<<" "<<o110<<" "<<o111<<" "<<o112<<" "<<o113<<" "<<o114<<" "<<o115<<" "<<o116<<" "<<o117<<" "<<o118<<" "<<o119<<" "<<o120<<" "<<o121<<" "<<o122<<" "<<o123<<" "<<o124<<" "<<o125<<" "<<o126<<" "<<o127<<" "<<o128<<" "<<o129<<" "<<o130<<" "<<o131<<" "<<o132;
					}
};
int em::o=0;
int em::o89=0;
int em::o90=0;
int em::o91=0;
int em::o92=0;
int em::o93=0;
int em::o94=0;
int em::o95=0;
int em::o96=0;
int em::o97=0;
int em::o98=0;
int em::o99=0;
int em::o100=0;
int em::o101=0;
int em::o102=0;
int em::o103=0;
int em::o104=0;
int em::o105=0;
int em::o106=0;
int em::o107=0;
int em::o108=0;
int em::o109=0;
int em::o110=0;
int em::o111=0;
int em::o112=0;
int em::o113=0;
int em::o114=0;
int em::o115=0;
int em::o116=0;
int em::o117=0;
int em::o118=0;
int em::o119=0;
int em::o120=0;
int em::o121=0;
int em::o122=0;
int em::o123=0;
int em::o124=0;
int em::o125=0;
int em::o126=0;
int em::o127=0;
int em::o128=0;
int em::o129=0;
int em::o130=0;
int em::o131=0;
int em::o132=0;
class math
{
	private: string date;
			 static int o,o89,o90,o91,o92,o93,o94,o95,o96,o97,o98,o99,o100,o101,o102,o103,o104,o105,o106,o107,o108,o109,o110,o111,o112,o113,o114,o115,o116,o117,o118,o119,o120,o121,o122,o123,o124,o125,o126,o127,o128,o129,o130,o131,o132;
	public:        void process1(string str)
					{
						ifstream infile("math.txt");
						infile>>o>>o89>>o90>>o91>>o92>>o93>>o94>>o95>>o96>>o97>>o98>>o99>>o100>>o101>>o102>>o103>>o104>>o105>>o106>>o107>>o108>>o109>>o110>>o111>>o112>>o113>>o114>>o115>>o116>>o117>>o118>>o119>>o120>>o121>>o122>>o123>>o124>>o125>>o126>>o127>>o128>>o129>>o130>>o131>>o132;
						date=str;
						int a;
						o++;o89++;o90++;o91++;o92++;o93++;o94++;o95++;o96++;o97++;o98++;o99++;o100++;o101++;o102++;o103++;o104++;o105++;o106++;o107++;o108++;o109++;o110++;o111++;o112++;o113++;o114++;o115++;o116++;o117++;o118++;o119++;o120++;o121++;o122++;o123++;o124++;o125++;o126++;o127++;o128++;o129++;o130++;o131++;o132++;
						cout<<"   Subject: Mathematics"<<endl;
						cout<<"   Subject teacher: Amar Karki"<<endl;
						cout<<"   Enter absent roll. Enter 0 when you are done."<<endl;
						while(a!=0)
						{
							cin>>a;
							process2(a);
						}
					}
					void process2(int a)
					{
						if(a==89){o89--;}
						if(a==90){o90--;}
						if(a==91){o91--;}
						if(a==92){o92--;}
						if(a==93){o93--;}
						if(a==94){o94--;}
						if(a==95){o95--;}
						if(a==96){o96--;}
						if(a==97){o97--;}
						if(a==98){o98--;}
						if(a==99){o99--;}
						if(a==100){o100--;}
						if(a==101){o101--;}
						if(a==102){o102--;}
						if(a==103){o103--;}
						if(a==104){o104--;}
						if(a==105){o105--;}
						if(a==106){o106--;}
						if(a==107){o107--;}
						if(a==108){o108--;}
						if(a==109){o109--;}
						if(a==110){o110--;}
						if(a==111){o111--;}
						if(a==112){o112--;}
						if(a==113){o113--;}
						if(a==114){o114--;}
						if(a==115){o115--;}
						if(a==116){o116--;}
						if(a==117){o117--;}
						if(a==118){o118--;}
						if(a==119){o119--;}
						if(a==120){o120--;}
						if(a==121){o121--;}
						if(a==122){o122--;}
						if(a==123){o123--;}
						if(a==124){o124--;}
						if(a==125){o125--;}
						if(a==126){o126--;}
						if(a==127){o127--;}
						if(a==128){o128--;}
						if(a==129){o129--;}
						if(a==130){o130--;}
						if(a==131){o131--;}
						if(a==132){o132--;}
						ofstream outfile("math.txt");
						outfile<<o<<" "<<o89<<" "<<o90<<" "<<o91<<" "<<o92<<" "<<o93<<" "<<o94<<" "<<o95<<" "<<o96<<" "<<o97<<" "<<o98<<" "<<o99<<" "<<o100<<" "<<o101<<" "<<o102<<" "<<o103<<" "<<o104<<" "<<o105<<" "<<o106<<" "<<o107<<" "<<o108<<" "<<o109<<" "<<o110<<" "<<o111<<" "<<o112<<" "<<o113<<" "<<o114<<" "<<o115<<" "<<o116<<" "<<o117<<" "<<o118<<" "<<o119<<" "<<o120<<" "<<o121<<" "<<o122<<" "<<o123<<" "<<o124<<" "<<o125<<" "<<o126<<" "<<o127<<" "<<o128<<" "<<o129<<" "<<o130<<" "<<o131<<" "<<o132;
					}
};
int math::o=0;
int math::o89=0;
int math::o90=0;
int math::o91=0;
int math::o92=0;
int math::o93=0;
int math::o94=0;
int math::o95=0;
int math::o96=0;
int math::o97=0;
int math::o98=0;
int math::o99=0;
int math::o100=0;
int math::o101=0;
int math::o102=0;
int math::o103=0;
int math::o104=0;
int math::o105=0;
int math::o106=0;
int math::o107=0;
int math::o108=0;
int math::o109=0;
int math::o110=0;
int math::o111=0;
int math::o112=0;
int math::o113=0;
int math::o114=0;
int math::o115=0;
int math::o116=0;
int math::o117=0;
int math::o118=0;
int math::o119=0;
int math::o120=0;
int math::o121=0;
int math::o122=0;
int math::o123=0;
int math::o124=0;
int math::o125=0;
int math::o126=0;
int math::o127=0;
int math::o128=0;
int math::o129=0;
int math::o130=0;
int math::o131=0;
int math::o132=0;
int main()
{
	oop d; toc f; individual i; all a;dl r; em k; math m; ect c;int j,n,p;double pw;
	
	cout<<"How would you like to use this program?"<<endl<<"   As a teacher. Press 1."<<endl<<"   As a student. Press 2."<<endl;
	cin>>j;
	if(j==1)
	{
		cout<<"Enter password."<<endl;
		cin>>pw;
		if(pw==54399)
		{
			cout<<endl<<"Choose what would you like to do?"<<endl<<endl;
			cout<<"   Press 1 to view attendance report of all students."<<endl<<"   Press 2 to view attendance report of individual student."<<endl<<"   Press 3 to carry out attendance."<<endl<<endl;
			cin>>n;
		    if(n==1)
			{
				a.show();
			}
			if(n==2)
			{
				i.show();
			}
			if(n==3)
			{	string str; 

				cout<<"Enter date. "<<endl;
				getline(cin,str);
				getline(cin,str);

				cout<<"Enter the subject."<<endl<<"   Press 1 for oop"<<endl<<"   Press 2 for toc"<<endl<<"   Press 3 for DL"<<endl<<"   Press 4 for EM"<<endl<<"   Press 5 for Maths"<<endl<<"   Press 6 for ECT"<<endl;
				cin>>p;
				if(p==1)
				{
					d.process1(str);
				}
				if(p==2)
				{
					f.process1(str);
				}
				if(p==3)
				{
					r.process1(str);
				}
				if(p==4)
				{
					k.process1(str);
				}
				if(p==5)
				{
					m.process1(str);
				}
				if(p==6)
				{
					c.process1(str);	  	
				}
				cout<<endl<<"Attendance has been succesfully done."<<endl;
				cout<<"Choose what would you like to do?"<<endl<<endl;
				cout<<"   Press 1 to view attendance report of all students."<<endl<<"   Press 2 to view attendance report of individual student."<<endl<<"   Press 0 for Exit."<<endl;
				cin>>n;
				if(n==1)
				{
					a.show();
				}
				if(n==2)
				{
					i.show();
				}
				if(n==0)
				{
					exit(0);
				}
			}
		    
		}
	}
	if(j==2)
	{
		cout<<"Choose what would you like to do?"<<endl<<endl;
		cout<<"   Press 1 to view attendance report of all students."<<endl<<"   Press 2 to view attendance report of individual student."<<endl;
		cin>>n;
		if(n==1)
		{
			a.show();
		}
		if(n==2)
		{
			i.show();
		}
	}
	getch();
	return 0;
}
