/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:41 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGViewController.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Instagram/IGPullToRefreshProtocol.h>
#import <Instagram/IGDirectInboxControllerType.h>
#import <Instagram/IGDirectThreadViewControllerDelegate.h>
#import <Instagram/IGUIPerfLoggable.h>

@class NSOrderedSet, IGDirectCoreService, IGDirectInboxPendingRequests, IGListCollectionView, IGListAdapter, IGPullToRefreshViewManager, IGDirectEmptyInboxView, IGDirectInboxUpdateObserver, IGDirectMainInboxAnalyticsLogger, IGDirectUIPerfLogProxy, IGDirectNewMessageCoordinator, NSString;

@interface IGDirectMainInboxViewController2 : IGViewController <IGListAdapterDataSource, UICollectionViewDelegate, IGPullToRefreshProtocol, IGDirectInboxControllerType, IGDirectThreadViewControllerDelegate, IGUIPerfLoggable> {

	NSOrderedSet* _threads;
	IGDirectCoreService* _service;
	IGDirectInboxPendingRequests* _pendingRequests;
	IGListCollectionView* _collectionView;
	IGListAdapter* _listAdapter;
	IGPullToRefreshViewManager* _pullToRefreshManager;
	IGDirectEmptyInboxView* _emptyInboxView;
	IGDirectInboxUpdateObserver* _inboxObserver;
	IGDirectMainInboxAnalyticsLogger* _analyticsLogger;
	IGDirectUIPerfLogProxy* _uiPerfLogger;
	IGDirectNewMessageCoordinator* _messageCoordinator;

}

@property (nonatomic,readonly) IGDirectCoreService * service;                                   //@synthesize service=_service - In the implementation block
@property (nonatomic,copy) NSOrderedSet * threads;                                              //@synthesize threads=_threads - In the implementation block
@property (nonatomic,retain) IGDirectInboxPendingRequests * pendingRequests;                    //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                           //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                     //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGPullToRefreshViewManager * pullToRefreshManager;               //@synthesize pullToRefreshManager=_pullToRefreshManager - In the implementation block
@property (nonatomic,retain) IGDirectEmptyInboxView * emptyInboxView;                           //@synthesize emptyInboxView=_emptyInboxView - In the implementation block
@property (nonatomic,retain) IGDirectInboxUpdateObserver * inboxObserver;                       //@synthesize inboxObserver=_inboxObserver - In the implementation block
@property (nonatomic,readonly) IGDirectMainInboxAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) IGDirectUIPerfLogProxy * uiPerfLogger;                           //@synthesize uiPerfLogger=_uiPerfLogger - In the implementation block
@property (nonatomic,readonly) IGDirectNewMessageCoordinator * messageCoordinator;              //@synthesize messageCoordinator=_messageCoordinator - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(IGListAdapter *)listAdapter;
-(void)setupCollectionViewAndListAdapter;
-(void)setupNewMessageButton;
-(void)setupMessageCoordinator;
-(void)didTapNewMessageButton:(id)arg1 ;
-(void)updateInboxUIState;
-(void)setInboxObserver:(IGDirectInboxUpdateObserver *)arg1 ;
-(void)showFakePullToRefreshIfNeeded;
-(void)fetchInboxDataFromFirstPage:(char)arg1 ;
-(IGPullToRefreshViewManager *)pullToRefreshManager;
-(void)fetchNextPage;
-(IGDirectUIPerfLogProxy *)uiPerfLogger;
-(IGDirectInboxUpdateObserver *)inboxObserver;
-(void)setThreads:(NSOrderedSet *)arg1 ;
-(IGDirectMainInboxAnalyticsLogger *)analyticsLogger;
-(IGDirectNewMessageCoordinator *)messageCoordinator;
-(IGDirectEmptyInboxView *)emptyInboxView;
-(void)setEmptyInboxView:(IGDirectEmptyInboxView *)arg1 ;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(id)currentActiveScrollView;
-(void)reloadDataFromPullToRefresh;
-(void)reloadInbox;
-(void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(id)init;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(char)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(char)extendedLayoutIncludesOpaqueBars;
-(char)automaticallyAdjustsScrollViewInsets;
-(IGDirectCoreService *)service;
-(NSOrderedSet *)threads;
-(IGDirectInboxPendingRequests *)pendingRequests;
-(void)setPendingRequests:(IGDirectInboxPendingRequests *)arg1 ;
-(void)setup;
-(void)refresh;
@end
