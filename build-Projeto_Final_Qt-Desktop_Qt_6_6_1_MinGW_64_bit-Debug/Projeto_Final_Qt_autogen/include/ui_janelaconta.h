/********************************************************************************
** Form generated from reading UI file 'janelaconta.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JANELACONTA_H
#define UI_JANELACONTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_JanelaConta
{
public:

    void setupUi(QDialog *JanelaConta)
    {
        if (JanelaConta->objectName().isEmpty())
            JanelaConta->setObjectName("JanelaConta");
        JanelaConta->resize(640, 480);

        retranslateUi(JanelaConta);

        QMetaObject::connectSlotsByName(JanelaConta);
    } // setupUi

    void retranslateUi(QDialog *JanelaConta)
    {
        JanelaConta->setWindowTitle(QCoreApplication::translate("JanelaConta", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JanelaConta: public Ui_JanelaConta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JANELACONTA_H
