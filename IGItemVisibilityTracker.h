

@protocol IGItemVisibilityTrackerDelegate;
@class NSSet, NSMutableSet;

@interface IGItemVisibilityTracker : NSObject {

	NSSet* _lastVisibleItems;
	NSMutableSet* _viewedItems;
	char _trackingDisabled;
	id<IGItemVisibilityTrackerDelegate> _delegate;

}

@property (assign,nonatomic) char trackingDisabled;                                            //@synthesize trackingDisabled=_trackingDisabled - In the implementation block
@property (assign,nonatomic,__weak) id<IGItemVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)updateItemVisibilitiesWithSet:(id)arg1 ;
-(void)updateItemViewedWithItem:(id)arg1 ;
-(char)trackingDisabled;
-(void)setTrackingDisabled:(char)arg1 ;
-(void)setDelegate:(id<IGItemVisibilityTrackerDelegate>)arg1 ;
-(id)init;
-(id<IGItemVisibilityTrackerDelegate>)delegate;
@end

