#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>
using namespace std;

unsigned int display = 0;


vector<double>time_for_out;



int main ()

{
	ofstream out;          
   out.open("/home/louisa/louisa2/model/kurs.txt");
 
	int core;
	int page;
	double t_sch;
	
	double t,start;
	start=double (clock())/CLOCKS_PER_SEC;


int size;




	int amount = 0;
	
	/*double queue[5000][2];
	for (int lol = 0; lol<5000;lol++)
	{
		queue[lol][0] = 0;
		queue[lol][1] = 0;
	}*/


	int element = 0;

	vector <double> queue_1;
	vector <double> queue_2;
	vector<double>::iterator it;
	 
	vector <int> vec1;
	vector <int> vec;

	
	
	srand (time(0));
	
	double a = 0.1;
	double b = 2.0;
	double x =  (double)rand()/(double) RAND_MAX*(b-a)+a; 
	
	
	while(amount<100)
	{
		//system("clear"); 
		//cout<<amount<<" ";
		
		if((	double(clock())/CLOCKS_PER_SEC)-start > x)
		{
		//	it=queue_1.begin()+element;
		//	it=queue_2.begin()+element;
			
			queue_1.push_back(double(1+rand()%6));
			queue_2.push_back(double(clock())/CLOCKS_PER_SEC);
			
			element++;
				cout<<amount<<" ";
			if (vec1.size()==0)
			{
				cout<<"hey";
				int count = 0;
				for (;;)
				{
					if (queue_1.size()!=0)
					{
					if (queue_1[count]!=0)
					{
						*(&size)=queue_1[count];
						time_for_out.push_back(double(clock())/CLOCKS_PER_SEC-(queue_2[count]));
						
						//it=queue_1.begin()+count;
						//it=queue_2.begin()+count;
						
						queue_1.erase(queue_1.begin()+count);
						queue_2.erase(queue_2.begin()+count);
						vec1.push_back(1);
					
						core = 1+rand()%6;
						page = 2+rand()%6;
						if (size>page){
						*(&t_sch) = (double(size)/double(core))+(double(size)-double(page))*double(5);
						}
						else {*(&t_sch) = double(size)/double(core);}
						if(vec.size()!=0) {vec.pop_back(); }
						*(&t)=double(clock())/CLOCKS_PER_SEC;
						
						break;
					}
					count++;
				}
				else break;
				}
				
				
				
				
			}
			
				if (vec1.size()!=0)
				{
					vec.push_back(1);
				}
			
			*(&start)=start+x;
			*(&x) = (double)rand()/(double) RAND_MAX*(b-a)+a;
			amount++;
		
		
		}
			
		
			
			
		
			
		if (vec1.size()!=0)
			{
				if ((double(clock())/CLOCKS_PER_SEC)-(*(&t))> double(t_sch))
				{
					//cout<<"hey";
					vec1.pop_back(); 
					if (vec.size()!=0)
					{
						vec1.push_back(1);
					
					int count = 0;
				    for (;;)
					{
						if (queue_1.size()!=0){
						if (queue_1[count]!=0)
						{
							*(&size)=queue_1[count];
							time_for_out.push_back(double(clock())/CLOCKS_PER_SEC-(queue_2[count]));
							
							//it=queue_1.begin()+count;
							//it=queue_2.begin()+count;
							
							queue_1.erase(queue_1.begin()+count);
							queue_2.erase(queue_2.begin()+count);
							
							core = 1+rand()%6;
							page = 2+rand()%6;
							if (size>page){
							*(&t_sch) = (double(size)/double(core))+(double(size)-double(page))*double(5);
							}
							else {*(&t_sch) = double(size)/double(core);}
							if(vec.size()!=0) {vec.pop_back(); }
							*(&t)=double(clock())/CLOCKS_PER_SEC;
							vec.pop_back();
							break;
							}
						count++;
						}
					else break;
					}
					
				}
			
					
						//*(&t)=double(clock())/CLOCKS_PER_SEC;
						
					}
				}
				
				
			}
			
			
	
	
	
		while (display<time_for_out.size())
		{
			 if (out.is_open())
			{
				out<<" time: "<<time_for_out[display]<<"\n";
			}
			display++;
		}

	
	return 0;
}
