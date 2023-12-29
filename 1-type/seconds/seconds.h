int get_years(int seconds) {
    int i;
    i = seconds / 32140800;
    return 1970 + i;
    
}

int get_month(int seconds) {
    int i;
    if (seconds <= 32140800){
    i = seconds / 2678400;
    return 0 + i;
    }if(seconds > 32140800){
        int g;
        g = (seconds / 32140800);
        i = (seconds - g * 32140800) / 2678400;
        return 0 + i;

    } 
}

int get_day(int seconds) {
    int i, g;
    if (seconds <= 2678400){
        i = seconds / 86400;
        return 0 + i;
    }if (seconds > 2678400){
        g = seconds / 2678400;
        i = (seconds - g * 2678400) / 86400;
        return 0 + i;
    }
}

int get_hours(int seconds) {
    int i, g;
    if (seconds <= 86400){
        i = seconds / 3600;
        return 0 + i;
        }if (seconds > 86400){
            g = seconds / 86400;
            i = (seconds - g * 86400) / 3600;
            return 0 + i;
        }
}

int get_minutes(int seconds) {
    int i, g;
    if (seconds < 3600){
        i = seconds / 60;
        return 0 + i;
    }if(seconds > 3600){
        g = seconds / 3600;
        i = (seconds - g * 3600) / 60;
    return 0 + i;
    }
}

int get_seconds(int seconds) {
    int i, g;
    if (seconds < 60){
        return 0 + seconds;
    }if(seconds > 60){
        g = seconds / 60;
        i = (seconds - g * 60);
    }
    return 0 + i;
}


int get_magical_value(int seconds) {
    int g;
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    g = 1 + day + seconds;
    return ((year + month)/(1 + day + second))*((year + month)/(1 + day + second))+((minutes + (minutes/(1 + hours)))/(1 + hours)); // Not implementation
}