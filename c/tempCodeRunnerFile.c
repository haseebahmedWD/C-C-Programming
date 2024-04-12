for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            if ((b*j) == (a*i))
            {
                temp = a * i;
                printf("LCM is: %d \n",temp);
                break;
            }
        }
        if (temp != 0)
        {
            break;
        }
        
    }