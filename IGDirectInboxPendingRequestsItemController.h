
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGListItemType.h>

@protocol IGDirectMainInboxPendingRequestLogging, IGDirectMainInboxUIPerfLogging;
@class IGDirectInboxPendingRequestsCellViewModel, IGUserSession, IGDirectInboxPendingRequests, IGSeparatorSupplementaryViewSource, NSString;

@interface IGDirectInboxPendingRequestsItemController : IGListItemController <IGListItemType> {

	IGDirectInboxPendingRequestsCellViewModel* _viewModel;
	IGUserSession* _userSession;
	IGDirectInboxPendingRequests* _pendingRequests;
	id<IGDirectMainInboxPendingRequestLogging> _analyticsLogger;
	id<IGDirectMainInboxUIPerfLogging> _perfLogger;
	IGSeparatorSupplementaryViewSource* _separatorViewSource;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                             //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) IGDirectInboxPendingRequests * pendingRequests;                          //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (nonatomic,readonly) id<IGDirectMainInboxPendingRequestLogging> analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) id<IGDirectMainInboxUIPerfLogging> perfLogger;                           //@synthesize perfLogger=_perfLogger - In the implementation block
@property (nonatomic,retain) IGSeparatorSupplementaryViewSource * separatorViewSource;                  //@synthesize separatorViewSource=_separatorViewSource - In the implementation block
@property (nonatomic,readonly) IGDirectInboxPendingRequestsCellViewModel * viewModel;                   //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(id<IGDirectMainInboxPendingRequestLogging>)analyticsLogger;
-(IGSeparatorSupplementaryViewSource *)separatorViewSource;
-(id<IGDirectMainInboxUIPerfLogging>)perfLogger;
-(id)initWithUserSession:(id)arg1 analyticsLogger:(id)arg2 perfLogger:(id)arg3 ;
-(void)setSeparatorViewSource:(IGSeparatorSupplementaryViewSource *)arg1 ;
-(IGDirectInboxPendingRequestsCellViewModel *)viewModel;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGUserSession *)userSession;
-(IGDirectInboxPendingRequests *)pendingRequests;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

