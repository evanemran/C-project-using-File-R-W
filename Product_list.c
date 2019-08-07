#include<stdio.h>
#include<string.h>
struct mobile_specs
{
    int id;
    char brand[100];
    char madeby[100];
    char model[100];
    char os[100];
    float display;
    char processor[100];
    char gpu[100];
    float ram;
    int intstorage;
    int extstorage;
    float frontcam;
    float rearcam;
    int battery;
    float weight;
    int price;
    int stock;
    int color;


};
int main()
{
    system("COLOR F2");
    struct mobile_specs s[1000];
    int i,o;
    FILE *fr;
    fr=fopen("mobile_specs.txt","r");

    for( i=0; i<30; i++)
    {
        fscanf(fr,"%d:%[^:]:%[^:]:%[^:]:%[^:]:%f:%[^:]:%[^:]:%f:%d:%d:%f:%f:%d:%f:%d:%d:%d",&s[i].id,s[i].brand,s[i].madeby,s[i].model,s[i].os,&s[i].display,s[i].processor,s[i].gpu,&s[i].ram,&s[i].intstorage,&s[i].extstorage,&s[i].frontcam,&s[i].rearcam,&s[i].battery,&s[i].weight,&s[i].price,&s[i].stock,&s[i].color);
    }
    printf("\t\t\tWELCOME TO OUR PRODUCT LIST.\n\n");
    printf(" Brand\t\tModel\t\tStock\t\tColor\t\tPrice\n\n");
    for(i=0; i<30 ; i++)


    {
        printf("%s\t\t",s[i].brand);
        printf("%s\t\t",s[i].model);
        printf(" %d\t\t",s[i].stock);
        printf(" %d\t\t",s[i].color);
        printf("%d\n",s[i].price);
    }

    int n,p;
    char mname[100];
    char bname[100];
    int b;
    int c,c1;
    float d;
    char e[100];
    int f;
    char mby[100];
    int g;
    int h;
    int j;
    int k=0,l,m=1.0;
    char y[10];
    int x,z;
    char frst[100];
    char scnd[100];
    int r,r1,bat,bat1,cam,cam1,fc,fc1;
    float b1,b2;
    char ml[100];
    float rm,mp;
    int ro,bt,btt,lowest,highest;

    for(i=0;; i++)
    {
        int w;
        printf("\n\nPRESS 1 TO CONTINUE QUERY\n\n");
        scanf("%d",&w);
        if(w==1)
        {
            printf("\n");
            printf("PRESS 1 TO SEARCH BY MODEL\n");
            printf("PRESS 2 TO SEARCH BY BRAND\n");
            printf("PRESS 3 TO  SEARCH BY RAM\n");
            printf("PRESS 4 TO SEARCH BY PRICE\n");
            printf("PRESS 5 FOR SELFIE PHONES\n");
            printf("PRESS 6 FOR BIG BATTERY PHONES\n");
            printf("PRESS 7 TO SEARCH BY DISPLAY SIZE\n");
            printf("PRESS 8 TO SEARCH BY ANDROID VERSION\n");
            printf("PRESS 9 TO SEARCH BY WEIGHT\n");
            printf("PRESS 10 TO SEARCH BY VENDOR\n");
            printf("PRESS 11 FOR GAMING DEVICES\n");
            printf("PRESS 12 FOR MULTITASKING DEVICES\n");
            printf("PRESS 13 TO SEARCH BY ROM\n");
            printf("PRESS 14 TO SEARCH BY EXTERNAL STORAGE\n");
            printf("PRESS 15 TO SEARCH BY CAMERA\n");
            printf("PRESS 16 TO SEE TOTAL PHONES IN THE SHOWROOM\n");
            printf("PRESS 17 TO SEE THE TABLETS\n");
            printf("PRESS 18 TO SEE PHABLETS\n");
            printf("PRESS 19 FOR CASH MEMO\n");
            printf("PRESS 20 FOR COMPARE TWO PHONES\n");
            printf("PRESS 21 FOR YOUR CHOICE\n");
            printf("PRESS 22 TO SEE THE LOWEST COST PHONE\n");
            printf("PRESS 23 TO SEE THE HIGHEST COST PHONE\n");
            scanf("%d",&n);
            if (n==1)
            {
                printf("ENTER MODEL NAME : ");
                scanf("%s",mname);
                for(i=0; i<30; i++)
                {
                    if(strcmp(mname,s[i].model)==0)
                    {
                        printf("\n\nHERE ARE SPECS\n\n");
                        printf("\tBrand %s\n",s[i].brand);
                        printf("\tMade in %s\n",s[i].madeby);
                        printf("\tModel \n",s[i].model);
                        printf("\tOS %s\n",s[i].os);
                        printf("\tDisplay Size = %.1f inch\n",s[i].display);
                        printf("\tProcessor %s\n",s[i].processor);
                        printf("\tGPU %s\n",s[i].gpu);
                        printf("\tRAM = %.1f GB\n",s[i].ram);
                        printf("\tInternal Storage = %d GB\n",s[i].intstorage);
                        printf("\tExternal Storage = %d GB\n",s[i].extstorage);
                        printf("\tFront Camera = %.1f M.P.\n",s[i].frontcam);
                        printf("\tRear Camera = %.1f M.P.\n",s[i].rearcam);
                        printf("\tBattery = %d mAh\n",s[i].battery);
                        printf("\tWeight = %.2f gram\n",s[i].weight);
                        printf("\tPrice = %d taka\n",s[i].price);
                        printf("\tStock = %d\n",s[i].stock);
                        printf("\tColors available = %d\n",s[i].color);
                    }
                }
            }
            if (n==2)
            {
                printf("ENTER BRAND NAME : ");
                scanf("%s",bname);
                printf(" Brand\t\tModel\t\tStock\t\tColor\t\t Price\n\n");
                for(i=0; i<30; i++)
                {
                    if(strcmp(bname,s[i].brand)==0)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf(" %d\t\t",s[i].stock);
                        printf(" %d\t\t",s[i].color);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }

            }
            if (n==3)
            {
                printf("HOW MUCH RAM YOU WANT?   ");
                scanf("%d",&b);
                printf("HERE ARE PHONES OF %d GB RAM\n\n",b);
                printf(" Brand\t\tModel\t\tStock\t\tRAM\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].ram==b)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf(" %.1f GB\t\t",s[i].ram);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }

            }
            if (n==4)
            {
                printf("ENTER THE LOWER RANGE\t");
                scanf("%d",&c);
                printf("ENTER THE UPPER RANGE\t");
                scanf("%d",&c1);
                printf("HERE ARE PHONES BETWEEN %d & %d TAKA\n\n",c,c1);
                printf(" Brand\t\tModel\t\tStock\t\tcolor\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].price>=c&&s[i].price<=c1)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %d\t\t",s[i].color);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if(n==5)
            {
                printf("HERE ARE SELFIE PHONES\n\n");
                printf(" Brand\t\tModel\t\tStock\t\tFront Camera\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].frontcam>5)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %.1f MP\t\t",s[i].frontcam);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if(n==6)
            {
                printf("HERE ARE PHONES WITH BIG BATTERY\n\n");
                printf(" Brand\t\tModel\t\tStock\t\tBattery\t\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if (s[i].battery>3000)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %d mAh\t\t",s[i].battery);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if (n==7)
            {
                printf("HOW BIG DISPLAY YOU WANT?\t");
                scanf("%f",&d);
                printf("HERE ARE PHONES OF %.1f inch DISPLAY\n\n",d);
                printf(" Brand\t\tModel\t\tStock\t\tDisplay\t\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if (s[i].display==d)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %.1f inch\t\t",s[i].display);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if (n==8)
            {
                printf("WHICH ANDROID VERSION YOU LIKE?\t");
                scanf("%s",e);
                printf("HERE ARE PHONES BY ANDROID VERSION\n\n");
                printf(" Brand\t\tModel\t\tStock\t\tAndroid v.\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if (strcmp(s[i].os,e)==0)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %s\t\t",s[i].os);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if (n==9)
            {
                scanf("%d",&f);
                printf("HERE ARE PHONES UNDER %d grammes\n\n",f);
                printf(" Brand\t\tModel\t\tStock\t\tWeight\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if (s[i].weight<=f)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %.1f\t\t",s[i].weight);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if (n==10)
            {
                printf("ENTER COUNTRY NAME\t");
                scanf("%s",&mby);
                printf("HERE ARE PHONES MADE BY %s\n",mby);
                printf(" Brand\t\tModel\t\tStock\t\tMade by\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(strcmp(s[i].madeby,mby)==0)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].stock);
                        printf("  %s\t\t",s[i].madeby);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if (n==11)
            {
                printf("HERE ARE PHONES FOR GAMING\n\n");
                printf(" Brand\t\tModel\t\tRAM\t\t\tGPU\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if (s[i].ram>=3)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %.1f\t\t",s[i].ram);
                        printf("  %s\t\t",s[i].gpu);
                        printf("%d tk\t\t\n",s[i].price);
                    }
                }
            }
            if(n==12)
            {
                printf("HERE ARE PHONES FOR MULTITASKING\n\n");
                printf(" Brand\t\tModel\t\tRAM\t\tProcessor\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if (s[i].ram>=2)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %.1f\t\t",s[i].ram);
                        printf("  %s\t",s[i].processor);
                        printf("%d tk\t\n",s[i].price);
                    }
                }
            }
            if(n==13)
            {
                printf("HOW MUCH STORAGE YOU WANT?\t");
                scanf("%d",&g);
                printf("HERE ARE PHONES WITH %d GB ROM\n\n",g);
                printf(" Brand\t\tModel\t\tRAM\t\tROM\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].intstorage==g)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %.1f\t\t",s[i].ram);
                        printf("  %d\t",s[i].intstorage);
                        printf("%d tk\t\n",s[i].price);
                    }
                }
            }
            if(n==14)
            {
                printf("ENTER STORAGE\t");
                scanf("%d",&h);
                printf("HERE ARE PHONES WITH %d GB EXTERNAL STORAGE\n\n",h);
                printf(" Brand\t\tModel\t\tROM\t\tExternal\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].extstorage==h)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %d\t\t",s[i].intstorage);
                        printf("  %d\t\t",s[i].extstorage);
                        printf("%d tk\t\n",s[i].price);
                    }
                }
            }
            if(n==15)
            {
                printf("ENTER MINIMUM MEHAPIXELS YOU WANT\t");
                scanf("%d",&j);
                printf("HERE ARE PHONES WITH MINIMUM %d MP CAMERA\n\n",j);
                printf(" Brand\t\tModel\t\tFrontcam\tRearcam\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].rearcam>=j)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %.1f\t\t",s[i].frontcam);
                        printf("  %.1f\t\t",s[i].rearcam);
                        printf("%d tk\t\n",s[i].price);
                    }
                }
            }
            if (n==16)
            {
                for (i=0; i<30; i++)
                {
                    l=k+s[i].stock;
                    k=l;

                }
                printf("\n\t\tTOTAL %d PHONES IN THIS SHOWROOM\n",l);
            }
            if (n==17)
            {
                printf("HERE ARE TABLETS\n\n");
                printf(" Brand\t\tModel\t\tdisplay\t\tbattery\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].display>=7.0)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %.1f\t\t",s[i].display);
                        printf("  %d\t\t",s[i].battery);
                        printf("%d tk\t\n",s[i].price);
                    }
                }

            }
            if (n==18)
            {
                printf("HERE ARE PHABLETS\n\n");
                printf(" Brand\t\tModel\t\tdisplay\t\tRAM\t\tPrice\n\n");
                for(i=0; i<30; i++)
                {
                    if(s[i].display<7.0&&s[i].display>=5.5)
                    {
                        printf("%s\t\t",s[i].brand);
                        printf("%s\t\t",s[i].model);
                        printf("  %.1f\t\t",s[i].display);
                        printf("  %.1f\t\t",s[i].ram);
                        printf("%d tk\t\n",s[i].price);
                    }
                }

            }
            if(n==19)
            {
                printf("ENTER PRODUCT MODEL\t:");
                scanf("%s",y);
                for(i=0; i<30; i++)
                {
                    if (strcmp(y,s[i].model)==0)
                    {
                        printf("PRICE\t:%d\n",s[i].price);
                        z=i;
                    }
                }
                printf("ENTER PAYMENT\t:");
                scanf("%d",&x);
                printf("RECIEVED AMOUNT\t:%d\n",x);
                o=x-s[z].price;
                if(o>=0)
                {
                    printf("\nCHANGE\t:%d\n",o);
                }
                else if (o<0)
                {
                    p=s[i].price-x;
                    printf("DUE\t:%d",p);
                }

            }
            if (n==20)
            {
                printf("Enter 1st Phone Model\t:");
                scanf("%s",&frst);
                printf("\nEnter 2nd Phone Model\t:");
                scanf("%s",&scnd);
                for(i=0; i<30; i++)
                {
                    if(strcmp(s[i].model,frst)==0)
                    {
                        r=i;
                    }
                }
                for(i=0; i<30; i++)
                {
                    if(strcmp(s[i].model,scnd)==0)
                    {
                        fc=i;
                    }
                }
                if(s[r].ram>s[fc].ram&&s[r].battery>s[fc].battery&&s[i].rearcam>s[fc].rearcam)
                {
                    printf("%s is better",frst);
                }
                else if (s[r].ram<s[fc].ram&&s[r].battery<s[fc].battery&&s[i].rearcam<s[fc].rearcam)
                {
                    printf("%s is better",scnd);
                }
                else
                {
                    printf("%s is better",frst);
                }


            }
            if(n==21)
            {
                printf("ENTER YOUR FAVOURITE BRAND\t");
                scanf("%s",&ml);
                printf("HOW MUCH RAM YOU WANT?\t");
                scanf("%f",&rm);
                printf("HOW MUCH IS YOUR BUDGET?\t");
                scanf("%d",&bt);
                printf("HOW MEGAPIXELS YOU WANT?\t");
                scanf("%f",&mp);
                printf("HOW BIG BATTERY YOU WANT?\t");
                scanf("%d",&btt);
                printf("\nHERE ARE YOUR DESIRED PHONES\n");
                printf("\n\tModel\t\tRAM\tPrice\tCamera\tBattery\n\n");
                for(i=0; i<30; i++)
                    if(strcmp(ml,s[i].brand)==0&&(rm==s[i].ram)&&(bt>=s[i].price)&&(mp==s[i].rearcam)&&(btt<=s[i].battery))
                    {
                        printf("\t%s\t\t%.1f\t%d\t%.1f\t%d\n",s[i].model,s[i].ram,s[i].price,s[i].rearcam,s[i].battery);
                    }

            }
            if(n==22)
            {
                lowest=s[0].price;
                for(i=1; i<30; i++)
                {
                    if(lowest>s[i].price)
                    {
                        lowest=s[i].price;
                        r1=i;
                    }

                }
                printf("\nTHE LOWEST COST PHONE IS OF %d TAKA & IT IS %s %s\n",lowest,s[r1].brand,s[r1].model);
            }
            if(n==23)
            {
                highest=s[0].price;
                for(i=1; i<30; i++)
                {
                    if(highest<s[i].price)
                    {
                        highest=s[i].price;
                        cam=i;
                    }
                }
                printf("\nTHE HIGHEST COST PHONE IS OF %d TAKA & IT IS %s %s\n",highest,s[cam].brand,s[cam].model);
            }



        }
        fclose(fr);
    }
}
