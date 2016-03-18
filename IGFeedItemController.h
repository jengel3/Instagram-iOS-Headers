
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGActionSheetDelegate.h>
#import <Instagram/IGFeedDirectResponseHandlerLoggingDelegate.h>
#import <Instagram/IGFeedItemActionCellDelegate.h>
#import <Instagram/IGFeedItemHeaderDelegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGFeedItemPhotoCellDelegate.h>
#import <Instagram/IGFeedItemTextCellDelegate.h>
#import <Instagram/IGFeedVideoCellInteractionDelegate.h>
#import <Instagram/IGFeedVideoCellAnalyticsDelegate.h>
#import <Instagram/IGListDisplayDelegate.h>
#import <Instagram/IGListSupplementaryViewSource.h>
#import <Instagram/IGRaindropAnalyticsDelegate.h>
#import <Instagram/IGUserInTagDisplayDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGFeedItemLoggingProviderDelegate, IGFeedItemConfigurationType;
@class IGAnalyticsMetadata, IGFeedItem, NSArray, IGFeedHeartAnimator, IGUser, IGFeedVideoCellManager, IGFeedDirectResponseHandler, IGFeedItemTimelineViewModel, IGFeedItemPageCellState, NSString;

@interface IGFeedItemController : IGListItemController <IGActionSheetDelegate, IGFeedDirectResponseHandlerLoggingDelegate, IGFeedItemActionCellDelegate, IGFeedItemHeaderDelegate, IGFeedItemPageCellDelegate, IGFeedItemPhotoCellDelegate, IGFeedItemTextCellDelegate, IGFeedVideoCellInteractionDelegate, IGFeedVideoCellAnalyticsDelegate, IGListDisplayDelegate, IGListSupplementaryViewSource, IGRaindropAnalyticsDelegate, IGUserInTagDisplayDelegate, IGListItemType> {

	IGAnalyticsMetadata* _analyticsMetadata;
	id<IGFeedItemLoggingProviderDelegate> _loggingProviderDelegate;
	IGFeedItem* _feedItem;
	id<IGFeedItemConfigurationType> _configuration;
	NSArray* _cellClasses;
	IGFeedHeartAnimator* _heartAnimator;
	IGUser* _currentUser;
	IGFeedVideoCellManager* _videoCellManager;
	IGFeedDirectResponseHandler* _directResponseHandler;
	IGFeedItemTimelineViewModel* _itemViewModel;
	IGFeedItemPageCellState* _pageCellState;

}

