
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGDirectInboxControllerType.h>
#import <Instagram/IGDirectThreadViewControllerDelegate.h>
#import <Instagram/IGUIPerfLoggable.h>

@class NSOrderedSet, IGDirectCoreService, IGListCollectionView, IGListAdapter, IGPullToRefreshViewManager, IGDirectEmptyInboxView, NSString;

@interface IGDirectMainInboxViewController2 : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPullToRefreshProtocol, IGDirectInboxControllerType, IGDirectThreadViewControllerDelegate, IGUIPerfLoggable> {

	NSOrderedSet* _threads;
	IGDirectCoreService* _service;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	IGDirectEmptyInboxView* _emptyInboxView;

}

@property (nonatomic,copy) NSOrderedSet * threads;                                             //@synthesize threads=_threads - In the implementation block
@property (nonatomic,readonly) IGDirectCoreService * service;                                  //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                          //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                    //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;              //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,retain) IGDirectEmptyInboxView * emptyInboxView;                          //@synthesize emptyInboxView=_emptyInboxView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)setupCollectionViewAndListAdapter;
-(void)setupPullToRefreshManagerWithCollectionView:(id)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(void)refreshDataWithClearCount:(char)arg1 ;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(unsigned)inboxSubscriptionStatus;
-(IGDirectEmptyInboxView *)emptyInboxView;
-(void)setEmptyInboxView:(IGDirectEmptyInboxView *)arg1 ;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(id)init;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(char)extendedLayoutIncludesOpaqueBars;
-(char)automaticallyAdjustsScrollViewInsets;
-(IGDirectCoreService *)service;
-(NSOrderedSet *)threads;
@end

