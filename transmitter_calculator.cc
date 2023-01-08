#include <stdio.h>
main(){
    float minkpa = 20;
    float maxkpa = 100;
    float minkgf = 0.2;
    float maxkgf = 1.0;
    float minpsi = 3;
    float maxpsi = 15;
    float minmA = 4;
    float maxmA = 20;
    float minV = 1;
    float maxV = 5;
    float percent = 0;
    float cal_psi,cal_kgf,cal_V,cal_mA,min_device,max_device,value,calculate;
    int i = 0;
    int choice;
    char units;

    printf("\nTransmiter Calculate\n");
    printf("What's you need to help ??\n");
    printf("Press 1 : Open The Output Table\n");
    printf("Press 2 : What's value of transmeter output?");
    printf("\nAnswer : ");
    scanf("%d",&choice);
    if(choice == 1){
    printf("Transmetter Calculator !\n");
    printf("Percent\t\t");
    printf("PSI\t\t");
    printf("kgf\t\t");
    printf("Voltage\t\t");
    printf("Current\t\t\n");

    while(i<=10){
        cal_psi = (((maxpsi - minpsi) / 100) * percent) + minpsi;
        cal_kgf = (((maxkgf - minkgf) / 100) * percent) + minkgf;
        cal_V = (((maxV - minV) / 100) * percent) + minV;
        cal_mA = (((maxmA - minmA) / 100) * percent) + minmA;

        printf("%.0f\t\t",percent);
        printf("%.2f \t\t",cal_psi);
        printf("%.2f \t\t",cal_kgf);
        printf("%.2f \t\t",cal_V);
        printf("%.2f \t\t\n",cal_mA);

        percent = percent + 10;
        i++;
        }
    }

    if(choice == 2){
        printf("Min of Device : ");
        scanf("%f",&min_device);
        printf("Max of Device : ");
        scanf("%f",&max_device);
        printf("What value you need to calculate : ");
        scanf("%f",&value);
        percent = (((value - min_device) / (max_device - min_device)) * 100);

        cal_psi = (((maxpsi - minpsi) / 100) * percent ) + minpsi;
        cal_kgf = (((maxkgf - minkgf) / 100) * percent ) + minkgf;
        cal_V = (((maxV - minV) / 100) * percent ) + minV;
        cal_mA = (((maxmA - minmA) / 100) * percent ) + minmA;
        
        printf("\n\nThe percent of value is : %.2f percent",percent);
        printf("\nPressure of psi : %.3f psi",cal_psi);
        printf("\nPressure of kgf : %.3f kgf",cal_kgf);
        printf("\nPressure of Volt : %.3f V",cal_V);
        printf("\nPressure of Current : %.3f mA",cal_mA);
        
    }
}