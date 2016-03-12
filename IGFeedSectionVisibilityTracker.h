
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGItemDiffingDelegate.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedSectionVisibilityTrackerDelegate;
@class IGItemDiffing, NSString;

@interface IGFeedSectionVisibilityTracker : NSObject <IGItemDiffingDelegate, IGFeedItemVisibilityTracking> {

	IGItemDiffing* _tracker;
	id<IGFeedSectionVisibilityTrackerDelegate> _delegate;

}

@property (nonatomic,readonly) IGItemDiffing * tracker;                                                 //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedSectionVisibilityTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateWithVisibleElementLayoutAttributeFeedItemMap:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(IGItemDiffing *)tracker;
-(void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2 ;
-(void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2 ;
-(id<IGFeedSectionVisibilityTrackerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

