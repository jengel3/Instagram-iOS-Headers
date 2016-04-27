
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGItemDiffingDelegate.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedItemLoggingProviderDelegate, IGAnalyticsRaindropProtocol;
@class IGItemDiffing, NSString;

@interface IGFeedItemViewableImpressionTracker : NSObject <IGItemDiffingDelegate, IGFeedItemVisibilityTracking> {

	IGItemDiffing* _tracker;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGAnalyticsRaindropProtocol> _raindropDelegate;

}

@property (nonatomic,readonly) IGItemDiffing * tracker;                                                   //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAnalyticsRaindropProtocol> raindropDelegate;                   //@synthesize raindropDelegate=_raindropDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2 ;
-(void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2 ;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingProviderDelegate:(id)arg1 raindropDelegate:(id)arg2 ;
-(void)updateWithTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(IGItemDiffing *)tracker;
-(id<IGAnalyticsRaindropProtocol>)raindropDelegate;
@end

