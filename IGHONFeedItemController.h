
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGFeedItemActionCellConfigurableDelegate.h>
#import <Instagram/IGFeedItemPageCellDelegate.h>
#import <Instagram/IGFeedItemTextCellDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGFeedItemLoggingProviderDelegateIGFeedItemDirectResponseLoggingProviderDelegate;
@class IGFeedItem, IGFeedItemTimelineViewModel, IGHONFeedItemConfiguration, IGFeedVideoCellManager, IGFeedItemPageCellState, IGFeedDirectResponseHandler, NSString;

@interface IGHONFeedItemController : IGListItemController <IGFeedItemActionCellConfigurableDelegate, IGFeedItemPageCellDelegate, IGFeedItemTextCellDelegate, IGListItemType> {

	char _isVisible;
	IGFeedItem* _feedItem;
	IGFeedItemTimelineViewModel* _timelineViewModel;
	IGHONFeedItemConfiguration* _feedItemConfiguration;
	IGFeedVideoCellManager* _videoCellManager;
	IGFeedItemPageCellState* _pageCellState;
	IGFeedDirectResponseHandler* _directResponseHandler;
	id<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> _loggingDelegate;

}

@property (nonatomic,retain) IGFeedItem * feedItem;                                                                                                        //@synthesize feedItem=_feedItem - In the implementation block
@property (nonatomic,retain) IGFeedItemTimelineViewModel * timelineViewModel;                                                                              //@synthesize timelineViewModel=_timelineViewModel - In the implementation block
@property (nonatomic,readonly) IGHONFeedItemConfiguration * feedItemConfiguration;                                                                         //@synthesize feedItemConfiguration=_feedItemConfiguration - In the implementation block
@property (nonatomic,__weak,readonly) IGFeedVideoCellManager * videoCellManager;                                                                           //@synthesize videoCellManager=_videoCellManager - In the implementation block
@property (nonatomic,readonly) IGFeedItemPageCellState * pageCellState;                                                                                    //@synthesize pageCellState=_pageCellState - In the implementation block
@property (nonatomic,readonly) IGFeedDirectResponseHandler * directResponseHandler;                                                                        //@synthesize directResponseHandler=_directResponseHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (assign,nonatomic) char isVisible;                                                                                                               //@synthesize isVisible=_isVisible - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)feedCellTypeClassMap;
+(id)feedCellClasses;
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGFeedItem *)feedItem;
-(id)actionCell;
-(IGFeedVideoCellManager *)videoCellManager;
-(id<IGFeedItemLoggingProviderDelegate><IGFeedItemDirectResponseLoggingProviderDelegate>)loggingDelegate;
-(void)feedItemActionCellPageControlDidChangeValue:(id)arg1 ;
-(void)feedItemActionCellDidTapMoreButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCustomizableButton:(id)arg1 ;
-(void)feedItemActionCellDidTapSendButton:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeButton:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentButton:(id)arg1 ;
-(void)feedItemActionCellDidTapLikeViewCount:(id)arg1 ;
-(void)feedItemActionCellDidTapCommentCount:(id)arg1 ;
-(IGFeedItemPageCellState *)pageCellState;
-(void)feedItemPageCell:(id)arg1 didScrollToPageIndex:(int)arg2 fromIndex:(int)arg3 ;
-(void)feedItemPageCellDidInitialSingleTap:(id)arg1 ;
-(void)feedItemPageCellDidSingleTap:(id)arg1 continueAction:(char)arg2 ;
-(void)feedItemPageCellDidDoubleTapToLike:(id)arg1 ;
-(void)feedItemPageCell:(id)arg1 itemDidStartViewing:(id)arg2 ;
-(void)feedItemTextCellDidTapTranslation:(id)arg1 ;
-(void)feedItemTextCellDidTapOnMore:(id)arg1 ;
-(void)feedItemTextCell:(id)arg1 didTapOnURL:(id)arg2 ;
-(void)feedItemTextCell:(id)arg1 didLongPressReplyText:(id)arg2 ;
-(void)setIsVisible:(char)arg1 ;
-(IGFeedDirectResponseHandler *)directResponseHandler;
-(IGHONFeedItemConfiguration *)feedItemConfiguration;
-(IGFeedItemTimelineViewModel *)timelineViewModel;
-(void)setTimelineViewModel:(IGFeedItemTimelineViewModel *)arg1 ;
-(id)initWithLoggingDelegate:(id)arg1 videoCellManager:(id)arg2 analyticsModule:(id)arg3 ;
-(id)loggingExtraDictionary;
-(void)setFeedItem:(IGFeedItem *)arg1 ;
-(char)isVisible;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

