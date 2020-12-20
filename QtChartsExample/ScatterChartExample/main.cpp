#include <QApplication>

#include <ChartView.h>
#include <MainWindow.h>

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    auto chartView = new ChartView;

    MainWindow w;
    w.setCentralWidget(chartView);
    w.show();
    return a.exec();
}
