
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedNetworkSourceViewController.h>
#import <Instagram/IGFeedPromotionBannerDelegate.h>
#import <Instagram/IGUserInTagDisplayDelegate.h>
#import <Instagram/IGFeedItemVideoCellDelegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGItemVisibilityTrackerDelegate.h>
#import <Instagram/IGFeedItemLoggingProviderDelegate.h>
#import <Instagram/IGModernWebViewControllerDelegate.h>
#import <Instagram/IGFeedItemActionCellDelegate.h>
#import <Instagram/IGFeedItemAppHeaderDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGFeedItemTextCellDelegate.h>
#import <Instagram/IGFeedItemPhotoCellDelegate.h>
#import <Instagram/IGFeedCollectionViewLayoutDelegate.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGBugReportingProtocol.h>

@class NSMutableSet, IGImagePreparer, NSMutableArray, IGPostsFeedVisibleStatus, IGItemVisibilityTracker, IGFeedItem, IGStoreProductSessionManager, IGFeedItemViewingSessionManager, UIImageView, NSMutableDictionary, IGFeedItemVideoCell, NSString, IGUserPreviewingHandler;

@interface IGFeedViewController : IGFeedNetworkSourceViewController <IGFeedPromotionBannerDelegate, IGUserInTagDisplayDelegate, IGFeedItemVideoCellDelegate, IGFeedItemPageCellDelegate, IGItemVisibilityTrackerDelegate, IGFeedItemLoggingProviderDelegate, IGModernWebViewControllerDelegate, IGFeedItemActionCellDelegate, IGFeedItemAppHeaderDelegate, IGFeedItemHeaderDelegate, IGFeedItemTextCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedCollectionViewLayoutDelegate, IGRaindropAnalyticsDelegate, IGBugReportingProtocol> {

	NSMutableSet* _feedItemsScheduledForTagRemoval;
	IGImagePreparer* _imagePreparer;
	NSMutableArray* _addedBannerViews;
	char _viewVisible;
	int _feedLayout;
	IGPostsFeedVisibleStatus* _postsFeedVisibleStatus;
	IGItemVisibilityTracker* _feedItemVisibility;
	IGFeedItem* _feedItemForWebview;
	IGStoreProductSessionManager* _storeProductManager;
	IGFeedItemViewingSessionManager* _viewingSessionManager;
	UIImageView* _heartImageView;
	IGFeedItem* _heartLikeFeedItem;
	NSMutableDictionary* _prebufferingURLs;
	IGFeedItemVideoCell* _videoCellWithPlayer;
	NSString* _lastPlayedPK;
	IGUserPreviewingHandler* _userPreviewingDelegate;
	double _webviewUsageStartTime;

}

