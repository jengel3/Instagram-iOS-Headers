
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGAdsManagerAdViewControllerDelegate.h>
#import <Instagram/IGDirectShareSheetDelegate.h>
#import <Instagram/IGFeedItemActionCellConfigurableDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGFeedItemPhotoCellDelegate.h>
#import <Instagram/IGFeedItemTextCellDelegate.h>
#import <Instagram/IGFeedItemZoomViewPresenterDelegate.h>
#import <Instagram/IGFeedVideoCellInteractionDelegate.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListSupplementaryViewSource.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGUserInTagDisplayDelegate.h>
#import <Instagram/IGFeedItemBusinessCellDelegate.h>
#import <Instagram/IGFeedItemHiddenConfirmationCellDelegate.h>
#import <Instagram/IGListWorkingRangeDelegate.h>
#import <Instagram/IGMediaRequestDelegate.h>
#import <Instagram/IGTranslationNetworkDataSourceDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGFeedItemConfigurationType, IGFeedConfigurationType, IGFeedItemLoggingProviderDelegateIGFeedItemDirectResponseLoggingProviderDelegate;
@class IGFeedItem, IGAnalyticsMetadata, IGFeedHeartAnimator, IGUser, IGFeedVideoCellManager, IGListAdapterScrollingContext, IGFeedDirectResponseHandler, IGFeedItemTimelineViewModel, IGFeedItemPageCellState, IGCameraNavigationControllerTransitionDelegate, IGFeedItemHeader, IGImagePreparer, IGFeedItemZoomViewPresenter, IGTranslationNetworkDataSource, NSString;

@interface IGFeedItemController : IGListItemController <IGActionSheetDelegate, IGAdsManagerAdViewControllerDelegate, IGDirectShareSheetDelegate, IGFeedItemActionCellConfigurableDelegate, IGFeedItemHeaderDelegate, IGFeedItemPageCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedItemTextCellDelegate, IGFeedItemZoomViewPresenterDelegate, IGFeedVideoCellInteractionDelegate, IGListDisplayDelegate, IGListSupplementaryViewSource, IGRaindropAnalyticsDelegate, IGUserInTagDisplayDelegate, IGFeedItemBusinessCellDelegate, IGFeedItemHiddenConfirmationCellDelegate, IGListWorkingRangeDelegate, IGMediaRequestDelegate, IGTranslationNetworkDataSourceDelegate, IGListItemType> {

	char _isVisible;
	char _pendingDidEndDisplayCollapse;
	char _hasQueuedBatchUpdate;
	char _showEasyReportingActionSheet;
	IGFeedItem* _feedItem;
	id<IGFeedItemConfigurationType> _itemConfiguration;
	id<IGFeedConfigurationType> _feedConfiguration;
	IGAnalyticsMetadata* _analyticsMetadata;
	IGFeedHeartAnimator* _heartAnimator;
	IGUser* _currentUser;
	IGFeedVideoCellManager* _videoCellManager;
	IGListAdapterScrollingContext* _scrollingContext;
	id<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> _loggingProvider;
	IGFeedDirectResponseHandler* _directResponseHandler;
	IGFeedItemTimelineViewModel* _itemViewModel;
	IGFeedItemPageCellState* _pageCellState;
	IGCameraNavigationControllerTransitionDelegate* _boostPostTransitionDelegate;
	IGFeedItemHeader* _headerView;
	IGImagePreparer* _imagePreparer;
	IGFeedItemZoomViewPresenter* _zoomViewPresenter;
	IGTranslationNetworkDataSource* _translationDataSource;

}

