int monthday(int month, int year){
    switch(month){
        case 1:
        return 31; break;
        case 2:
        if(year % 4 == 0 && year % 100 != 0 || year % 100 == 0 && year % 400 == 0){
            return 29;
        }else{
            return 28;
        }break;
        case 3:
        return 31; break;
        case 4:
        return 30; break;
        case 5:
        return 31; break;
        case 6:
        return 30; break;
        case 7: 
        return 31; break;
        case 8:
        return 31; break;
        case 9:
        return 30; break;
        case 10:
        return 31; break;
        case 11:
        return 30; break;
        case 12:
        return 31; break;

    
    }
    
    
    
    return 0;
}