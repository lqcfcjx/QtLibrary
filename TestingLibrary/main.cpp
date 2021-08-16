#include "mainwindow.h"
#include <QLibrary>
#include <QDebug>
//#include "ActivityLib/activitylibrary.h"
#include "StaticLib/staticlibrary.h"
#include <QApplication>

//typedef ActivityLibrary* (*GetActivityLibrary)();
//typedef int (*Fun)(int,int);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
    //动态库调用
//    QLibrary使用起来相当简单，最基本需要知道4个函数load()、isLoad()、 resolve()和unload()，
//    当然，绝大部分情况下，这四个也就够了。load()加载库、isLoad()判断库是否加载成功、
//    resolve()解析库中的函数、unload()卸载库。
//    QLibrary mylib("C:/Users/adminstrator/Desktop/codeQt/TestingLibrary/ActivityLib/ActivityLibrary.dll");
//    if(mylib.load()){
//        GetActivityLibrary getActivityLibrary = (GetActivityLibrary)mylib.resolve("getActivityLibrary");
//        Fun add = (Fun)mylib.resolve("add");
//        if(getActivityLibrary){
//            ActivityLibrary *pLib = getActivityLibrary();
//            int result = pLib->subtract(100,12);
//            qDebug()<<result;
//        }else{
//            qDebug()<<"Could not loaded library";
//        }
//        if(add){
//            int result = add(34,32);
//            qDebug()<<result;
//        }else{
//            qDebug()<<"Could not loaded library";
//        }
//    }else{
//        qDebug()<<mylib.errorString();
//    }

    //静态库调用
    StaticLibrary w;
    w.resize(400, 200);
    w.updateBackground();
    w.show();
    int nSubtract = w.subtract(10, 4);
    int nAdd = add(5, 5);
    QMessageBox::information(NULL, "Tip", QString("subtract:%1  add:%2").arg(nSubtract).arg(nAdd));

    return a.exec();
}
