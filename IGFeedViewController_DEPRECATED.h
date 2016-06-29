
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedNetworkSourceViewController.h>
#import <Instagram/IGAlbumFullscreenViewControllerDelegate.h>
#import <Instagram/IGFeedPromotionBannerDelegate.h>
#import <Instagram/IGUserInTagDisplayDelegate.h>
#import <Instagram/IGFeedItemDirectResponseLoggingProviderDelegate.h>
#import <Instagram/IGFeedItemAlbumCellDelegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGFeedItemActionCellConfigurableDelegate.h>
#import <Instagram/IGFeedItemAppHeaderDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGFeedItemTextCellDelegate.h>
#import <Instagram/IGFeedItemPhotoCellDelegate.h>
#import <Instagram/IGFeedSectionVisibilityTrackerDelegate.h>
#import <Instagram/IGFeedVideoCellInteractionDelegate.h>
#import <Instagram/IGFeedReshareNUXManagerDatasource.h>
#import <Instagram/IGFeedItemBusinessCellDelegate.h>
#import <Instagram/IGFeedNetworkSourceHideDelegate.h>
#import <Instagram/IGFeedItemHiddenConfirmationCellDelegate.h>
#import <Instagram/IGFeedPreviewingType.h>
#import <Instagram/IGAnalyticsModule.h>
#import <Instagram/IGFeedCollectionViewLayoutDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGBugReportingProtocol.h>
#import <Instagram/IGCollectionViewControllerDataSource.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGTranslationNetworkDataSourceDelegate.h>

@class IGImagePreparer, NSMutableArray, IGFeedFocusCoordinator, NSIndexPath, IGFeedCollectionViewLayoutDataSource, NSArray, IGFullViewImpressionTracker, IGItemVisibilityTracker, IGStoreProductSessionManager, IGFeedItemViewingSessionManager, IGFeedUsertagManager, IGCollectionViewVisibility, IGFeedVideoCellManager, IGFeedDirectResponseHandler, NSMutableDictionary, IGFeedHeartAnimator, IGFeedDataSource, IGFeedPreviewingHandler, IGFeedItem, IGTombstoneView, IGFeedReshareNUXManager, IGFeedItemSectionImpressionTracker, IGCameraNavigationControllerTransitionDelegate, IGTranslationNetworkDataSource, NSString;

@interface IGFeedViewController_DEPRECATED : IGFeedNetworkSourceViewController <IGAlbumFullscreenViewControllerDelegate, IGFeedPromotionBannerDelegate, IGUserInTagDisplayDelegate, IGFeedItemDirectResponseLoggingProviderDelegate, IGFeedItemAlbumCellDelegate, IGFeedItemPageCellDelegate, IGItemVisibilityTrackerDelegate, IGFeedItemLoggingProviderDelegate, IGFeedItemActionCellConfigurableDelegate, IGFeedItemAppHeaderDelegate, IGFeedItemHeaderDelegate, IGFeedItemTextCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedSectionVisibilityTrackerDelegate, IGFeedVideoCellInteractionDelegate, IGFeedReshareNUXManagerDatasource, IGFeedItemBusinessCellDelegate, IGFeedNetworkSourceHideDelegate, IGFeedItemHiddenConfirmationCellDelegate, IGFeedPreviewingType, IGAnalyticsModule, IGFeedCollectionViewLayoutDelegate, IGRaindropAnalyticsDelegate, IGBugReportingProtocol, IGCollectionViewControllerDataSource, IGActionSheetDelegate, IGTranslationNetworkDataSourceDelegate> {

	IGImagePreparer* _imagePreparer;
	NSMutableArray* _addedBannerViews;
	char _visibilityTrackingDisabled;
	char _viewVisible;
	char _showEasyReportingActionSheet;
	int _feedLayout;
	IGFeedFocusCoordinator* _focusCoordinator;
	NSIndexPath* _currentActionCellIndexPath;
	IGFeedCollectionViewLayoutDataSource* _layoutDataSource;
	NSArray* _visibilityTrackers;
	IGFullViewImpressionTracker* _fullViewImpressionTracker;
	IGItemVisibilityTracker* _collectionViewContentsVisibility;
	IGStoreProductSessionManager* _storeProductManager;
	IGFeedItemViewingSessionManager* _viewingSessionManager;
	IGFeedUsertagManager* _usertagManager;
	IGCollectionViewVisibility* _collectionViewVisibility;
	IGFeedVideoCellManager* _videoCellManager;
	IGFeedDirectResponseHandler* _directResponseHandler;
	NSMutableDictionary* _pageCellStates;
	NSMutableDictionary* _albumCellCoordinators;
	NSIndexPath* _currentAlbumCellIndexPath;
	IGFeedHeartAnimator* _heartAnimator;
	IGFeedDataSource* _feedDataSource;
	IGFeedPreviewingHandler* _feedPreviewingDelegate;
	IGFeedItem* _currentActionSheetFeedItem;
	IGTombstoneView* _tombstoneView;
	IGFeedReshareNUXManager* _reshareNUXManager;
	IGFeedItemSectionImpressionTracker* _mainFeedIndexPathTracker;
	IGCameraNavigationControllerTransitionDelegate* _boostPostTransitionDelegate;
	IGTranslationNetworkDataSource* _translationDataSource;

}

