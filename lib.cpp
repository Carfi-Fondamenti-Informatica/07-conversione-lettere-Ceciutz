//
// Created by Cecilia on 9/12/2022.
//


bool convert(char &a){
    if(x >= 65 && x <= 90){
        x += 32;
        return true;
    }else if(x >= 97 && x <= 122){
        x -= 32;
        return true;
    }
    return false;
}
