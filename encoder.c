#include <qtextcodec.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


QTextCodec* gbk_codec;
//QPainter* qp = new QPainter();
QString ChineseAndEnglish(const char*ChineseString)
{
gbk_codec = QTextCodec::codecForName("UTF-8");
return gbk_codec->toUnicode(ChineseString); 
}

QString ChineseAndEnglish(const char*ChineseString,const char* _codeName)
{
        gbk_codec = QTextCodec::codecForName(_codeName);
        return gbk_codec->toUnicode(ChineseString);
}
QCString ChineseAndEnglish2(QString unicodeString,const char* _codeName)
{        
	gbk_codec = QTextCodec::codecForName(_codeName);
	return gbk_codec->fromUnicode(unicodeString);
}

int get_decode(const char *chinese)
{
	QString txt1;
	QCString txt2;

	txt1 = ChineseAndEnglish(chinese);
	txt2 = ChineseAndEnglish(txt1, "UTF-8");

	    char* name;
	    //name=(char *)malloc(txt1.length());
	    ////strcpy(name, argv[1]);
	        name = txt2.data();
	            //for(int k = 0; k<txt1.length();k++ ){
	    //            //    name[k] = txt2.at(k);
	    //                //}
	                    if(argc == 4){
	                            printf("%s%s",argv[2],"的区位码是：");
	                             }else{
	                             printf("%s%s",argv[1],"的区位码是：");
                             }
	     int i=strlen(name);
             int j=0;
	     int l=0,r=0;
              for(j=0; j<i-1; j+=2)
	      {
	          r=(int)name[j];
	          l=(int)name[j+1];
	          if(r<0){
	             r=256+r-160;
	          }else{
	             r=r-160;
	         }
	        if(l<0){
	          l=256+l-160;
	         }else{
	           l=l-160;
	         }
	        if(j==0){
	         printf("%02d%02d",abs(r),abs(l));
	       }else{
	        printf(",%02d%02d",abs(r),abs(l));
	     }
	}
	      return 1;
}

