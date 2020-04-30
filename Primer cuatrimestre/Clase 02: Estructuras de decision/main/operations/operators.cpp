
float whichIsSmaller(float value1,float value2){
    float smaller=NULL;
    if(value1==value2){
        printCustomPosterWithEndLine("Los valores ingresados son iguales");
    }else if(value1>value2){
        smaller=value2;
    }else{
        smaller=value1;
    }
    return smaller;
}