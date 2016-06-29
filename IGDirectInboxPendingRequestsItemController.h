
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGDirectPendingInboxDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGDirectInboxPendingRequestsItemControllerDelegate, IGDirectMainInboxPendingRequestLogging, IGDirectMainInboxUIPerfLogging;
@class IGDirectInboxPendingRequestsCellViewModel, IGDirectInboxPendingRequests, IGSeparatorSupplementaryViewSource, NSString;

@interface IGDirectInboxPendingRequestsItemController : IGListItemController <IGDirectPendingInboxDelegate, IGListItemType> {

	id<IGDirectInboxPendingRequestsItemControllerDelegate> _delegate;
	IGDirectInboxPendingRequestsCellViewModel* _viewModel;
	IGDirectInboxPendingRequests* _pendingRequests;
	id<IGDirectMainInboxPendingRequestLogging> _analyticsLogger;
	id<IGDirectMainInboxUIPerfLogging> _perfLogger;
	IGSeparatorSupplementaryViewSource* _inboxSupplementaryViewSource;

}

@property (nonatomic,readonly) IGDirectInboxPendingRequests * pendingRequests;                                    //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) id<IGDirectMainInboxPendingRequestLogging> analyticsLogger;                        //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) id<IGDirectMainInboxUIPerfLogging> perfLogger;                                     //@synthesize perfLogger=_perfLogger - In the implementation block
@property (nonatomic,retain) IGSeparatorSupplementaryViewSource * inboxSupplementaryViewSource;                   //@synthesize inboxSupplementaryViewSource=_inboxSupplementaryViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxPendingRequestsItemControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGDirectInboxPendingRequestsCellViewModel * viewModel;                             //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellClasses;
-(CGSize)estimatedSizeForItemAtIndex:(int)arg1 ;
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(IGSeparatorSupplementaryViewSource *)inboxSupplementaryViewSource;
-(id<IGDirectMainInboxUIPerfLogging>)perfLogger;
-(id<IGDirectMainInboxPendingRequestLogging>)analyticsLogger;
-(void)notifyDelegateWithNewPendingCount:(int)arg1 users:(id)arg2 ;
-(void)pendingInbox:(id)arg1 didUpdateThread:(id)arg2 withAccept:(char)arg3 remainingInviter:(id)arg4 ;
-(void)pendingInboxDidClear:(id)arg1 ;
-(void)pendingInboxDidActionThreads:(id)arg1 ;
-(id)initWithAnalyticsLogger:(id)arg1 perfLogger:(id)arg2 ;
-(void)setInboxSupplementaryViewSource:(IGSeparatorSupplementaryViewSource *)arg1 ;
-(IGDirectInboxPendingRequestsCellViewModel *)viewModel;
-(void)setDelegate:(id<IGDirectInboxPendingRequestsItemControllerDelegate>)arg1 ;
-(id<IGDirectInboxPendingRequestsItemControllerDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGDirectInboxPendingRequests *)pendingRequests;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

