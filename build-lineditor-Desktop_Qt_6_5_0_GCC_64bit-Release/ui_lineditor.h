/********************************************************************************
** Form generated from reading UI file 'lineditor.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINEDITOR_H
#define UI_LINEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lineditor
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionHTML;
    QAction *actionText;
    QAction *actionPDF;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionDelete;
    QAction *actionSelect_All;
    QAction *actionFind;
    QAction *actionReplace;
    QAction *actionBold;
    QAction *actionItalic;
    QAction *actionUnderline;
    QAction *actionStrike_Through;
    QAction *actionFont;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionDate;
    QAction *actionBullet_List;
    QAction *actionNumbered_List;
    QAction *actionCheck_Box;
    QAction *actionImage;
    QAction *actionText_from_File;
    QAction *actionTable;
    QAction *actionContents;
    QAction *actionAbout;
    QAction *actionFAQ;
    QAction *actionAlign_Left;
    QAction *actionAlign_Right;
    QAction *actionCentered;
    QAction *actionJustified;
    QAction *actionBackground;
    QAction *actionText_Color;
    QAction *actionHighlight;
    QWidget *centralwidget;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuExport_As;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuText;
    QMenu *menuColor;
    QMenu *menuSearch;
    QMenu *menuInsert;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;
    QToolBar *toolBar_2;
    QToolBar *toolBar_3;
    QToolBar *toolBar_4;
    QToolBar *toolBar_5;

    void setupUi(QMainWindow *lineditor)
    {
        if (lineditor->objectName().isEmpty())
            lineditor->setObjectName("lineditor");
        lineditor->resize(853, 600);
        QPalette palette;
        QBrush brush(QColor(255, 231, 200, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(192, 191, 188, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        QBrush brush2(QColor(36, 31, 49, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        QBrush brush4(QColor(239, 239, 239, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush4);
        QBrush brush5(QColor(118, 118, 118, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        QBrush brush6(QColor(177, 177, 177, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush6);
        lineditor->setPalette(palette);
        QFont font;
        font.setFamilies({QString::fromUtf8("Noto Sans")});
        font.setPointSize(11);
        font.setBold(false);
        lineditor->setFont(font);
        actionNew = new QAction(lineditor);
        actionNew->setObjectName("actionNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/new.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNew->setIcon(icon);
        actionOpen = new QAction(lineditor);
        actionOpen->setObjectName("actionOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/open.png"), QSize(), QIcon::Normal, QIcon::On);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(lineditor);
        actionSave->setObjectName("actionSave");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/save.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave->setIcon(icon2);
        actionSave_As = new QAction(lineditor);
        actionSave_As->setObjectName("actionSave_As");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/save_as.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSave_As->setIcon(icon3);
        actionHTML = new QAction(lineditor);
        actionHTML->setObjectName("actionHTML");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/html-5.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHTML->setIcon(icon4);
        actionText = new QAction(lineditor);
        actionText->setObjectName("actionText");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/rtf-document.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText->setIcon(icon5);
        actionPDF = new QAction(lineditor);
        actionPDF->setObjectName("actionPDF");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/pdf-2.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPDF->setIcon(icon6);
        actionPrint = new QAction(lineditor);
        actionPrint->setObjectName("actionPrint");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/print.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPrint->setIcon(icon7);
        actionExit = new QAction(lineditor);
        actionExit->setObjectName("actionExit");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/exit-sign.png"), QSize(), QIcon::Normal, QIcon::On);
        actionExit->setIcon(icon8);
        actionUndo = new QAction(lineditor);
        actionUndo->setObjectName("actionUndo");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/undo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUndo->setIcon(icon9);
        actionRedo = new QAction(lineditor);
        actionRedo->setObjectName("actionRedo");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/redo.png"), QSize(), QIcon::Normal, QIcon::On);
        actionRedo->setIcon(icon10);
        actionCut = new QAction(lineditor);
        actionCut->setObjectName("actionCut");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/cut.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCut->setIcon(icon11);
        actionCopy = new QAction(lineditor);
        actionCopy->setObjectName("actionCopy");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/images/copy.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCopy->setIcon(icon12);
        actionPaste = new QAction(lineditor);
        actionPaste->setObjectName("actionPaste");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/images/paste.png"), QSize(), QIcon::Normal, QIcon::On);
        actionPaste->setIcon(icon13);
        actionDelete = new QAction(lineditor);
        actionDelete->setObjectName("actionDelete");
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/images/delete-forever.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDelete->setIcon(icon14);
        actionSelect_All = new QAction(lineditor);
        actionSelect_All->setObjectName("actionSelect_All");
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/images/select-all-files.png"), QSize(), QIcon::Normal, QIcon::On);
        actionSelect_All->setIcon(icon15);
        actionFind = new QAction(lineditor);
        actionFind->setObjectName("actionFind");
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/images/find-and-replace.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFind->setIcon(icon16);
        actionReplace = new QAction(lineditor);
        actionReplace->setObjectName("actionReplace");
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/images/replace.png"), QSize(), QIcon::Normal, QIcon::On);
        actionReplace->setIcon(icon17);
        actionBold = new QAction(lineditor);
        actionBold->setObjectName("actionBold");
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/images/bold.png"), QSize(), QIcon::Normal, QIcon::On);
        actionBold->setIcon(icon18);
        actionItalic = new QAction(lineditor);
        actionItalic->setObjectName("actionItalic");
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/images/italic.png"), QSize(), QIcon::Normal, QIcon::On);
        actionItalic->setIcon(icon19);
        actionUnderline = new QAction(lineditor);
        actionUnderline->setObjectName("actionUnderline");
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/images/underline.png"), QSize(), QIcon::Normal, QIcon::On);
        actionUnderline->setIcon(icon20);
        actionStrike_Through = new QAction(lineditor);
        actionStrike_Through->setObjectName("actionStrike_Through");
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/images/strikethrough.png"), QSize(), QIcon::Normal, QIcon::On);
        actionStrike_Through->setIcon(icon21);
        actionFont = new QAction(lineditor);
        actionFont->setObjectName("actionFont");
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/images/font.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFont->setIcon(icon22);
        actionZoom_In = new QAction(lineditor);
        actionZoom_In->setObjectName("actionZoom_In");
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/images/zoom-in--v2.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_In->setIcon(icon23);
        actionZoom_Out = new QAction(lineditor);
        actionZoom_Out->setObjectName("actionZoom_Out");
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/images/zoom-out.png"), QSize(), QIcon::Normal, QIcon::On);
        actionZoom_Out->setIcon(icon24);
        actionDate = new QAction(lineditor);
        actionDate->setObjectName("actionDate");
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/images/calendar-plus.png"), QSize(), QIcon::Normal, QIcon::On);
        actionDate->setIcon(icon25);
        actionBullet_List = new QAction(lineditor);
        actionBullet_List->setObjectName("actionBullet_List");
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/images/bulleted-list.png"), QSize(), QIcon::Normal, QIcon::On);
        actionBullet_List->setIcon(icon26);
        actionNumbered_List = new QAction(lineditor);
        actionNumbered_List->setObjectName("actionNumbered_List");
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/images/numbered-list.png"), QSize(), QIcon::Normal, QIcon::On);
        actionNumbered_List->setIcon(icon27);
        actionCheck_Box = new QAction(lineditor);
        actionCheck_Box->setObjectName("actionCheck_Box");
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/images/choose.png"), QSize(), QIcon::Normal, QIcon::On);
        actionCheck_Box->setIcon(icon28);
        actionImage = new QAction(lineditor);
        actionImage->setObjectName("actionImage");
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/images/image.png"), QSize(), QIcon::Normal, QIcon::On);
        actionImage->setIcon(icon29);
        actionText_from_File = new QAction(lineditor);
        actionText_from_File->setObjectName("actionText_from_File");
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/images/edit-text-file.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText_from_File->setIcon(icon30);
        actionTable = new QAction(lineditor);
        actionTable->setObjectName("actionTable");
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/images/table-1.png"), QSize(), QIcon::Normal, QIcon::On);
        actionTable->setIcon(icon31);
        actionContents = new QAction(lineditor);
        actionContents->setObjectName("actionContents");
        QIcon icon32;
        icon32.addFile(QString::fromUtf8(":/images/images/content.png"), QSize(), QIcon::Normal, QIcon::On);
        actionContents->setIcon(icon32);
        actionAbout = new QAction(lineditor);
        actionAbout->setObjectName("actionAbout");
        QIcon icon33;
        icon33.addFile(QString::fromUtf8(":/images/images/info.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAbout->setIcon(icon33);
        actionFAQ = new QAction(lineditor);
        actionFAQ->setObjectName("actionFAQ");
        QIcon icon34;
        icon34.addFile(QString::fromUtf8(":/images/images/faq.png"), QSize(), QIcon::Normal, QIcon::On);
        actionFAQ->setIcon(icon34);
        actionAlign_Left = new QAction(lineditor);
        actionAlign_Left->setObjectName("actionAlign_Left");
        QIcon icon35;
        icon35.addFile(QString::fromUtf8(":/images/images/align-left.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlign_Left->setIcon(icon35);
        actionAlign_Right = new QAction(lineditor);
        actionAlign_Right->setObjectName("actionAlign_Right");
        QIcon icon36;
        icon36.addFile(QString::fromUtf8(":/images/images/align-right.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAlign_Right->setIcon(icon36);
        actionCentered = new QAction(lineditor);
        actionCentered->setObjectName("actionCentered");
        QIcon icon37;
        icon37.addFile(QString::fromUtf8(":/images/images/align-center.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCentered->setIcon(icon37);
        actionJustified = new QAction(lineditor);
        actionJustified->setObjectName("actionJustified");
        QIcon icon38;
        icon38.addFile(QString::fromUtf8(":/images/images/align-justify.png"), QSize(), QIcon::Normal, QIcon::On);
        actionJustified->setIcon(icon38);
        actionBackground = new QAction(lineditor);
        actionBackground->setObjectName("actionBackground");
        QIcon icon39;
        icon39.addFile(QString::fromUtf8(":/images/images/fill-color.png"), QSize(), QIcon::Normal, QIcon::On);
        actionBackground->setIcon(icon39);
        actionText_Color = new QAction(lineditor);
        actionText_Color->setObjectName("actionText_Color");
        QIcon icon40;
        icon40.addFile(QString::fromUtf8(":/images/images/font-style-formatting.png"), QSize(), QIcon::Normal, QIcon::On);
        actionText_Color->setIcon(icon40);
        actionHighlight = new QAction(lineditor);
        actionHighlight->setObjectName("actionHighlight");
        QIcon icon41;
        icon41.addFile(QString::fromUtf8(":/images/images/text-color.png"), QSize(), QIcon::Normal, QIcon::On);
        actionHighlight->setIcon(icon41);
        centralwidget = new QWidget(lineditor);
        centralwidget->setObjectName("centralwidget");
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 10, 831, 331));
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8(""));
        lineditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lineditor);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 853, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuExport_As = new QMenu(menuFile);
        menuExport_As->setObjectName("menuExport_As");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName("menuFormat");
        menuText = new QMenu(menuFormat);
        menuText->setObjectName("menuText");
        menuColor = new QMenu(menuFormat);
        menuColor->setObjectName("menuColor");
        menuSearch = new QMenu(menubar);
        menuSearch->setObjectName("menuSearch");
        menuInsert = new QMenu(menubar);
        menuInsert->setObjectName("menuInsert");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        lineditor->setMenuBar(menubar);
        statusbar = new QStatusBar(lineditor);
        statusbar->setObjectName("statusbar");
        QPalette palette1;
        QBrush brush7(QColor(246, 245, 244, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush7);
        QBrush brush8(QColor(61, 56, 70, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush8);
        QBrush brush9(QColor(94, 92, 100, 255));
        brush9.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        QBrush brush10(QColor(159, 159, 159, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        QBrush brush11(QColor(0, 0, 0, 128));
        brush11.setStyle(Qt::SolidPattern);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush11);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush8);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush11);
#endif
        statusbar->setPalette(palette1);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Noto Sans")});
        font1.setPointSize(11);
        font1.setBold(true);
        statusbar->setFont(font1);
        lineditor->setStatusBar(statusbar);
        toolBar = new QToolBar(lineditor);
        toolBar->setObjectName("toolBar");
        lineditor->addToolBar(Qt::TopToolBarArea, toolBar);
        toolBar_2 = new QToolBar(lineditor);
        toolBar_2->setObjectName("toolBar_2");
        lineditor->addToolBar(Qt::TopToolBarArea, toolBar_2);
        toolBar_3 = new QToolBar(lineditor);
        toolBar_3->setObjectName("toolBar_3");
        lineditor->addToolBar(Qt::TopToolBarArea, toolBar_3);
        toolBar_4 = new QToolBar(lineditor);
        toolBar_4->setObjectName("toolBar_4");
        lineditor->addToolBar(Qt::TopToolBarArea, toolBar_4);
        toolBar_5 = new QToolBar(lineditor);
        toolBar_5->setObjectName("toolBar_5");
        lineditor->addToolBar(Qt::TopToolBarArea, toolBar_5);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuInsert->menuAction());
        menubar->addAction(menuSearch->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(menuExport_As->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport_As->addAction(actionHTML);
        menuExport_As->addAction(actionText);
        menuExport_As->addAction(actionPDF);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionDelete);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addSeparator();
        menuEdit->addAction(actionFind);
        menuEdit->addAction(actionReplace);
        menuFormat->addAction(actionBold);
        menuFormat->addAction(actionItalic);
        menuFormat->addAction(actionUnderline);
        menuFormat->addAction(actionStrike_Through);
        menuFormat->addSeparator();
        menuFormat->addAction(actionFont);
        menuFormat->addSeparator();
        menuFormat->addAction(menuColor->menuAction());
        menuFormat->addSeparator();
        menuFormat->addAction(menuText->menuAction());
        menuText->addAction(actionAlign_Left);
        menuText->addAction(actionAlign_Right);
        menuText->addAction(actionCentered);
        menuText->addAction(actionJustified);
        menuColor->addAction(actionBackground);
        menuColor->addAction(actionText_Color);
        menuColor->addAction(actionHighlight);
        menuSearch->addAction(actionZoom_In);
        menuSearch->addAction(actionZoom_Out);
        menuInsert->addAction(actionDate);
        menuInsert->addSeparator();
        menuInsert->addSeparator();
        menuInsert->addAction(actionBullet_List);
        menuInsert->addAction(actionNumbered_List);
        menuInsert->addAction(actionCheck_Box);
        menuInsert->addSeparator();
        menuInsert->addAction(actionImage);
        menuInsert->addSeparator();
        menuInsert->addAction(actionText_from_File);
        menuInsert->addSeparator();
        menuInsert->addAction(actionTable);
        menuHelp->addAction(actionContents);
        menuHelp->addAction(actionFAQ);
        menuHelp->addAction(actionAbout);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionPrint);
        toolBar->addSeparator();
        toolBar->addAction(actionUndo);
        toolBar->addAction(actionRedo);
        toolBar_2->addAction(actionCut);
        toolBar_2->addAction(actionCopy);
        toolBar_2->addAction(actionPaste);
        toolBar_2->addAction(actionSelect_All);
        toolBar_3->addAction(actionBold);
        toolBar_3->addAction(actionItalic);
        toolBar_3->addAction(actionUnderline);
        toolBar_3->addAction(actionStrike_Through);
        toolBar_3->addAction(actionText_Color);
        toolBar_3->addAction(actionHighlight);
        toolBar_3->addAction(actionBackground);
        toolBar_3->addAction(actionFont);
        toolBar_4->addAction(actionAlign_Left);
        toolBar_4->addAction(actionCentered);
        toolBar_4->addAction(actionAlign_Right);
        toolBar_4->addAction(actionJustified);
        toolBar_5->addAction(actionAbout);

        retranslateUi(lineditor);

        QMetaObject::connectSlotsByName(lineditor);
    } // setupUi

    void retranslateUi(QMainWindow *lineditor)
    {
        lineditor->setWindowTitle(QCoreApplication::translate("lineditor", "lineditor", nullptr));
        actionNew->setText(QCoreApplication::translate("lineditor", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("lineditor", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("lineditor", "Open", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("lineditor", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("lineditor", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("lineditor", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_As->setText(QCoreApplication::translate("lineditor", "Save As", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_As->setShortcut(QCoreApplication::translate("lineditor", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHTML->setText(QCoreApplication::translate("lineditor", "HTML", nullptr));
        actionText->setText(QCoreApplication::translate("lineditor", "Text", nullptr));
        actionPDF->setText(QCoreApplication::translate("lineditor", "PDF", nullptr));
        actionPrint->setText(QCoreApplication::translate("lineditor", "Print", nullptr));
        actionExit->setText(QCoreApplication::translate("lineditor", "Exit", nullptr));
        actionUndo->setText(QCoreApplication::translate("lineditor", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("lineditor", "Redo", nullptr));
        actionCut->setText(QCoreApplication::translate("lineditor", "Cut", nullptr));
        actionCopy->setText(QCoreApplication::translate("lineditor", "Copy", nullptr));
        actionPaste->setText(QCoreApplication::translate("lineditor", "Paste", nullptr));
        actionDelete->setText(QCoreApplication::translate("lineditor", "Delete", nullptr));
        actionSelect_All->setText(QCoreApplication::translate("lineditor", "Select All", nullptr));
        actionFind->setText(QCoreApplication::translate("lineditor", "Find", nullptr));
        actionReplace->setText(QCoreApplication::translate("lineditor", "Replace", nullptr));
        actionBold->setText(QCoreApplication::translate("lineditor", "Bold", nullptr));
        actionItalic->setText(QCoreApplication::translate("lineditor", "Italic", nullptr));
        actionUnderline->setText(QCoreApplication::translate("lineditor", "Underline", nullptr));
        actionStrike_Through->setText(QCoreApplication::translate("lineditor", "Strike Through", nullptr));
#if QT_CONFIG(tooltip)
        actionStrike_Through->setToolTip(QCoreApplication::translate("lineditor", "Strikethrough", nullptr));
#endif // QT_CONFIG(tooltip)
        actionFont->setText(QCoreApplication::translate("lineditor", "Font", nullptr));
        actionZoom_In->setText(QCoreApplication::translate("lineditor", "Zoom In", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("lineditor", "Ctrl+=", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("lineditor", "Zoom Out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("lineditor", "Ctrl+-", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDate->setText(QCoreApplication::translate("lineditor", "Date and Time", nullptr));
        actionBullet_List->setText(QCoreApplication::translate("lineditor", "Bullet List", nullptr));
        actionNumbered_List->setText(QCoreApplication::translate("lineditor", "Numbered List", nullptr));
        actionCheck_Box->setText(QCoreApplication::translate("lineditor", "Check Box", nullptr));
        actionImage->setText(QCoreApplication::translate("lineditor", "Image", nullptr));
        actionText_from_File->setText(QCoreApplication::translate("lineditor", "Text from File", nullptr));
        actionTable->setText(QCoreApplication::translate("lineditor", "Table", nullptr));
        actionContents->setText(QCoreApplication::translate("lineditor", "Contents", nullptr));
        actionAbout->setText(QCoreApplication::translate("lineditor", "About", nullptr));
        actionFAQ->setText(QCoreApplication::translate("lineditor", "FAQ", nullptr));
        actionAlign_Left->setText(QCoreApplication::translate("lineditor", "Align Left", nullptr));
        actionAlign_Right->setText(QCoreApplication::translate("lineditor", "Align Right", nullptr));
        actionCentered->setText(QCoreApplication::translate("lineditor", "Centered", nullptr));
        actionJustified->setText(QCoreApplication::translate("lineditor", "Justified", nullptr));
        actionBackground->setText(QCoreApplication::translate("lineditor", "Background", nullptr));
        actionText_Color->setText(QCoreApplication::translate("lineditor", "Text Color", nullptr));
        actionHighlight->setText(QCoreApplication::translate("lineditor", "Highlight", nullptr));
        menuFile->setTitle(QCoreApplication::translate("lineditor", "File", nullptr));
        menuExport_As->setTitle(QCoreApplication::translate("lineditor", "Export As", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("lineditor", "Edit", nullptr));
        menuFormat->setTitle(QCoreApplication::translate("lineditor", "Format", nullptr));
        menuText->setTitle(QCoreApplication::translate("lineditor", "Text", nullptr));
        menuColor->setTitle(QCoreApplication::translate("lineditor", "Color", nullptr));
        menuSearch->setTitle(QCoreApplication::translate("lineditor", "View", nullptr));
        menuInsert->setTitle(QCoreApplication::translate("lineditor", "Insert", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("lineditor", "Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("lineditor", "toolBar", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("lineditor", "toolBar_2", nullptr));
        toolBar_3->setWindowTitle(QCoreApplication::translate("lineditor", "toolBar_3", nullptr));
        toolBar_4->setWindowTitle(QCoreApplication::translate("lineditor", "toolBar_4", nullptr));
        toolBar_5->setWindowTitle(QCoreApplication::translate("lineditor", "toolBar_5", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lineditor: public Ui_lineditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINEDITOR_H
