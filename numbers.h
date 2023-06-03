void setZero(LedControl lc ,int dispNum)
{
    lc.setColumn(dispNum,7,B01111110);
    lc.setColumn(dispNum,6,B01000010);
    lc.setColumn(dispNum,5,B01000010);
    lc.setColumn(dispNum,4,B01000010);
    lc.setColumn(dispNum,3,B01000010);
    lc.setColumn(dispNum,2,B01000010);
    lc.setColumn(dispNum,1,B01000010);
    lc.setColumn(dispNum,0,B01111110);
}


void setOne(LedControl lc ,int dispNum)
{
    lc.setColumn(dispNum,7,B00011100);
    lc.setColumn(dispNum,6,B01100100);
    lc.setColumn(dispNum,5,B00000100);
    lc.setColumn(dispNum,4,B00000100);
    lc.setColumn(dispNum,3,B00000100);
    lc.setColumn(dispNum,2,B00000100);
    lc.setColumn(dispNum,1,B00000100);
    lc.setColumn(dispNum,0,B11111110);

}


void setTwo(LedControl lc ,int dispNum)
{
    lc.setColumn(dispNum,7,B00111100);
    lc.setColumn(dispNum,6,B01000010);
    lc.setColumn(dispNum,5,B10000001);
    lc.setColumn(dispNum,4,B00000010);
    lc.setColumn(dispNum,3,B00000100);
    lc.setColumn(dispNum,2,B00001000);
    lc.setColumn(dispNum,1,B00010000);
    lc.setColumn(dispNum,0,B01111110);
}





void setThree(LedControl lc ,int dispNum)
{
    lc.setColumn(dispNum,7,B00111100);
    lc.setColumn(dispNum,6,B01000010);
    lc.setColumn(dispNum,5,B00000001);
    lc.setColumn(dispNum,4,B00001110);
    lc.setColumn(dispNum,3,B00000100);
    lc.setColumn(dispNum,2,B00000010);
    lc.setColumn(dispNum,1,B01000010);
    lc.setColumn(dispNum,0,B00111100);
}




// void set(int dispNum)
// {
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
//     lc.setColumn(dispNum,col,B00000000);
// }






