#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

void cook(vector<string>array , int persons)
{
	vector<string>temp;
	
	for(int i=0; i<array.size(); i++)
	{
		int n = array[i].length();
		string num = "";
		
		for(int j=0; j<n; j++)
		{
			if(isdigit(array[i][j]))
			  num.push_back(array[i][j]);
			  
			else{
				temp.push_back(num);
				break;
			}  
		}
	}	
		
		for(int j=0; j<array.size(); j++)
		{
			int count = 0;
			int n = array[j].length();
			int number = stoi(temp[j]);
			number = number * persons;
			string numString = to_string(number);
			
			for(int k=0; k<n; k++)
			{
				if(isdigit(array[j][k]))
				count++;
				
				else break;
			}
			
			array[j].replace(0,count,numString);
		}
	
	for(int i=0; i<array.size(); i++)
	{
		cout<<array[i]<<endl;
	}
}

int main()
{
	vector<string>array;
	
	array.push_back("2 eggs are required");
	array.push_back("250gm of chicken");
	array.push_back("6 bananas");
	
	cook(array,3);
	
	return 0;
}