@property (nonatomic,readonly) IGFeedItem * feedItem;                                                                                                      //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> itemConfiguration;                                                                          //@synthesize itemConfiguration=_itemConfiguration - In the implementation block
@property (nonatomic,readonly) id<IGFeedConfigurationType> feedConfiguration;                                                                              //@synthesize feedConfiguration=_feedConfiguration - In the implementation block
@property (nonatomic,readonly) IGAnalyticsMetadata * analyticsMetadata;                                                                                    //@synthesize analyticsMetadata=_analyticsMetadata - In the implementation block
@property (nonatomic,__weak,readonly) IGFeedHeartAnimator * heartAnimator;                                                                                 //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,__weak,readonly) IGUser * currentUser;                                                                                                //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,__weak,readonly) IGFeedVideoCellManager * videoCellManager;                                                                           //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,__weak,readonly) IGListAdapterScrollingContext * scrollingContext;                                                                    //@synthesize scrollingContext=_scrollingContext - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> loggingProvider;              //@synthesize loggingProvider=_loggingProvider - In the implementation block
@property (nonatomic,retain) IGFeedDirectResponseHandler * directResponseHandler;                                                                          //@synthesize directResponseHandler=_directResponseHandler - In the implementation block
@property (nonatomic,retain) IGFeedItemTimelineViewModel * itemViewModel;                                                                                  //@synthesize itemViewModel=_itemViewModel - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                                                                                      //@synthesize pageCellState=_pageCellState - In the implementation block
@property (nonatomic,readonly) IGCameraNavigationControllerTransitionDelegate * boostPostTransitionDelegate;                                               //@synthesize boostPostTransitionDelegate=_boostPostTransitionDelegate - In the implementation block
@property (nonatomic,retain) IGFeedItemHeader * headerView;                                                                                                //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) IGImagePreparer * imagePreparer;                                                                                              //@synthesize imagePreparer=_imagePreparer - In the implementation block
@property (assign,nonatomic) char isVisible;                                                                                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) char pendingDidEndDisplayCollapse;                                                                                            //@synthesize pendingDidEndDisplayCollapse=_pendingDidEndDisplayCollapse - In the implementation block
@property (assign,nonatomic) char hasQueuedBatchUpdate;                                                                                                    //@synthesize hasQueuedBatchUpdate=_hasQueuedBatchUpdate - In the implementation block
@property (assign,nonatomic) char showEasyReportingActionSheet;                                                                                            //@synthesize showEasyReportingActionSheet=_showEasyReportingActionSheet - In the implementation block
@property (nonatomic,retain) IGFeedItemZoomViewPresenter * zoomViewPresenter;                                                                              //@synthesize zoomViewPresenter=_zoomViewPresenter - In the implementation block
@property (nonatomic,retain) IGTranslationNetworkDataSource * translationDataSource;                                                                       //@synthesize translationDataSource=_translationDataSource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedCellTypeClassMap;
-(IGFeedItem *)feedItem;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)mediaRequest:(id)arg1 didLoadMediaWithData:(id)arg2 forURL:(id)arg3 ;
-(void)viewControllerDidDeletePromotion:(id)arg1 ;
-(id)actionCell;
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(void)directShareSheetDidTapSend:(id)arg1 ;
-(IGFeedVideoCellManager *)videoCellManager;
-(void)listAdapter:(id)arg1 listItemControllerWillEnterWorkingRange:(id)arg2 ;
-(void)listAdapter:(id)arg1 listItemControllerDidExitWorkingRange:(id)arg2 ;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemHeaderDidTapOnMoreButton:(id)arg1 ;
-(void)feedItemHeaderDidTapUser:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapLocation:(id)arg1 ;
-(IGFeedHeartAnimator *)heartAnimator;
-(IGListAdapterScrollingContext *)scrollingContext;
-(id)initWithItemConfiguration:(id)arg1 feedConfiguration:(id)arg2 heartAnimator:(id)arg3 videoCellManager:(id)arg4 scrollingContext:(id)arg5 loggingProvider:(id)arg6 currentUser:(id)arg7 analyticsMetadata:(id)arg8 ;
-(IGFeedItemZoomViewPresenter *)zoomViewPresenter;
-(IGTranslationNetworkDataSource *)translationDataSource;
-(IGFeedDirectResponseHandler *)directResponseHandler;
-(IGCameraNavigationControllerTransitionDelegate *)boostPostTransitionDelegate;
-(void)setShowEasyReportingActionSheet:(char)arg1 ;
-(char)showEasyReportingActionSheet;
-(void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2 ;
-(void)feedItemPageCellDidSingleTap:(id)arg1 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1 ;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1 ;
-(void)feedItemActionCellDidTapSendButton:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeViewCount:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentCount:(id)arg1 ;
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2 ;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)feedItemTextCellDidTapOnMore:(id)arg1 ;
-(void)feedItemTextCellDidTapTranslation:(id)arg1 ;
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 ;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1 ;
-(id)feedItemForCell:(id)arg1 ;
-(id)controllerForPresenting;
-(id)feedVideoCellManager;
-(void)feedItemBusinessCellDidTapViewInsights:(id)arg1 ;
-(void)feedItemBusinessCellDidTapPromote:(id)arg1 ;
-(void)feedItemBusinessCellDidTapViewAdGuideline:(id)arg1 ;
-(void)feedItemHiddenConfirmationCellDidTapShowPost:(id)arg1 ;
-(void)feedItemHiddenConfirmationCellDidDismiss:(id)arg1 ;
-(void)translationNetworkDataSource:(id)arg1 didLoadTranslations:(id)arg2 ;
-(void)translationNetworkDataSource:(id)arg1 didFailWithError:(id)arg2 ;
-(void)setDirectResponseHandler:(IGFeedDirectResponseHandler *)arg1 ;
-(void)setZoomViewPresenter:(IGFeedItemZoomViewPresenter *)arg1 ;
-(void)setTranslationDataSource:(IGTranslationNetworkDataSource *)arg1 ;
-(IGFeedItemPageCellState *)pageCellState;
-(void)videoCellDidSingleTap:(id)arg1 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(void)pushControllerForUser:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didScrollListItemController:(id)arg2 ;
-(id<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate>)loggingProvider;
-(void)animateHeartLikeForMediaCell;
-(IGFeedItemTimelineViewModel *)itemViewModel;
-(id)ctaPresenterContextForFeedItem:(id)arg1 viewController:(id)arg2 ;
-(float)containerWidth;
-(void)configureTextCell:(id)arg1 forIndex:(int)arg2 ;
-(void)configureActionCell:(id)arg1 ;
-(void)configurePhotoCell:(id)arg1 ;
-(void)configureVideoCell:(id)arg1 ;
-(void)configurePageCell:(id)arg1 ;
-(void)configureHiddenNoReasonCell:(id)arg1 ;
-(void)configureHiddenAdConfirmationCell:(id)arg1 ;
-(void)configureHiddenSpamConfirmationCell:(id)arg1 ;
-(void)configureBusinessCell:(id)arg1 ;
-(void)configureAdRatingWebViewCell:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forType:(int)arg2 ;
-(void)onFeedItemUpdated:(id)arg1 ;
-(void)onFeedItemDeleted:(id)arg1 ;
-(id)supplementaryViewKindClasses;
-(void)configureHeaderView:(id)arg1 ;
-(void)setIsVisible:(char)arg1 ;
-(char)workingRangesEnabled;
-(IGImagePreparer *)imagePreparer;
-(void)setImagePreparer:(IGImagePreparer *)arg1 ;
-(void)setHasQueuedBatchUpdate:(char)arg1 ;
-(char)hasQueuedBatchUpdate;
-(void)setItemViewModel:(IGFeedItemTimelineViewModel *)arg1 ;
-(char)pendingDidEndDisplayCollapse;
-(void)hideForDidEndDisplay;
-(void)setPendingDidEndDisplayCollapse:(char)arg1 ;
-(void)pushCommentsWithReplyText:(id)arg1 showKeyboard:(char)arg2 disableAutoScroll:(char)arg3 ;
-(char)isPromoteOrganicToggleEnabledWithCell:(id)arg1 ;
-(void)presentBoostPostViewControllerWithCell:(id)arg1 ;
-(void)presentAdsManagerWithFeedItem:(id)arg1 ;
-(void)pushVideoViewsController;
-(void)pushLikersViewController;
-(id)pageCell;
-(void)pushLocationController;
-(void)animateHeartAndPerformLike;
-(void)reloadCaptionCell;
-(void)presentUsertagsController;
-(id)supportedElementKinds;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2 ;
-(id<IGFeedItemConfigurationType>)itemConfiguration;
-(id<IGFeedConfigurationType>)feedConfiguration;
-(void)onFeedItemHidden:(id)arg1 ;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(void)dealloc;
-(NSString *)description;
-(IGFeedItemHeader *)headerView;
-(void)setHeaderView:(IGFeedItemHeader *)arg1 ;
-(char)isVisible;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(UIEdgeInsets)inset;
-(IGUser *)currentUser;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

