
#import <Instagram/IGGroupedTableViewController.h>

@protocol IGAdsManagerAdViewControllerDelegate;
@class IGFeedItem, IGAdsManagerDataProvider, IGAdsManagerDeleteAdHandler, IGAdsManagerLogger, IGAdViewModel, IGAdsManagerAdLoadingView;

@interface IGAdsManagerAdViewController : IGGroupedTableViewController {

	char _isDeleting;
	char _isShowingPreview;
	id<IGAdsManagerAdViewControllerDelegate> _delegate;
	IGFeedItem* _feedItem;
	IGAdsManagerDataProvider* _dataProvider;
	IGAdsManagerDeleteAdHandler* _deleteHandler;
	IGAdsManagerLogger* _logger;
	IGAdViewModel* _adViewModel;
	IGAdsManagerAdLoadingView* _loadingView;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                               //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGAdsManagerDataProvider * dataProvider;                             //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,readonly) IGAdsManagerDeleteAdHandler * deleteHandler;                         //@synthesize deleteHandler=_deleteHandler - In the implementation block
@property (nonatomic,readonly) IGAdsManagerLogger * logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) IGAdViewModel * adViewModel;                                           //@synthesize adViewModel=_adViewModel - In the implementation block
@property (nonatomic,retain) IGAdsManagerAdLoadingView * loadingView;                               //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) char isDeleting;                                                       //@synthesize isDeleting=_isDeleting - In the implementation block
@property (assign,nonatomic) char isShowingPreview;                                                 //@synthesize isShowingPreview=_isShowingPreview - In the implementation block
@property (assign,nonatomic,__weak) id<IGAdsManagerAdViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)analyticsModule;
-(IGFeedItem *)feedItem;
-(IGAdViewModel *)adViewModel;
-(void)loadAdViewModel;
-(void)updateNavigationTitleViewWithAdViewModel:(id)arg1 ;
-(void)setAdViewModel:(IGAdViewModel *)arg1 ;
-(void)showAdPreviewForFeedItem:(id)arg1 ;
-(char)isDeleting;
-(void)didTapDeleteFromCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didConfirmDeleteCurrentAdFromCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)setIsDeleting:(char)arg1 ;
-(IGAdsManagerDeleteAdHandler *)deleteHandler;
-(id)previewAdViewControllerWithFeedItem:(id)arg1 ;
-(id)cellForPreviewSection;
-(id)cellForInformationSectionAtRow:(int)arg1 ;
-(id)paymentCell;
-(id)actionCell;
-(id)standardCellWithText:(id)arg1 detailedText:(id)arg2 ;
-(id)headerForErrorStatus:(id)arg1 ;
-(id)initWithAdViewModel:(id)arg1 logger:(id)arg2 ;
-(id)initWithFeedItem:(id)arg1 logger:(id)arg2 ;
-(char)canHostInlineGallery:(char)arg1 ;
-(IGAdsManagerLogger *)logger;
-(void)setDelegate:(id<IGAdsManagerAdViewControllerDelegate>)arg1 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2 ;
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id<IGAdsManagerAdViewControllerDelegate>)delegate;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(IGAdsManagerDataProvider *)dataProvider;
-(char)isShowingPreview;
-(void)setIsShowingPreview:(char)arg1 ;
-(void)setLoadingView:(IGAdsManagerAdLoadingView *)arg1 ;
-(IGAdsManagerAdLoadingView *)loadingView;
@end

