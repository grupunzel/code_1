#include <iostream> 
#include <string>  
#include <Windows.h> 

using namespace std;

struct Student {																		
	string FMLName;															
	unsigned int GroupNumber, PlaceInGroup;												
	short unsigned int Sex, AiG, MathAn, Proga, Phys,			
		PE, Eng, Phil, Inf;									
	float AverageMark;																		
};

const int Size = 10;																		
struct Student student[Size];																


void AddStudent(int Amount) {																
	SetConsoleCP(1251);																		
	cout << "Введите данные студента\n\n"															
		"ФИО студента: ";																	
	getline(cin >> ws, student[Amount].FMLName);							
	SetConsoleCP(866);																		

	while (true) {																			
		cout << "Введите пол\n"																
			"1 - Мужской\n"																    
			"2 - Женский\n\n"															   
			"Ответ: ";																        
		cin >> student[Amount].Sex;												   
		if (student[Amount].Sex == 1 || student[Amount].Sex == 2) {		        
			break;																			
		}
	}

	cout << "Номер группы студента: ";														
	cin >> student[Amount].GroupNumber;												

	cout << "Номер студента в группе: ";											
	cin >> student[Amount].PlaceInGroup;												

	cout << "\n\nОцнки за прошлую сессию\n\n"												
		"Алгебра и геометрия: ";															 
	cin >> student[Amount].AiG;													
	while (student[Amount].AiG < 1 || student[Amount].AiG > 5) {	
		cout << "Введено неправильное значение. Повторите";																		
		cin >> student[Amount].AiG;												
	}

	cout << "Программирование: ";														
	cin >> student[Amount].Proga;												
	while (student[Amount].Proga < 1 || student[Amount].Proga > 5) {  
		cout << "Введено неправильное значение. Повторите";															
		cin >> student[Amount].Proga;											
	}

	cout << "Математический Анализ: ";															
	cin >> student[Amount].MathAn;													
	while (student[Amount].MathAn < 1 || student[Amount].MathAn > 5) {		
		cout << "Введено неправильное значение. Повторите";																		
		cin >> student[Amount].MathAn;												
	}

	cout << "Философия:";																		
	cin >> student[Amount].Phil;														
	while (student[Amount].Phil < 1 || student[Amount].Phil > 5) {				
		cout << "Введено неправильное значение. Повторите";																		
		cin >> student[Amount].Phil;													
	}

	cout << "Физ-ра: ";																		
	cin >> student[Amount].PE;											
	while (student[Amount].PE < 1 || student[Amount].PE > 5) { 
		cout << "Введено неправильное значение. Повторите";																			  
		cin >> student[Amount].PE;											 
	}

	cout << "Английский: ";																	
	cin >> student[Amount].Eng;													
	while (student[Amount].Eng < 1 || student[Amount].Eng > 5) {		
		cout << "Введено неправильное значение. Повторите";																		
		cin >> student[Amount].Eng;												
	}

	cout << "Физика: ";																	
	cin >> student[Amount].Phys;														
	while (student[Amount].Phys < 1 || student[Amount].Phys > 5) {				
		cout << "Введено неправильное значение. Повторите";																		
		cin >> student[Amount].Phys;													
	}

	cout << "Информатика: ";																	
	cin >> student[Amount].Inf;														
	while (student[Amount].Inf < 1 || student[Amount].Inf > 5) {				
		cout << "Введено неправильное значение. Повторите";																	
		cin >> student[Amount].Inf;													
	}
	student[Amount].AverageMark = (student[Amount].AiG + student[Amount].MathAn + student[Amount].Proga + student[Amount].Phys + student[Amount].Eng + student[Amount].PE + student[Amount].Phil + student[Amount].Inf) / 8;
	system("pause");																		
}