@property (assign,getter=isVisibilityTrackingDisabled,nonatomic) char visibilityTrackingDisabled;                         //@synthesize visibilityTrackingDisabled=_visibilityTrackingDisabled - In the implementation block
@property (nonatomic,readonly) NSArray * visibilityTrackers;                                                              //@synthesize visibilityTrackers=_visibilityTrackers - In the implementation block
@property (nonatomic,retain) IGFullViewImpressionTracker * fullViewImpressionTracker;                                     //@synthesize fullViewImpressionTracker=_fullViewImpressionTracker - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * collectionViewContentsVisibility;                                  //@synthesize collectionViewContentsVisibility=_collectionViewContentsVisibility - In the implementation block
@property (nonatomic,retain) IGStoreProductSessionManager * storeProductManager;                                          //@synthesize storeProductManager=_storeProductManager - In the implementation block
@property (nonatomic,retain) IGFeedItemViewingSessionManager * viewingSessionManager;                                     //@synthesize viewingSessionManager=_viewingSessionManager - In the implementation block
@property (nonatomic,retain) IGFeedUsertagManager * usertagManager;                                                       //@synthesize usertagManager=_usertagManager - In the implementation block
@property (nonatomic,retain) IGCollectionViewVisibility * collectionViewVisibility;                                       //@synthesize collectionViewVisibility=_collectionViewVisibility - In the implementation block
@property (nonatomic,retain) IGFeedVideoCellManager * videoCellManager;                                                   //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,retain) IGFeedDirectResponseHandler * directResponseHandler;                                         //@synthesize directResponseHandler=_directResponseHandler - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pageCellStates;                                                        //@synthesize pageCellStates=_pageCellStates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * albumCellCoordinators;                                                 //@synthesize albumCellCoordinators=_albumCellCoordinators - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentAlbumCellIndexPath;                                                     //@synthesize currentAlbumCellIndexPath=_currentAlbumCellIndexPath - In the implementation block
@property (nonatomic,retain) IGFeedHeartAnimator * heartAnimator;                                                         //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGFeedDataSource * feedDataSource;                                                         //@synthesize feedDataSource=_feedDataSource - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) char viewVisible;                                                       //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,retain) IGFeedPreviewingHandler * feedPreviewingDelegate;                                            //@synthesize feedPreviewingDelegate=_feedPreviewingDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItem * currentActionSheetFeedItem;                                                     //@synthesize currentActionSheetFeedItem=_currentActionSheetFeedItem - In the implementation block
@property (assign,nonatomic) char showEasyReportingActionSheet;                                                           //@synthesize showEasyReportingActionSheet=_showEasyReportingActionSheet - In the implementation block
@property (nonatomic,retain) IGTombstoneView * tombstoneView;                                                             //@synthesize tombstoneView=_tombstoneView - In the implementation block
@property (nonatomic,retain) IGFeedReshareNUXManager * reshareNUXManager;                                                 //@synthesize reshareNUXManager=_reshareNUXManager - In the implementation block
@property (nonatomic,retain) IGFeedItemSectionImpressionTracker * mainFeedIndexPathTracker;                               //@synthesize mainFeedIndexPathTracker=_mainFeedIndexPathTracker - In the implementation block
@property (nonatomic,readonly) IGCameraNavigationControllerTransitionDelegate * boostPostTransitionDelegate;              //@synthesize boostPostTransitionDelegate=_boostPostTransitionDelegate - In the implementation block
@property (nonatomic,retain) IGTranslationNetworkDataSource * translationDataSource;                                      //@synthesize translationDataSource=_translationDataSource - In the implementation block
@property (assign,nonatomic) int feedLayout;                                                                              //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) IGFeedFocusCoordinator * focusCoordinator;                                                   //@synthesize focusCoordinator=_focusCoordinator - In the implementation block
@property (nonatomic,retain) NSIndexPath * currentActionCellIndexPath;                                                    //@synthesize currentActionCellIndexPath=_currentActionCellIndexPath - In the implementation block
@property (nonatomic,readonly) IGFeedCollectionViewLayoutDataSource * layoutDataSource;                                   //@synthesize layoutDataSource=_layoutDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)enableNavState;
-(id)analyticsModule;
-(void)albumFullscreenViewControllerShouldDismiss:(id)arg1 dismissReason:(unsigned)arg2 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(IGFeedFocusCoordinator *)focusCoordinator;
-(void)setFocusCoordinator:(IGFeedFocusCoordinator *)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(void)onFeedItemHidden:(id)arg1 ;
-(unsigned)contextualFeedInfiniteScrollCap;
-(void)feedNetworkSource:(id)arg1 didHideObject:(id)arg2 ;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 feedLayout:(int)arg2 showsPullToRefresh:(char)arg3 ;
-(char)feedViewLayout:(id)arg1 shouldHideHeaderForSection:(unsigned)arg2 withObjects:(id)arg3 ;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 ;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemActionCellDidTapSendButton:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeViewCount:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentCount:(id)arg1 ;
-(IGTombstoneView *)tombstoneView;
-(void)setTombstoneView:(IGTombstoneView *)arg1 ;
-(void)feedItemHiddenConfirmationCellDidTapShowPost:(id)arg1 ;
-(void)feedItemHiddenConfirmationCellDidDismiss:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1 ;
-(void)feedItemPhotoCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemTextCellDidTapTranslation:(id)arg1 ;
-(void)feedItemTextCellDidTapOnMore:(id)arg1 ;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(IGFeedHeartAnimator *)heartAnimator;
-(IGTranslationNetworkDataSource *)translationDataSource;
-(IGCameraNavigationControllerTransitionDelegate *)boostPostTransitionDelegate;
-(IGFeedDirectResponseHandler *)directResponseHandler;
-(void)setShowEasyReportingActionSheet:(char)arg1 ;
-(char)showEasyReportingActionSheet;
-(void)feedItemAlbumCellDidTap:(id)arg1 ;
-(void)feedItemHeaderDidTapUser:(id)arg1 ;
-(void)feedItemHeaderDidTapLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)feedItemHeaderDidTapOnMoreButton:(id)arg1 ;
-(void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2 ;
-(void)feedItemBusinessCellDidTapViewInsights:(id)arg1 ;
-(void)feedItemBusinessCellDidTapPromote:(id)arg1 ;
-(void)feedItemBusinessCellDidTapViewAdGuideline:(id)arg1 ;
-(void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2 ;
-(void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDirectResponseHandler:(IGFeedDirectResponseHandler *)arg1 ;
-(void)setTranslationDataSource:(IGTranslationNetworkDataSource *)arg1 ;
-(IGFullViewImpressionTracker *)fullViewImpressionTracker;
-(void)collectionViewController:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfSectionsForObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewController:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(id)collectionViewController:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5 ;
-(void)reloadWithNewObjects:(id)arg1 ;
-(id)currentReloadContext;
-(void)handleLoadedContentDidChange;
-(void)handleDidEndScrolling;
-(void)didTakeRefreshAction;
-(void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2 ;
-(IGCollectionViewVisibility *)collectionViewVisibility;
-(id)currentScrollPosition;
-(CGPoint)contentOffsetForScrollPosition:(id)arg1 ;
-(void)performWhilePreservingPosition:(/*^block*/id)arg1 ;
-(id)initWithFeedNetworkSource:(id)arg1 feedLayout:(int)arg2 showsPullToRefresh:(char)arg3 feedConfiguration:(id)arg4 ;
-(/*^block*/id)screenshotLogBlock;
-(void)logFeedItem:(id)arg1 coverage:(id)arg2 forEvent:(id)arg3 ;
-(void)configureCollectionViewDataSource:(id)arg1 ;
-(void)setFeedPreviewingDelegate:(IGFeedPreviewingHandler *)arg1 ;
-(IGFeedPreviewingHandler *)feedPreviewingDelegate;
-(void)updateCollectionViewHelpers;
-(void)setReshareNUXManager:(IGFeedReshareNUXManager *)arg1 ;
-(IGFeedReshareNUXManager *)reshareNUXManager;
-(void)beginCollectionViewContentsVisibilityTracking;
-(void)beginFeedItemVisibilityTracking;
-(void)endFeedItemVisibilityTracking;
-(void)endCollectionViewContentsVisibilityTracking;
-(void)registerClasses;
-(IGFeedDataSource *)feedDataSource;
-(IGFeedCollectionViewLayoutDataSource *)layoutDataSource;
-(void)displayFullscreenTombstoneForFeedItem:(id)arg1 ;
-(void)handleHiddenFeedItem:(id)arg1 ;
-(void)setUsertagManager:(IGFeedUsertagManager *)arg1 ;
-(void)setHeartAnimator:(IGFeedHeartAnimator *)arg1 ;
-(void)setCollectionViewVisibility:(IGCollectionViewVisibility *)arg1 ;
-(void)setVideoCellManager:(IGFeedVideoCellManager *)arg1 ;
-(id)promotionBannerForConfiguration:(id)arg1 ;
-(void)layoutBanners;
-(void)updateItemVisibilityTrackers;
-(void)updatePageCellsForVisibleContentRect:(CGRect)arg1 ;
-(id)feedItemForCollectionViewCell:(id)arg1 ;
-(void)showOverlayForItemAtIndexPath:(id)arg1 delay:(float)arg2 ;
-(IGFeedUsertagManager *)usertagManager;
-(NSMutableDictionary *)pageCellStates;
-(NSMutableDictionary *)albumCellCoordinators;
-(void)decodeAdjacentImageForIndexPath:(id)arg1 ;
-(void)reloadWithNewObjects:(id)arg1 context:(id)arg2 synchronus:(char)arg3 forceAnimated:(char)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)reloadWithCurrentObjectsAnimated:(char)arg1 ;
-(id)currentLoadingObjects;
-(id)currentLoadingContext;
-(IGItemVisibilityTracker *)collectionViewContentsVisibility;
-(void)setVisibilityTrackingDisabled:(char)arg1 ;
-(void)notifyVisibilityTrackersWithVisibleContentRect:(CGRect)arg1 ;
-(char)isVisibilityTrackingDisabled;
-(NSArray *)visibilityTrackers;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(IGStoreProductSessionManager *)storeProductManager;
-(id)ctaPresenterContextForFeedItem:(id)arg1 ;
-(id)arrayOfCellsWithClass:(Class)arg1 inSection:(int)arg2 ;
-(void)handleHeaderCustomizableButtonTappedForFeedItem:(id)arg1 ;
-(void)setCurrentActionSheetFeedItem:(IGFeedItem *)arg1 ;
-(IGFeedItem *)currentActionSheetFeedItem;
-(void)tapOnTriggerForDropdownListForFeedItem:(id)arg1 ;
-(void)setCurrentActionCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentActionCellIndexPath;
-(void)setCurrentAlbumCellIndexPath:(NSIndexPath *)arg1 ;
-(NSIndexPath *)currentAlbumCellIndexPath;
-(void)performLikeForItemAtIndexPath:(id)arg1 ;
-(void)animateHeartLikeForActionCellAtSection:(unsigned)arg1 ;
-(void)animateHeartLikeForMediaCellAtIndexPath:(id)arg1 ;
-(id)postsFeedViewControllerForIndexPath:(id)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 entryPoint:(int)arg5 ;
-(void)hideFeedItemLeavingScreen:(id)arg1 withLayoutAttributes:(id)arg2 ;
-(id)createTombstoneView;
-(void)tombstoneDidTapShowButton;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemAppHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)tracker:(id)arg1 feedSectionDidAppear:(id)arg2 ;
-(void)tracker:(id)arg1 feedSectionDidDisappear:(id)arg2 ;
-(char)feedViewLayout:(id)arg1 shouldBringNonHeaderItemToFrontForIndexPath:(id)arg2 ;
-(id)bugReportDescription;
-(CGPoint)offsetForFeedItemAtIndex:(int)arg1 ;
-(void)scrollToFeedItem:(id)arg1 animated:(char)arg2 ;
-(void)showPostsFeedForItemAtIndexPath:(id)arg1 ;
-(id)postsFeedViewControllerForRankedIndex:(int)arg1 title:(id)arg2 subtitle:(id)arg3 entityId:(id)arg4 entryPoint:(int)arg5 ;
-(void)setFullViewImpressionTracker:(IGFullViewImpressionTracker *)arg1 ;
-(void)setCollectionViewContentsVisibility:(IGItemVisibilityTracker *)arg1 ;
-(void)setStoreProductManager:(IGStoreProductSessionManager *)arg1 ;
-(IGFeedItemViewingSessionManager *)viewingSessionManager;
-(void)setViewingSessionManager:(IGFeedItemViewingSessionManager *)arg1 ;
-(void)setPageCellStates:(NSMutableDictionary *)arg1 ;
-(void)setAlbumCellCoordinators:(NSMutableDictionary *)arg1 ;
-(IGFeedItemSectionImpressionTracker *)mainFeedIndexPathTracker;
-(void)setMainFeedIndexPathTracker:(IGFeedItemSectionImpressionTracker *)arg1 ;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(id)objects;
-(void)dealloc;
-(void)reloadData;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(id)context;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(CGRect)visibleContentRect;
-(void)setCollectionViewLayout:(id)arg1 ;
-(void)setFeedLayout:(int)arg1 ;
-(int)feedLayout;
-(void)setViewVisible:(char)arg1 ;
-(char)isViewVisible;
@end

