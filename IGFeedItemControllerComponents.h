

@protocol IGFeedConfigurationType, IGFeedItemConfigurationType, IGAnalyticsModule;
@class IGListAdapterScrollingContext, IGUser, IGFeedVideoCellManager, IGCollectionViewVisibility, IGFeedItemLogger, IGFeedViewControllerTracker, IGListAdapter, IGFeedHeartAnimator;

@interface IGFeedItemControllerComponents : NSObject {

	char _trackersDisabled;
	id<IGFeedConfigurationType> _feedConfiguration;
	id<IGFeedItemConfigurationType> _itemConfiguration;
	IGListAdapterScrollingContext* _scrollingContext;
	IGUser* _currentUser;
	IGFeedVideoCellManager* _videoCellManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedItemLogger* _feedItemLogger;
	IGFeedViewControllerTracker* _impressionTracker;
	id<IGAnalyticsModule> _analyticsModule;
	IGListAdapter* _listAdapter;
	IGFeedHeartAnimator* _heartAnimator;

}

@property (nonatomic,readonly) IGUser * currentUser;                                               //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                          //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGCollectionViewVisibility * collectionViewVisibility;              //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,readonly) IGFeedItemLogger * feedItemLogger;                                  //@synthesize feedItemLogger=_feedItemLogger - In the implementation block
@property (nonatomic,readonly) IGFeedViewControllerTracker * impressionTracker;                    //@synthesize impressionTracker=_impressionTracker - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAnalyticsModule> analyticsModule;                       //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                        //@synthesize listAdapter=_listAdapter - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (assign,nonatomic) char trackersDisabled;                                                //@synthesize trackersDisabled=_trackersDisabled - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> feedConfiguration;                      //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> itemConfiguration;                  //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (nonatomic,readonly) IGListAdapterScrollingContext * scrollingContext;                   //@synthesize scrollingContext=_scrollingContext - In the implementation block
-(id<IGAnalyticsModule>)analyticsModule;
-(IGListAdapter *)listAdapter;
-(IGFeedVideoCellManager *)videoCellManager;
-(IGFeedViewControllerTracker *)impressionTracker;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(IGFeedHeartAnimator *)heartAnimator;
-(IGListAdapterScrollingContext *)scrollingContext;
-(IGFeedItemLogger *)feedItemLogger;
-(void)enableImpressionTrackers;
-(void)disableImpressionTrackers;
-(void)updateImpressionTrackers;
-(void)updatePageCells;
-(void)updateFullViewImpressionTracker;
-(char)trackersDisabled;
-(void)setTrackersDisabled:(char)arg1 ;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(id<IGFeedConfigurationType>)feedConfiguration;
-(id)initWithFeedConfiguration:(id)arg1 itemConfiguration:(id)arg2 collectionView:(id)arg3 listAdapter:(id)arg4 currentUser:(id)arg5 navigationBar:(id)arg6 tabBar:(id)arg7 analyticsModule:(id)arg8 isMainFeed:(char)arg9 feedNetworkSource:(id)arg10 ;
-(void)adapterDidCompleteUpdate;
-(id)newFeedItemController;
-(void)scrollViewDidScroll;
-(void)scrollViewDidEndScrolling;
-(void)dealloc;
-(IGUser *)currentUser;
-(void)viewDidAppear;
-(void)viewWillDisappear;
@end

