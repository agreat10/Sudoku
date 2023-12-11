

#include <iostream>
#include <Windows.h>


using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
void Print(int Arr[][9])
{
    //system("cls");
    for (size_t i = 0; i < 9; i++)
    {
        if (i == 0 || i == 3 || i == 6 )
        {
            SetConsoleTextAttribute(hConsole, 8);
            cout << "------------------------------------" << endl;
        }
        for (size_t j = 0; j < 9; j++)
        {
            if (j == 0)
            {
                SetConsoleTextAttribute(hConsole, 8); cout << "| ";
                SetConsoleTextAttribute(hConsole, 14);
                if (Arr[i][j] == 0) {cout << " " << "   "; }
                else   cout << Arr[i][j] << "   ";
            }
            else if (j == 3 || j == 6)
            {
                SetConsoleTextAttribute(hConsole, 8); cout << "| ";
                SetConsoleTextAttribute(hConsole, 14);
                if (Arr[i][j] == 0) { cout << " " << "   "; }
                else   cout << Arr[i][j] << "   ";                
            }
            else if (j == 2 || j == 5) {
                SetConsoleTextAttribute(hConsole, 14);
                if (Arr[i][j] == 0) { cout << " " << " "; }
                else   cout << Arr[i][j] << " ";                
            }
            else if (j == 8) {
                SetConsoleTextAttribute(hConsole, 14);
                if (Arr[i][j] == 0) { cout << " "; }
                else   cout << Arr[i][j];                
                SetConsoleTextAttribute(hConsole, 8);cout << " |";
            }
            
            else { SetConsoleTextAttribute(hConsole, 14);
            if (Arr[i][j] == 0) { cout << " " << "   "; }
            else   cout << Arr[i][j] << "   ";            
            }
            
        }
        if ( i == 2 || i == 5 || i == 8)
            cout << endl;
        else cout << endl << endl ;
    }SetConsoleTextAttribute(hConsole, 8); cout << "------------------------------------" << endl;
    SetConsoleTextAttribute(hConsole, 14);
}
void Zagatovki(int Arr[][9])
{
    int arr[9][9]=
     {
        {0,2,0,3,8,1,0,0,0},
        {0,0,8,0,0,6,0,0,1},
        {0,0,3,0,0,0,6,8,0},
        {2,0,0,0,4,0,0,7,6},
        {1,0,0,9,6,2,0,0,5},
        {9,3,0,0,7,0,0,0,2},
        {0,6,2,0,0,0,1,0,0},
        {3,0,0,6,0,0,5,0,0},
        {0,0,0,4,1,8,0,6,0}

        /*{0,5,0,0,2,0,0,3,0},
        {2,0,0,0,0,1,7,0,8},
        {4,0,7,6,0,0,0,0,0},
        {0,0,0,0,0,5,0,0,0},
        {5,2,0,0,0,0,0,4,7},
        {0,0,0,7,0,0,0,0,0},
        {0,0,0,0,0,3,5,0,4},
        {3,0,6,5,0,0,0,0,1},
        {0,9,0,0,7,0,0,6,0}*/

        /*{1,0,5,0,0,0,2,0,4},    /// Первый ребус
        {0,4,0,1,0,2,0,3,0},
        {3,0,0,8,0,5,0,0,6},
        {0,6,1,0,8,0,4,2,0},
        {0,0,0,7,0,3,0,0,0},
        {0,3,8,0,6,0,7,5,0},
        {2,0,0,3,0,1,0,0,7},
        {0,8,0,4,0,7,0,1,0},
        {5,0,7,0,0,0,3,0,9}*/


        /*{0,0,0,0,5,0,0,8,0},    // Второй ребус
        {4,0,5,0,8,6,0,0,2},
        {0,0,8,0,9,0,0,0,5},
        {0,0,2,5,7,0,0,0,3},
        {0,8,0,0,0,0,0,7,0},
        {6,0,0,0,3,4,1,0,0},
        {7,0,0,0,1,0,4,0,0},
        {5,0,0,2,6,0,9,0,7},
        {0,3,0,0,4,0,0,0,0}*/

        /*{1,0,5,8,0,2,7,3,9},      //Третий ребус
        {0,6,0,3,7,0,0,4,1},
        {9,0,7,4,1,5,2,6,8},
        {4,0,0,0,0,8,1,0,3},
        {0,8,2,0,5,0,0,7,0},
        {0,0,0,0,0,3,0,0,6},
        {8,2,0,5,0,0,4,0,7},
        {0,1,9,2,3,0,6,8,5},
        {0,0,4,0,8,7,3,9,0}*/

      

      /*{2,9,3,4,5,7,6,8,1},            ///Ответ на второй ребус
        {4,7,5,1,8,6,3,9,2},
        {1,6,8,3,9,2,7,4,5},
        {9,4,2,5,7,1,8,6,3},
        {3,8,1,6,2,9,5,7,4},
        {6,5,7,8,3,4,1,2,9},
        {7,2,6,9,1,3,4,5,8},
        {5,1,4,2,6,8,9,3,7},
        {8,3,9,7,4,5,2,1,6}*/
    };
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            Arr[i][j] = arr[i][j];
        }
    }
}
void ProvGor(int arr[][9],int it, int ii)
{    
    bool flag = true;
    for (size_t j = 1; j < 10; j++)
    {    
        for (size_t i = 0; i < 9; i++)
        {
            if (arr[ii][i] == j) 
            {
                flag = false;
                break;
            }
        }        
        if (flag) { arr[ii][it] = j; break; }
        flag = true;
    }
}
void ProvVert(int arr[][9], int it, int ii)
{
    bool flag = true;
    for (size_t j = 1; j < 10; j++)
    {
        for (size_t i = 0; i < 9; i++)
        {
            if (arr[i][ii] == j)
            {
                flag = false;
                break;
            }
        }
        if (flag) { arr[it][ii] = j; break; }
        flag = true;
    }
}
void ProvKub2(int arr[][9], int x, int x1, int y, int y1)
{
    bool flag = true;
    int count = 0;
    for (size_t it = 1; it < 10; it++)
    {
        flag = true;
        for (size_t i = x; i < x1; i++)
        {
            for (size_t j = y; j < y1; j++)
            {
                if (arr[i][j] == it)
                {
                    flag = false;
                    break;
                }
            }
            if (!flag) break;
        }
        if (flag)
        {
            count = it;
            //cout << "Пропущено число " << count << endl;
            break;
        }
    }
    for (size_t i = x; i < x1; i++)
    {
        for (size_t j = y; j < y1; j++)
        {
            if (arr[i][j] == 0)
            {
                arr[i][j] = count;
                return;
            }
        }
    }
}
bool ProvKubSubZero(int arr[][9],int ii, int jj,int count)
{
    //cout << "!!!\n";
    for (size_t i = 0; i < 9; i++)
    {
        if (arr[ii][i] == count) { return false; }
    }
    for (size_t i = 0; i < 9; i++)
    {
        if (arr[i][jj] == count) { return false; }
    }
    return true;
}
void ProvKubZero(int arr[][9],int x,int x1,int y,int y1,int count)
{
    int xx = 0;
    int yy = 0;
    bool flag = false;
    int cou = 0;
    for (size_t i = x; i < x1; i++)
    {
        for (size_t j = y; j < y1; j++)
        {
            if (arr[i][j] == 0)
            {                
                flag = ProvKubSubZero(arr, i, j, count);
                if (flag) ++cou;
                if ((cou == 1)&&(flag == true)) { xx = i, yy = j; }
            }
        }
    }
    if (cou == 1) { arr[xx][yy] = count;
    //cout << count << " " << xx << " " << yy << " @@@\n"; 
    }
}
void ProvKubInt(int arr[][9],int x,int x1,int y,int y1)
{
    int count = 0;
   
    for (size_t q = 1; q < 10; q++)
    {    
        count = 0;
        for (size_t i = x; i < x1; i++)
        {
            for (size_t j = y; j < y1; j++)
            {
                if (arr[i][j] == q)
                {
                    ++count;
                }
            }
        }
        if (!count) { ProvKubZero(arr, x, x1, y, y1, q); }
    }
}

