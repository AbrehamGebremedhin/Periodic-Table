// Programmed by: Abreham Gebremedhin

//Use FullScreen Console
#include <iostream>
#include <cstring>
#include <windows.h>
using namespace std;

int main()
{
HANDLE co = GetStdHandle(STD_OUTPUT_HANDLE);
    //Displaying the modern periodic table.
    char ch;
    int entry;
    cout << "\n\n\t\t\t\t\t\t\t\t ****************************"<<endl;
    cout << "\t\t\t\t\t\t\t\t ** MODERN PRERIODIC TABLE **\n";
    cout << "\t\t\t\t\t\t\t\t ****************************";
SetConsoleTextAttribute(co, 7);
    cout <<"\n\t H(1)";
SetConsoleTextAttribute(co, 3);
    cout <<"\t\t\t\t\t\t\t\t\t\t\t\t\t\t       He(2)"<<"\n\n";
SetConsoleTextAttribute(co, 1);
    cout <<"\t Li(3)";
SetConsoleTextAttribute(co, 9);
    cout <<"  Be(4)";
SetConsoleTextAttribute(co, 2);
    cout <<"\t\t\t\t\t\t\t\t\t\t B(5)";
SetConsoleTextAttribute(co, 5);
    cout <<"    C(6)    N(7)   O(8)";
SetConsoleTextAttribute(co, 8);
    cout <<"    F(9)";
SetConsoleTextAttribute(co, 3);
    cout <<"   Ne(10)"<<"\n\n";
SetConsoleTextAttribute(co, 1);
    cout <<"\t Na(11)";
SetConsoleTextAttribute(co, 9);
    cout <<" Mg(12)";
SetConsoleTextAttribute(co, 6);
    cout <<"\t\t\t\t\t\t\t\t\t\t Al(13)";
SetConsoleTextAttribute(co, 2);
    cout <<"  Si(14)";
SetConsoleTextAttribute(co, 5);
    cout <<"  P(15)  S(16)";
SetConsoleTextAttribute(co, 8);
    cout <<"   Cl(17)";
SetConsoleTextAttribute(co, 3);
    cout <<" Ar(18)"<<"\n\n";
SetConsoleTextAttribute(co, 1);
    cout <<"\t K(19)";
SetConsoleTextAttribute(co, 9);
    cout <<"  Ca(20)";
SetConsoleTextAttribute(co, 5);
    cout <<" Sc(21)";
SetConsoleTextAttribute(co, 6);
    cout <<"   Ti(22) V(23)  Cr(24) Mn(25) Fe(26) Co(27) Ni(28) Cu(29)  Zn(30)  Ga(31)";
SetConsoleTextAttribute(co, 2);
    cout <<"  Ge(32)  As(33)";
SetConsoleTextAttribute(co, 5);
    cout <<" Se(34)";
SetConsoleTextAttribute(co, 8);
    cout <<"  Br(35)";
SetConsoleTextAttribute(co, 3);
    cout <<" Kr(36)"<<"\n\n";
SetConsoleTextAttribute(co, 1);
    cout <<"\t Rb(37)";
SetConsoleTextAttribute(co, 9);
    cout <<" Sr(38)";
SetConsoleTextAttribute(co, 6);
    cout <<" Y(39)";
SetConsoleTextAttribute(co, 6);
    cout <<"    Zr(40) Nb(41) Mo(42) Tc(43) Ru(44) Rh(45) Pd(46) Ag(47)  Cd(48)  In(49)  Sn(50)";
SetConsoleTextAttribute(co, 2);
    cout <<"  Sb(51) Te(52)";
SetConsoleTextAttribute(co, 8);
    cout <<"  I(53)";
SetConsoleTextAttribute(co, 3);
    cout <<"  Xe(54)"<<"\n\n";
SetConsoleTextAttribute(co, 1);
    cout <<"\t Cs(55)";
SetConsoleTextAttribute(co, 9);
    cout <<" Ba(56)";
SetConsoleTextAttribute(co, 4);
    cout <<" La(57) *";
SetConsoleTextAttribute(co, 6);
    cout <<" Hf(72) Ta(73) W(74)  Re(75) Os(76) Ir(77) Pt(78) Au(79)  Hg(80)  Tl(81)  Pb(82)  Bi(83)";
SetConsoleTextAttribute(co, 2);
    cout <<" Po(84)";
SetConsoleTextAttribute(co, 8);
    cout <<"  At(85)";
SetConsoleTextAttribute(co, 3);
    cout <<" Rn(86)"<<"\n\n";
SetConsoleTextAttribute(co, 1);
    cout <<"\t Fr(87)";
SetConsoleTextAttribute(co, 9);
    cout <<" Ra(88)";
SetConsoleTextAttribute(co, 4);
    cout <<" Ac(89) *";
SetConsoleTextAttribute(co, 6);
    cout <<" Rf(104) Db(105) Sg(106) Bh(107) Hs(108) Mt(109) Ds(110) Rg(111)  Cn(112)";
SetConsoleTextAttribute(co, 0);
    cout <<" ";
SetConsoleTextAttribute(co, 74);
    cout << "Nh(113) Fl(114)  Mc(115) Lv(116)  Ts(117) Og(118)";
SetConsoleTextAttribute(co, 0);
    cout <<". \n\n";
SetConsoleTextAttribute(co, 4);
    cout <<"\t\t\t      * Ce(58) Pr(59) Nd(60) Pm(61) Sm(62) Eu(63) Gd(64) Tb(65) Dy(66) Ho(67) Er(68) Tm(69) Yb(70) Lu(71)"<<"\n\n";
SetConsoleTextAttribute(co, 4);
    cout <<"\t\t\t      * Th(90) Pa(91) U(92)  Np(93) Pu(94) Am(95) Cm(96) Bk(97) Cf(98) Es(99) Fm(100) Md(101) No(102) Lr(103)"<<"\n\n\n";
SetConsoleTextAttribute(co, 7);


    cout<<"\t\t\t\t\t\t Programmed by: Abreham Gebremedhin\n\t\t\t\t\t\t\t\tAnasimos Mesfin"<<endl;
    cout<<"\t\t\t\t\t\t Section: DRB2001A\n\n";


    cout << "To Exit Input ' 0 '."<<endl;
    label:cout << "Enter The Atomic Number Of The Element: ";
    cin >> entry;

    switch (entry)
    {

    	case 1:
    		{
    			cout << "Name = Hydrogen\nNumber = 1\nGroup = 1\nPeriod = 1\nFormula = H\nMass = 1.01\nElectron Configuration = 1s1\n\n" << endl;
    			goto label;
			}
		case 2:
		    {
		    	cout << "Name = Helium\nNumber = 2\nGroup = 18\nPeriod = 1\nFormula = He\nMass = 4.00\nElectron Configuration = 1s2\n\n" << endl;
		    	goto label;
			}
		case 3:
		    {
		    	cout << "Name = Lithium\nNumber = 3\nGroup = 1\nPeriod = 2\nFormula = Li\nMass = 6.94\nElectron Configuration = 2s1\n\n" << endl;
	            goto label;
			}
		case 4:
		    {
		    	cout << "Name = Beryllium\nNumber = 4\nGroup = 2\nPeriod = 2\nFormula = Be\nMass = 9.01\nElectron Configuration = 2s2\n\n" << endl;
		    	goto label;
			}
		case 5:
		    {
		    	cout << "Name = Boron\nNumber = 5\nGroup = 13\nPeriod = 2\nFormula = B\nMass = 10.81\nElectron Configuration = 2s2 2p1\n\n" << endl;
		    	goto label;
			}
        case 6:
		 	{
	    		cout << "Name = Carbon\nNumber = 6\nGroup = 14\nPeriod = 2\nFormula = C\nMass = 12.01\nElectron Configuration = 2s2 2p2\n\n" << endl;
	    		goto label;
		    }
		case 7:
		   {
		    	cout << "Name = Nitrogen\nNumber = 7\nGroup = 15\nPeriod = 2\nFormula = N\nMass = 14.01\nElectron Configuration = 2s2 2p3\n\n" << endl;
		    	goto label;
		   }
		case 8:
			{
				cout << "Name = Oxygen\nNumber = 8\nGroup = 16\nPeriod = 2\nFormula = O\nMass = 16.00\nElectron Configuration = 2s2 2p4\n\n" << endl;
				goto label;
			}
		case 9:
		    {
		    	cout << "Name = Fluorine\nNumber = 9\nGroup = 17\nPeriod = 2\nFormula = F\nMass = 19.00\nElectron Configuration = 2s2 2p5\n\n" << endl;
		    	goto label;
	        }
		case 10:
		    {
		    	cout << "Name = Neon\nNumber = 10\nGroup = 18\nPeriod = 2\nFormula = Ne\nMass = 20.18\nElectron Configuration = 2s2 2p6\n\n" << endl;
		    	goto label;
			}
		case 11:
		    {
		    	cout << "Name = Sodium\nNumber = 11\nGroup = 1\nPeriod = 3\nFormula = Na\nMass = 22.99\nElectron Configuration = 3s1\n\n" << endl;
		    	goto label;
			}
		case 12:
		    {
		    	cout << "Name = Magnesium\nNumber = 12\nGroup = 2\nPeriod = 3\nFormula = Mg\nMass = 24.31\nElectron Configuration = 3s2\n\n" << endl;
			    goto label;
			}
		case 13:
		    {
		    	cout << "Name = Aluminum\nNumber = 13\nGroup = 13\nPeriod = 3\nFormula = Al\nMass = 26.98\nElectron Configuration = 3s2 3p1\n\n" << endl;
			    goto label;
			}
		case 14:
		    {
		    	cout << "Name = Silicon\nNumber = 14\nGroup = 14\nPeriod = 3\nFormula = Si\nMass = 28.09\nElectron Configuration = 3s2 3p2\n\n" << endl;
			    goto label;
			}
		case 15:
		    {
		    	cout << "Name = Phosphorus\nNumber = 15\nGroup = 15\nPeriod = 3\nFormula = P\nMass = 30.97\nElectron Configuration = 3s2 3p3\n\n" << endl;
	            goto label;
			}
		case 16:
		    {
		    	cout << "Name = Sulfur\nNumber = 16\nGroup = 16\nPeriod = 3\nFormula = S\nMass = 32.06\nElectron Configuration = 3s2 3p4\n\n" << endl;
			    goto label;
			}
		case 17:
		    {
		    	cout << "Name = Chlorine\nNumber = 17\nGroup = 17\nPeriod = 3\nFormula = Cl\nMass = 35.45\nElectron Configuration = 3s2 3p5\n\n" << endl;
			    goto label;
			}
		case 18:
		    {
		    	cout << "Name = Argon\nNumber = 18\nGroup = 18\nPeriod = 3\nFormula = Ar\nMass = 39.95\nElectron Configuration = 3s2 3p6\n\n" << endl;
			    goto label;
			}
		case 19:
		    {
		    	cout << "Name = Potassium\nNumber = 19\nGroup = 1\nPeriod = 4\nFormula = K\nMass = 39.10\nElectron Configuration = 4s1\n\n" << endl;
			    goto label;

			}
		case 20:
		    {
		    	cout << "Name = Calcium\nNumber = 20\nGroup = 2\nPeriod = 4\nFormula = Ca\nMass = 40.08\nElectron Configuration = 4s2\n\n" << endl;
			    goto label;
			}
		case 21:
		    {
		    	cout << "Name = Scandium\nNumber = 21\nGroup = 3\nPeriod = 4\nFormula = Sc\nMass = 44.96\nElectron Configuration = 3d1 4s2\n\n" << endl;
		        goto label;
			}
		case 22:
		    {
		    	cout << "Name = Titanium\nNumber = 22\nGroup = 4\nPeriod = 4\nFormula = Ti\nMass = 47.88\nElectron Configuration = 3d2 4s2\n\n" << endl;
			    goto label;
			}
		case 23:
		    {
		    	cout << "Name = Vanadium\nNumber = 23\nGroup = 5\nPeriod = 4\nFormula = V\nMass = 50.94\nElectron Configuration = 3d3 4s2\n\n" << endl;
			    goto label;
			}
		case 24:
		    {
		    	cout << "Name = Chromium\nNumber = 24\nGroup = 6\nPeriod = 4\nFormula = Cr\nMass = 52.00\nElectron Configuration = 3d5 4s1\n\n" << endl;
			    goto label;
			}
		case 25:
		    {
		    	cout << "Name = Manganese\nNumber = 25\nGroup = 7\nPeriod = 4\nFormula = Mn\nMass = 54.94\nElectron Configuration = 3d5 4s2\n\n" << endl;
			    goto label;
			}
		case 26:
		    {
		    	cout << "Name = Iron\nNumber = 26\nGroup = 8\nPeriod = 4\nFormula = Fe\nMass = 55.85\nElectron Configuration = 3d6 4s2\n\n" << endl;
			    goto label;
			}
		case 27:
		    {
		    	cout << "Name = Cobalt\nNumber = 27\nGroup = 9\nPeriod = 4\nFormula = Co\nMass = 58.93\nElectron Configuration = 3d8 4s2\n\n" << endl;
			    goto label;
			}
		case 28:
		    {
		    	cout << "Name = Nickel\nNumber = 28\nGroup = 10\nPeriod = 4\nFormula = Ni\nMass = 58.69\nElectron Configuration = 3d8 4s2\n\n" << endl;
			    goto label;
			}
		case 29:
		    {
		    	cout << "Name = Copper\nNumber = 29\nGroup = 11\nPeriod = 4\nFormula = Cu\nMass = 63.55\nElectron Configuration = 3d10 4s1\n\n" << endl;
			    goto label;
			}
		case 30:
		    {
		    	cout << "Name = Zinc\nNumber = 30\nGroup = 12\nPeriod = 4\nFormula = Zn\nMass = 65.38\nElectron Configuration = 3d10 4s2\n\n" << endl;
			    goto label;
			}
		case 31:
		    {
		    	cout << "Name = Gallium\nNumber = 31\nGroup = 13\nPeriod = 4\nFormula = Ga\nMass = 69.72\nElectron Configuration = 3d10 4s2 4p1\n\n" << endl;
			    goto label;
			}
		case 32:
		    {
		    	cout << "Name = Germanium\nNumber = 32\nGroup = 14\nPeriod = 4\nFormula = Ge\nMass = 72.61\nElectron Configuration = 3d10 4s2 4p2\n\n" << endl;
			    goto label;
			}
		case 33:
		    {
		    	cout << "Name = Arsenic\nNumber = 33\nGroup = 15\nPeriod = 4\nFormula = As\nMass = 74.92\nElectron Configuration = 3d10 4s2 4p3\n\n" << endl;
			    goto label;
			}
		case 34:
		    {
		    	cout << "Name = Selenium\nNumber = 34\nGroup = 16\nPeriod = 4\nFormula = Se\nMass = 78.96\nElectron Configuration = 3d10 4s2 4p4\n\n" << endl;
			    goto label;
			}
		case 35:
		    {
		    	cout << "Name = Bromine\nNumber = 35\nGroup = 17\nPeriod = 4\nFormula = Br\nMass = 79.90\nElectron Configuration = 3d10 4s2 4p5\n\n" << endl;
			    goto label;
			}
		case 36:
		    {
		    	cout << "Name = Krypton\nNumber = 36\nGroup = 18\nPeriod = 4\nFormula = Kr\nMass = 83.80\nElectron Configuration = 3d10 4s2 4p6\n\n" << endl;
			    goto label;
			}
		case 37:
		    {
		    	cout << "Name = Rubidium\nNumber = 37\nGroup = 1\nPeriod = 5\nFormula = Rb\nMass = 85.47\nElectron Configuration = 5s1\n\n" << endl;
			    goto label;
			}
		case 38:
		    {
		    	cout << "Name = Stronthum\nNumber = 38\nGroup = 2\nPeriod = 5\nFormula = Sr\nMass = 87.62\nElectron Configuration = 5s2\n\n" << endl;
			    goto label;
			}
		case 39:
		    {
		    	cout << "Name = Ythrium\nNumber = 39\nGroup = 3\nPeriod = 5\nFormula = Y\nMass = 88.91\nElectron Configuration = 4d1 5s2\n\n" << endl;
			    goto label;
			}
		case 40:
		    {
		    	cout << "Name = Zirconium\nNumber = 40\nGroup = 4\nPeriod = 5\nFormula = Zr\nMass = 91.22\nElectron Configuration = 4d2 5s2\n\n" << endl;
			    goto label;
			}
		case 41:
		    {
		    	cout << "Name = Niobium\nNumber = 41\nGroup = 5\nPeriod = 5\nFormula = Nb\nMass = 92.91\nElectron Configuration = 4d4 5s1\n\n" << endl;
			    goto label;
			}
		case 42:
		    {
		    	cout << "Name = Molybdenum\nNumber = 42\nGroup = 6\nPeriod = 5\nFormula = Mo\nMass = 95.94\nElectron Configuration = 4d5 5s1\n\n" << endl;
			    goto label;
			}
		case 43:
		    {
		    	cout << "Name = Techenium\nNumber = 43\nGroup = 7\nPeriod = 5\nFormula = Tc\nMass = 98.91\nElectron Configuration = 4d5 5s2\n\n" << endl;
			    goto label;
			}
		case 44:
		    {
		    	cout << "Name = Ruthenium\nNumber = 44\nGroup = 8\nPeriod = 5\nFormula = Ru\nMass = 101.07\nElectron Configuration = 4d7 5s1\n\n" << endl;
			    goto label;
			}
		case 45:
		    {
		    	cout << "Name = Rhodium\nNumber = 45\nGroup = 9\nPeriod = 5\nFormula = Rh\nMass = 102.91\nElectron Configuration = 4d8 5s\n\n" << endl;
			    goto label;
			}
		case 46:
		    {
		    	cout << "Name = Palladium\nNumber = 46\nGroup = 10\nPeriod = 5\nFormula = Pd\nMass = 106.42\nElectron Configuration = 4d10\n\n" << endl;
			    goto label;
			}
		case 47:
		    {
		    	cout << "Name = Silver\nNumber = 47\nGroup = 11\nPeriod = 5\nFormula = Ag\nMass = 107.87\nElectron Configuration = 4d10 5s1\n\n" << endl;
			    goto label;
			}
		case 48:
		    {
		    	cout << "Name = Cadmium\nNumber = 48\nGroup = 12\nPeriod = 5\nFormula = Cd\nMass = 112.41\nElectron Configuration = 4d10 5s2\n\n" << endl;
			    goto label;
			}
		case 49:
		    {
		    	cout << "Name = Indium\nNumber = 49\nGroup = 13\nPeriod = 5\nFormula = In\nMass = 114.82\nElectron Configuration = 4d10 5s2 5p1\n\n" << endl;
			    goto label;
			}
		case 50:
		    {
		    	cout << "Name = Tin\nNumber = 50\nGroup = 14\nPeriod = 5\nFormula = Sn\nMass = 118.69\nElectron Configuration = 4d10 5s2 5p2\n\n" << endl;
			    goto label;
			}
		case 51:
		    {
		    	cout << "Name = Antimony\nNumber = 51\nGroup = 15\nPeriod = 5\nFormula = Sb\nMass = 121.75\nElectron Configuration = 4d10 5s2 5p3\n\n" << endl;
			    goto label;
			}
		case 52:
		    {
		    	cout << "Name = Tellurium\nNumber = 52\nGroup = 16\nPeriod = 5\nFormula = Te\nMass = 127.60\nElectron Configuration = 4d10 5s2 5p4\n\n" << endl;
			    goto label;
			}
		case 53:
		    {
		    	cout << "Name = Iodine\nNumber = 53\nGroup = 17\nPeriod = 5\nFormula = I\nMass = 126.90\nElectron Configuration = 4d10 5s2 5p5\n\n" << endl;
			    goto label;
			}
		case 54:
		    {
		    	cout << "Name = Xenon\nNumber = 54\nGroup = 18\nPeriod = 5\nFormula = Xe\nMass = 131.29\nElectron Configuration = 4d10 5s2 5p6\n\n" << endl;
			    goto label;
			}
		case 55:
		    {
		    	cout << "Name = Cosiumn\nNumber = 55\nGroup = 1\nPeriod = 6\nFormula = Cs\nMass = 132.91\nElectron Configuration = 6s1\n\n" << endl;
			    goto label;
			}
		case 56:
		    {
		    	cout << "Name = Barium\nNumber = 56\nGroup = 2\nPeriod = 6\nFormula = Ba\nMass = 137.33\nElectron Configuration = 6s2\n\n" << endl;
			    goto label;
			}
		case 57:
		    {
		    	cout << "Name = Lanthanum\nNumber = 57\nGroup = 3\nPeriod = 6\nFormula = La\nMass = 138.91\nElectron Configuration = 5d1 6s2\n\n" << endl;
			    goto label;
			}
		case 58:
		    {
		    	cout << "Name = Cerium\nNumber = 58\nGroup = 5\nPeriod = 6\nFormula = Ce\nMass = 140.12\nElectron Configuration = 4f1 5d1 6s2\n\n" << endl;
			    goto label;
			}
		case 59:
		    {
		    	cout << "Name = Pruseodymium\nNumber = 59\nGroup = 6\nPeriod = 6\nFormula = Pr\nMass = 140.91\nElectron Configuration = 4f3 6s2\n\n" << endl;
			    goto label;
			}
		case 60:
		    {
		    	cout << "Name = Neodymium\nNumber = 60\nGroup = 7\nPeriod = 6\nFormula = Nd\nMass = 144.24\nElectron Configuration = 4f4 6s2\n\n" << endl;
			    goto label;
			}
		case 61:
		    {
		    	cout << "Name = Promethium\nNumber = 61\nGroup = 8\nPeriod = 6\nFormula = Pm\nMass = 145\nElectron Configuration = 4f5 6s2\n\n" << endl;
			    goto label;
			}
		case 62:
		    {
		    	cout << "Name = Samarium\nNumber = 62\nGroup = 9\nPeriod = 6\nFormula = Sm\nMass = 150.40\nElectron Configuration = 4f6 6s2\n\n" << endl;
			    goto label;
			}
		case 63:
		    {
		    	cout << "Name = Europium\nNumber = 63\nGroup = 10\nPeriod = 6\nFormula = Eu\nMass = 151.97\nElectron Configuration = 4f7 6s2\n\n" << endl;
			    goto label;
			}
		case 64:
		    {
		    	cout << "Name = Gadoliniu\nNumber = 64\nGroup = 11\nPeriod = 6\nFormula = Gd\nMass = 157.25\nElectron Configuration = 4f7 5d1 6s2\n\n" << endl;
			    goto label;
			}
		case 65:
		    {
		    	cout << "Name = Terbium\nNumber = 65\nGroup = 12\nPeriod = 6\nFormula = Tb\nMass = 158.93\nElectron Configuration = 4f9 6s2\n\n" << endl;
			    goto label;
			}
		case 66:
		    {
		    	cout << "Name = Dysprosium\nNumber = 66\nGroup = 13\nPeriod = 6\nFormula = Dy\nMass = 162.50\nElectron Configuration = 4f10 6s2\n\n" << endl;
			    goto label;
			}
		case 67:
		    {
		    	cout << "Name = Helmium\nNumber = 67\nGroup = 14\nPeriod = 6\nFormula = Ho\nMass = 164.93\nElectron Configuration = 4f11 6s2\n\n" << endl;
			    goto label;
			}
		case 68:
		    {
		    	cout << "Name = Erbium\nNumber = 68\nGroup = 15\nPeriod = 6\nFormula = Er\nMass = 167.26\nElectron Configuration = 4f12 6s2\n\n" << endl;
			    goto label;
			}
		case 69:
		    {
		    	cout << "Name = Thulium\nNumber = 69\nGroup = 16\nPeriod = 6\nFormula = Tm\nMass = 168.94\nElectron Configuration = 4f13 6s2\n\n" << endl;
			    goto label;
			}
		case 70:
		    {
		    	cout << "Name = Ytlerhium\nNumber = 70\nGroup = 17\nPeriod = 6\nFormula = Yb\nMass = 173.04\nElectron Configuration = 4f14 6s2\n\n" << endl;
			    goto label;
			}
		case 71:
		    {
		    	cout << "Name = Lutelium\nNumber = 71\nGroup = 18\nPeriod = 6\nFormula = Lu\nMass = 174.97\nElectron Configuration = 4f14 5d1 6s2\n\n" << endl;
			    goto label;
			}
		case 72:
		    {
		    	cout << "Name = Hefnium\nNumber = 72\nGroup = 4\nPeriod = 6\nFormula = Hf\nMass = 178.49\nElectron Configuration = 4f14 5d2 6s2\n\n" << endl;
			    goto label;
			}
		case 73:
		    {
		    	cout << "Name = Tantalum\nNumber = 73\nGroup = 5\nPeriod = 6\nFormula = Ta\nMass = 180.95\nElectron Configuration = 4f14 5d3 6s2\n\n" << endl;
			    goto label;
			}
		case 74:
		    {
		    	cout << "Name = Tungsten\nNumber = 74\nGroup = 6\nPeriod = 6\nFormula = W\nMass = 183.85\nElectron Configuration = 4f14 5d4 6s2\n\n" << endl;
			    goto label;
			}
		case 75:
		    {
		    	cout << "Name = Rhenium\nNumber = 75\nGroup = 7\nPeriod = 6\nFormula = Re\nMass = 186.21\nElectron Configuration = 4f14 5d5 6s2\n\n" << endl;
                goto label;
			}
		case 76:
		    {
		    	cout << "Name = Osmium\nNumber = 76\nGroup = 8\nPeriod = 6\nFormula = Os\nMass = 190.2\nElectron Configuration = 4f14 5d6 6s2\n\n" << endl;
			    goto label;
			}
		case 77:
		    {
		    	cout << "Name = Iridium\nNumber = 77\nGroup = 9\nPeriod = 6\nFormula = Ir\nMass = 192.22\nElectron Configuration = 4f14 5d7 6s2\n\n" << endl;
			    goto label;
			}
		case 78:
		    {
		    	cout << "Name = Platinum\nNumber = 78\nGroup = 10\nPeriod = 6\nFormula = Pt\nMass = 195.08\nElectron Configuration = 4f14 5d9 6s1\n\n" << endl;
			    goto label;
			}
		case 79:
		    {
		    	cout << "Name = Gold\nNumber = 79\nGroup = 11\nPeriod = 6\nFormula = Au\nMass = 196.97\nElectron Configuration = 4f14 5d10 6s1\n\n" << endl;
			    goto label;
			}
		case 80:
		    {
		    	cout << "Name = Mercury\nNumber = 80\nGroup = 12\nPeriod = 6\nFormula = Hg\nMass = 200.59\nElectron Configuration = 4f14 5d10 6s2\n\n" << endl;
			    goto label;
			}
		case 81:
		    {
		    	cout << "Name = Thallium\nNumber = 81\nGroup = 13\nPeriod = 6\nFormula = Tl\nMass = 204.38\nElectron Configuration = 4f14 5d10 6s2 6p1\n\n" << endl;
			    goto label;
			}
		case 82:
		    {
		    	cout << "Name = Lead\nNumber = 82\nGroup = 14\nPeriod = 6\nFormula = Pb\nMass = 207.20\nElectron Configuration = 4f14 5d10 6s2 6p2\n\n" << endl;
			    goto label;
			}
		case 83:
		    {
		    	cout << "Name = Bismuth\nNumber = 83\nGroup = 15\nPeriod = 6\nFormula = Bi\nMass = 208.98\nElectron Configuration = 4f14 5d10 6s2 6p3\n\n" << endl;
			    goto label;
			}
		case 84:
		    {
		    	cout << "Name = Polonium\nNumber = 84\nGroup = 16\nPeriod = 6\nFormula = Po\nMass = 209\nElectron Configuration = 4f14 5d10 6s2 6p4\n\n" << endl;
			    goto label;
			}
		case 85:
		    {
		    	cout << "Name = Asiatine\nNumber = 85\nGroup = 17\nPeriod = 6\nFormula = At\nMass = 210\nElectron Configuration = 4f14 5d10 6s2 6p5\n\n" << endl;
			    goto label;
			}
		case 86:
		    {
		    	cout << "Name = Radon\nNumber = 86\nGroup = 18\nPeriod = 6\nFormula = Rn\nMass = 222\nElectron Configuration = 4f14 5d10 6s2 6p6\n\n" << endl;
			    goto label;
			}
		case 87:
		    {
		    	cout << "Name = Fruncium\nNumber = 87\nGroup = 1\nPeriod = 7\nFormula = Fr\nMass = 223\nElectron Configuration = 7s1\n\n" << endl;
			    goto label;
			}
		case 88:
		    {
		    	cout << "Name = Radium\nNumber = 88\nGroup = 2\nPeriod = 7\nFormula = Ra\nMass = 226.03\nElectron Configuration = 7s2\n\n" << endl;
			    goto label;
			}
		case 89:
		    {
		    	cout << "Name = Actinium\nNumber = 89\nGroup = 3\nPeriod = 7\nFormula = Ac\nMass = 227.03\nElectron Configuration = 6d1 7s2\n\n" << endl;
			    goto label;
			}
		case 90:
		    {
		    	cout << "Name = Thorlum\nNumber = 90\nGroup = 5\nPeriod = 7\nFormula = Th\nMass = 232.04\nElectron Configuration = 6d2 7s2\n\n" << endl;
			    goto label;
			}
		case 91:
		    {
		    	cout << "Name = Protactinium\nNumber = 91\nGroup = 6\nPeriod = 7\nFormula = Pa\nMass = 231.04\nElectron Configuration = 5f2 6d1 7s2\n\n" << endl;
			    goto label;
			}
		case 92:
		    {
		    	cout << "Name = Uranium\nNumber = 92\nGroup = 7\nPeriod = 7\nFormula = U\nMass = 238.03\nElectron Configuration = 5f3 6d1 7s2\n\n" << endl;
			    goto label;
			}
		case 93:
		    {
		    	cout << "Name = Neplunium\nNumber = 93\nGroup = 8\nPeriod = 7\nFormula = Np\nMass = 237.05\nElectron Configuration = 5f4 6d1 7s2\n\n" << endl;
			    goto label;
			}
		case 94:
		    {
		    	cout << "Name = Plutonium\nNumber = 94\nGroup = 9\nPeriod = 7\nFormula = Pu\nMass = 244\nElectron Configuration = 5f6 7s2\n\n" << endl;
			    goto label;
			}
		case 95:
		    {
		    	cout << "Name = Americium\nNumber = 95\nGroup = 10\nPeriod = 7\nFormula = Am\nMass = 244\nElectron Configuration = 5f7 7s2\n\n" << endl;
			    goto label;
			}
		case 96:
		    {
		    	cout << "Name = Curium\nNumber = 96\nGroup = 11\nPeriod = 7\nFormula = Cm\nMass = 247\nElectron Configuration = 5f7 6d1 7s2\n\n" << endl;
			    goto label;
			}
		case 97:
		    {
		    	cout << "Name = Borkelium\nNumber = 97\nGroup = 12\nPeriod = 7\nFormula = Bk\nMass = 247\nElectron Configuration = 5f9 7s2\n\n" << endl;
			    goto label;
			}
		case 98:
		    {
		    	cout << "Name = Californium\nNumber = 98\nGroup = 13\nPeriod = 7\nFormula = Cf\nMass = 251\nElectron Configuration = 5f10 7s2\n\n" << endl;
			    goto label;
			}
		case 99:
		    {
		    	cout << "Name = Einsteinium\nNumber = 99\nGroup = 14\nPeriod = 7\nFormula = Es\nMass = 252\nElectron Configuration = 5f11 7s2\n\n" << endl;
			    goto label;
			}
		case 100:
		    {
		    	cout << "Name = Formium\nNumber = 100\nGroup = 15\nPeriod = 7\nFormula = Fm\nMass = 257\nElectron Configuration = 5f12 7s2\n\n" << endl;
			    goto label;
			}
		case 101:
		    {
		    	cout << "Name = Mendelevium\nNumber = 101\nGroup = 16\nPeriod = 7\nFormula = Md\nMass = 258\nElectron Configuration = 5f13 7s2\n\n" << endl;
			    goto label;
			}
		case 102:
		    {
		    	cout << "Name = Nebelium\nNumber = 102\nGroup = 17\nPeriod = 7\nFormula = No\nMass = 259\nElectron Configuration = 5f14 7s2\n\n" << endl;
			    goto label;
			}
		case 103:
		    {
			    cout << "Name = Lawrencium\nNumber = 103\nGroup = 18\nPeriod = 7\nFormula = Lr\nMass = 260\nElectron Configuration = 5f14 7s2 7p1\n\n" << endl;
			    goto label;
			}
		case 104:
		    {
		    	cout << "Name = Rutherfordium\nNumber = 104\nGroup = 4\nPeriod = 7\nFormula = Rf\nMass = 261\nElectron Configuration = 5f14 6d2 7s2\n\n" << endl;
			    goto label;
			}
		case 105:
		    {
		    	cout << "Name = Dubnium\nNumber = 105\nGroup = 5\nPeriod = 7\nFormula = Db\nMass = 262\nElectron Configuration = 5f14 6d3 7s2\n\n" << endl;
			    goto label;
			}
		case 106:
		    {
		    	cout << "Name = Seaborgium\nNumber = 106\nGroup = 6\nPeriod = 7\nFormula = Sg\nMass = 266\nElectron Configuration = 5f14 6d4 7s2\n\n" << endl;
			    goto label;
			}
		case 107:
		    {
		    	cout << "Name = Bohrium\nNumber = 107\nGroup = 7\nPeriod = 7\nFormula = Bh\nMass = 264\nElectron Configuration = 5f14 6d5 7s2\n\n" << endl;
			    goto label;
			}
		case 108:
		    {
		    	cout << "Name = Hassium\nNumber = 108\nGroup = 8\nPeriod = 7\nFormula = Hs\nMass = 269\nElectron Configuration = 5f14 6d6 7s2\n\n" << endl;
			    goto label;
			}
		case 109:
		    {
		    	cout << "Name = Meitnerium\nNumber = 109\nGroup = 9\nPeriod = 7\nFormula = Mt\nMass = 278\nElectron Configuration = 5f14 6d7 7s2\n\n" << endl;
			    goto label;
			}
		case 110:
		    {
		    	cout << "Name = Darmstadium\nNumber = 110\nGroup = 10\nPeriod = 7\nFormula = Ds\nMass = 281\nElectron Configuration = 5f14 6d8 7s2\n\n" << endl;
		        goto label;
			}
		case 111:
		    {
		        cout << "Name = Roentgenium\nNumber = 111\nGroup = 11\nPeriod = 7\nFormula = Rg\nMass = 282\nElectron Configuration = 5f14 6d9 7s2\n\n" << endl;
			    goto label;
			}
		case 112:
		    {
		        cout << "Name = Copernicium\nNumber = 112\nGroup = 12\nPeriod = 7\nFormula = Cn\nMass = 285\nElectron Configuration = 5f14 6d10 7s2\n\n" << endl;
			    goto label;
			}
		case 113:
		    {
		        cout << "Name = Nihonium\nNumber = 113\nGroup = 13\nPeriod = 7\nFormula = Nh\nMass = 286\nElectron Configuration = 5f14 6d10 7s2 7p1\n\n" << endl;
			    goto label;
			}
		case 114:
		    {
		        cout << "Name = Flerovium\nNumber = 114\nGroup = 14\nPeriod = 7\nFormula = Fl\nMass = 289\nElectron Configuration = 5f14 6d10 7s2 7p2\n\n" << endl;
			    goto label;
			}
		case 115:
		    {
		        cout << "Name = Moscovium\nNumber = 115\nGroup = 15\nPeriod = 7\nFormula = Mc\nMass = 290\nElectron Configuration = 5f14 6d10 7s2 7p3\n\n" << endl;
			    goto label;
			}
		case 116:
		    {
		        cout << "Name = Livermorium\nNumber = 116\nGroup = 16\nPeriod = 7\nFormula = Lv\nMass = 293\nElectron Configuration = 5f14 6d10 7s2 7p4\n\n" << endl;
			    goto label;
			}
		case 117:
		    {
		        cout << "Name = Tennessine\nNumber = 117\nGroup = 17\nPeriod = 7\nFormula = Ts\nMass = 294\nElectron Configuration = 5f14 6d10 7s2 7p5\n\n" << endl;
			    goto label;
			}
		case 118:
		    {
		        cout << "Name = Oganessian\nNumber = 118\nGroup = 10\nPeriod = 7\nFormula = Og\nMass = 294\nElectron Configuration = 5f14 6d10 7s2 7p6\n\n" << endl;
			    goto label;
			}
        case 0:
            {
                cout<< "Are your Sure You Want To Exit? (Y/N)";
                cin>>ch;
                    if(ch=='y'||ch=='Y')
                    {
                        return 0;
                    }
                    else if(ch=='n'||ch=='N')
                    {
                        goto label;
                    }
            }
		default:
		{
			cout << "You have entered a non-existing element!!Please enter again!!\n\n"<<endl;
			goto label;
		}
   }
	return 0;
}
