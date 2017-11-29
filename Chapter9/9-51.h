#ifndef _9_51_H
#define _9_51_H
#include<iostream>
#include<string>

class dateRecord 
{
public:
	dateRecord() = default;
	dateRecord(const std::string& date)
	{
		std::string numbers("0123456789");
		std::string::size_type beg_pos = 0, end_pos;
		if(date[0] >= '0' && date[0] <= '9') 
		{
			end_pos = date.find_first_not_of(numbers, beg_pos);
			day = stoi(date.substr(beg_pos, end_pos - beg_pos));//day
			beg_pos = ++end_pos;
			end_pos = date.find_first_not_of(numbers, beg_pos);
			month = stoi(date.substr(beg_pos, end_pos - beg_pos));//month
			beg_pos = ++end_pos;
			year = stoi(date.substr(beg_pos));
		}
		else
		{
			switch (date[0])
			{
				case 'J':
				{
					if (date.substr(0, 3) == "Jan") month = 1;
					else if (date.substr(0, 3) == "Jun") month = 6;
					else if (date.substr(0, 3) == "Jul") month = 7;
					break;
				}
					
				case 'F': month = 2; break;
				case 'M':
				{
					if (date.substr(0, 3) == "Mar") month = 3;
					else if (date.substr(0, 3) == "May") month = 5;
					break;
				}
				case 'A':
				{
					if (date.substr(0, 3) == "Apr") month = 4; 
					else if (date.substr(0, 3) == "Aug") month = 8;
					break;
				}
				
				case 'S': month = 9; break;
				case 'O': month = 10; break;
				case 'N': month = 11; break;
				case 'D': month = 12; break;
			}//month
			beg_pos = date.find_first_of(numbers, beg_pos);
			end_pos = date.find_first_not_of(numbers, beg_pos);
			day = stoi(date.substr(beg_pos, end_pos - beg_pos));//day
			beg_pos = date.find_first_of(numbers, end_pos);
			year = stoi(date.substr(beg_pos));//year
			
		}
		
	}
	std::ostream& showDate(std::ostream& output)
	{
		output << this->day << "/" << this->month << "/" << this->year;
		return output;
	}
private:
	unsigned year = 0;
	unsigned month = 0;
	unsigned day = 0;
};

#endif //_9_51_H
