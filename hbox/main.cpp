#include <QApplication>
#include "bugrepform.h"
#include "calculator.h"
#include "dialoge1.h"
#include "dialog2.h"


int main(int argc, char* argv[])
{
  QApplication app(argc, argv);


 auto elem = new BugRepForm;

  elem->show();

  return app.exec();
}
