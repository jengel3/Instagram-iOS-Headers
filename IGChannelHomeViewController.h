
#import <Instagram/IGViewController.h>
#import <Instagram/IGNetworkSourceDelegate.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGListAdapterDelegate.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGEventViewerViewControllerDelegate.h>

@class IGUserSession, IGNetworkSource, IGRefreshControl, IGSpinnerModel, IGListCollectionView, IGListAdapter, NSMutableArray, NSString, IGChannelHomeLogger;

@interface IGChannelHomeViewController : IGViewController <IGNetworkSourceDelegate, IGListAdapterDataSource, IGListAdapterDelegate, UICollectionViewDelegate, IGEventViewerViewControllerDelegate> {

	IGUserSession* _userSession;
	IGNetworkSource* _networkSource;
	IGRefreshControl* _refreshControl;
	IGSpinnerModel* _spinner;
	IGListCollectionView* _collectionView;
	IGListAdapter* _adapter;
	NSMutableArray* _items;
	NSString* _sessionId;
	IGChannelHomeLogger* _logger;

}

@property (nonatomic,readonly) IGUserSession * userSession;                        //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,retain) IGNetworkSource * networkSource;                      //@synthesize networkSource=_networkSource - In the implementation block
@property (nonatomic,readonly) IGRefreshControl * refreshControl;                  //@synthesize refreshControl=_refreshControl - In the implementation block
@property (nonatomic,readonly) IGSpinnerModel * spinner;                           //@synthesize spinner=_spinner - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                            //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,copy) NSMutableArray * items;                                 //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                                 //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) IGChannelHomeLogger * logger;                       //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayItem:(id)arg2 atIndex:(int)arg3 ;
-(void)listAdapter:(id)arg1 didEndDisplayingItem:(id)arg2 atIndex:(int)arg3 ;
-(void)requestToDismissEventViewerViewController:(id)arg1 ;
-(void)setupPullToRefreshManager;
-(void)removeLastSpinner;
-(void)reloadFeed;
-(void)updateFeed;
-(id)newTitleConfigurationWithTopInset:(float)arg1 ;
-(IGNetworkSource *)networkSource;
-(char)isNearBottomInScrollView:(id)arg1 ;
-(void)loadNextPage;
-(void)fetchMore;
-(id)requestWithMaxID:(id)arg1 ;
-(void)networkSource:(id)arg1 didFetchObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFetchMoreWithObject:(id)arg2 ;
-(void)networkSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setNetworkSource:(IGNetworkSource *)arg1 ;
-(char)enableNavState;
-(IGChannelHomeLogger *)logger;
-(IGListAdapter *)adapter;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(NSMutableArray *)items;
-(void)setItems:(NSMutableArray *)arg1 ;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(IGRefreshControl *)refreshControl;
-(IGSpinnerModel *)spinner;
-(IGUserSession *)userSession;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(void)fetch;
@end

