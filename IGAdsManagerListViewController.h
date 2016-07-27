
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGGroupedTableViewController.h>
#import <Instagram/IGAdsManagerListDataReceiving.h>

@class IGAdsManagerDataProvider, IGAdsListViewModel, IGRefreshControl, IGAdManagerEmptyListView, IGAdsManagerLogger, NSString;

@interface IGAdsManagerListViewController : IGGroupedTableViewController <IGAdsManagerListDataReceiving> {

	char _isFirstLoad;
	char _isVerifyingFacebookToken;
	IGAdsManagerDataProvider* _dataProvider;
	IGAdsListViewModel* _adsList;
	IGRefreshControl* _refreshControl;
	IGAdManagerEmptyListView* _emptyListView;
	IGAdsManagerLogger* _logger;

}

@property (nonatomic,readonly) IGAdsManagerDataProvider * dataProvider;              //@synthesize dataProvider=_dataProvider - In the implementation block
@property (nonatomic,retain) IGAdsListViewModel * adsList;                           //@synthesize adsList=_adsList - In the implementation block
@property (nonatomic,retain) IGRefreshControl * refreshControl;                      //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,retain) IGAdManagerEmptyListView * emptyListView;               //@synthesize emptyListView=_emptyListView - In the implementation block
@property (nonatomic,readonly) IGAdsManagerLogger * logger;                          //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) char isFirstLoad;                                       //@synthesize isFirstLoad=_isFirstLoad - In the implementation block
@property (assign,nonatomic) char isVerifyingFacebookToken;                          //@synthesize isVerifyingFacebookToken=_isVerifyingFacebookToken - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(char)canHostInlineGallery:(char)arg1 ;
-(void)setEmptyListView:(IGAdManagerEmptyListView *)arg1 ;
-(IGAdManagerEmptyListView *)emptyListView;
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
-(char)isVerifyingFacebookToken;
-(void)setIsVerifyingFacebookToken:(char)arg1 ;
-(id)initWithLogger:(id)arg1 ;
-(void)onRefreshTapped:(id)arg1 ;
-(IGAdsManagerLogger *)logger;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(char)arg1 ;
-(void)setRefreshControl:(IGRefreshControl *)arg1 ;
-(IGRefreshControl *)refreshControl;
-(IGAdsManagerDataProvider *)dataProvider;
-(id)titleForHeaderInSection:(int)arg1 ;
@end

