#include <iostream>
#include <algorithm>

using namespace std;

int check_input(string a)
{
    for (int x = 0; x <= a.length(); x++){
        if ((a[x] == 'I')||(a[x] == 'V')||(a[x] == 'X')||(a[x] == 'L')||(a[x] == 'C')||(a[x] == 'D')||(a[x] == 'M')){
            return 1;
        }
        else return 0;
    }
}

int check_amount(string b)
{
    for (int y = 0; y <= b.length()-4; y++){
        if ((b[y] == b[y+1])&&(b[y] == b[y+2])&&(b[y] == b[y+3])){
            return 0;
        }
        return 1;
    }

}

int check_restricted (string c)
{

    if (c.find("IL") != -1) return 1;
    else if (c.find("IC") != -1) return 1;
    else if (c.find("ID") != -1) return 1;
    else if (c.find("IM") != -1) return 1;
    else if (c.find("VX") != -1) return 1;
    else if (c.find("VL") != -1) return 1;
    else if (c.find("VC") != -1) return 1;
    else if (c.find("VD") != -1) return 1;
    else if (c.find("VM") != -1) return 1;
    else if (c.find("XD") != -1) return 1;
    else if (c.find("XM") != -1) return 1;
    else if (c.find("LC") != -1) return 1;
    else if (c.find("LD") != -1) return 1;
    else if (c.find("LM") != -1) return 1;
    else if (c.find("DM") != -1) return 1;
    else if (c.find("IIV") != -1) return 1;
    else if (c.find("IIX") != -1) return 1;
    else if (c.find("IXL") != -1) return 1;
    else if (c.find("IXC") != -1) return 1;
    else if (c.find("ICD") != -1) return 1;
    else if (c.find("IDM") != -1) return 1;
    else if (c.find("XXL") != -1) return 1;
    else if (c.find("XXC") != -1) return 1;
    else if (c.find("XCD") != -1) return 1;
    else if (c.find("XCM") != -1) return 1;
    else if (c.find("LXL") != -1) return 1;
    else if (c.find("LXC") != -1) return 1;
    else if (c.find("LCD") != -1) return 1;
    else if (c.find("LCM") != -1) return 1;
    else if (c.find("CCD") != -1) return 1;
    else if (c.find("CCM") != -1) return 1;
    else if (c.find("VV") != -1) return 1;
    else if (c.find("VVV") != -1) return 1;
    else if (c.find("LL") != -1) return 1;
    else if (c.find("LLL") != -1) return 1;
    else if (c.find("DD") != -1) return 1;
    else if (c.find("DDD") != -1) return 1;
    else if (c.find("IVIV") != -1) return 1;
    else if (c.find("IXIX") != -1) return 1;
    else if (c.find("XLXL") != -1) return 1;
    else if (c.find("XCXC") != -1) return 1;
    else if (c.find("CDCD") != -1) return 1;
    else if (c.find("CMCM") != -1) return 1;
    else if (c.find("VIVI") != -1) return 1;
    else if (c.find("XIXI") != -1) return 1;
    else if (c.find("XVXV") != -1) return 1;
    else if (c.find("LILI") != -1) return 1;
    else if (c.find("LVLV") != -1) return 1;
    else if (c.find("LXLX") != -1) return 1;
    else if (c.find("CICI") != -1) return 1;
    else if (c.find("CVCV") != -1) return 1;
    else if (c.find("CXCX") != -1) return 1;
    else if (c.find("CLCL") != -1) return 1;
    else if (c.find("DIDI") != -1) return 1;
    else if (c.find("DVDV") != -1) return 1;
    else if (c.find("DXDX") != -1) return 1;
    else if (c.find("DLDL") != -1) return 1;
    else if (c.find("DCDC") != -1) return 1;
    else if (c.find("MIMI") != -1) return 1;
    else if (c.find("MVMV") != -1) return 1;
    else if (c.find("MXMX") != -1) return 1;
    else if (c.find("MLML") != -1) return 1;
    else if (c.find("MCMC") != -1) return 1;
    else if (c.find("MDMD") != -1) return 1;
    else return 0;
}

int main()
{
    string s = "";
    int i = 0;
    int sum = 0;

    cin >> s;
    int len = s.length();
    int *arr = new int[len];


    if ((check_input(s) == 0)||(check_amount(s) == 0)||(check_restricted(s) == 1)){
        cout << "Incorrect number";
    }
    else {
        for (i = 0; i < len; i++){
            arr[i] = 0;
        }

        for (i = 0; i < len; i++){
            switch(s[i]){
                case 'I': arr[i] = 1; break;
                case 'V': arr[i] = 5; break;
                case 'X': arr[i] = 10; break;
                case 'L': arr[i] = 50; break;
                case 'C': arr[i] = 100; break;
                case 'D': arr[i] = 500; break;
                case 'M': arr[i] = 1000; break;
                default: cout << "Incorrect number"; return 0;
            }
        }

        for (i = 0; i < len; i++){
            if (arr[i] >= arr[i+1]){
                sum += arr[i];
            }
            else{
                sum += (arr[i+1] - arr[i]);
                i++;
            }
        }

        cout << sum;
    }

}
