
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListItemController.h>
#import <Instagram/IGDirectInboxThreadCellInteractionDelegate.h>
#import <Instagram/IGDirectInboxThreadCellSwipingDelegate.h>
#import <Instagram/IGListItemType.h>

@protocol IGDirectMainInboxThreadItemControllerDelegate, IGDirectPendingInboxThreadItemControllerDelegate, IGDirectInboxThreadItemControllerSwipeDelegate, IGDirectInboxThreadItemControllerSelectDelegate, IGDirectInboxEnterThreadLogging, IGDirectMainInboxUIPerfLogging;
@class IGDirectInboxThreadCellViewModel, IGUserSession, IGSeparatorSupplementaryViewSource, NSString;

@interface IGDirectInboxThreadItemController : IGListItemController <IGDirectInboxThreadCellInteractionDelegate, IGDirectInboxThreadCellSwipingDelegate, IGListItemType> {

	id<IGDirectMainInboxThreadItemControllerDelegate> _mainInboxDelegate;
	id<IGDirectPendingInboxThreadItemControllerDelegate> _pendingInboxDelegate;
	id<IGDirectInboxThreadItemControllerSwipeDelegate> _swipingDelegate;
	id<IGDirectInboxThreadItemControllerSelectDelegate> _selectDelegate;
	IGDirectInboxThreadCellViewModel* _viewModel;
	IGUserSession* _userSession;
	id<IGDirectInboxEnterThreadLogging> _analyticsLogger;
	id<IGDirectMainInboxUIPerfLogging> _perfLogger;
	IGSeparatorSupplementaryViewSource* _separatorViewSource;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                                                 //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) id<IGDirectInboxEnterThreadLogging> analyticsLogger;                                         //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) id<IGDirectMainInboxUIPerfLogging> perfLogger;                                               //@synthesize perfLogger=_perfLogger - In the implementation block
@property (nonatomic,retain) IGSeparatorSupplementaryViewSource * separatorViewSource;                                      //@synthesize separatorViewSource=_separatorViewSource - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectMainInboxThreadItemControllerDelegate> mainInboxDelegate;                    //@synthesize mainInboxDelegate=_mainInboxDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxThreadItemControllerDelegate> pendingInboxDelegate;              //@synthesize pendingInboxDelegate=_pendingInboxDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadItemControllerSwipeDelegate> swipingDelegate;                     //@synthesize swipingDelegate=_swipingDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectInboxThreadItemControllerSelectDelegate> selectDelegate;                     //@synthesize selectDelegate=_selectDelegate - In the implementation block
@property (nonatomic,readonly) IGDirectInboxThreadCellViewModel * viewModel;                                                //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)cellForItemAtIndex:(int)arg1 ;
-(void)didUpdateToItem:(id)arg1 ;
-(void)setSwipingDelegate:(id<IGDirectInboxThreadItemControllerSwipeDelegate>)arg1 ;
-(id<IGDirectInboxEnterThreadLogging>)analyticsLogger;
-(IGSeparatorSupplementaryViewSource *)separatorViewSource;
-(id<IGDirectMainInboxUIPerfLogging>)perfLogger;
-(id)initWithUserSession:(id)arg1 analyticsLogger:(id)arg2 perfLogger:(id)arg3 ;
-(void)setSeparatorViewSource:(IGSeparatorSupplementaryViewSource *)arg1 ;
-(void)directInboxThreadCell:(id)arg1 didTapPrimaryButton:(id)arg2 ;
-(void)directInboxThreadCell:(id)arg1 didTapDestructiveButton:(id)arg2 ;
-(void)directInboxThreadCell:(id)arg1 didSwipeOpen:(char)arg2 ;
-(id<IGDirectInboxThreadItemControllerSelectDelegate>)selectDelegate;
-(id<IGDirectPendingInboxThreadItemControllerDelegate>)pendingInboxDelegate;
-(id<IGDirectMainInboxThreadItemControllerDelegate>)mainInboxDelegate;
-(void)showFirstTimeDeleteAlert;
-(void)notifyDelegateThreadDeleted;
-(id<IGDirectInboxThreadItemControllerSwipeDelegate>)swipingDelegate;
-(void)setMainInboxDelegate:(id<IGDirectMainInboxThreadItemControllerDelegate>)arg1 ;
-(void)setPendingInboxDelegate:(id<IGDirectPendingInboxThreadItemControllerDelegate>)arg1 ;
-(void)setSelectDelegate:(id<IGDirectInboxThreadItemControllerSelectDelegate>)arg1 ;
-(IGDirectInboxThreadCellViewModel *)viewModel;
-(unsigned)numberOfItems;
-(void)didSelectItemAtIndex:(int)arg1 ;
-(IGUserSession *)userSession;
-(CGSize)sizeForItemAtIndex:(int)arg1 ;
@end

