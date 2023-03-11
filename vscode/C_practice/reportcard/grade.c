char grade(int m)
{
    if(m>100)
    {
       return 'I';
    }
    else if(m>90 && m<=100)
    {
        return 'O';
    }
    else if(m>80 && m<=90)
    {
        return 'E';
    }
    else if(m>70 && m<=80)
    {
        return 'A';
    }
    else if(m>60 && m<=70)
    {
        return 'B';
    }
    else if(m>50 && m<=60)
    {
        return 'C';
    }
    else if(m>40 && m<=50)
    {
        return 'D';
    }
    else
    {
        return 'F';
    }
}