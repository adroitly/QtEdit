/********************************************************************************
** Form generated from reading UI file 'qtedit.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTEDIT_H
#define UI_QTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtEditClass
{
public:
    QAction *closeaction;
    QAction *openaction;
    QAction *importaction;
    QAction *actionHelp;
    QAction *exportaction;
    QAction *Action_Save;
    QAction *export_byte;
    QAction *import_Spine;
    QWidget *centralWidget;
    QDockWidget *SceneWidget;
    QWidget *dockWidgetContents_2;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QStatusBar *statusBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents_3;
    QTreeWidget *AnimationtreeWidget;
    QDockWidget *OutWiget;
    QWidget *dockWidgetContents_4;
    QPlainTextEdit *showmessage;
    QDockWidget *PerWiget;
    QWidget *dockWidgetContents_5;
    QSlider *PencentageSlider;
    QDockWidget *dockWidget_4;
    QWidget *dockWidgetContents;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Width;
    QLineEdit *Height;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *ScallX;
    QLineEdit *ScallY;
    QPushButton *PauseButton;
    QLineEdit *Re_Width;
    QLineEdit *Re_Height;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *MyBox_comboBox;
    QLabel *label_8;
    QLineEdit *St_Width;
    QLineEdit *St_Height;
    QLabel *label_10;
    QLineEdit *En_Height;
    QLineEdit *En_Width;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLineEdit *Rotate;

    void setupUi(QMainWindow *QtEditClass)
    {
        if (QtEditClass->objectName().isEmpty())
            QtEditClass->setObjectName(QStringLiteral("QtEditClass"));
        QtEditClass->setEnabled(true);
        QtEditClass->resize(1768, 960);
        QtEditClass->setMinimumSize(QSize(0, 0));
        QtEditClass->setMaximumSize(QSize(16777215, 16777215));
        closeaction = new QAction(QtEditClass);
        closeaction->setObjectName(QStringLiteral("closeaction"));
        openaction = new QAction(QtEditClass);
        openaction->setObjectName(QStringLiteral("openaction"));
        importaction = new QAction(QtEditClass);
        importaction->setObjectName(QStringLiteral("importaction"));
        actionHelp = new QAction(QtEditClass);
        actionHelp->setObjectName(QStringLiteral("actionHelp"));
        exportaction = new QAction(QtEditClass);
        exportaction->setObjectName(QStringLiteral("exportaction"));
        Action_Save = new QAction(QtEditClass);
        Action_Save->setObjectName(QStringLiteral("Action_Save"));
        export_byte = new QAction(QtEditClass);
        export_byte->setObjectName(QStringLiteral("export_byte"));
        import_Spine = new QAction(QtEditClass);
        import_Spine->setObjectName(QStringLiteral("import_Spine"));
        centralWidget = new QWidget(QtEditClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SceneWidget = new QDockWidget(centralWidget);
        SceneWidget->setObjectName(QStringLiteral("SceneWidget"));
        SceneWidget->setGeometry(QRect(0, 0, 960, 680));
        SceneWidget->setMinimumSize(QSize(960, 680));
        SceneWidget->setMaximumSize(QSize(960, 680));
        QFont font;
        font.setKerning(false);
        SceneWidget->setFont(font);
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        SceneWidget->setWidget(dockWidgetContents_2);
        QtEditClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtEditClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1768, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        QtEditClass->setMenuBar(menuBar);
        statusBar = new QStatusBar(QtEditClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QtEditClass->setStatusBar(statusBar);
        dockWidget = new QDockWidget(QtEditClass);
        dockWidget->setObjectName(QStringLiteral("dockWidget"));
        dockWidget->setMaximumSize(QSize(611, 841));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QStringLiteral("dockWidgetContents_3"));
        AnimationtreeWidget = new QTreeWidget(dockWidgetContents_3);
        AnimationtreeWidget->setObjectName(QStringLiteral("AnimationtreeWidget"));
        AnimationtreeWidget->setGeometry(QRect(0, 0, 611, 841));
        AnimationtreeWidget->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        dockWidget->setWidget(dockWidgetContents_3);
        QtEditClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);
        OutWiget = new QDockWidget(QtEditClass);
        OutWiget->setObjectName(QStringLiteral("OutWiget"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QStringLiteral("dockWidgetContents_4"));
        showmessage = new QPlainTextEdit(dockWidgetContents_4);
        showmessage->setObjectName(QStringLiteral("showmessage"));
        showmessage->setGeometry(QRect(0, 0, 431, 271));
        QFont font1;
        font1.setPointSize(12);
        showmessage->setFont(font1);
        OutWiget->setWidget(dockWidgetContents_4);
        QtEditClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), OutWiget);
        PerWiget = new QDockWidget(QtEditClass);
        PerWiget->setObjectName(QStringLiteral("PerWiget"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QStringLiteral("dockWidgetContents_5"));
        PencentageSlider = new QSlider(dockWidgetContents_5);
        PencentageSlider->setObjectName(QStringLiteral("PencentageSlider"));
        PencentageSlider->setGeometry(QRect(0, 0, 960, 51));
        PencentageSlider->setMaximumSize(QSize(16777215, 16777215));
        PencentageSlider->setFont(font1);
        PencentageSlider->setMinimum(0);
        PencentageSlider->setMaximum(99);
        PencentageSlider->setValue(0);
        PencentageSlider->setOrientation(Qt::Horizontal);
        PerWiget->setWidget(dockWidgetContents_5);
        QtEditClass->addDockWidget(static_cast<Qt::DockWidgetArea>(8), PerWiget);
        dockWidget_4 = new QDockWidget(QtEditClass);
        dockWidget_4->setObjectName(QStringLiteral("dockWidget_4"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QStringLiteral("dockWidgetContents"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 0, 54, 21));
        label->setFont(font1);
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 0, 54, 21));
        label_2->setFont(font1);
        Width = new QLineEdit(dockWidgetContents);
        Width->setObjectName(QStringLiteral("Width"));
        Width->setGeometry(QRect(20, 40, 61, 20));
        Height = new QLineEdit(dockWidgetContents);
        Height->setObjectName(QStringLiteral("Height"));
        Height->setGeometry(QRect(120, 40, 71, 20));
        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 0, 54, 21));
        label_3->setFont(font1);
        label_4 = new QLabel(dockWidgetContents);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(330, 0, 54, 21));
        label_4->setFont(font1);
        ScallX = new QLineEdit(dockWidgetContents);
        ScallX->setObjectName(QStringLiteral("ScallX"));
        ScallX->setGeometry(QRect(220, 40, 71, 20));
        ScallY = new QLineEdit(dockWidgetContents);
        ScallY->setObjectName(QStringLiteral("ScallY"));
        ScallY->setGeometry(QRect(320, 40, 71, 20));
        PauseButton = new QPushButton(dockWidgetContents);
        PauseButton->setObjectName(QStringLiteral("PauseButton"));
        PauseButton->setGeometry(QRect(130, 140, 75, 23));
        PauseButton->setFont(font1);
        Re_Width = new QLineEdit(dockWidgetContents);
        Re_Width->setObjectName(QStringLiteral("Re_Width"));
        Re_Width->setGeometry(QRect(20, 100, 61, 20));
        Re_Height = new QLineEdit(dockWidgetContents);
        Re_Height->setObjectName(QStringLiteral("Re_Height"));
        Re_Height->setGeometry(QRect(120, 100, 71, 20));
        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(23, 70, 71, 21));
        label_6->setFont(font1);
        label_7 = new QLabel(dockWidgetContents);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(123, 70, 81, 21));
        label_7->setFont(font1);
        MyBox_comboBox = new QComboBox(dockWidgetContents);
        MyBox_comboBox->setObjectName(QStringLiteral("MyBox_comboBox"));
        MyBox_comboBox->setGeometry(QRect(136, 267, 101, 22));
        label_8 = new QLabel(dockWidgetContents);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(78, 167, 54, 21));
        label_8->setFont(font1);
        St_Width = new QLineEdit(dockWidgetContents);
        St_Width->setObjectName(QStringLiteral("St_Width"));
        St_Width->setGeometry(QRect(66, 187, 71, 20));
        St_Height = new QLineEdit(dockWidgetContents);
        St_Height->setObjectName(QStringLiteral("St_Height"));
        St_Height->setGeometry(QRect(66, 237, 71, 20));
        label_10 = new QLabel(dockWidgetContents);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(78, 212, 54, 21));
        label_10->setFont(font1);
        En_Height = new QLineEdit(dockWidgetContents);
        En_Height->setObjectName(QStringLiteral("En_Height"));
        En_Height->setGeometry(QRect(196, 237, 71, 20));
        En_Width = new QLineEdit(dockWidgetContents);
        En_Width->setObjectName(QStringLiteral("En_Width"));
        En_Width->setGeometry(QRect(196, 187, 71, 20));
        label_18 = new QLabel(dockWidgetContents);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(208, 212, 54, 21));
        label_18->setFont(font1);
        label_19 = new QLabel(dockWidgetContents);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(208, 165, 54, 21));
        label_19->setFont(font1);
        label_20 = new QLabel(dockWidgetContents);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(8, 207, 54, 21));
        label_20->setFont(font1);
        label_21 = new QLabel(dockWidgetContents);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(156, 207, 54, 21));
        label_21->setFont(font1);
        label_22 = new QLabel(dockWidgetContents);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(308, 185, 54, 21));
        label_22->setFont(font1);
        Rotate = new QLineEdit(dockWidgetContents);
        Rotate->setObjectName(QStringLiteral("Rotate"));
        Rotate->setGeometry(QRect(296, 207, 71, 20));
        dockWidget_4->setWidget(dockWidgetContents);
        QtEditClass->addDockWidget(static_cast<Qt::DockWidgetArea>(2), dockWidget_4);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menu->addAction(openaction);
        menu->addAction(Action_Save);
        menu->addAction(closeaction);
        menu_2->addAction(importaction);
        menu_2->addAction(import_Spine);
        menu_2->addAction(export_byte);
        menu_2->addAction(exportaction);
        menu_3->addAction(actionHelp);

        retranslateUi(QtEditClass);

        QMetaObject::connectSlotsByName(QtEditClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtEditClass)
    {
        QtEditClass->setWindowTitle(QApplication::translate("QtEditClass", "QtEdit", 0));
        closeaction->setText(QApplication::translate("QtEditClass", "\345\205\263\351\227\255", 0));
        openaction->setText(QApplication::translate("QtEditClass", "FBX\346\226\207\344\273\266\350\275\254\346\215\242", 0));
        importaction->setText(QApplication::translate("QtEditClass", "\345\257\274\345\205\245c3b,c3t", 0));
        actionHelp->setText(QApplication::translate("QtEditClass", "Help", 0));
        exportaction->setText(QApplication::translate("QtEditClass", "\345\257\274\345\207\272JSON", 0));
        Action_Save->setText(QApplication::translate("QtEditClass", "\344\277\235\345\255\230Ctrl+S", 0));
        export_byte->setText(QApplication::translate("QtEditClass", "\345\257\274\345\207\272\344\272\214\350\277\233\345\210\266", 0));
        import_Spine->setText(QApplication::translate("QtEditClass", "\345\257\274\345\205\245Spine", 0));
        menu->setTitle(QApplication::translate("QtEditClass", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("QtEditClass", "\347\274\226\350\276\221", 0));
        menu_3->setTitle(QApplication::translate("QtEditClass", "\345\270\256\345\212\251", 0));
        QTreeWidgetItem *___qtreewidgetitem = AnimationtreeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("QtEditClass", "Animations", 0));
        label->setText(QApplication::translate("QtEditClass", "Width", 0));
        label_2->setText(QApplication::translate("QtEditClass", "Height", 0));
        Width->setText(QApplication::translate("QtEditClass", "500", 0));
        Height->setText(QApplication::translate("QtEditClass", "100", 0));
        label_3->setText(QApplication::translate("QtEditClass", "ScallX", 0));
        label_4->setText(QApplication::translate("QtEditClass", "ScallY", 0));
        ScallX->setText(QApplication::translate("QtEditClass", "1", 0));
        ScallY->setText(QApplication::translate("QtEditClass", "1", 0));
        PauseButton->setText(QApplication::translate("QtEditClass", "Start", 0));
        Re_Width->setText(QApplication::translate("QtEditClass", "0", 0));
        Re_Height->setText(QApplication::translate("QtEditClass", "0", 0));
        label_6->setText(QApplication::translate("QtEditClass", "\347\233\270\345\257\271Width", 0));
        label_7->setText(QApplication::translate("QtEditClass", "\347\233\270\345\257\271Height", 0));
        MyBox_comboBox->clear();
        MyBox_comboBox->insertItems(0, QStringList()
         << QApplication::translate("QtEditClass", "-\350\257\267\351\200\211\346\213\251-", 0)
        );
        label_8->setText(QApplication::translate("QtEditClass", "\350\265\267\347\202\271X", 0));
        St_Width->setText(QString());
        St_Height->setText(QString());
        label_10->setText(QApplication::translate("QtEditClass", "\350\265\267\347\202\271Y", 0));
        En_Height->setText(QString());
        En_Width->setText(QString());
        label_18->setText(QApplication::translate("QtEditClass", "\347\273\210\347\202\271Y", 0));
        label_19->setText(QApplication::translate("QtEditClass", "\347\273\210\347\202\271X", 0));
        label_20->setText(QApplication::translate("QtEditClass", "Start", 0));
        label_21->setText(QApplication::translate("QtEditClass", "End", 0));
        label_22->setText(QApplication::translate("QtEditClass", "Rotate", 0));
        Rotate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtEditClass: public Ui_QtEditClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTEDIT_H