void ProvKub(int arr[][9],int x,int x1,int y,int y1)
{
    int count = 0;
    int xx = 0;
    int yy = 0;
    for (size_t i = x; i < x1; i++)
    {
        for (size_t j = y; j < y1; j++)
        {
            if (arr[i][j] == 0)
            {
                ++count;
                xx = i;
                yy = j;
            } 
        }
    }
    if (count == 1)
    {
        //cout << "Не хватает 1 цифры на " << xx << " и " << yy << " позиции!" << endl;
        ProvKub2(arr, x, x1, y, y1);
        
    }
    //else if (count > 1)
    //{
    //    //cout << "Больше одной свободной ячейки!" << endl;
    //}
    //else if (count == 0)
    //{
    //   // cout << "Все позиции заняты!" << endl;
    //}
}
void Proverka(int arr[][9])
{
    //cout << "горизонталь!" << endl;
    int count = 0;
    int it = 0;
    for (size_t j = 0; j < 9; j++)
    {
        for (size_t i = 0; i < 9; i++)
        {
            if (arr[j][i] == 0) { ++count; it = i; }
            if (count > 1) break;
        }
        if (count == 1)
        {
            //cout << "Не хватает 1 цифры на " << it << " позиции!" << endl;
            ProvGor(arr, it, j);
        }        
        //else if (count == 0)
        //{
        //    //cout << "Все позиции заняты!" << endl;
        //}        
        //else 
        //{
        //    //cout << "Больше одной свободной ячейки!" << endl;
        //}
        count = 0;
    }
    //cout << "Вертикаль!" << endl;
    it = 0;
    count = 0;
    for (size_t i = 0; i < 9; i++)
    {
        for (size_t j = 0; j < 9; j++)
        {
            if (arr[j][i] == 0) { ++count; it = j; }
            if (count > 1) break;
        }
        if (count == 1)
        {
           // cout << "Не хватает 1 цифры на " << it << " позиции!" << endl;
            ProvVert(arr, it, i);
        }
        //else if (count == 0)
        //{
        //    //cout << "Все позиции заняты!" << endl;
        //}
        //else
        //{
        //   // cout << "Больше одной свободной ячейки!" << endl;
        //}
        count = 0;
    }

    //cout << "Главная диагональ!" << endl;
    //it = 0;
    //count = 0;
    //
    //
    //    for (size_t j = 0; j < 9; j++)
    //    {
    //        if (arr[j][j] == 0) { ++count; it = j; }
    //        if (count > 1) break;
    //        
    //    }
    //    if (count == 1)
    //    {
    //       // cout << "Не хватает 1 цифры на " << it << " позиции!" << endl;
    //        //ProvVert(arr, it, i);
    //        //arr[it][it] = 0;
    //        for (size_t q = 1; q < 10; q++)
    //        {
    //            for (size_t i = 0; i < 9; i++)
    //            {
    //                if(arr[i][i] == q) { ++count; it = j; }
    //            }
    //        }


    //    }
    //    else if (count == 0)
    //    {
    //        //cout << "Все позиции заняты!" << endl;
    //    }
    //    else
    //    {
    //       // cout << "Больше одной свободной ячейки!" << endl;
    //    }
    //    

    //    cout << "Обратная диагональ!" << endl;
    //    it = 0;
    //    count = 0;
    //     i = 8;

    //    for (size_t j = 0; j < 9; j++)
    //    {
    //        if (arr[j][i] == 0) { ++count; it = j; }
    //        if (count > 1) break;
    //        --i;
    //    }
    //    if (count == 1)
    //    {
    //        cout << "Не хватает 1 цифры на " << it << " позиции!" << endl;
    //        ProvVert(arr, it, i);
    //    }
    //    else if (count == 0)
    //    {
    //        cout << "Все позиции заняты!" << endl;
    //    }
    //    else
    //    {
    //        cout << "Больше одной свободной ячейки!" << endl;
    //    }
       
    

    ProvKub(arr, 0, 3, 0, 3);
    ProvKub(arr, 3, 6, 0, 3);
    ProvKub(arr, 6, 9, 0, 3);
    ProvKub(arr, 0, 3, 3, 6);
    ProvKub(arr, 3, 6, 3, 6);
    ProvKub(arr, 6, 9, 3, 6);
    ProvKub(arr, 0, 3, 6, 9);
    ProvKub(arr, 3, 6, 6, 9);
    ProvKub(arr, 6, 9, 6, 9);

    ProvKubInt(arr, 0, 3, 0, 3);
    ProvKubInt(arr, 3, 6, 0, 3);
    ProvKubInt(arr, 6, 9, 0, 3);
    ProvKubInt(arr, 0, 3, 3, 6);
    ProvKubInt(arr, 3, 6, 3, 6);
    ProvKubInt(arr, 6, 9, 3, 6);
    ProvKubInt(arr, 0, 3, 6, 9);
    ProvKubInt(arr, 3, 6, 6, 9);
    ProvKubInt(arr, 6, 9, 6, 9);
}
int main()
{
    setlocale(LC_ALL, "Rus");
    SetConsoleCP(1251); SetConsoleOutputCP(1251);
    

    int arr[9][9]{0};
    
    Zagatovki(arr);Print(arr);
    bool flag = true;
    int flag2 = 0;
    while (flag)
    {
        SetConsoleTextAttribute(hConsole, 8);
        cout << "Для продолжения нажмите Enter.\n";
        SetConsoleTextAttribute(hConsole, 7);
        cin.get();
        
            Proverka(arr);
            Print(arr);
            for (size_t i = 0; i < 9; i++)
            {
                for (size_t j = 0; j < 9; j++)
                {
                    if (arr[i][j] == 0) flag2++;
                }
            }
            if (flag2 == 0) flag = false;
            flag2 = 0;
    }
    SetConsoleTextAttribute(hConsole, 4);
    cout << "Судоку собран!!!";
    SetConsoleTextAttribute(hConsole, 7);

}

