/********************************************************************************
** Form generated from reading UI file 'imageretrieval.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGERETRIEVAL_H
#define UI_IMAGERETRIEVAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ImageRetrievalClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QListWidget *baseImgList;
    QWidget *widget;
    QVBoxLayout *actionList;
    QPushButton *findSimiliar;
    QPushButton *pushButton_4;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QListWidget *resultList;
    QListWidget *infoList;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ImageRetrievalClass)
    {
        if (ImageRetrievalClass->objectName().isEmpty())
            ImageRetrievalClass->setObjectName(QStringLiteral("ImageRetrievalClass"));
        ImageRetrievalClass->setEnabled(true);
        ImageRetrievalClass->resize(1114, 644);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ImageRetrievalClass->sizePolicy().hasHeightForWidth());
        ImageRetrievalClass->setSizePolicy(sizePolicy);
        centralWidget = new QWidget(ImageRetrievalClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        baseImgList = new QListWidget(centralWidget);
        baseImgList->setObjectName(QStringLiteral("baseImgList"));
        sizePolicy.setHeightForWidth(baseImgList->sizePolicy().hasHeightForWidth());
        baseImgList->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(baseImgList);

        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        actionList = new QVBoxLayout(widget);
        actionList->setSpacing(6);
        actionList->setContentsMargins(11, 11, 11, 11);
        actionList->setObjectName(QStringLiteral("actionList"));
        findSimiliar = new QPushButton(widget);
        findSimiliar->setObjectName(QStringLiteral("findSimiliar"));
        findSimiliar->setEnabled(true);

        actionList->addWidget(findSimiliar);

        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setEnabled(false);

        actionList->addWidget(pushButton_4);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setEnabled(false);

        actionList->addWidget(pushButton_2);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        actionList->addWidget(pushButton);


        horizontalLayout->addWidget(widget);

        resultList = new QListWidget(centralWidget);
        resultList->setObjectName(QStringLiteral("resultList"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(resultList->sizePolicy().hasHeightForWidth());
        resultList->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(resultList);

        infoList = new QListWidget(centralWidget);
        infoList->setObjectName(QStringLiteral("infoList"));
        sizePolicy.setHeightForWidth(infoList->sizePolicy().hasHeightForWidth());
        infoList->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(infoList);


        horizontalLayout_2->addLayout(horizontalLayout);

        ImageRetrievalClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(ImageRetrievalClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1114, 21));
        ImageRetrievalClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(ImageRetrievalClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        ImageRetrievalClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(ImageRetrievalClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ImageRetrievalClass->setStatusBar(statusBar);

        retranslateUi(ImageRetrievalClass);

        QMetaObject::connectSlotsByName(ImageRetrievalClass);
    } // setupUi

    void retranslateUi(QMainWindow *ImageRetrievalClass)
    {
        ImageRetrievalClass->setWindowTitle(QApplication::translate("ImageRetrievalClass", "ImageRetrieval", 0));
        findSimiliar->setText(QApplication::translate("ImageRetrievalClass", "Find similiar", 0));
        pushButton_4->setText(QApplication::translate("ImageRetrievalClass", "PushButton", 0));
        pushButton_2->setText(QApplication::translate("ImageRetrievalClass", "PushButton", 0));
        pushButton->setText(QApplication::translate("ImageRetrievalClass", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class ImageRetrievalClass: public Ui_ImageRetrievalClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGERETRIEVAL_H