void Correction(int Amount) {																					
	unsigned short int StudentNumber, YourChoice;
	cout << "Введите номер студента в порядке заполнения, у которого хотите что-то исправить: ";													
	while (true) {																									
		cin >> StudentNumber;																						
		StudentNumber--;																							
		system("cls");																								
		if (StudentNumber < Amount) {																			 
			while (true) {																						 
				cout << "\n   Что Вы хотите исправить:"															
					"\n1 - ФИО"																						
					"\n2 - Пол"																						
					"\n3 - Номер группы"																				
					"\n4 - Номер в группе"																			
					"\n   Оценки:"																				
					"\n5 - Алгебра и геометрия"																		
					"\n6 - Программирование"																	
					"\n7 - Математический Анализ"																			
					"\n8 - Философия"																					
					"\n9 - Физ-ра"																					
					"\n10 - Английский"																				
					"\n11 - Физика"																					
					"\n12 - Информатика"																																									//
					"\n0 - Выход"																					
					"\n\nВаш выбор: ";																					

				cin >> YourChoice;																						 
				system("cls");																						
				cout << "Ваше исправление: ";
				switch (YourChoice) 
				{
					case 0:
						break;

					case 1:
						SetConsoleCP(1251);																				
						getline(cin >> ws, student[StudentNumber].FMLName);							
						SetConsoleCP(866);
						break;

					case 2:
						while (true) {																					
							cout << "\n"																				
								"1 - Мужской\n"																			
								"2 - Женский\n\n"																		
								"Ваш выбор: ";																				
							cin >> student[StudentNumber].Sex;														
							if (student[StudentNumber].Sex == 1 || student[StudentNumber].Sex == 2) {			
								break;																					
							}																							
						}
						break;

					case 3:
						cin >> student[StudentNumber].GroupNumber;
						break;

					case 4:
						cin >> student[StudentNumber].PlaceInGroup;
						break;

					case 5:
						cin >> student[StudentNumber].AiG;
						while (student[StudentNumber].AiG < 1 || student[StudentNumber].AiG > 5) {
							cout << "Введено неправильное значение. Повторите";
							cin >> student[StudentNumber].AiG;
						}
						break;

					case 6:
						cin >> student[StudentNumber].Proga;												
						while (student[StudentNumber].Proga < 1 || student[StudentNumber].Proga > 5) {     
							cout << "Введено неправильное значение. Повторите";																		
							cin >> student[StudentNumber].Proga;												
						}
						break;

					case 7:
						cin >> student[StudentNumber].MathAn;													
						while (student[StudentNumber].MathAn < 1 || student[StudentNumber].MathAn > 5) {		
							cout << "Введено неправильное значение. Повторите";																		
							cin >> student[StudentNumber].MathAn;												
						}
						break;

					case 8:
						cin >> student[StudentNumber].Phil;														
						while (student[StudentNumber].Phil < 1 || student[StudentNumber].Phil > 5) {				
							cout << "Введено неправильное значение. Повторите";																		
							cin >> student[StudentNumber].Phil;													
						}
						break;

					case 9:
						cin >> student[StudentNumber].PE;											
						while (student[StudentNumber].PE < 1 || student[StudentNumber].PE > 5) {
							cout << "Введено неправильное значение. Повторите";																			  
							cin >> student[StudentNumber].PE;											 
						}
						break;

					case 10:
						cin >> student[StudentNumber].Eng;													
						while (student[StudentNumber].Eng < 1 || student[StudentNumber].Eng > 5) {		
							cout << "Введено неправильное значение. Повторите";																		
							cin >> student[StudentNumber].Eng;												
						}
						break;

					case 11:
						cin >> student[StudentNumber].Phys;														
						while (student[StudentNumber].Phys < 1 || student[StudentNumber].Phys > 5) {				
							cout << "Введено неправильное значение. Повторите";																		
							cin >> student[StudentNumber].Phys;												
						}
						break;

					case 12:
						cin >> student[StudentNumber].Inf;														
						while (student[StudentNumber].Inf < 1 || student[StudentNumber].Inf > 5) {				 
							cout << "Введено неправильное значение. Повторите";																		
							cin >> student[StudentNumber].Inf;													
						}
						break;

					if (YourChoice >= 5 && YourChoice <= 12) {																	
						student[StudentNumber].AverageMark = (student[StudentNumber].AiG + student[StudentNumber].MathAn + student[StudentNumber].Proga + student[StudentNumber].Phys + student[StudentNumber].PE + student[StudentNumber].Eng + student[StudentNumber].Phil + student[StudentNumber].Inf) / 8;
					}
				}
			}
		}
		if (StudentNumber >= Amount) {
			cout << "Такого студента нет.";																						
		}
	}
}


void Output(int i) {																								
	cout << "Номер студента:" << i + 1
		<< "\n\nФИО: " << student[i].FMLName;
	if (student[i].Sex == 1)
	{
		cout << "\nПол: Мужской";
	}
	else
	{
		cout << "\nПол: Женский";
	}
	cout << "\nГруппа: " << student[i].GroupNumber
		<< "\nНомер в группе: " << student[i].PlaceInGroup
		<< "\n\n\nОценки\n\n"
		<< "Алгебра и геометрия: " << student[i].AiG
		<< "\nМатематический анализ: " << student[i].MathAn
		<< "\nПрограммирование: " << student[i].Proga
		<< "\nФизика: " << student[i].Phys
		<< "\nФиз-ра: " << student[i].PE
		<< "\nАнглийский: " << student[i].Eng
		<< "\nФилософия: " << student[i].Phil
		<< "\nИнформатика: " << student[i].Inf
		<< "\n\n\n";
}


