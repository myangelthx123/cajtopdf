// -----------------------------------------------------------------------------
// Name:           CAJ2PDF Qt
// Description:    CAJ 转 PDF 转换器
// Author:         Sainnhe Park <sainnhe@gmail.com>
// Website:        https://github.com/sainnhe/caj2pdf-qt
// License:        GPL3
// -----------------------------------------------------------------------------

#include "caj2pdf.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CAJ2PDF w(nullptr, argv[0]);
    w.show();
    return a.exec();
}
