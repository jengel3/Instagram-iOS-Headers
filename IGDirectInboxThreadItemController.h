
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGDirectInboxThreadCellInteractionDelegate.h>
#import <Instagram/IGDirectInboxThreadCellSwipingDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGDirectInboxThreadItemControllerDelegate, IGDirectMainInboxEnterThreadLogging, IGDirectMainInboxUIPerfLogging;
@class IGDirectInboxThreadCellViewModel, IGSeparatorSupplementaryViewSource, NSString;

@interface IGDirectInboxThreadItemController : IGListItemController <IGDirectInboxThreadCellInteractionDelegate, IGDirectInboxThreadCellSwipingDelegate, IGListItemType> {

	id<IGDirectInboxThreadItemControllerDelegate> _delegate;
	IGDirectInboxThreadCellViewModel* _viewModel;
	id<IGDirectMainInboxEnterThreadLogging> _analyticsLogger;
	id<IGDirectMainInboxUIPerfLogging> _perfLogger;
	IGSeparatorSupplementaryViewSource* _inboxSupplementaryViewSource;

}

@property (nonatomic,readonly) id<IGDirectMainInboxEnterThreadLogging> analyticsLogger;                      //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) id<IGDirectMainInboxUIPerfLogging> perfLogger;                                //@synthesize perfLogger=_perfLogger - In the implementation block
@property (nonatomic,retain) IGSeparatorSupplementaryViewSource * inboxSupplementaryViewSource;              //@synthesize inboxSupplementaryViewSource=_inboxSupplementaryViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadItemControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) IGDirectInboxThreadCellViewModel * viewModel;                                 //@synthesize viewModel=_viewModel - In the implementation block
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
-(id<IGDirectMainInboxEnterThreadLogging>)analyticsLogger;
-(id)initWithAnalyticsLogger:(id)arg1 perfLogger:(id)arg2 ;
-(void)setInboxSupplementaryViewSource:(IGSeparatorSupplementaryViewSource *)arg1 ;
-(void)directInboxThreadCell:(id)arg1 didTapMuteButton:(id)arg2 ;
-(void)directInboxThreadCell:(id)arg1 didTapDeleteButton:(id)arg2 ;
-(void)directInboxThreadCell:(id)arg1 didSwipeOpen:(char)arg2 ;
-(void)showFirstTimeDeleteAlert;
-(void)notifyDelegateThreadDeleted;
-(IGDirectInboxThreadCellViewModel *)viewModel;
-(void)setDelegate:(id<IGDirectInboxThreadItemControllerDelegate>)arg1 ;
-(id<IGDirectInboxThreadItemControllerDelegate>)delegate;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

