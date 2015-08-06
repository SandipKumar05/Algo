#include <iostream>
#include <string>
 using namespace std;
 int main()
 {
 	for (int n = 0; n < 24; ++n)
 	{
 		
 	
 	string tex,pat;
 	cin >> tex >> pat;
 	int j=0,len,i=0;
 	int w=pat.length();
 	int mat[w];
 	mat[0] = 0;
 	i=1;
 	len = 0;
 	while ( i < pat.length())
 	{
 		if(pat[len] == pat[i])
 		{
 			len++;
 			mat[i] = len;
 			i++;
 		}
 		else {
 			if(len != 0) len = mat[len-1];
 			else {mat[i] = 0;i++;}
 		}
 	}
 	// for (int i = 0; i < pat.length(); ++i)
 	// {
 	// 	cout << mat[i];
 	// }
 	j=1;i=0;
 	int flag =0;	
 	while(  i < tex.length())
 	{
 		if(tex[i] == pat[j]) 
 			{

 				j++;
 				i++;
 			}
 			//cout << j <<'\n';
 		if(j == pat.length()) 
 			{
 				flag =1;
 				cout << "1"<<'\n';
 				j = mat[j-1];
 			}
 		else if( tex[i] != pat[j]) 
 			{
 				if(j != 0) {
 					j=mat[j-1];
 				}
 				else 
 					i=i+1;
 			}
 			//cout << i <<'\n';
 	}
 	if(flag == 0) cout << "0" <<'\n';
 }
 	return 0;
 }