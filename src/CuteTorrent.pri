# ----------------------------------------------------
# This file is generated by the Qt Visual Studio Tools.
# ------------------------------------------------------

# This is a reminder that you are using a generated .pro file.
# Remove it when you are finished editing this file.
message("You are running qmake on a generated .pro file. This may not work!")


HEADERS += ./Comments/Comment.h \
    ./Comments/User.h \
    ./Comments/CommentsWebClient.h \
    ./Comments/gui/Dialogs/AddCommentDialog.h \
    ./Comments/gui/Dialogs/LoginDialog.h \
    ./Comments/gui/Dialogs/RegisterDialog.h \
    ./Comments/ViewModels/CommentItemDelegate.h \
    ./Comments/ViewModels/CommentsModel.h \
    ./core/Build_Increment.h \
    ./core/defs.h \
    ./core/EmailNotifier.h \
    ./core/GroupForFileFiltering.h \
    ./core/ServiceCommon.h \
    ./core/Singleton.h \
    ./core/SympleCrypt.h \
    ./core/TorrentGroup.h \
    ./core/TreeItem.h \
    ./core/Version.h \
    ./core/versionInfo.h \
    ./core/UpdateNotyfier.h \
    ./core/TorrentGroupsManager.h \
    ./core/StyleEngene.h \
    ./core/QApplicationSettings.h \
    ./core/PowerManagement.h \
    ./core/NotificationSystem.h \
    ./core/NetworkDiskCache.h \
    ./core/IpToCountryResolver.h \
    ./core/InitializationWorker.h \
    ./core/filedownloader.h \
    ./core/file_entry.h \
    ./core/FaviconDownloader.h \
    ./core/EmailValidator.h \
    ./core/application.h \
    ./core/avaliableSpacePlugin/avaliable_space_verifier_plugin.h \
    ./core/datamodels/FileViewTreeItem.h \
    ./core/datamodels/FilterTreeItem.h \
    ./core/datamodels/json/json.h \
    ./core/datamodels/SGML/QSgmlTag.h \
    ./core/datamodels/SGML/QSgml.h \
    ./core/gui/backupwizard/intropage.h \
    ./core/gui/backupwizard/finishpage.h \
    ./core/gui/backupwizard/createbackuppage.h \
    ./core/gui/backupwizard/backupwizard.h \
    ./core/gui/backupwizard/applybackuppage.h \
    ./core/gui/Controls/QBaloon.h \
    ./core/gui/Controls/StyledProgressBar.h \
    ./core/gui/Controls/TreeBox.h \
    ./core/gui/Controls/SortButton.h \
    ./core/gui/Controls/searchlineedit.h \
    ./core/gui/Controls/RaitingWidget.h \
    ./core/gui/Controls/qkeyedit.h \
    ./core/gui/Controls/messagebox.h \
    ./core/gui/Controls/HtmlView.h \
    ./core/gui/Controls/EditableHeaderView.h \
    ./core/gui/Controls/CheckableMenu.h \
    ./core/gui/Controls/MRichTextEdit/mtextedit.h \
    ./core/gui/Controls/MRichTextEdit/mrichtextedit.h \
    ./core/gui/Dialogs/CustomWindow.h \
    ./core/gui/Dialogs/VideoFileChooseDialog.h \
    ./core/gui/Dialogs/SpeedLimitDialog.h \
    ./core/gui/Dialogs/SettingsDialog.h \
    ./core/gui/Dialogs/ReportProblemDialog.h \
    ./core/gui/Dialogs/RaitingDialog.h \
    ./core/gui/Dialogs/MultipleDTDialog.h \
    ./core/gui/Dialogs/InitializationDialog.h \
    ./core/gui/Dialogs/CuteTorrentMainWindow.h \
    ./core/gui/ImportWizard/ImportWizard.h \
    ./core/gui/ImportWizard/ImportPage.h \
    ./core/gui/ImportWizard/ImportIntroPage.h \
    ./core/gui/ImportWizard/ImportFinishPage.h \
    ./core/gui/ImportWizard/ChoseDataPage.h \
    ./core/gui/ImportWizard/Importers/ImporterRegistrar.h \
    ./core/gui/ImportWizard/Importers/ImportersManager.h \
    ./core/gui/ImportWizard/Importers/UTorrentImporter.h \
    ./core/gui/ImportWizard/Importers/BaseImporter.h \
    ./core/gui/Utils/UIPropertyGetters.h \
    ./core/gui/Utils/UIPropertySetters.h \
    ./core/gui/Utils/ValueGetters.h \
    ./core/gui/Utils/ValueSetters.h \
    ./core/gui/Utils/SettingsPropertyMapper.h \
    ./core/helpers/DT_mounter.h \
    ./core/helpers/StaticHelpers.h \
    ./core/helpers/VirtualDiskMounter.h \
    ./core/http/httpcookie.h \
    ./core/http/httprequest.h \
    ./core/http/httpresponse.h \
    ./core/http/httpsession.h \
    ./core/http/staticfilecontroller.h \
    ./core/http/httpsessionstore.h \
    ./core/http/httprequesthandler.h \
    ./core/http/httplistener.h \
    ./core/http/httpconnectionhandlerpool.h \
    ./core/http/httpconnectionhandler.h \
    ./core/qtsingleapplication/src/qtlockedfile.h \
    ./core/qtsingleapplication/src/qtsinglecoreapplication.h \
    ./core/qtsingleapplication/src/qtsingleapplication.h \
    ./core/qtsingleapplication/src/qtlocalpeer.h \
    ./core/smtp/emailaddress.h \
    ./core/smtp/mimeattachment.h \
    ./core/smtp/mimebase64encoder.h \
    ./core/smtp/mimebase64formatter.h \
    ./core/smtp/mimebytearrayattachment.h \
    ./core/smtp/mimecontentencoder.h \
    ./core/smtp/mimecontentformatter.h \
    ./core/smtp/mimefile.h \
    ./core/smtp/mimehtml.h \
    ./core/smtp/mimeinlinefile.h \
    ./core/smtp/mimemessage.h \
    ./core/smtp/mimemultipart.h \
    ./core/smtp/mimepart.h \
    ./core/smtp/mimeqpencoder.h \
    ./core/smtp/mimeqpformatter.h \
    ./core/smtp/mimetext.h \
    ./core/smtp/quotedprintable.h \
    ./core/smtp/smtpmime_global.h \
    ./core/smtp/smtpclient.h \
    ./core/viewModel/FileTreeSortProxyModel.h \
    ./core/viewModel/FileViewSortProxyModel.h \
    ./core/viewModel/FiltersViewModel.h \
    ./core/viewModel/FileViewModel.h \
    ./core/viewModel/FileTreeModel.h \
    ./core/viewModel/itemDelegate/FileSizeItemDelegate.h \
    ./core/viewModel/itemDelegate/IpItemDelegate.h \
    ./core/viewModel/itemDelegate/ProgressItemDelegate.h \
    ./core/viewModel/itemDelegate/SpeedItemDelegate.h \
    ./core/viewModel/itemDelegate/TimeItemDelegate.h \
    ./core/viewModel/itemDelegate/PriorityItemDelegate.h \
    ./core/zip/crypt.h \
    ./core/zip/ioapi.h \
    ./core/zip/JlCompress.h \
    ./core/zip/quaadler32.h \
    ./core/zip/quachecksum32.h \
    ./core/zip/quacrc32.h \
    ./core/zip/quazip.h \
    ./core/zip/quazipdir.h \
    ./core/zip/quazipfileinfo.h \
    ./core/zip/quazipnewinfo.h \
    ./core/zip/unzip.h \
    ./core/zip/zip.h \
    ./core/zip/quazipfile.h \
    ./core/zip/quazip_global.h \
    ./core/zip/quaziodevice.h \
    ./core/zip/quagzipfile.h \
    ./core/collections/ObservableList.h \
    ./core/collections/ObservebaleCollectionBase.h \
    ./GeneratedFiles/ui_AddCommentDialog.h \
    ./GeneratedFiles/ui_AddDownloadRuleDialog.h \
    ./GeneratedFiles/ui_CreateTorrentDialog.h \
    ./GeneratedFiles/ui_CustomWindow.h \
    ./GeneratedFiles/ui_InitializtionDialog.h \
    ./GeneratedFiles/ui_LoginDialog.h \
    ./GeneratedFiles/ui_messagebox.h \
    ./GeneratedFiles/ui_mrichtextedit.h \
    ./GeneratedFiles/ui_multipleDt.h \
    ./GeneratedFiles/ui_OpenTorrentDialog.h \
    ./GeneratedFiles/ui_RaitingDialog.h \
    ./GeneratedFiles/ui_RegisterDialog.h \
    ./GeneratedFiles/ui_ReportProblemDialog.h \
    ./GeneratedFiles/ui_RssFeedSettingsDialog.h \
    ./GeneratedFiles/ui_SettingsDialog.h \
    ./GeneratedFiles/ui_SpeedLimitDialog.h \
    ./GeneratedFiles/ui_VideoFileChoose.h \
    ./rss/RssCommon.h \
    ./rss/core/RssParser.h \
    ./rss/core/RssManager.h \
    ./rss/core/RssItem.h \
    ./rss/core/RssFeed.h \
    ./rss/datamodels/RssBaseTreeItem.h \
    ./rss/datamodels/RssDownloadRule.h \
    ./rss/datamodels/RssFeedItemTreeItem.h \
    ./rss/datamodels/RssFeedTreeItem.h \
    ./rss/gui/Dialogs/RssFeedSettingsDialog.h \
    ./rss/gui/Dialogs/AddRssDwonloadRuleDialog.h \
    ./rss/viewmodels/QRssFilterModel.h \
    ./rss/viewmodels/QRssDisplayModel.h \
    ./rss/viewmodels/ItemDelegate/QRssItemDelegate.h \
    ./scheduller/SchedulerTask.h \
    ./scheduller/Scheduller.h \
    ./search/core/SearchCommon.h \
    ./search/core/SearchItemsStorrage.h \
    ./search/core/SearchEngine.h \
    ./search/core/ISerachProvider.h \
    ./search/dataModels/searchitem.h \
    ./search/dataModels/SerachResult.h \
    ./search/dataModels/SearchResult.h \
    ./search/searchproviders/CustomScriptSearchProvider.h \
    ./search/viewmodels/QSearchFilterModel.h \
    ./search/viewmodels/QSearchDisplayModel.h \
    ./search/viewmodels/ItemDelegate/QSearchItemDelegate.h \
    ./torrent/core/TorrentCommon.h \
    ./torrent/core/TorrentStorrage.h \
    ./torrent/core/TorrentManager.h \
    ./torrent/core/Torrent.h \
    ./torrent/core/MetaDataDownloadWaiter.h \
    ./torrent/core/FileSystemTorrentWatcher.h \
    ./torrent/gui/Controls/PieceAvailabilityWidget.h \
    ./torrent/gui/Controls/peicedisplaywidget.h \
    ./torrent/gui/Dialogs/OpenTorrentDialog.h \
    ./torrent/gui/Dialogs/CreateTorrentDialog.h \
    ./torrent/viewmodels/PeerSortModel.h \
    ./torrent/viewmodels/QTorrentFilterProxyModel.h \
    ./torrent/viewmodels/QTorrentDisplayModel.h \
    ./torrent/viewmodels/PeerTableModel.h \
    ./torrent/viewmodels/ItemDelegate/QTorrentItemDelegat.h \
    ./tracker/AnnounceRequest.h \
    ./tracker/trackercommon.h \
    ./tracker/trackerrequestmapper.h \
    ./tracker/torrentracker.h \
    ./webControll/FileSystemController.h \
    ./webControll/RconCommon.h \
    ./webControll/RssCommandsApiController.h \
    ./webControll/RssController.h \
    ./webControll/UploadController.h \
    ./webControll/TorrentCommandsApiController.h \
    ./webControll/TorrentApiController.h \
    ./webControll/SettingsAPiController.h \
    ./webControll/RequestMapper.h \
    ./webControll/RconWebService.h \
    ./webControll/MagnetApiController.h \
    ./Resources/resource.h
