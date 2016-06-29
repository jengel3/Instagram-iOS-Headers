
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGListAdapterDataSource.h>

@protocol IGDKDiffable, IGPagingListAdapterControllerItemProcessing, OS_dispatch_queue, IGPagingListAdapterControllerDelegate;
@class IGListAdapter, IGListAdapterScrollingContext, NSArray, NSObject, NSString;

@interface IGPagingListAdapterController : NSObject <IGListAdapterDataSource> {

	int _initialSize;
	int _pageSize;
	id<IGDKDiffable> _focusItem;
	IGListAdapter* _listAdapter;
	id<IGPagingListAdapterControllerItemProcessing> _processor;
	IGListAdapterScrollingContext* _scrollingContext;
	NSArray* _currentItems;
	int _focusIndex;
	char _isLoading;
	IGPagingFocusOffsets _focusOffsets;
	NSObject*<OS_dispatch_queue> _processingQueue;
	id<IGPagingListAdapterControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<IGPagingListAdapterControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)itemsForListAdapter:(id)arg1 ;
-(id)listAdapter:(id)arg1 listItemControllerForItem:(id)arg2 ;
-(id)emptyViewForListAdapter:(id)arg1 ;
-(void)_updateFocusOffsets:(IGPagingFocusOffsets)arg1 ;
-(id)initWithInitialSize:(int)arg1 pageSize:(int)arg2 focusItem:(id)arg3 listAdapter:(id)arg4 processor:(id)arg5 scrollingContext:(id)arg6 ;
-(char)load:(unsigned)arg1 ;
-(void)setDelegate:(id<IGPagingListAdapterControllerDelegate>)arg1 ;
-(id<IGPagingListAdapterControllerDelegate>)delegate;
@end