void AllStudentsOutput(int Amount) {																				
	for (int i = 0; i < Amount; i++) {																		
		Output(i);																							
	}
	system("pause");
}


void OutputOneGroup(int Quantity) {																				
	unsigned int GroupNumber, Count;																				
	Count = 0;																										
	cout << "Введите номер группы: ";																				
	cin >> GroupNumber;																							

	for (int i = 0; i < Quantity; i++) {																			
		if (student[i].GroupNumber == GroupNumber) {																
			Output(i);																								
			Count++;																							
		}
	}
	if (Count == 0) {
		cout << "Неверно введен номер группы студента\n";
	}
	system("pause");
}

void WomenMenCounter(int Quantity) {																				
	int Men = 0;																									
	int Women = 0;																									
	for (int i = 0; i < Quantity; i++) {																		
		if (student[i].Sex == 1) {																				
			Men++;																								
		}																										
		if (student[i].Sex == 2) {																				
			Women++;																							
		}																										
	}																												
	cout << Men << " парней\n"																	
		<< Women << " девушек\n";																
	system("pause");
}

void WunderkindOutput(int Quantity) {																					
	short unsigned int Count;																					
	Count = 0;																									
	for (int i = 0; i < Quantity; i++) {																			
		if (student[i].AverageMark == 5) {																		
			Output(i);																								
			Count++;																							
		}
	}
	if (Count == 0) {
		cout << "Гениев тут нет.\n";
	}
	system("pause");
}

void GoodStudentsOutput(int Quantity) {																					
	short unsigned int Count;
	Count = 0;
	for (int i = 0; i < Quantity; i++) {
		if (student[i].AverageMark < 5 && student[i].AverageMark >= 4) {
			Output(i);
			Count++;
		}
	}
	if (Count == 0) {
		cout << "Все тупые.\n";
	}
	system("pause");
}


void TroechnikiOutput(int Quantity) {																			
	short unsigned int Count;
	Count = 0;
	for (int i = 0; i < Quantity; i++) {
		if (student[i].AverageMark < 4) {
			Output(i);
			Count++;
		}
	}
	if (Count == 0) {
		cout << "Все со стипендией.\n";
	}
	system("pause");
}


void NumberInListOutput(int Quantity) {																			
	unsigned int NumberInGroup, Count;
	Count = 0;
	cout << "Введите номер в группе: ";
	cin >> NumberInGroup;

	for (int i = 0; i < Quantity; i++) {
		if (student[i].PlaceInGroup == NumberInGroup) {
			Output(i);
			Count++;
		}
	}
	if (Count == 0) {
		cout << "Группа не найдена.\n";
	}
	system("pause");
}


int main()
{
	setlocale(0, "Rus");																		

	short unsigned int YourChoice, Quantity;														
	Quantity = 0;

	while (true) {
		system("cls");
		cout << "\tМеню:\n\n"
			"1 - Создать запись\n"
			"2 - Внести изменения\n"
			"3 - Вывод всех данных\n"
			"4 - Вывод данных о студентах определенной группы\n"
			"5 - Вывод топа самых успешных студентов за прошлую сессию\n"
			"6 - Вывод количества студентов мужского и женского\n"
			"7 - Вывод успеваемости\n"
			"8 - Вывод данных о студентах по номеру в группе\n\n"
			"0 - Выход\n\n"
			"Ответ: ";

		cin >> YourChoice;
		system("cls");

		switch (YourChoice) {
			case 0:
				break;

			case 1:
				AddStudent(Quantity);																	
				Quantity++;
				break;

			case 2:
				Correction(Quantity);
				break;

			case 3:
				AllStudentsOutput(Quantity);
				break;

			case 4:
				OutputOneGroup(Quantity);
				break;

			case 5:
				WunderkindOutput(Quantity);
				break;

			case 6:
				WomenMenCounter(Quantity);
				break;

			case 7:
				cout << "Отличники:\n\n";
				WunderkindOutput(Quantity);
				cout << "\n\nХорошисты:\n\n";
				GoodStudentsOutput(Quantity);
				cout << "\n\nБез стипендии:\n\n";
				TroechnikiOutput(Quantity);
				break;

			case 8:
				NumberInListOutput(Quantity);
				break;

		}
	}
	return 0;
}

