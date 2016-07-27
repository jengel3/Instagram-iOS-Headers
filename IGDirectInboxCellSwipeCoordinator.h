
#import <Instagram/IGDirectInboxThreadItemControllerSwipeDelegate.h>

@class IGDirectInboxThreadCellViewModel, IGListAdapter, NSString;

@interface IGDirectInboxCellSwipeCoordinator : NSObject <IGDirectInboxThreadItemControllerSwipeDelegate> {

	IGDirectInboxThreadCellViewModel* _currentlyOpenViewModel;
	IGListAdapter* _listAdapter;

}

@property (nonatomic,retain) IGDirectInboxThreadCellViewModel * currentlyOpenViewModel;              //@synthesize currentlyOpenViewModel=_currentlyOpenViewModel - In the implementation block
@property (nonatomic,readonly) IGListAdapter * listAdapter;                                          //@synthesize listAdapter=_listAdapter - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(IGListAdapter *)listAdapter;
-(void)scrollViewDidEndDragging;
-(void)setCurrentlyOpenViewModel:(IGDirectInboxThreadCellViewModel *)arg1 ;
-(void)clearCurrentModel;
-(IGDirectInboxThreadCellViewModel *)currentlyOpenViewModel;
-(void)inboxThreadItemController:(id)arg1 didSwipeOpenViewModel:(id)arg2 ;
-(id)initWithListAdapter:(id)arg1 ;
-(void)viewWillDisappear;
@end

