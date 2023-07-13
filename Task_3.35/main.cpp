//Поле шахматной доски определяется парой натуральных чисел, каждое из ко-
//торых не превосходит 8: первое число — номер вертикали (при счете слева

//направо), второе — номер горизонтали (при счете снизу вверх). Даны нату-
//ральные числа a, b, c, d, e, f, каждое из которых не превосходит 8. Записать

//условие, при котором белая фигура, расположенная на поле (a, b), может од-
//ним ходом пойти на поле (e, f), не попав при этом под удар черной фигуры,

//находящейся на поле (c, d). Рассмотреть следующие варианты сочетаний бе-
//лой и черной фигур:

#include <iostream>
#include <windows.h>

bool DiagonalCheck(int (&myPosition)[2], int (&enemyPosition)[2])
{
    if ((enemyPosition[0] - myPosition[0] == enemyPosition[1] - myPosition[1]) ||
        (myPosition[0] - enemyPosition[0] == enemyPosition[1] - myPosition[1]) ||
        (enemyPosition[0] - myPosition[0] == myPosition[1] - enemyPosition[1]) ||
        (myPosition[0] - enemyPosition[0] == myPosition[1] - enemyPosition[1]))
    return 1;
    else return 0;
}

bool HorseCheck(int (&myPosition)[2], int (&enemyPosition)[2])
{
    if  ((myPosition[0] + 1 == enemyPosition[0] && myPosition[1] - 2 == enemyPosition[1])||
        (myPosition[0] + 2 == enemyPosition[0] && myPosition[1] - 1 == enemyPosition[1]) ||
        (myPosition[0] + 2 == enemyPosition[0] && myPosition[1] + 1 == enemyPosition[1]) ||
        (myPosition[0] + 1 == enemyPosition[0] && myPosition[1] + 2 == enemyPosition[1]) ||
        (myPosition[0] - 1 == enemyPosition[0] && myPosition[1] + 2 == enemyPosition[1]) ||
        (myPosition[0] - 2 == enemyPosition[0] && myPosition[1] + 1 == enemyPosition[1]) ||
        (myPosition[0] - 2 == enemyPosition[0] && myPosition[1] - 2 == enemyPosition[1]) ||
        (myPosition[0] - 1 == enemyPosition[0] && myPosition[1] - 2 == enemyPosition[1]))
    return 1;
    else return 0;
}

bool KingCheck(int (&myPosition)[2], int (&enemyPosition)[2])
{
    if  ((myPosition[0] - enemyPosition[0] == 1 || myPosition[0] - enemyPosition[0] == 0 || myPosition[0] - enemyPosition[0] == -1 )&&
        (myPosition[1] - enemyPosition[1] == 1 || myPosition[1] - enemyPosition[1] == 0 || myPosition[1] - enemyPosition[1] == -1))
    return 1;
    else return 0;
}

bool EqualPositionsCheck(int (&myPosition)[2], int (&enemyPosition)[2])
{
    if  ((myPosition[0] == enemyPosition[0])&&
        (myPosition[1] == enemyPosition[1]))
    return 1;
    else return 0;
}

int main(int argc, char *argv[])
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");

    int firstHorizontal = 0, firstVertical = 0, secondHorizontal = 0, secondVertical = 0, horizontalField = 0, verticalField = 0;
    wchar_t taskNumber;

    std::cout << "Enter the task number: ";
    std::wcin >> taskNumber;

  if (taskNumber >= L'а' && taskNumber <= L'ф') {
    std::cout << "Enter a: ";
    std::cin >> firstHorizontal;
    std::cout << "Enter b: ";
    std::cin >> firstVertical;
    std::cout << "Enter c: ";
    std::cin >> secondHorizontal;
    std::cout << "Enter d: ";
    std::cin >> secondVertical;
    std::cout << "Enter e: ";
    std::cin >> horizontalField;
    std::cout << "Enter f: ";
    std::cin >> verticalField;

    int myPosition[2] = {firstHorizontal, firstVertical};
    int enemyPosition[2] = {secondHorizontal, secondVertical};
    int movePosition[2] = {horizontalField, verticalField};

    switch (taskNumber) {
    //ладья и ладья
    case L'а':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField )
            && ((horizontalField != secondHorizontal && verticalField != secondVertical)
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ладья и ферзь
    case L'б':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField )
            && ((horizontalField != secondHorizontal && verticalField != secondVertical && !DiagonalCheck(movePosition, enemyPosition))
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ладья и конь;
    case L'в':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField )
            && (!HorseCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ладья и слон;
    case L'г':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField )
            && (!DiagonalCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ферзь и ферзь;
    case L'д':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField || DiagonalCheck(myPosition, movePosition))
            && ((horizontalField != secondHorizontal && verticalField != secondVertical && !DiagonalCheck(movePosition, enemyPosition))
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ферзь и ладья;
    case L'е':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField || DiagonalCheck(myPosition, movePosition))
            && ((horizontalField != secondHorizontal && verticalField != secondVertical)
                 || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ферзь и конь;
    case L'ж':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField || DiagonalCheck(myPosition, movePosition))
            && (!HorseCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //ферзь и слон;
    case L'з':
        if ((firstHorizontal == horizontalField || firstVertical == verticalField )
            && (!DiagonalCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //конь и конь;
    case L'и':
        if (HorseCheck(myPosition, movePosition)
            && (!HorseCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //конь и ладья;
    case L'к':
        if (HorseCheck(myPosition, movePosition)
            && ((horizontalField != secondHorizontal && verticalField != secondVertical)
                 || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //конь и ферзь;
    case L'л':
        if (HorseCheck(myPosition, movePosition)
            && ((horizontalField != secondHorizontal && verticalField != secondVertical && !DiagonalCheck(movePosition, enemyPosition))
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //конь и слон;
    case L'м':
        if (HorseCheck(myPosition, movePosition )
            && (!DiagonalCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //слон и слон;
    case L'н':
        if (DiagonalCheck(myPosition, movePosition)
            && (!DiagonalCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //слон и ферзь;
    case L'о':
        if (DiagonalCheck(myPosition, movePosition)
            && ((horizontalField != secondHorizontal && verticalField != secondVertical && !DiagonalCheck(movePosition, enemyPosition))
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //слон и конь;
    case L'п':
        if (DiagonalCheck(myPosition, movePosition)
            && (!HorseCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

     //слон и ладья;
    case L'р':
        if (DiagonalCheck(myPosition, movePosition )
            && ((horizontalField != secondHorizontal && verticalField != secondVertical)
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //король и слон;
    case L'с':
        if (KingCheck(myPosition, movePosition)
            && (!DiagonalCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //король и ферзь;
    case L'т':
        if (KingCheck(myPosition, movePosition)
            && ((horizontalField != secondHorizontal && verticalField != secondVertical && !DiagonalCheck(movePosition, enemyPosition))
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //король и конь;
    case L'у':
        if (KingCheck(myPosition, movePosition)
            && (!HorseCheck(movePosition, enemyPosition) || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    //король и ладья.
    case L'ф':
        if (KingCheck(myPosition, movePosition )
            && ((horizontalField != secondHorizontal && verticalField != secondVertical)
                || EqualPositionsCheck(movePosition, enemyPosition)))
    {
        std::cout << "Figure can move";
    } else
        std::cout << "Figure cannot move";
        break;

    default:
        break;
    }

  } else std::cout << "Wrong task number";

    return 0;
}
