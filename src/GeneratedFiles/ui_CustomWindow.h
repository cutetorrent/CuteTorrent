/********************************************************************************
** Form generated from reading UI file 'CustomWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUSTOMWINDOW_H
#define UI_CUSTOMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CustomWindow
{
public:
    QAction *ACTION_MENUFILE_OPEN_TORRENT;
    QAction *ACTION_MENUFILE_OPEN_MAGNET;
    QAction *ACTION_MENUFILE_CREATE;
    QAction *ACTION_MENUFILE_EXIT;
    QAction *ACTION_TOOLS_SETTINGS;
    QAction *ACTION_SEARCHTOOLBAR_DOWNLOAD;
    QAction *ACTION_SEARCHTOOLBAR_OPEN_URL;
    QAction *ACTION_MENUHELP_ABAUT_CT;
    QAction *ACTION_MENUHELP_CHECK_UPDATE;
    QAction *ACTION_TOOLBAR_SETTINGS;
    QAction *ACTION_TOOLS_BACKUP;
    QAction *ACTION_RSSTOOLBAR_RSS_ADD;
    QAction *ACTION_RSSTOOLBAR_RSS_REMOVE;
    QAction *ACTION_RSSTOOLBAR_RSS_EDIT;
    QAction *ACTION_MENUHELP_ABOUT_QT;
    QAction *ACTION_TORRENTTOOLBAR_QUEUE_UP;
    QAction *ACTION_TORRENTTOOLBAR_QUEUE_DOWN;
    QAction *ACTION_MENUHELP_REPORT_PROBLEM;
    QAction *ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY;
    QAction *ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY;
    QAction *ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY;
    QAction *ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY;
    QAction *ACTION_TORRENTTOOLBAR_ADD_TORRENT;
    QAction *ACTION_TORRENTTOOLBAR_OPEN_MAGNET;
    QAction *ACTION_TOOLS_IMPORT;
    QAction *ACTION_AUTOSHUTDOWN_DISABLED;
    QAction *ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLADS_COMPLETE;
    QAction *ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE;
    QAction *ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE;
    QAction *ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE;
    QAction *ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE;
    QAction *ACTION_MENUHELP_RATE;
    QAction *ACTION_TORRENTTOOLBAR_SWITCH_VIEW;
    QVBoxLayout *verticalLayout;
    QWidget *titleBar;
    QHBoxLayout *horizontalLayout;
    QLabel *tbMenu;
    QLabel *LTitle;
    QPushButton *pbMin;
    QPushButton *pbMax;
    QPushButton *pbClose;
    QWidget *m_centralWidget;
    QGridLayout *gridLayout_3;
    QStatusBar *mystatusBar;
    QGridLayout *gridLayout_6;
    QSplitter *verticalSplitter;
    QSplitter *horizontalSplitter;
    QTreeView *m_pGroupTreeView;
    QWidget *ItemListContainer;
    QVBoxLayout *torrentViewLayout;
    QWidget *SortersContainer;
    QHBoxLayout *horizontalLayout_3;
    QWidget *TorentLimitsContainer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *uploadLimitLabel;
    QSpinBox *ul;
    QLabel *downloadLimitLabel;
    QSpinBox *dl;
    QSpacerItem *horizontalSpacer;
    QLabel *label_15;
    QTreeView *m_pTorrentListView;
    QStackedWidget *m_pInfoPlaneContainer;
    QWidget *torrentPage;
    QGridLayout *gridLayout_11;
    QTabWidget *m_pTabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_4;
    QLabel *availibilityLabel;
    QLabel *progressLabel;
    QWidget *widget_2;
    QWidget *widget;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *pathLabel;
    QLabel *uploadedBytesLabel;
    QLabel *label_9;
    QLabel *downloadedBytesLabel;
    QLabel *label_5;
    QLabel *uploadSpeedLabel;
    QLabel *activetimeLabel;
    QLabel *label_3;
    QLabel *timeleftLabel;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *downloadSpeedLabel;
    QLabel *totalSizeLabel;
    QLabel *peerCoutLabel;
    QLabel *label_11;
    QLabel *seedCoutLabel;
    QLabel *label_10;
    QLabel *label_6;
    QLabel *describtionLabel;
    QLabel *label_12;
    QLabel *infoHashLabel;
    QWidget *tab_3;
    QGridLayout *gridLayout_2;
    QTableView *peerTableView;
    QWidget *tab_2;
    QGridLayout *gridLayout;
    QTableWidget *trackerTableWidget;
    QWidget *tab_4;
    QGridLayout *gridLayout_5;
    QTreeView *fileTableView;
    QWidget *rssPage;
    QGridLayout *m_pRssInfoLayout;
    QWidget *widget_3;
    QMenuBar *mainMenuBar;
    QMenu *fileMenu;
    QMenu *menu_CuteTorrent;
    QMenu *toolsMenu;
    QMenu *autoShutdownMenu;
    QMenu *viewMenu;
    QMenu *languageSubMenu;
    QMenu *skinSubMenu;
    QStackedWidget *m_pToolBarsContainer;
    QToolBar *m_pTorrentToolBar;
    QToolBar *m_pSearchToolBar;
    QToolBar *m_pRssToolBar;

    void setupUi(QWidget *CustomWindow)
    {
        if (CustomWindow->objectName().isEmpty())
            CustomWindow->setObjectName(QStringLiteral("CustomWindow"));
        CustomWindow->resize(550, 681);
        CustomWindow->setMouseTracking(true);
        ACTION_MENUFILE_OPEN_TORRENT = new QAction(CustomWindow);
        ACTION_MENUFILE_OPEN_TORRENT->setObjectName(QStringLiteral("ACTION_MENUFILE_OPEN_TORRENT"));
        ACTION_MENUFILE_OPEN_TORRENT->setShortcutContext(Qt::WindowShortcut);
        ACTION_MENUFILE_OPEN_MAGNET = new QAction(CustomWindow);
        ACTION_MENUFILE_OPEN_MAGNET->setObjectName(QStringLiteral("ACTION_MENUFILE_OPEN_MAGNET"));
        ACTION_MENUFILE_CREATE = new QAction(CustomWindow);
        ACTION_MENUFILE_CREATE->setObjectName(QStringLiteral("ACTION_MENUFILE_CREATE"));
        ACTION_MENUFILE_EXIT = new QAction(CustomWindow);
        ACTION_MENUFILE_EXIT->setObjectName(QStringLiteral("ACTION_MENUFILE_EXIT"));
        ACTION_MENUFILE_EXIT->setMenuRole(QAction::QuitRole);
        ACTION_TOOLS_SETTINGS = new QAction(CustomWindow);
        ACTION_TOOLS_SETTINGS->setObjectName(QStringLiteral("ACTION_TOOLS_SETTINGS"));
        ACTION_TOOLS_SETTINGS->setMenuRole(QAction::PreferencesRole);
        ACTION_SEARCHTOOLBAR_DOWNLOAD = new QAction(CustomWindow);
        ACTION_SEARCHTOOLBAR_DOWNLOAD->setObjectName(QStringLiteral("ACTION_SEARCHTOOLBAR_DOWNLOAD"));
        ACTION_SEARCHTOOLBAR_OPEN_URL = new QAction(CustomWindow);
        ACTION_SEARCHTOOLBAR_OPEN_URL->setObjectName(QStringLiteral("ACTION_SEARCHTOOLBAR_OPEN_URL"));
        ACTION_MENUHELP_ABAUT_CT = new QAction(CustomWindow);
        ACTION_MENUHELP_ABAUT_CT->setObjectName(QStringLiteral("ACTION_MENUHELP_ABAUT_CT"));
        ACTION_MENUHELP_ABAUT_CT->setMenuRole(QAction::AboutRole);
        ACTION_MENUHELP_CHECK_UPDATE = new QAction(CustomWindow);
        ACTION_MENUHELP_CHECK_UPDATE->setObjectName(QStringLiteral("ACTION_MENUHELP_CHECK_UPDATE"));
        ACTION_TOOLBAR_SETTINGS = new QAction(CustomWindow);
        ACTION_TOOLBAR_SETTINGS->setObjectName(QStringLiteral("ACTION_TOOLBAR_SETTINGS"));
        ACTION_TOOLS_BACKUP = new QAction(CustomWindow);
        ACTION_TOOLS_BACKUP->setObjectName(QStringLiteral("ACTION_TOOLS_BACKUP"));
        ACTION_RSSTOOLBAR_RSS_ADD = new QAction(CustomWindow);
        ACTION_RSSTOOLBAR_RSS_ADD->setObjectName(QStringLiteral("ACTION_RSSTOOLBAR_RSS_ADD"));
        ACTION_RSSTOOLBAR_RSS_REMOVE = new QAction(CustomWindow);
        ACTION_RSSTOOLBAR_RSS_REMOVE->setObjectName(QStringLiteral("ACTION_RSSTOOLBAR_RSS_REMOVE"));
        ACTION_RSSTOOLBAR_RSS_EDIT = new QAction(CustomWindow);
        ACTION_RSSTOOLBAR_RSS_EDIT->setObjectName(QStringLiteral("ACTION_RSSTOOLBAR_RSS_EDIT"));
        ACTION_MENUHELP_ABOUT_QT = new QAction(CustomWindow);
        ACTION_MENUHELP_ABOUT_QT->setObjectName(QStringLiteral("ACTION_MENUHELP_ABOUT_QT"));
        ACTION_TORRENTTOOLBAR_QUEUE_UP = new QAction(CustomWindow);
        ACTION_TORRENTTOOLBAR_QUEUE_UP->setObjectName(QStringLiteral("ACTION_TORRENTTOOLBAR_QUEUE_UP"));
        ACTION_TORRENTTOOLBAR_QUEUE_DOWN = new QAction(CustomWindow);
        ACTION_TORRENTTOOLBAR_QUEUE_DOWN->setObjectName(QStringLiteral("ACTION_TORRENTTOOLBAR_QUEUE_DOWN"));
        ACTION_MENUHELP_REPORT_PROBLEM = new QAction(CustomWindow);
        ACTION_MENUHELP_REPORT_PROBLEM->setObjectName(QStringLiteral("ACTION_MENUHELP_REPORT_PROBLEM"));
        ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY = new QAction(CustomWindow);
        ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY->setObjectName(QStringLiteral("ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY"));
        ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY->setCheckable(true);
        ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY = new QAction(CustomWindow);
        ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY->setObjectName(QStringLiteral("ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY"));
        ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY->setCheckable(true);
        ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY = new QAction(CustomWindow);
        ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY->setObjectName(QStringLiteral("ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY"));
        ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY->setCheckable(true);
        ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY = new QAction(CustomWindow);
        ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY->setObjectName(QStringLiteral("ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY"));
        ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY->setCheckable(true);
        ACTION_TORRENTTOOLBAR_ADD_TORRENT = new QAction(CustomWindow);
        ACTION_TORRENTTOOLBAR_ADD_TORRENT->setObjectName(QStringLiteral("ACTION_TORRENTTOOLBAR_ADD_TORRENT"));
        ACTION_TORRENTTOOLBAR_OPEN_MAGNET = new QAction(CustomWindow);
        ACTION_TORRENTTOOLBAR_OPEN_MAGNET->setObjectName(QStringLiteral("ACTION_TORRENTTOOLBAR_OPEN_MAGNET"));
        ACTION_TOOLS_IMPORT = new QAction(CustomWindow);
        ACTION_TOOLS_IMPORT->setObjectName(QStringLiteral("ACTION_TOOLS_IMPORT"));
        ACTION_AUTOSHUTDOWN_DISABLED = new QAction(CustomWindow);
        ACTION_AUTOSHUTDOWN_DISABLED->setObjectName(QStringLiteral("ACTION_AUTOSHUTDOWN_DISABLED"));
        ACTION_AUTOSHUTDOWN_DISABLED->setCheckable(true);
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLADS_COMPLETE = new QAction(CustomWindow);
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLADS_COMPLETE->setObjectName(QStringLiteral("ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLADS_COMPLETE"));
        ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE = new QAction(CustomWindow);
        ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE->setObjectName(QStringLiteral("ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE"));
        ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE->setCheckable(true);
        ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE = new QAction(CustomWindow);
        ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE->setObjectName(QStringLiteral("ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE"));
        ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE->setCheckable(true);
        ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE = new QAction(CustomWindow);
        ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE->setObjectName(QStringLiteral("ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE"));
        ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE->setCheckable(true);
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE = new QAction(CustomWindow);
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE->setObjectName(QStringLiteral("ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE"));
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE->setCheckable(true);
        ACTION_MENUHELP_RATE = new QAction(CustomWindow);
        ACTION_MENUHELP_RATE->setObjectName(QStringLiteral("ACTION_MENUHELP_RATE"));
        ACTION_TORRENTTOOLBAR_SWITCH_VIEW = new QAction(CustomWindow);
        ACTION_TORRENTTOOLBAR_SWITCH_VIEW->setObjectName(QStringLiteral("ACTION_TORRENTTOOLBAR_SWITCH_VIEW"));
        verticalLayout = new QVBoxLayout(CustomWindow);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 1, 2, 2);
        titleBar = new QWidget(CustomWindow);
        titleBar->setObjectName(QStringLiteral("titleBar"));
        titleBar->setMinimumSize(QSize(0, 23));
        titleBar->setMaximumSize(QSize(16777215, 23));
        titleBar->setStyleSheet(QStringLiteral(""));
        horizontalLayout = new QHBoxLayout(titleBar);
        horizontalLayout->setSpacing(4);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 0, 1, 0);
        tbMenu = new QLabel(titleBar);
        tbMenu->setObjectName(QStringLiteral("tbMenu"));
        tbMenu->setMaximumSize(QSize(15, 15));
        tbMenu->setPixmap(QPixmap(QString::fromUtf8(":/icons/app.ico")));
        tbMenu->setScaledContents(true);

        horizontalLayout->addWidget(tbMenu);

        LTitle = new QLabel(titleBar);
        LTitle->setObjectName(QStringLiteral("LTitle"));
        LTitle->setMinimumSize(QSize(100, 22));
        LTitle->setMaximumSize(QSize(16777215, 22));
        LTitle->setStyleSheet(QStringLiteral(""));
        LTitle->setTextFormat(Qt::AutoText);

        horizontalLayout->addWidget(LTitle);

        pbMin = new QPushButton(titleBar);
        pbMin->setObjectName(QStringLiteral("pbMin"));
        pbMin->setMinimumSize(QSize(3, 22));
        pbMin->setMaximumSize(QSize(22, 22));
        pbMin->setIconSize(QSize(22, 22));
        pbMin->setFlat(true);

        horizontalLayout->addWidget(pbMin);

        pbMax = new QPushButton(titleBar);
        pbMax->setObjectName(QStringLiteral("pbMax"));
        pbMax->setMinimumSize(QSize(3, 22));
        pbMax->setMaximumSize(QSize(22, 22));
        pbMax->setIconSize(QSize(22, 22));
        pbMax->setFlat(true);

        horizontalLayout->addWidget(pbMax);

        pbClose = new QPushButton(titleBar);
        pbClose->setObjectName(QStringLiteral("pbClose"));
        pbClose->setMinimumSize(QSize(3, 22));
        pbClose->setMaximumSize(QSize(22, 22));
        pbClose->setIconSize(QSize(22, 22));
        pbClose->setFlat(true);

        horizontalLayout->addWidget(pbClose);


        verticalLayout->addWidget(titleBar);

        m_centralWidget = new QWidget(CustomWindow);
        m_centralWidget->setObjectName(QStringLiteral("m_centralWidget"));
        m_centralWidget->setMouseTracking(true);
        m_centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_3 = new QGridLayout(m_centralWidget);
        gridLayout_3->setSpacing(0);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setContentsMargins(6, 1, 6, 6);
        mystatusBar = new QStatusBar(m_centralWidget);
        mystatusBar->setObjectName(QStringLiteral("mystatusBar"));
        mystatusBar->setMaximumSize(QSize(16777215, 19));
        mystatusBar->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(mystatusBar, 6, 0, 1, 1);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(0);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, -1, 0, -1);
        verticalSplitter = new QSplitter(m_centralWidget);
        verticalSplitter->setObjectName(QStringLiteral("verticalSplitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(verticalSplitter->sizePolicy().hasHeightForWidth());
        verticalSplitter->setSizePolicy(sizePolicy);
        verticalSplitter->setMouseTracking(true);
        verticalSplitter->setFrameShape(QFrame::NoFrame);
        verticalSplitter->setOrientation(Qt::Vertical);
        horizontalSplitter = new QSplitter(verticalSplitter);
        horizontalSplitter->setObjectName(QStringLiteral("horizontalSplitter"));
        horizontalSplitter->setMouseTracking(true);
        horizontalSplitter->setOrientation(Qt::Horizontal);
        m_pGroupTreeView = new QTreeView(horizontalSplitter);
        m_pGroupTreeView->setObjectName(QStringLiteral("m_pGroupTreeView"));
        m_pGroupTreeView->setMouseTracking(true);
        m_pGroupTreeView->setAcceptDrops(true);
        m_pGroupTreeView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_pGroupTreeView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_pGroupTreeView->setRootIsDecorated(false);
        m_pGroupTreeView->setAnimated(true);
        m_pGroupTreeView->setHeaderHidden(true);
        horizontalSplitter->addWidget(m_pGroupTreeView);
        ItemListContainer = new QWidget(horizontalSplitter);
        ItemListContainer->setObjectName(QStringLiteral("ItemListContainer"));
        torrentViewLayout = new QVBoxLayout(ItemListContainer);
        torrentViewLayout->setSpacing(0);
        torrentViewLayout->setContentsMargins(11, 11, 11, 11);
        torrentViewLayout->setObjectName(QStringLiteral("torrentViewLayout"));
        torrentViewLayout->setContentsMargins(0, 0, 0, 0);
        SortersContainer = new QWidget(ItemListContainer);
        SortersContainer->setObjectName(QStringLiteral("SortersContainer"));
        horizontalLayout_3 = new QHBoxLayout(SortersContainer);
        horizontalLayout_3->setSpacing(3);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(4, 4, 4, 4);
        TorentLimitsContainer = new QWidget(SortersContainer);
        TorentLimitsContainer->setObjectName(QStringLiteral("TorentLimitsContainer"));
        horizontalLayout_2 = new QHBoxLayout(TorentLimitsContainer);
        horizontalLayout_2->setSpacing(3);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        uploadLimitLabel = new QLabel(TorentLimitsContainer);
        uploadLimitLabel->setObjectName(QStringLiteral("uploadLimitLabel"));

        horizontalLayout_2->addWidget(uploadLimitLabel);

        ul = new QSpinBox(TorentLimitsContainer);
        ul->setObjectName(QStringLiteral("ul"));

        horizontalLayout_2->addWidget(ul);

        downloadLimitLabel = new QLabel(TorentLimitsContainer);
        downloadLimitLabel->setObjectName(QStringLiteral("downloadLimitLabel"));

        horizontalLayout_2->addWidget(downloadLimitLabel);

        dl = new QSpinBox(TorentLimitsContainer);
        dl->setObjectName(QStringLiteral("dl"));

        horizontalLayout_2->addWidget(dl);


        horizontalLayout_3->addWidget(TorentLimitsContainer);

        horizontalSpacer = new QSpacerItem(6, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        label_15 = new QLabel(SortersContainer);
        label_15->setObjectName(QStringLiteral("label_15"));

        horizontalLayout_3->addWidget(label_15);


        torrentViewLayout->addWidget(SortersContainer);

        m_pTorrentListView = new QTreeView(ItemListContainer);
        m_pTorrentListView->setObjectName(QStringLiteral("m_pTorrentListView"));
        m_pTorrentListView->setMouseTracking(true);
        m_pTorrentListView->setContextMenuPolicy(Qt::CustomContextMenu);
        m_pTorrentListView->setAcceptDrops(true);
        m_pTorrentListView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        m_pTorrentListView->setDragDropMode(QAbstractItemView::DropOnly);
        m_pTorrentListView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        m_pTorrentListView->setVerticalScrollMode(QAbstractItemView::ScrollPerPixel);
        m_pTorrentListView->setRootIsDecorated(false);
        m_pTorrentListView->setSortingEnabled(true);
        m_pTorrentListView->setAnimated(true);
        m_pTorrentListView->setHeaderHidden(true);

        torrentViewLayout->addWidget(m_pTorrentListView);

        horizontalSplitter->addWidget(ItemListContainer);
        verticalSplitter->addWidget(horizontalSplitter);
        m_pInfoPlaneContainer = new QStackedWidget(verticalSplitter);
        m_pInfoPlaneContainer->setObjectName(QStringLiteral("m_pInfoPlaneContainer"));
        torrentPage = new QWidget();
        torrentPage->setObjectName(QStringLiteral("torrentPage"));
        gridLayout_11 = new QGridLayout(torrentPage);
        gridLayout_11->setSpacing(6);
        gridLayout_11->setContentsMargins(11, 11, 11, 11);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        gridLayout_11->setContentsMargins(2, 0, 2, 0);
        m_pTabWidget = new QTabWidget(torrentPage);
        m_pTabWidget->setObjectName(QStringLiteral("m_pTabWidget"));
        m_pTabWidget->setMouseTracking(true);
        m_pTabWidget->setAcceptDrops(true);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab->setMouseTracking(true);
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        availibilityLabel = new QLabel(tab);
        availibilityLabel->setObjectName(QStringLiteral("availibilityLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(availibilityLabel->sizePolicy().hasHeightForWidth());
        availibilityLabel->setSizePolicy(sizePolicy1);
        availibilityLabel->setMaximumSize(QSize(48, 16777215));

        gridLayout_4->addWidget(availibilityLabel, 1, 1, 1, 1);

        progressLabel = new QLabel(tab);
        progressLabel->setObjectName(QStringLiteral("progressLabel"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(progressLabel->sizePolicy().hasHeightForWidth());
        progressLabel->setSizePolicy(sizePolicy2);
        progressLabel->setMaximumSize(QSize(48, 16777215));

        gridLayout_4->addWidget(progressLabel, 0, 1, 1, 1);

        widget_2 = new QWidget(tab);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy3);
        widget_2->setMinimumSize(QSize(0, 15));

        gridLayout_4->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(tab);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy3.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy3);
        widget->setMinimumSize(QSize(0, 20));
        widget->setStyleSheet(QStringLiteral(""));

        gridLayout_4->addWidget(widget, 0, 0, 1, 1);


        gridLayout_7->addLayout(gridLayout_4, 0, 0, 1, 5);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_7->addWidget(label_4, 6, 3, 1, 1);

        label_8 = new QLabel(tab);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_7->addWidget(label_8, 2, 3, 1, 1);

        pathLabel = new QLabel(tab);
        pathLabel->setObjectName(QStringLiteral("pathLabel"));

        gridLayout_7->addWidget(pathLabel, 6, 4, 1, 1);

        uploadedBytesLabel = new QLabel(tab);
        uploadedBytesLabel->setObjectName(QStringLiteral("uploadedBytesLabel"));

        gridLayout_7->addWidget(uploadedBytesLabel, 2, 4, 1, 1);

        label_9 = new QLabel(tab);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_7->addWidget(label_9, 3, 3, 1, 1);

        downloadedBytesLabel = new QLabel(tab);
        downloadedBytesLabel->setObjectName(QStringLiteral("downloadedBytesLabel"));

        gridLayout_7->addWidget(downloadedBytesLabel, 2, 1, 1, 2);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_7->addWidget(label_5, 6, 0, 1, 1);

        uploadSpeedLabel = new QLabel(tab);
        uploadSpeedLabel->setObjectName(QStringLiteral("uploadSpeedLabel"));

        gridLayout_7->addWidget(uploadSpeedLabel, 3, 4, 1, 1);

        activetimeLabel = new QLabel(tab);
        activetimeLabel->setObjectName(QStringLiteral("activetimeLabel"));

        gridLayout_7->addWidget(activetimeLabel, 1, 1, 1, 2);

        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_7->addWidget(label_3, 3, 0, 1, 1);

        timeleftLabel = new QLabel(tab);
        timeleftLabel->setObjectName(QStringLiteral("timeleftLabel"));

        gridLayout_7->addWidget(timeleftLabel, 1, 4, 1, 1);

        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_7->addWidget(label, 1, 0, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_7->addWidget(label_2, 2, 0, 1, 1);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_7->addWidget(label_7, 1, 3, 1, 1);

        downloadSpeedLabel = new QLabel(tab);
        downloadSpeedLabel->setObjectName(QStringLiteral("downloadSpeedLabel"));

        gridLayout_7->addWidget(downloadSpeedLabel, 3, 1, 1, 2);

        totalSizeLabel = new QLabel(tab);
        totalSizeLabel->setObjectName(QStringLiteral("totalSizeLabel"));

        gridLayout_7->addWidget(totalSizeLabel, 6, 1, 1, 2);

        peerCoutLabel = new QLabel(tab);
        peerCoutLabel->setObjectName(QStringLiteral("peerCoutLabel"));

        gridLayout_7->addWidget(peerCoutLabel, 8, 4, 1, 1);

        label_11 = new QLabel(tab);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_7->addWidget(label_11, 8, 3, 1, 1);

        seedCoutLabel = new QLabel(tab);
        seedCoutLabel->setObjectName(QStringLiteral("seedCoutLabel"));

        gridLayout_7->addWidget(seedCoutLabel, 8, 1, 1, 2);

        label_10 = new QLabel(tab);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_7->addWidget(label_10, 8, 0, 1, 1);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_7->addWidget(label_6, 9, 0, 1, 1);

        describtionLabel = new QLabel(tab);
        describtionLabel->setObjectName(QStringLiteral("describtionLabel"));
        describtionLabel->setContextMenuPolicy(Qt::ActionsContextMenu);
        describtionLabel->setWordWrap(true);
        describtionLabel->setOpenExternalLinks(true);

        gridLayout_7->addWidget(describtionLabel, 9, 1, 1, 4);

        label_12 = new QLabel(tab);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_7->addWidget(label_12, 10, 0, 1, 1);

        infoHashLabel = new QLabel(tab);
        infoHashLabel->setObjectName(QStringLiteral("infoHashLabel"));
        infoHashLabel->setContextMenuPolicy(Qt::ActionsContextMenu);

        gridLayout_7->addWidget(infoHashLabel, 10, 1, 1, 4);

        m_pTabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tab_3->setMouseTracking(true);
        gridLayout_2 = new QGridLayout(tab_3);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        peerTableView = new QTableView(tab_3);
        peerTableView->setObjectName(QStringLiteral("peerTableView"));
        peerTableView->setMouseTracking(true);
        peerTableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        peerTableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        peerTableView->setShowGrid(false);
        peerTableView->setSortingEnabled(true);
        peerTableView->verticalHeader()->setVisible(false);
        peerTableView->verticalHeader()->setDefaultSectionSize(18);

        gridLayout_2->addWidget(peerTableView, 0, 0, 1, 1);

        m_pTabWidget->addTab(tab_3, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tab_2->setMouseTracking(true);
        gridLayout = new QGridLayout(tab_2);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        trackerTableWidget = new QTableWidget(tab_2);
        if (trackerTableWidget->columnCount() < 4)
            trackerTableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        trackerTableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        trackerTableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        trackerTableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        trackerTableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        trackerTableWidget->setObjectName(QStringLiteral("trackerTableWidget"));
        trackerTableWidget->setMouseTracking(true);
        trackerTableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        trackerTableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);
        trackerTableWidget->setShowGrid(false);
        trackerTableWidget->horizontalHeader()->setDefaultSectionSize(120);
        trackerTableWidget->verticalHeader()->setVisible(false);
        trackerTableWidget->verticalHeader()->setDefaultSectionSize(18);

        gridLayout->addWidget(trackerTableWidget, 0, 0, 1, 1);

        m_pTabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tab_4->setMouseTracking(true);
        gridLayout_5 = new QGridLayout(tab_4);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        fileTableView = new QTreeView(tab_4);
        fileTableView->setObjectName(QStringLiteral("fileTableView"));
        fileTableView->setMaximumSize(QSize(16777215, 16777215));
        fileTableView->setMouseTracking(true);
        fileTableView->setContextMenuPolicy(Qt::CustomContextMenu);
        fileTableView->setSelectionMode(QAbstractItemView::ExtendedSelection);
        fileTableView->setSortingEnabled(true);
        fileTableView->setAnimated(true);

        gridLayout_5->addWidget(fileTableView, 0, 0, 1, 1);

        m_pTabWidget->addTab(tab_4, QString());

        gridLayout_11->addWidget(m_pTabWidget, 0, 0, 1, 1);

        m_pInfoPlaneContainer->addWidget(torrentPage);
        rssPage = new QWidget();
        rssPage->setObjectName(QStringLiteral("rssPage"));
        m_pRssInfoLayout = new QGridLayout(rssPage);
        m_pRssInfoLayout->setSpacing(6);
        m_pRssInfoLayout->setContentsMargins(11, 11, 11, 11);
        m_pRssInfoLayout->setObjectName(QStringLiteral("m_pRssInfoLayout"));
        m_pRssInfoLayout->setContentsMargins(0, 2, 0, 2);
        widget_3 = new QWidget(rssPage);
        widget_3->setObjectName(QStringLiteral("widget_3"));

        m_pRssInfoLayout->addWidget(widget_3, 0, 0, 1, 1);

        m_pInfoPlaneContainer->addWidget(rssPage);
        verticalSplitter->addWidget(m_pInfoPlaneContainer);

        gridLayout_6->addWidget(verticalSplitter, 0, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_6, 5, 0, 1, 1);

        mainMenuBar = new QMenuBar(m_centralWidget);
        mainMenuBar->setObjectName(QStringLiteral("mainMenuBar"));
        mainMenuBar->setEnabled(true);
        mainMenuBar->setDefaultUp(false);
        mainMenuBar->setNativeMenuBar(false);
        fileMenu = new QMenu(mainMenuBar);
        fileMenu->setObjectName(QStringLiteral("fileMenu"));
        menu_CuteTorrent = new QMenu(mainMenuBar);
        menu_CuteTorrent->setObjectName(QStringLiteral("menu_CuteTorrent"));
        toolsMenu = new QMenu(mainMenuBar);
        toolsMenu->setObjectName(QStringLiteral("toolsMenu"));
        autoShutdownMenu = new QMenu(toolsMenu);
        autoShutdownMenu->setObjectName(QStringLiteral("autoShutdownMenu"));
        viewMenu = new QMenu(mainMenuBar);
        viewMenu->setObjectName(QStringLiteral("viewMenu"));
        languageSubMenu = new QMenu(viewMenu);
        languageSubMenu->setObjectName(QStringLiteral("languageSubMenu"));
        skinSubMenu = new QMenu(viewMenu);
        skinSubMenu->setObjectName(QStringLiteral("skinSubMenu"));

        gridLayout_3->addWidget(mainMenuBar, 1, 0, 1, 1);

        m_pToolBarsContainer = new QStackedWidget(m_centralWidget);
        m_pToolBarsContainer->setObjectName(QStringLiteral("m_pToolBarsContainer"));
        m_pToolBarsContainer->setMaximumSize(QSize(16777215, 32));
        m_pToolBarsContainer->setMouseTracking(true);
        m_pTorrentToolBar = new QToolBar();
        m_pTorrentToolBar->setObjectName(QStringLiteral("m_pTorrentToolBar"));
        m_pTorrentToolBar->setAcceptDrops(true);
        m_pToolBarsContainer->addWidget(m_pTorrentToolBar);
        m_pSearchToolBar = new QToolBar();
        m_pSearchToolBar->setObjectName(QStringLiteral("m_pSearchToolBar"));
        m_pSearchToolBar->setAcceptDrops(true);
        m_pToolBarsContainer->addWidget(m_pSearchToolBar);
        m_pRssToolBar = new QToolBar();
        m_pRssToolBar->setObjectName(QStringLiteral("m_pRssToolBar"));
        m_pRssToolBar->setAcceptDrops(true);
        m_pToolBarsContainer->addWidget(m_pRssToolBar);

        gridLayout_3->addWidget(m_pToolBarsContainer, 3, 0, 1, 1);


        verticalLayout->addWidget(m_centralWidget);

        QWidget::setTabOrder(m_pGroupTreeView, m_pTabWidget);
        QWidget::setTabOrder(m_pTabWidget, peerTableView);
        QWidget::setTabOrder(peerTableView, trackerTableWidget);
        QWidget::setTabOrder(trackerTableWidget, fileTableView);
        QWidget::setTabOrder(fileTableView, pbMin);
        QWidget::setTabOrder(pbMin, pbMax);
        QWidget::setTabOrder(pbMax, pbClose);

        mainMenuBar->addAction(fileMenu->menuAction());
        mainMenuBar->addAction(viewMenu->menuAction());
        mainMenuBar->addAction(toolsMenu->menuAction());
        mainMenuBar->addAction(menu_CuteTorrent->menuAction());
        fileMenu->addAction(ACTION_MENUFILE_OPEN_TORRENT);
        fileMenu->addAction(ACTION_MENUFILE_OPEN_MAGNET);
        fileMenu->addSeparator();
        fileMenu->addAction(ACTION_MENUFILE_CREATE);
        fileMenu->addSeparator();
        fileMenu->addAction(ACTION_MENUFILE_EXIT);
        menu_CuteTorrent->addAction(ACTION_MENUHELP_ABAUT_CT);
        menu_CuteTorrent->addAction(ACTION_MENUHELP_ABOUT_QT);
        menu_CuteTorrent->addSeparator();
        menu_CuteTorrent->addAction(ACTION_MENUHELP_CHECK_UPDATE);
        menu_CuteTorrent->addAction(ACTION_MENUHELP_REPORT_PROBLEM);
        toolsMenu->addAction(ACTION_TOOLS_SETTINGS);
        toolsMenu->addSeparator();
        toolsMenu->addAction(ACTION_TOOLS_BACKUP);
        toolsMenu->addAction(ACTION_TOOLS_IMPORT);
        toolsMenu->addSeparator();
        toolsMenu->addAction(autoShutdownMenu->menuAction());
        autoShutdownMenu->addAction(ACTION_AUTOSHUTDOWN_DISABLED);
        autoShutdownMenu->addSeparator();
        autoShutdownMenu->addAction(ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE);
        autoShutdownMenu->addSeparator();
        autoShutdownMenu->addAction(ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE);
        autoShutdownMenu->addSeparator();
        autoShutdownMenu->addAction(ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE);
        autoShutdownMenu->addSeparator();
        autoShutdownMenu->addAction(ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE);
        viewMenu->addAction(ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY);
        viewMenu->addAction(ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY);
        viewMenu->addAction(ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY);
        viewMenu->addAction(ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY);
        viewMenu->addSeparator();
        viewMenu->addAction(languageSubMenu->menuAction());
        viewMenu->addSeparator();
        viewMenu->addAction(skinSubMenu->menuAction());
        m_pTorrentToolBar->addAction(ACTION_TORRENTTOOLBAR_ADD_TORRENT);
        m_pTorrentToolBar->addAction(ACTION_TORRENTTOOLBAR_OPEN_MAGNET);
        m_pTorrentToolBar->addSeparator();
        m_pTorrentToolBar->addAction(ACTION_TOOLBAR_SETTINGS);
        m_pTorrentToolBar->addSeparator();
        m_pTorrentToolBar->addAction(ACTION_TORRENTTOOLBAR_QUEUE_UP);
        m_pTorrentToolBar->addAction(ACTION_TORRENTTOOLBAR_QUEUE_DOWN);
        m_pTorrentToolBar->addSeparator();
        m_pTorrentToolBar->addAction(ACTION_TORRENTTOOLBAR_SWITCH_VIEW);
        m_pSearchToolBar->addAction(ACTION_SEARCHTOOLBAR_DOWNLOAD);
        m_pSearchToolBar->addAction(ACTION_SEARCHTOOLBAR_OPEN_URL);
        m_pSearchToolBar->addAction(ACTION_TOOLBAR_SETTINGS);
        m_pRssToolBar->addAction(ACTION_RSSTOOLBAR_RSS_ADD);
        m_pRssToolBar->addAction(ACTION_RSSTOOLBAR_RSS_REMOVE);
        m_pRssToolBar->addAction(ACTION_RSSTOOLBAR_RSS_EDIT);
        m_pRssToolBar->addAction(ACTION_TOOLBAR_SETTINGS);

        retranslateUi(CustomWindow);
        QObject::connect(ACTION_MENUFILE_CREATE, SIGNAL(triggered()), CustomWindow, SLOT(ShowCreateTorrentDialog()));
        QObject::connect(ACTION_MENUFILE_OPEN_TORRENT, SIGNAL(triggered()), CustomWindow, SLOT(ShowOpenTorrentDialog()));
        QObject::connect(ACTION_TOOLS_SETTINGS, SIGNAL(triggered()), CustomWindow, SLOT(OpenSettingsDialog()));
        QObject::connect(ACTION_MENUHELP_CHECK_UPDATE, SIGNAL(triggered()), CustomWindow, SLOT(CheckForUpdates()));
        QObject::connect(ACTION_MENUHELP_ABAUT_CT, SIGNAL(triggered()), CustomWindow, SLOT(ShowAbout()));
        QObject::connect(ACTION_MENUFILE_OPEN_MAGNET, SIGNAL(triggered()), CustomWindow, SLOT(ProcessMagnet()));
        QObject::connect(ACTION_TOOLBAR_SETTINGS, SIGNAL(triggered()), CustomWindow, SLOT(OpenSettingsDialog()));
        QObject::connect(ACTION_TOOLS_BACKUP, SIGNAL(triggered()), CustomWindow, SLOT(startBackUpWizard()));
        QObject::connect(ACTION_SEARCHTOOLBAR_OPEN_URL, SIGNAL(triggered()), CustomWindow, SLOT(openSearchItemDescribtion()));
        QObject::connect(ACTION_RSSTOOLBAR_RSS_ADD, SIGNAL(triggered()), CustomWindow, SLOT(addRssFeed()));
        QObject::connect(ACTION_RSSTOOLBAR_RSS_EDIT, SIGNAL(triggered()), CustomWindow, SLOT(editRssFeed()));
        QObject::connect(ACTION_RSSTOOLBAR_RSS_REMOVE, SIGNAL(triggered()), CustomWindow, SLOT(removeRssFeed()));
        QObject::connect(ACTION_TORRENTTOOLBAR_QUEUE_DOWN, SIGNAL(triggered()), CustomWindow, SLOT(queueTorrentsDown()));
        QObject::connect(ACTION_TORRENTTOOLBAR_QUEUE_UP, SIGNAL(triggered()), CustomWindow, SLOT(queueTorrentsUp()));
        QObject::connect(ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY, SIGNAL(toggled(bool)), CustomWindow, SLOT(toggleInfoTabsVisibility(bool)));
        QObject::connect(ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY, SIGNAL(toggled(bool)), CustomWindow, SLOT(toggleToolBarVisibility(bool)));
        QObject::connect(ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY, SIGNAL(toggled(bool)), CustomWindow, SLOT(toggleStatusBarVisibility(bool)));
        QObject::connect(ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY, SIGNAL(toggled(bool)), CustomWindow, SLOT(toggleGroupsVisibility(bool)));
        QObject::connect(ACTION_TORRENTTOOLBAR_ADD_TORRENT, SIGNAL(triggered()), CustomWindow, SLOT(ShowOpenTorrentDialog()));
        QObject::connect(ACTION_TORRENTTOOLBAR_OPEN_MAGNET, SIGNAL(triggered()), CustomWindow, SLOT(ProcessMagnet()));
        QObject::connect(ACTION_MENUHELP_REPORT_PROBLEM, SIGNAL(triggered()), CustomWindow, SLOT(showReportDialog()));
        QObject::connect(ACTION_TOOLS_IMPORT, SIGNAL(triggered()), CustomWindow, SLOT(showImportWiazrd()));
        QObject::connect(ACTION_MENUHELP_RATE, SIGNAL(triggered()), CustomWindow, SLOT(showRaitingDialog()));
        QObject::connect(ACTION_TORRENTTOOLBAR_SWITCH_VIEW, SIGNAL(triggered()), CustomWindow, SLOT(switchTorrentViewMode()));

        m_pInfoPlaneContainer->setCurrentIndex(0);
        m_pTabWidget->setCurrentIndex(3);
        m_pToolBarsContainer->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CustomWindow);
    } // setupUi

    void retranslateUi(QWidget *CustomWindow)
    {
        CustomWindow->setWindowTitle(QApplication::translate("CustomWindow", "CuteTorrent", Q_NULLPTR));
        ACTION_MENUFILE_OPEN_TORRENT->setText(QApplication::translate("CustomWindow", "MENU_OPEN_TORRENT", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_MENUFILE_OPEN_TORRENT->setShortcut(QApplication::translate("CustomWindow", "Ctrl+O", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_MENUFILE_OPEN_MAGNET->setText(QApplication::translate("CustomWindow", "MENU_OPEN_MAGNET", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_MENUFILE_OPEN_MAGNET->setShortcut(QApplication::translate("CustomWindow", "Ctrl+M", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_MENUFILE_CREATE->setText(QApplication::translate("CustomWindow", "MENU_CREATE_TORRENT", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_MENUFILE_CREATE->setShortcut(QApplication::translate("CustomWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_MENUFILE_EXIT->setText(QApplication::translate("CustomWindow", "MENU_EXIT", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_MENUFILE_EXIT->setShortcut(QApplication::translate("CustomWindow", "Alt+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_TOOLS_SETTINGS->setText(QApplication::translate("CustomWindow", "MENU_CONFIGURATION", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_TOOLS_SETTINGS->setShortcut(QApplication::translate("CustomWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_SEARCHTOOLBAR_DOWNLOAD->setText(QApplication::translate("CustomWindow", "STR_DOWNLOAD", Q_NULLPTR));
        ACTION_SEARCHTOOLBAR_DOWNLOAD->setIconText(QApplication::translate("CustomWindow", "HINT_DOWNLOAD", Q_NULLPTR));
        ACTION_SEARCHTOOLBAR_OPEN_URL->setText(QApplication::translate("CustomWindow", "STR_OPEN_URL", Q_NULLPTR));
        ACTION_SEARCHTOOLBAR_OPEN_URL->setIconText(QApplication::translate("CustomWindow", "HINT_OPEN_URL", Q_NULLPTR));
        ACTION_MENUHELP_ABAUT_CT->setText(QApplication::translate("CustomWindow", "MENU_ABAUT", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_MENUHELP_ABAUT_CT->setShortcut(QApplication::translate("CustomWindow", "F1", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_MENUHELP_CHECK_UPDATE->setText(QApplication::translate("CustomWindow", "MENU_CHECK_UPDATES", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        ACTION_MENUHELP_CHECK_UPDATE->setShortcut(QApplication::translate("CustomWindow", "Ctrl+U", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        ACTION_TOOLBAR_SETTINGS->setText(QApplication::translate("CustomWindow", "STR_SETTINGS", Q_NULLPTR));
        ACTION_TOOLS_BACKUP->setText(QApplication::translate("CustomWindow", "TOOLS_BACKUP", Q_NULLPTR));
        ACTION_RSSTOOLBAR_RSS_ADD->setText(QApplication::translate("CustomWindow", "ACTION_RSS_ADD", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ACTION_RSSTOOLBAR_RSS_ADD->setToolTip(QApplication::translate("CustomWindow", "ACTION_RSS_ADD", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ACTION_RSSTOOLBAR_RSS_REMOVE->setText(QApplication::translate("CustomWindow", "ACTION_RSS_REMOVE", Q_NULLPTR));
        ACTION_RSSTOOLBAR_RSS_EDIT->setText(QApplication::translate("CustomWindow", "ACTION_RSS_EDIT", Q_NULLPTR));
        ACTION_MENUHELP_ABOUT_QT->setText(QApplication::translate("CustomWindow", "MENU_ABOUT_QT", Q_NULLPTR));
        ACTION_TORRENTTOOLBAR_QUEUE_UP->setText(QApplication::translate("CustomWindow", "QUEUE_UP", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ACTION_TORRENTTOOLBAR_QUEUE_UP->setToolTip(QApplication::translate("CustomWindow", "QUEUE_UP", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ACTION_TORRENTTOOLBAR_QUEUE_DOWN->setText(QApplication::translate("CustomWindow", "QUEUE_DOWN", Q_NULLPTR));
        ACTION_MENUHELP_REPORT_PROBLEM->setText(QApplication::translate("CustomWindow", "MENU_REPORT_PROBLEM", Q_NULLPTR));
        ACTION_MENUVIEW_TOGGLE_TOOLBAR_VISIBILITY->setText(QApplication::translate("CustomWindow", "MENU_TOGGLE_TOOLBAR_VISIBILITY", Q_NULLPTR));
        ACTION_MENUVIEW_TOGGLE_DETAIL_INFO_VISIBILITY->setText(QApplication::translate("CustomWindow", "MENU_TOGGLE_DETAIL_INFO_VISIBILITY", Q_NULLPTR));
        ACTION_MENUVIEW_TOGGLE_STATUSBAR_VISIBILITY->setText(QApplication::translate("CustomWindow", "MENU_TOGGLE_STATUSBAR_VISIBILITY", Q_NULLPTR));
        ACTION_MENUVIEW_TOGGLE_GROUPS_VISIBILITY->setText(QApplication::translate("CustomWindow", "MENU_TOGGLE_GROUPS_VISIBILITY", Q_NULLPTR));
        ACTION_TORRENTTOOLBAR_ADD_TORRENT->setText(QApplication::translate("CustomWindow", "MENU_OPEN_TORRENT", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        ACTION_TORRENTTOOLBAR_ADD_TORRENT->setToolTip(QApplication::translate("CustomWindow", "MENU_OPEN_TORRENT", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        ACTION_TORRENTTOOLBAR_OPEN_MAGNET->setText(QApplication::translate("CustomWindow", "MENU_OPEN_MAGNET", Q_NULLPTR));
        ACTION_TOOLS_IMPORT->setText(QApplication::translate("CustomWindow", "TOOLS_IMPORT", Q_NULLPTR));
        ACTION_AUTOSHUTDOWN_DISABLED->setText(QApplication::translate("CustomWindow", "TOOLS_SHUTDOWN_DISABLED", Q_NULLPTR));
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLADS_COMPLETE->setText(QApplication::translate("CustomWindow", "TOOLS_SHUTDOWN_ON_DOWNLADS_COMPLETE", Q_NULLPTR));
        ACTION_AUTOSHUTDOWN_HIBERNATE_ON_DOWNLOADS_COMPLETE->setText(QApplication::translate("CustomWindow", "TOOLS_HIBERNATE_ON_DOWNLOADS_COMPLETE", Q_NULLPTR));
        ACTION_AUTOSHUTDOWN_SLEEP_ON_DOWNLOADS_COMPLETE->setText(QApplication::translate("CustomWindow", "TOOLS_SLEEP_ON_DOWNLOADS_COMPLETE", Q_NULLPTR));
        ACTION_AUTOSHUTDOWN_REBOOT_ON_DOWNLOADS_COMPLETE->setText(QApplication::translate("CustomWindow", "TOOLS_REBOOT_ON_DOWNLOADS_COMPLETE", Q_NULLPTR));
        ACTION_AUTOSHUTDOWN_SHUTDOWN_ON_DOWNLOADS_COMPLETE->setText(QApplication::translate("CustomWindow", "TOOLS_SHUTDOWN_ON_DOWNLOADS_COMPLETE", Q_NULLPTR));
        ACTION_MENUHELP_RATE->setText(QApplication::translate("CustomWindow", "MENU_RATE", Q_NULLPTR));
        ACTION_TORRENTTOOLBAR_SWITCH_VIEW->setText(QApplication::translate("CustomWindow", "SWITCH_VIEW", Q_NULLPTR));
        tbMenu->setText(QString());
        LTitle->setText(QApplication::translate("CustomWindow", "CuteTorrent", Q_NULLPTR));
        uploadLimitLabel->setText(QApplication::translate("CustomWindow", "LIMIT_UL", Q_NULLPTR));
        downloadLimitLabel->setText(QApplication::translate("CustomWindow", "LIMIT_DL", Q_NULLPTR));
        label_15->setText(QApplication::translate("CustomWindow", "SORT_BY", Q_NULLPTR));
        progressLabel->setText(QString());
        label_4->setText(QApplication::translate("CustomWindow", "INFO_PATH", Q_NULLPTR));
        label_8->setText(QApplication::translate("CustomWindow", "INFO_UPLOADED", Q_NULLPTR));
        pathLabel->setText(QString());
        uploadedBytesLabel->setText(QString());
        label_9->setText(QApplication::translate("CustomWindow", "INFO_UPLOAD_SPEED", Q_NULLPTR));
        downloadedBytesLabel->setText(QString());
        label_5->setText(QApplication::translate("CustomWindow", "INFO_TOTAL_SIZE", Q_NULLPTR));
        uploadSpeedLabel->setText(QString());
        activetimeLabel->setText(QString());
        label_3->setText(QApplication::translate("CustomWindow", "INFO_DOWNLOAD_SPEED", Q_NULLPTR));
        timeleftLabel->setText(QString());
        label->setText(QApplication::translate("CustomWindow", "INFO_ACTIVE_TIME", Q_NULLPTR));
        label_2->setText(QApplication::translate("CustomWindow", "INFO_DOWNLOADED", Q_NULLPTR));
        label_7->setText(QApplication::translate("CustomWindow", "INFO_REMAININF_TIME", Q_NULLPTR));
        downloadSpeedLabel->setText(QString());
        totalSizeLabel->setText(QString());
        peerCoutLabel->setText(QString());
        label_11->setText(QApplication::translate("CustomWindow", "INFO_PEER_COUNT", Q_NULLPTR));
        seedCoutLabel->setText(QString());
        label_10->setText(QApplication::translate("CustomWindow", "INFO_SEED_COUNT", Q_NULLPTR));
        label_6->setText(QApplication::translate("CustomWindow", "INFO_DESCRIBTION", Q_NULLPTR));
        describtionLabel->setText(QString());
        label_12->setText(QApplication::translate("CustomWindow", "INFO_HASH", Q_NULLPTR));
        infoHashLabel->setText(QString());
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(tab), QApplication::translate("CustomWindow", "TAB_INFO", Q_NULLPTR));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(tab_3), QApplication::translate("CustomWindow", "TAB_PEERS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = trackerTableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("CustomWindow", "TRACKER_URL", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = trackerTableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("CustomWindow", "TRACKER_STATUS", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = trackerTableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("CustomWindow", "TRACKER_NEXT_ANNOUNCE", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = trackerTableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("CustomWindow", "TRACKER_PEERS", Q_NULLPTR));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(tab_2), QApplication::translate("CustomWindow", "TAB_TRACKERS", Q_NULLPTR));
        m_pTabWidget->setTabText(m_pTabWidget->indexOf(tab_4), QApplication::translate("CustomWindow", "TAB_FILES", Q_NULLPTR));
        fileMenu->setTitle(QApplication::translate("CustomWindow", "MENU_FILE", Q_NULLPTR));
        menu_CuteTorrent->setTitle(QApplication::translate("CustomWindow", "MENU_HELP", Q_NULLPTR));
        toolsMenu->setTitle(QApplication::translate("CustomWindow", "MENU_TOOLS", Q_NULLPTR));
        autoShutdownMenu->setTitle(QApplication::translate("CustomWindow", "TOOLS_AUTO_SHUTDOWN", Q_NULLPTR));
        viewMenu->setTitle(QApplication::translate("CustomWindow", "MENU_VIEW", Q_NULLPTR));
        languageSubMenu->setTitle(QApplication::translate("CustomWindow", "MENU_CHOSE_LANGUAGE", Q_NULLPTR));
        skinSubMenu->setTitle(QApplication::translate("CustomWindow", "MENU_CHOSE_SKIN", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CustomWindow: public Ui_CustomWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUSTOMWINDOW_H
