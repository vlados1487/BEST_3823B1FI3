int num_invers(int num){
    int mum, len = 0, n = 0;
    mum = num;
    if(num > 0){
        while(mum > 0){
            len++;
            mum /= 10;
            }
            mum = num;
            int a[32];
            for(int i = 0; i < len; i++){
                a[i] = mum % 10;
                mum /= 10;
                n += a[i];
                if(i < len - 1) n *= 10;
            }return n;
            }
            if (num < 0 || num == 0){
                return 0;
    }
    }