
#import <Instagram/IGViewController.h>
#import <Instagram/IGFeedScrollViewListener.h>
#import <Instagram/IGListAdapterDataSource.h>
#import <Instagram/IGFeedStatusViewDelegate.h>
#import <Instagram/IGFeedNetworkSourceDelegate.h>
#import <Instagram/IGFeedPreviewingType.h>
#import <Instagram/IGTombstoneManagerDelegate.h>

@protocol IGFeedConfigurationType, IGFeedItemConfigurationType;
@class IGFeedNetworkSource, IGFeedItemControllerComponents, IGListAdapter, IGFeedScrollViewAnnouncer, IGListAdapterUpdaterLogger, IGUser, IGListCollectionView, IGFeedStatusView, IGFeedPreviewingHandler, IGProfilePictureHelper, IGTombstoneManager, IGFeedItem, NSString;

@interface IGSingleFeedViewController2 : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGFeedStatusViewDelegate, IGFeedNetworkSourceDelegate, IGFeedPreviewingType, IGTombstoneManagerDelegate> {

	IGFeedNetworkSource* _feedNetworkSource;
	id<IGFeedConfigurationType> _feedConfiguration;
	id<IGFeedItemConfigurationType> _itemConfiguration;
	IGFeedItemControllerComponents* _feedItemControllerComponents;
	IGListAdapter* _adapter;
	IGFeedScrollViewAnnouncer* _feedScrollAnnouncer;
	IGListAdapterUpdaterLogger* _adapterPerfLogger;
	IGUser* _currentUser;
	IGListCollectionView* _collectionView;
	IGFeedStatusView* _feedStatusView;
	IGFeedPreviewingHandler* _previewingHandler;
	IGProfilePictureHelper* _profilePictureHelper;
	IGTombstoneManager* _tombstoneManager;
	IGFeedItem* _feedItem;

}

@property (nonatomic,readonly) IGFeedItemControllerComponents * feedItemControllerComponents;              //@synthesize feedItemControllerComponents=_feedItemControllerComponents - In the implementation block
@property (nonatomic,readonly) IGListAdapter * adapter;                                                    //@synthesize adapter=_adapter - In the implementation block
@property (nonatomic,readonly) IGFeedScrollViewAnnouncer * feedScrollAnnouncer;                            //@synthesize feedScrollAnnouncer=_feedScrollAnnouncer - In the implementation block
@property (nonatomic,readonly) IGListAdapterUpdaterLogger * adapterPerfLogger;                             //@synthesize adapterPerfLogger=_adapterPerfLogger - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                       //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGListCollectionView * collectionView;                                      //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) IGFeedStatusView * feedStatusView;                                          //@synthesize feedStatusView=_feedStatusView - In the implementation block
@property (nonatomic,readonly) IGFeedPreviewingHandler * previewingHandler;                                //@synthesize previewingHandler=_previewingHandler - In the implementation block
@property (nonatomic,readonly) IGProfilePictureHelper * profilePictureHelper;                              //@synthesize profilePictureHelper=_profilePictureHelper - In the implementation block
@property (nonatomic,readonly) IGTombstoneManager * tombstoneManager;                                      //@synthesize tombstoneManager=_tombstoneManager - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItem;                                                        //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) IGFeedNetworkSource * feedNetworkSource;                                    //@synthesize feedNetworkSource=_feedNetworkSource - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> feedConfiguration;                              //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> itemConfiguration;                          //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(IGFeedItem *)feedItem;
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)feedNetworkSource:(id)arg1 didFinishLoadingObjects:(id)arg2 forFetchAction:(int)arg3 ;
-(void)feedNetworkSource:(id)arg1 didFailToLoadForFetchAction:(int)arg2 ;
-(void)feedNetworkSource:(id)arg1 didChangeToObjects:(id)arg2 ;
-(void)feedNetworkSource:(id)arg1 didStartLoadingForFetchAction:(int)arg2 ;
-(id)initWithFeedNetworkSource:(id)arg1 feedConfiguration:(id)arg2 itemConfiguration:(id)arg3 userSession:(id)arg4 ;
-(void)scrollViewDidEndDragging:(id)arg1 ;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(IGFeedNetworkSource *)feedNetworkSource;
-(id<IGFeedConfigurationType>)feedConfiguration;
-(IGFeedScrollViewAnnouncer *)feedScrollAnnouncer;
-(void)onFeedItemHidden:(id)arg1 ;
-(IGFeedPreviewingHandler *)previewingHandler;
-(void)updateNavigationBarButtonItem;
-(void)updateTombstoneView;
-(IGFeedItemControllerComponents *)feedItemControllerComponents;
-(IGFeedStatusView *)feedStatusView;
-(id)plusButton;
-(void)onRefreshButton:(id)arg1 ;
-(void)onTapPlusButton;
-(IGProfilePictureHelper *)profilePictureHelper;
-(void)addTombstoneViewForFeedItem:(id)arg1 ;
-(IGTombstoneManager *)tombstoneManager;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(void)updateFeedStateAnimated:(char)arg1 ;
-(void)scrollViewDidEndScrolling:(id)arg1 ;
-(void)scrollViewWillScrollNearBottom:(id)arg1 ;
-(void)scrollViewWillScrollNearTop:(id)arg1 ;
-(void)feedStatusViewDidTapOnInfoView:(id)arg1 ;
-(void)tombstoneManager:(id)arg1 didTapShowButtonForTombstoneView:(id)arg2 ;
-(IGListAdapterUpdaterLogger *)adapterPerfLogger;
-(char)enableNavState;
-(IGListAdapter *)adapter;
-(void)updateTitle;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(IGListCollectionView *)collectionView;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(id)refreshButton;
-(IGUser *)currentUser;
-(void)refresh;
@end