@property (assign,nonatomic) int feedLayout;                                                       //@synthesize feedLayout=_feedLayout - In the implementation block
@property (nonatomic,retain) IGPostsFeedVisibleStatus * postsFeedVisibleStatus;                    //@synthesize postsFeedVisibleStatus=_postsFeedVisibleStatus - In the implementation block
@property (nonatomic,retain) IGItemVisibilityTracker * feedItemVisibility;                         //@synthesize feedItemVisibility=_feedItemVisibility - In the implementation block
@property (assign,nonatomic) double webviewUsageStartTime;                                         //@synthesize webviewUsageStartTime=_webviewUsageStartTime - In the implementation block
@property (nonatomic,retain) IGFeedItem * feedItemForWebview;                                      //@synthesize feedItemForWebview=_feedItemForWebview - In the implementation block
@property (nonatomic,retain) IGStoreProductSessionManager * storeProductManager;                   //@synthesize storeProductManager=_storeProductManager - In the implementation block
@property (nonatomic,retain) IGFeedItemViewingSessionManager * viewingSessionManager;              //@synthesize viewingSessionManager=_viewingSessionManager - In the implementation block
@property (nonatomic,retain) UIImageView * heartImageView;                                         //@synthesize heartImageView=_heartImageView - In the implementation block
@property (nonatomic,retain) IGFeedItem * heartLikeFeedItem;                                       //@synthesize heartLikeFeedItem=_heartLikeFeedItem - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * prebufferingURLs;                               //@synthesize prebufferingURLs=_prebufferingURLs - In the implementation block
@property (assign,getter=isViewVisible,nonatomic) char viewVisible;                                //@synthesize viewVisible=_viewVisible - In the implementation block
@property (nonatomic,retain) IGFeedItemVideoCell * videoCellWithPlayer;                            //@synthesize videoCellWithPlayer=_videoCellWithPlayer - In the implementation block
@property (nonatomic,copy) NSString * lastPlayedPK;                                                //@synthesize lastPlayedPK=_lastPlayedPK - In the implementation block
@property (nonatomic,retain) IGUserPreviewingHandler * userPreviewingDelegate;                     //@synthesize userPreviewingDelegate=_userPreviewingDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)setUserPreviewingDelegate:(IGUserPreviewingHandler *)arg1 ;
-(IGUserPreviewingHandler *)userPreviewingDelegate;
-(char)enableNavState;
-(id)initWithFeedNetworkSource:(id)arg1 feedLayout:(int)arg2 showsPullToRefresh:(char)arg3 ;
-(id)postsFeedViewControllerForIndexPath:(id)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(id)collectionViewController:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)handleLoadedContentDidChange;
-(void)reloadWithNewObjects:(id)arg1 ;
-(IGPostsFeedVisibleStatus *)postsFeedVisibleStatus;
-(void)scrollToFeedItemWithPK:(id)arg1 animated:(char)arg2 ;
-(void)setPostsFeedVisibleStatus:(IGPostsFeedVisibleStatus *)arg1 ;
-(char)showFollowButtonForFeedItem:(id)arg1 ;
-(char)showExploreContextForFeedItem:(id)arg1 ;
-(void)feedItemAppHeaderDidTapCustomizableButton:(id)arg1 ;
-(id)extraDictionaryForFeedItem:(id)arg1 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(int)feedItemActionCellPosition:(id)arg1 ;
-(id)feedItemActionCellCurrentIGAnalyticsMetadata:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 ;
-(void)feedItemPageCell:(id)arg1 wantsOpenURL:(id)arg2 modal:(char)arg3 ;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCellWillDisplayActionView:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1 ;
-(void)feedItemPhotoCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemTextCellDidTapOnMore:(id)arg1 ;
-(void)feedItemVideoCellDidLoadImage:(id)arg1 ;
-(void)feedItemVideoCellDidRequestVideoPlayback:(id)arg1 ;
-(void)feedItemVideoCellDidPlayToEnd:(id)arg1 ;
-(void)feedItemVideoCell:(id)arg1 didFailToPlayWithError:(id)arg2 ;
-(void)feedItemVideoCellDidDoubleTapToLike:(id)arg1 ;
-(id)feedItemVideoCellCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedItemVideoCellPosition:(id)arg1 ;
-(void)feedPromotionBannerDidTapDismiss:(id)arg1 withConfiguration:(id)arg2 ;
-(float)percentVisibleForCell:(id)arg1 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidAppear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidDisappear:(id)arg2 ;
-(void)itemVisibilityTracker:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(id)currentReloadContext;
-(void)handleDidEndScrolling;
-(id)collectionViewController:(id)arg1 viewForSupplementaryViewOfKind:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfSectionsForObjects:(id)arg2 context:(id)arg3 ;
-(int)collectionViewController:(id)arg1 numberOfItemsInSection:(int)arg2 withObjects:(id)arg3 context:(id)arg4 ;
-(CGSize)collectionViewController:(id)arg1 sizeForItemAtIndexPath:(id)arg2 withViewWidth:(float)arg3 withObjects:(id)arg4 context:(id)arg5 ;
-(id)collectionViewController:(id)arg1 changeSetFromObjects:(id)arg2 fromContext:(id)arg3 toObjects:(id)arg4 toContext:(id)arg5 ;
-(void)collectionViewController:(id)arg1 prepareContext:(id)arg2 forObjects:(id)arg3 ;
-(CGSize)imageSizeToLoadForGrid;
-(CGSize)imageSizeToLoadForTimeline;
-(void)mediaDeleted:(id)arg1 ;
-(char)isDeviceSupportAlwaysAutoPlay;
-(id)videoCellForAutoPlay;
-(char)startVideoForCellIfApplicable:(id)arg1 ;
-(void)beginFeedItemVisibilityTracking;
-(IGFeedItemVideoCell *)videoCellWithPlayer;
-(void)stopVideoForCell:(id)arg1 ;
-(void)endFeedItemVisibilityTracking;
-(void)setHeartLikeFeedItem:(IGFeedItem *)arg1 ;
-(UIImageView *)heartImageView;
-(IGFeedItem *)heartLikeFeedItem;
-(char)shouldHideFeedItem:(id)arg1 ;
-(id)promotionBannerForConfiguration:(id)arg1 ;
-(void)layoutBanners;
-(void)updateFeedItemVisibility;
-(id)visibleCellsOfClass:(Class)arg1 ;
-(void)showNUXIfNeededForPageCell:(id)arg1 ;
-(NSString *)lastPlayedPK;
-(void)updateHeartImageViewLocation;
-(char)enablePivot:(id)arg1 ;
-(char)allowSponsoredContextForFeedItem:(id)arg1 ;
-(char)isPagingEnabledForFeedItem:(id)arg1 ;
-(int)numberOfFeedCellsBeforeCommentsForItem:(id)arg1 ;
-(id)attributesForFeedItem:(id)arg1 fromContext:(id)arg2 ;
-(float)commentHorizontalPadding;
-(float)commentWidthForViewWidth:(float)arg1 ;
-(id)styledStringForComment:(id)arg1 width:(float)arg2 feedItem:(id)arg3 ;
-(char)allowDirectResponseIndicatorForFeedItem:(id)arg1 ;
-(void)showDirectResponseIndicatorInCell:(id)arg1 withFeedItem:(id)arg2 ;
-(void)updateButtonForFeedItemActionCell:(id)arg1 postItem:(id)arg2 ;
-(int)imageOptionToLoadForGrid;
-(void)handleDidSelectFeedItemFromGrid:(id)arg1 ;
-(void)startVideoForCellMovingOnScreen;
-(void)stopVideoForCellMovingOffScreen;
-(void)showUsertagsIndication:(char)arg1 inCell:(id)arg2 ;
-(void)scheduleCellForUsertagRemoval:(id)arg1 ;
-(void)prebufferVideoForPost:(id)arg1 ;
-(void)cancelPrebufferVideoForPost:(id)arg1 ;
-(id)calculateLayoutAttributesForFeedItems:(id)arg1 ;
-(char)shouldCollapseCaptionForFeedItem:(id)arg1 ;
-(float)itemBottomPadding;
-(float)textBottomPadding;
-(int)feedItemCellTypeForIndexPath:(id)arg1 withObjects:(id)arg2 context:(id)arg3 ;
-(CGSize)textCellSizeWithAttributes:(id)arg1 feedItem:(id)arg2 indexPath:(id)arg3 viewWidth:(float)arg4 ;
-(void)decodeAdjacentGridImagesForIndexPath:(id)arg1 ;
-(id)gridCellForIndexPath:(id)arg1 ;
-(id)emptyCellForIndexPath:(id)arg1 ;
-(id)pageCellForIndexPath:(id)arg1 ;
-(void)decodeAdjacentImageForIndexPath:(id)arg1 ;
-(id)photoCellForIndexPath:(id)arg1 ;
-(id)videoCellForIndexPath:(id)arg1 ;
-(id)textCellForIndexPath:(id)arg1 ;
-(id)actionCellForIndexPath:(id)arg1 ;
-(id)pivotCellForIndexPath:(id)arg1 ;
-(id)feedItemAppHeaderForFeedItem:(id)arg1 indexPath:(id)arg2 ;
-(id)feedItemHeaderForFeedItem:(id)arg1 indexPath:(id)arg2 ;
-(char)isDirectResponseFeedItem:(id)arg1 ;
-(IGFeedItemViewingSessionManager *)viewingSessionManager;
-(char)isNekoStyleDirectResponseInfo:(id)arg1 ;
-(void)hideUsertagsForFeedItem:(id)arg1 ;
-(IGItemVisibilityTracker *)feedItemVisibility;
-(void)logFullViewEventIfNeededForFeedItem:(id)arg1 visibleContentRect:(CGRect)arg2 mediaRect:(CGRect)arg3 ;
-(void)handleDidDisplayFeedItem:(id)arg1 ;
-(IGStoreProductSessionManager *)storeProductManager;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 ;
-(id)extraDictionaryForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 ;
-(void)useNekoDirectResponseForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 ;
-(void)useOriginalStyleDirectResponseForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 ;
-(void)openWebViewForURL:(id)arg1 feedItemContext:(id)arg2 ;
-(void)logFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 openTarget:(id)arg4 ;
-(char)isMobileAppInstallEngagementFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 ;
-(void)useStoreSessionForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 ;
-(char)isOriginalStyleDirectResponseInfo:(id)arg1 ;
-(void)useActionURLHandlerForFeedItem:(id)arg1 withDirectResponseInfo:(id)arg2 context:(id)arg3 ;
-(void)setWebviewUsageStartTime:(double)arg1 ;
-(void)setFeedItemForWebview:(IGFeedItem *)arg1 ;
-(id)arrayOfCellsWithClass:(Class)arg1 inSection:(int)arg2 ;
-(void)handleDirectResponseActionForFeedItem:(id)arg1 context:(id)arg2 ;
-(void)animateHeartLikeForItem:(id)arg1 ;
-(double)webviewUsageStartTime;
-(IGFeedItem *)feedItemForWebview;
-(void)startVideoForCell:(id)arg1 ;
-(void)setVideoCellWithPlayer:(IGFeedItemVideoCell *)arg1 ;
-(void)setLastPlayedPK:(NSString *)arg1 ;
-(id)prebufferedVideoURLForPost:(id)arg1 ;
-(void)prebufferVideoForURL:(id)arg1 ;
-(unsigned)contextualFeedInfiniteScrollCap;
-(void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2 ;
-(void)webViewDidEndBrowsing:(id)arg1 ;
-(char)feedViewLayout:(id)arg1 shouldHideHeaderForSection:(unsigned)arg2 withObjects:(id)arg3 ;
-(id)bugReportDescription;
-(void)cancelUsertagRemovalForFeedItem:(id)arg1 ;
-(void)showPostsFeedForItemAtIndexPath:(id)arg1 ;
-(id)postsFeedViewControllerForRankedIndex:(int)arg1 title:(id)arg2 subtitle:(id)arg3 ;
-(void)setFeedItemVisibility:(IGItemVisibilityTracker *)arg1 ;
-(void)setStoreProductManager:(IGStoreProductSessionManager *)arg1 ;
-(void)setViewingSessionManager:(IGFeedItemViewingSessionManager *)arg1 ;
-(void)setHeartImageView:(UIImageView *)arg1 ;
-(NSMutableDictionary *)prebufferingURLs;
-(void)setPrebufferingURLs:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(int)viewType;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(char)arg1 ;
-(void)viewWillDisappear:(char)arg1 ;
-(void)viewDidDisappear:(char)arg1 ;
-(CGRect)visibleContentRect;
-(void)setFeedLayout:(int)arg1 ;
-(int)feedLayout;
-(void)setViewVisible:(char)arg1 ;
-(char)isViewVisible;
@end

