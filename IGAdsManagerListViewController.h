
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGAdsManagerListDataReceiving.h>
#import <Instagram/IGPullToRefreshProtocol.h>

@class IGAdsManagerDataProvider, IGAdsListViewModel, IGPullToRefreshViewManager, IGPullToRefreshView, IGAdManagerEmptyListView, UIBarButtonItem, IGAdsManagerLogger, NSString;

@interface IGAdsManagerListViewController : IGGroupedTableViewController <IGAdsManagerListDataReceiving, IGPullToRefreshProtocol> {

	char _isFirstLoad;
	char _isVerifyingFacebookToken;
	IGAdsManagerDataProvider* _dataProvider;
	IGAdsListViewModel* _adsList;
	IGPullToRefreshViewManager* _pullToRefreshViewManager;
	IGPullToRefreshView* _pullRefreshControlView;
	IGAdManagerEmptyListView* _emptyListView;
	UIBarButtonItem* _refreshButton;
	UIBarButtonItem* _loadingButton;
	IGAdsManagerLogger* _logger;

}

@property (nonatomic,readonly) IGAdsManagerDataProvider * dataProvider;                          //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) IGAdsListViewModel * adsList;                                       //@synthesize adsList=_adsList - In the implementation block
@property (nonatomic,retain) IGPullToRefreshViewManager * pullToRefreshViewManager;              //@synthesize pullToRefreshViewManager=_pullToRefreshViewManager - In the implementation block
@property (nonatomic,retain) IGPullToRefreshView * pullRefreshControlView;                       //@synthesize pullRefreshControlView=_pullRefreshControlView - In the implementation block
@property (nonatomic,retain) IGAdManagerEmptyListView * emptyListView;                           //@synthesize emptyListView=_emptyListView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * refreshButton;                                  //@synthesize refreshButton=_refreshButton - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * loadingButton;                                  //@synthesize loadingButton=_loadingButton - In the implementation block
@property (nonatomic,readonly) IGAdsManagerLogger * logger;                                      //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) char isFirstLoad;                                                   //@synthesize isFirstLoad=_isFirstLoad - In the implementation block
@property (assign,nonatomic) char isVerifyingFacebookToken;                                      //@synthesize isVerifyingFacebookToken=_isVerifyingFacebookToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setEmptyListView:(IGAdManagerEmptyListView *)arg1 ;
-(IGAdManagerEmptyListView *)emptyListView;
-(void)setPullRefreshControlView:(IGPullToRefreshView *)arg1 ;
-(char)isVerifyingFacebookToken;
-(void)setIsVerifyingFacebookToken:(char)arg1 ;
-(NSArray*)adsArrayForSection:(int)arg1 ;
-(id)adViewModelForIndexPath:(id)arg1 ;
-(IGAdsListViewModel *)adsList;
-(void)setAdsList:(IGAdsListViewModel *)arg1 ;
-(char)isFirstLoad;
-(void)setIsFirstLoad:(char)arg1 ;
-(void)adsManagerListDataProvider:(id)arg1 didReceiveAdsList:(id)arg2 ;
-(void)adsManagerListDataProvider:(id)arg1 didFailWithError:(id)arg2 ;
-(void)willStartFetchingWithAdsManagerListDataProvider:(id)arg1 ;
-(void)didFinishFetchingWithAdsManagerListDataProvider:(id)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(UIBarButtonItem *)loadingButton;
-(void)setPullToRefreshViewManager:(IGPullToRefreshViewManager *)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshViewManager;
-(IGPullToRefreshView *)pullRefreshControlView;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(id)initWithLogger:(id)arg1 ;
-(void)onRefreshTapped:(id)arg1 ;
-(IGAdsManagerLogger *)logger;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(IGAdsManagerDataProvider *)dataProvider;
-(UIBarButtonItem *)refreshButton;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