@property (nonatomic,retain) IGAnalyticsMetadata * analyticsMetadata;                                           //@synthesize analyticsMetadata=_analyticsMetadata - In the implementation block
@property (assign,nonatomic,__weak) id<IGFeedItemLoggingProviderDelegate> loggingProviderDelegate;              //@synthesize loggingProviderDelegate=_loggingProviderDelegate - In the implementation block
@property (nonatomic,readonly) IGFeedItem * feedItem;                                                           //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,readonly) id<IGFeedItemConfigurationType> configuration;                                   //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) NSArray * cellClasses;                                                           //@synthesize cellClasses=_cellClasses - In the implementation block
@property (nonatomic,readonly) IGFeedHeartAnimator * heartAnimator;                                             //@synthesize heartAnimator=_heartAnimator - In the implementation block
@property (nonatomic,readonly) IGUser * currentUser;                                                            //@synthesize currentUser=_currentUser - In the implementation block
@property (nonatomic,readonly) IGFeedVideoCellManager * videoCellManager;                                       //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,retain) IGFeedDirectResponseHandler * directResponseHandler;                               //@synthesize directResponseHandler=_directResponseHandler - In the implementation block
@property (nonatomic,retain) IGFeedItemTimelineViewModel * itemViewModel;                                       //@synthesize itemViewModel=_itemViewModel - In the implementation block
@property (nonatomic,retain) IGFeedItemPageCellState * pageCellState;                                           //@synthesize pageCellState=_pageCellState - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedCellTypeClassMap;
-(IGFeedItem *)feedItem;
-(void)followButton:(id)arg1 logfollowButtonTapWithAction:(int)arg2 targetID:(id)arg3 ;
-(IGAnalyticsMetadata *)analyticsMetadata;
-(void)setPageCellState:(IGFeedItemPageCellState *)arg1 ;
-(void)actionSheetDismissedWithButtonTitled:(id)arg1 ;
-(void)actionSheetFinishedHiding;
-(NSArray *)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(id)supplementaryViewSource;
-(id)displayDelegate;
-(IGFeedVideoCellManager *)videoCellManager;
-(void)feedItemHeaderDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemHeaderDidTapOnChevronButton:(id)arg1 ;
-(void)feedItemHeaderDidTapUser:(id)arg1 ;
-(void)feedItemHeaderDidTapFollowButton:(id)arg1 ;
-(void)feedItemHeaderDidTapAddLocation:(id)arg1 ;
-(void)feedItemHeaderDidTapLocation:(id)arg1 ;
-(IGFeedHeartAnimator *)heartAnimator;
-(id)initWithFeedItem:(id)arg1 configuration:(id)arg2 heartAnimator:(id)arg3 videoCellManager:(id)arg4 currentUser:(id)arg5 ;
-(void)setLoggingProviderDelegate:(id<IGFeedItemLoggingProviderDelegate>)arg1 ;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1 ;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)videoCellDidDoubleTap:(id)arg1 ;
-(IGFeedItemPageCellState *)pageCellState;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 ;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemPhotoCellImageDidLoadImage:(id)arg1 ;
-(void)feedItemPhotoCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPhotoCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPhotoCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemTextCellDidTapOnMore:(id)arg1 ;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2 ;
-(id)feedVideoCellCurrentIGAnalyticsMetadata:(id)arg1 ;
-(int)feedVideoCellPosition:(id)arg1 ;
-(void)pushControllerForUser:(id)arg1 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 ;
-(void)listAdapter:(id)arg1 willDisplayListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)listAdapter:(id)arg1 didEndDisplayingListItemController:(id)arg2 cell:(id)arg3 atIndex:(int)arg4 ;
-(void)onFeedItemUpdated:(id)arg1 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingProviderDelegate;
-(IGFeedItemTimelineViewModel *)itemViewModel;
-(void)setItemViewModel:(IGFeedItemTimelineViewModel *)arg1 ;
-(void)reloadLikeAndUFICells;
-(void)configureTextCell:(id)arg1 forIndex:(int)arg2 ;
-(void)configureActionCell:(id)arg1 ;
-(void)configurePhotoCell:(id)arg1 ;
-(void)configureVideoCell:(id)arg1 ;
-(void)configurePageCell:(id)arg1 ;
-(void)configurePlaceholderCell:(id)arg1 forType:(int)arg2 ;
-(id)supplementaryViewKindClasses;
-(void)handleFeedItemChange:(int)arg1 ;
-(void)pushCommentsWithReplyText:(id)arg1 ;
-(IGFeedDirectResponseHandler *)directResponseHandler;
-(id)pageCell;
-(void)pushLocationController;
-(void)animateHeartAndPerformLike;
-(id)actionCell;
-(void)presentUsertagsController;
-(id)extraDictionaryForFeedItem:(id)arg1 directResponseInfo:(id)arg2 ;
-(void)feedItemPageCell:(id)arg1 wantsOpenURL:(id)arg2 modal:(char)arg3 ;
-(id)viewForSupplementaryElementOfKind:(id)arg1 atIndex:(int)arg2 ;
-(CGSize)sizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2 ;
-(CGSize)estimatedSizeForSupplementaryViewOfKind:(id)arg1 atIndex:(int)arg2 ;
-(void)userInTagView:(id)arg1 didTapOnTagView:(id)arg2 ;
-(void)hideWithTombstoneForFeedItem:(id)arg1 ;
-(void)setAnalyticsMetadata:(IGAnalyticsMetadata *)arg1 ;
-(void)setDirectResponseHandler:(IGFeedDirectResponseHandler *)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(unsigned)numberOfItems;
-(id<IGFeedItemConfigurationType>)configuration;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGUser *)currentUser;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