SOURCES += ./main.cpp \
    ./Comments/CommentsWebClient.cpp \
    ./Comments/gui/Dialogs/AddCommentDialog.cpp \
    ./Comments/gui/Dialogs/LoginDialog.cpp \
    ./Comments/gui/Dialogs/RegisterDialog.cpp \
    ./Comments/ViewModels/CommentItemDelegate.cpp \
    ./Comments/ViewModels/CommentsModel.cpp \
    ./core/application.cpp \
    ./core/EmailNotifier.cpp \
    ./core/EmailValidator.cpp \
    ./core/FaviconDownloader.cpp \
    ./core/filedownloader.cpp \
    ./core/GroupForFileFiltering.cpp \
    ./core/InitializationWorker.cpp \
    ./core/IpToCountryResolver.cpp \
    ./core/NetworkDiskCache.cpp \
    ./core/NotificationSystem.cpp \
    ./core/PowerManagement.cpp \
    ./core/QApplicationSettings.cpp \
    ./core/StyleEngene.cpp \
    ./core/SympleCrypt.cpp \
    ./core/TorrentGroup.cpp \
    ./core/TorrentGroupsManager.cpp \
    ./core/TreeItem.cpp \
    ./core/UpdateNotyfier.cpp \
    ./core/Version.cpp \
    ./core/avaliableSpacePlugin/avaliable_space_verifier_plugin.cpp \
    ./core/datamodels/FileViewTreeItem.cpp \
    ./core/datamodels/json/json.cpp \
    ./core/datamodels/SGML/QSgml.cpp \
    ./core/datamodels/SGML/QSgmlTag.cpp \
    ./core/gui/backupwizard/applybackuppage.cpp \
    ./core/gui/backupwizard/backupwizard.cpp \
    ./core/gui/backupwizard/createbackuppage.cpp \
    ./core/gui/backupwizard/finishpage.cpp \
    ./core/gui/backupwizard/intropage.cpp \
    ./core/gui/Controls/CheckableMenu.cpp \
    ./core/gui/Controls/EditableHeaderView.cpp \
    ./core/gui/Controls/HtmlView.cpp \
    ./core/gui/Controls/messagebox.cpp \
    ./core/gui/Controls/QBaloon.cpp \
    ./core/gui/Controls/qkeyedit.cpp \
    ./core/gui/Controls/RaitingWidget.cpp \
    ./core/gui/Controls/searchlineedit.cpp \
    ./core/gui/Controls/SortButton.cpp \
    ./core/gui/Controls/StyledProgressBar.cpp \
    ./core/gui/Controls/TreeBox.cpp \
    ./core/gui/Controls/MRichTextEdit/mrichtextedit.cpp \
    ./core/gui/Controls/MRichTextEdit/mtextedit.cpp \
    ./core/gui/Dialogs/CuteTorrentMainWindow.cpp \
    ./core/gui/Dialogs/InitializationDialog.cpp \
    ./core/gui/Dialogs/MultipleDTDialog.cpp \
    ./core/gui/Dialogs/RaitingDialog.cpp \
    ./core/gui/Dialogs/ReportProblemDialog.cpp \
    ./core/gui/Dialogs/SettingsDialog.cpp \
    ./core/gui/Dialogs/SpeedLimitDialog.cpp \
    ./core/gui/Dialogs/VideoFileChooseDialog.cpp \
    ./core/gui/ImportWizard/ChoseDataPage.cpp \
    ./core/gui/ImportWizard/ImportFinishPage.cpp \
    ./core/gui/ImportWizard/ImportIntroPage.cpp \
    ./core/gui/ImportWizard/ImportPage.cpp \
    ./core/gui/ImportWizard/ImportWizard.cpp \
    ./core/gui/ImportWizard/Importers/ImportersManager.cpp \
    ./core/gui/ImportWizard/Importers/UTorrentImporter.cpp \
    ./core/gui/Utils/SettingsPropertyMapper.cpp \
    ./core/gui/Utils/UIPropertyGetters.cpp \
    ./core/gui/Utils/UIPropertySetters.cpp \
    ./core/gui/Utils/ValueGetters.cpp \
    ./core/gui/Utils/ValueSetters.cpp \
    ./core/helpers/DT_mounter.cpp \
    ./core/helpers/StaticHelpers.cpp \
    ./core/helpers/VirtualDiskMounter.cpp \
    ./core/http/httpconnectionhandler.cpp \
    ./core/http/httpconnectionhandlerpool.cpp \
    ./core/http/httpcookie.cpp \
    ./core/http/httplistener.cpp \
    ./core/http/httprequest.cpp \
    ./core/http/httprequesthandler.cpp \
    ./core/http/httpresponse.cpp \
    ./core/http/httpsession.cpp \
    ./core/http/httpsessionstore.cpp \
    ./core/http/staticfilecontroller.cpp \
    ./core/qtsingleapplication/src/qtlocalpeer.cpp \
    ./core/qtsingleapplication/src/qtlockedfile.cpp \
    ./core/qtsingleapplication/src/qtlockedfile_unix.cpp \
    ./core/qtsingleapplication/src/qtlockedfile_win.cpp \
    ./core/qtsingleapplication/src/qtsingleapplication.cpp \
    ./core/qtsingleapplication/src/qtsinglecoreapplication.cpp \
    ./core/smtp/emailaddress.cpp \
    ./core/smtp/mimeattachment.cpp \
    ./core/smtp/mimebase64encoder.cpp \
    ./core/smtp/mimebase64formatter.cpp \
    ./core/smtp/mimebytearrayattachment.cpp \
    ./core/smtp/mimecontentencoder.cpp \
    ./core/smtp/mimecontentformatter.cpp \
    ./core/smtp/mimefile.cpp \
    ./core/smtp/mimehtml.cpp \
    ./core/smtp/mimeinlinefile.cpp \
    ./core/smtp/mimemessage.cpp \
    ./core/smtp/mimemultipart.cpp \
    ./core/smtp/mimepart.cpp \
    ./core/smtp/mimeqpencoder.cpp \
    ./core/smtp/mimeqpformatter.cpp \
    ./core/smtp/mimetext.cpp \
    ./core/smtp/quotedprintable.cpp \
    ./core/smtp/smtpclient.cpp \
    ./core/viewModel/FileTreeModel.cpp \
    ./core/viewModel/FileTreeSortProxyModel.cpp \
    ./core/viewModel/FileViewModel.cpp \
    ./core/viewModel/FileViewSortProxyModel.cpp \
    ./core/viewModel/FiltersViewModel.cpp \
    ./core/viewModel/itemDelegate/FileSizeItemDelegate.cpp \
    ./core/viewModel/itemDelegate/IpItemDelegate.cpp \
    ./core/viewModel/itemDelegate/PriorityItemDelegate.cpp \
    ./core/viewModel/itemDelegate/ProgressItemDelegate.cpp \
    ./core/viewModel/itemDelegate/SpeedItemDelegate.cpp \
    ./core/viewModel/itemDelegate/TimeItemDelegate.cpp \
    ./core/zip/JlCompress.cpp \
    ./core/zip/qioapi.cpp \
    ./core/zip/quaadler32.cpp \
    ./core/zip/quacrc32.cpp \
    ./core/zip/quagzipfile.cpp \
    ./core/zip/quaziodevice.cpp \
    ./core/zip/quazip.cpp \
    ./core/zip/quazipdir.cpp \
    ./core/zip/quazipfile.cpp \
    ./core/zip/quazipfileinfo.cpp \
    ./core/zip/quazipnewinfo.cpp \
    ./core/zip/unzip.c \
    ./core/zip/zip.c \
    ./GeneratedFiles/qrc_ltorrent.cpp \
    ./GeneratedFiles/Release/moc_AddCommentDialog.cpp \
    ./GeneratedFiles/Release/moc_AddRssDwonloadRuleDialog.cpp \
    ./GeneratedFiles/Release/moc_application.cpp \
    ./GeneratedFiles/Release/moc_applybackuppage.cpp \
    ./GeneratedFiles/Release/moc_backupwizard.cpp \
    ./GeneratedFiles/Release/moc_BaseImporter.cpp \
    ./GeneratedFiles/Release/moc_CheckableMenu.cpp \
    ./GeneratedFiles/Release/moc_ChoseDataPage.cpp \
    ./GeneratedFiles/Release/moc_CommentItemDelegate.cpp \
    ./GeneratedFiles/Release/moc_CommentsModel.cpp \
    ./GeneratedFiles/Release/moc_CommentsWebClient.cpp \
    ./GeneratedFiles/Release/moc_createbackuppage.cpp \
    ./GeneratedFiles/Release/moc_CreateTorrentDialog.cpp \
    ./GeneratedFiles/Release/moc_CustomScriptSearchProvider.cpp \
    ./GeneratedFiles/Release/moc_CuteTorrentMainWindow.cpp \
    ./GeneratedFiles/Release/moc_EditableHeaderView.cpp \
    ./GeneratedFiles/Release/moc_EmailValidator.cpp \
    ./GeneratedFiles/Release/moc_FaviconDownloader.cpp \
    ./GeneratedFiles/Release/moc_filedownloader.cpp \
    ./GeneratedFiles/Release/moc_FileSystemTorrentWatcher.cpp \
    ./GeneratedFiles/Release/moc_FileTreeModel.cpp \
    ./GeneratedFiles/Release/moc_FileViewModel.cpp \
    ./GeneratedFiles/Release/moc_FiltersViewModel.cpp \
    ./GeneratedFiles/Release/moc_finishpage.cpp \
    ./GeneratedFiles/Release/moc_HtmlView.cpp \
    ./GeneratedFiles/Release/moc_httpconnectionhandler.cpp \
    ./GeneratedFiles/Release/moc_httpconnectionhandlerpool.cpp \
    ./GeneratedFiles/Release/moc_httplistener.cpp \
    ./GeneratedFiles/Release/moc_httprequesthandler.cpp \
    ./GeneratedFiles/Release/moc_httpsessionstore.cpp \
    ./GeneratedFiles/Release/moc_ImportFinishPage.cpp \
    ./GeneratedFiles/Release/moc_ImportIntroPage.cpp \
    ./GeneratedFiles/Release/moc_ImportPage.cpp \
    ./GeneratedFiles/Release/moc_ImportWizard.cpp \
    ./GeneratedFiles/Release/moc_InitializationDialog.cpp \
    ./GeneratedFiles/Release/moc_InitializationWorker.cpp \
    ./GeneratedFiles/Release/moc_intropage.cpp \
    ./GeneratedFiles/Release/moc_IpToCountryResolver.cpp \
    ./GeneratedFiles/Release/moc_ISerachProvider.cpp \
    ./GeneratedFiles/Release/moc_LoginDialog.cpp \
    ./GeneratedFiles/Release/moc_MagnetApiController.cpp \
    ./GeneratedFiles/Release/moc_messagebox.cpp \
    ./GeneratedFiles/Release/moc_MetaDataDownloadWaiter.cpp \
    ./GeneratedFiles/Release/moc_mrichtextedit.cpp \
    ./GeneratedFiles/Release/moc_mtextedit.cpp \
    ./GeneratedFiles/Release/moc_MultipleDTDialog.cpp \
    ./GeneratedFiles/Release/moc_NetworkDiskCache.cpp \
    ./GeneratedFiles/Release/moc_NotificationSystem.cpp \
    ./GeneratedFiles/Release/moc_ObservebaleCollectionBase.cpp \
    ./GeneratedFiles/Release/moc_OpenTorrentDialog.cpp \
    ./GeneratedFiles/Release/moc_PeerTableModel.cpp \
    ./GeneratedFiles/Release/moc_peicedisplaywidget.cpp \
    ./GeneratedFiles/Release/moc_PieceAvailabilityWidget.cpp \
    ./GeneratedFiles/Release/moc_PowerManagement.cpp \
    ./GeneratedFiles/Release/moc_PriorityItemDelegate.cpp \
    ./GeneratedFiles/Release/moc_QApplicationSettings.cpp \
    ./GeneratedFiles/Release/moc_qkeyedit.cpp \
    ./GeneratedFiles/Release/moc_QRssDisplayModel.cpp \
    ./GeneratedFiles/Release/moc_QRssItemDelegate.cpp \
    ./GeneratedFiles/Release/moc_QSearchDisplayModel.cpp \
    ./GeneratedFiles/Release/moc_QSearchItemDelegate.cpp \
    ./GeneratedFiles/Release/moc_QSgml.cpp \
    ./GeneratedFiles/Release/moc_QSgmlTag.cpp \
    ./GeneratedFiles/Release/moc_qtlocalpeer.cpp \
    ./GeneratedFiles/Release/moc_QTorrentDisplayModel.cpp \
    ./GeneratedFiles/Release/moc_QTorrentFilterProxyModel.cpp \
    ./GeneratedFiles/Release/moc_QTorrentItemDelegat.cpp \
    ./GeneratedFiles/Release/moc_qtsingleapplication.cpp \
    ./GeneratedFiles/Release/moc_qtsinglecoreapplication.cpp \
    ./GeneratedFiles/Release/moc_quagzipfile.cpp \
    ./GeneratedFiles/Release/moc_quaziodevice.cpp \
    ./GeneratedFiles/Release/moc_quazipfile.cpp \
    ./GeneratedFiles/Release/moc_RaitingDialog.cpp \
    ./GeneratedFiles/Release/moc_RaitingWidget.cpp \
    ./GeneratedFiles/Release/moc_RconWebService.cpp \
    ./GeneratedFiles/Release/moc_RegisterDialog.cpp \
    ./GeneratedFiles/Release/moc_ReportProblemDialog.cpp \
    ./GeneratedFiles/Release/moc_RequestMapper.cpp \
    ./GeneratedFiles/Release/moc_RssFeed.cpp \
    ./GeneratedFiles/Release/moc_RssFeedSettingsDialog.cpp \
    ./GeneratedFiles/Release/moc_RssItem.cpp \
    ./GeneratedFiles/Release/moc_RssManager.cpp \
    ./GeneratedFiles/Release/moc_Scheduller.cpp \
    ./GeneratedFiles/Release/moc_SearchEngine.cpp \
    ./GeneratedFiles/Release/moc_SearchItemsStorrage.cpp \
    ./GeneratedFiles/Release/moc_searchlineedit.cpp \
    ./GeneratedFiles/Release/moc_SearchResult.cpp \
    ./GeneratedFiles/Release/moc_SettingsAPiController.cpp \
    ./GeneratedFiles/Release/moc_SettingsDialog.cpp \
    ./GeneratedFiles/Release/moc_SettingsPropertyMapper.cpp \
    ./GeneratedFiles/Release/moc_smtpclient.cpp \
    ./GeneratedFiles/Release/moc_SortButton.cpp \
    ./GeneratedFiles/Release/moc_SpeedLimitDialog.cpp \
    ./GeneratedFiles/Release/moc_staticfilecontroller.cpp \
    ./GeneratedFiles/Release/moc_StyleEngene.cpp \
    ./GeneratedFiles/Release/moc_Torrent.cpp \
    ./GeneratedFiles/Release/moc_TorrentApiController.cpp \
    ./GeneratedFiles/Release/moc_TorrentCommandsApiController.cpp \
    ./GeneratedFiles/Release/moc_TorrentGroupsManager.cpp \
    ./GeneratedFiles/Release/moc_TorrentManager.cpp \
    ./GeneratedFiles/Release/moc_torrentracker.cpp \
    ./GeneratedFiles/Release/moc_trackerrequestmapper.cpp \
    ./GeneratedFiles/Release/moc_TreeBox.cpp \
    ./GeneratedFiles/Release/moc_UpdateNotyfier.cpp \
    ./GeneratedFiles/Release/moc_UploadController.cpp \
    ./GeneratedFiles/Release/moc_UTorrentImporter.cpp \
    ./GeneratedFiles/Release/moc_VideoFileChooseDialog.cpp \
    ./rss/core/RssFeed.cpp \
    ./rss/core/RssItem.cpp \
    ./rss/core/RssManager.cpp \
    ./rss/core/RssParser.cpp \
    ./rss/datamodels/RssBaseTreeItem.cpp \
    ./rss/datamodels/RssDownloadRule.cpp \
    ./rss/datamodels/RssFeedItemTreeItem.cpp \
    ./rss/datamodels/RssFeedTreeItem.cpp \
    ./rss/gui/Dialogs/AddRssDwonloadRuleDialog.cpp \
    ./rss/gui/Dialogs/RssFeedSettingsDialog.cpp \
    ./rss/viewmodels/QRssDisplayModel.cpp \
    ./rss/viewmodels/QRssFilterModel.cpp \
    ./rss/viewmodels/ItemDelegate/QRssItemDelegate.cpp \
    ./scheduller/SchedulerTask.cpp \
    ./scheduller/Scheduller.cpp \
    ./search/core/SearchEngine.cpp \
    ./search/core/SearchItemsStorrage.cpp \
    ./search/dataModels/searchitem.cpp \
    ./search/searchproviders/CustomScriptSearchProvider.cpp \
    ./search/viewmodels/QSearchDisplayModel.cpp \
    ./search/viewmodels/QSearchFilterModel.cpp \
    ./search/viewmodels/ItemDelegate/QSearchItemDelegate.cpp \
    ./torrent/core/FileSystemTorrentWatcher.cpp \
    ./torrent/core/MetaDataDownloadWaiter.cpp \
    ./torrent/core/Torrent.cpp \
    ./torrent/core/TorrentManager.cpp \
    ./torrent/core/TorrentStorrage.cpp \
    ./torrent/gui/Controls/peicedisplaywidget.cpp \
    ./torrent/gui/Controls/PieceAvailabilityWidget.cpp \
    ./torrent/gui/Dialogs/CreateTorrentDialog.cpp \
    ./torrent/gui/Dialogs/OpenTorrentDialog.cpp \
    ./torrent/viewmodels/PeerSortModel.cpp \
    ./torrent/viewmodels/PeerTableModel.cpp \
    ./torrent/viewmodels/QTorrentDisplayModel.cpp \
    ./torrent/viewmodels/QTorrentFilterProxyModel.cpp \
    ./torrent/viewmodels/ItemDelegate/QTorrentItemDelegat.cpp \
    ./tracker/AnnounceRequest.cpp \
    ./tracker/torrentracker.cpp \
    ./tracker/trackerrequestmapper.cpp \
    ./webControll/FileSystemController.cpp \
    ./webControll/MagnetApiController.cpp \
    ./webControll/RconWebService.cpp \
    ./webControll/RequestMapper.cpp \
    ./webControll/RssCommandsApiController.cpp \
    ./webControll/RssController.cpp \
    ./webControll/SettingsAPiController.cpp \
    ./webControll/TorrentApiController.cpp \
    ./webControll/TorrentCommandsApiController.cpp \
    ./webControll/UploadController.cpp
