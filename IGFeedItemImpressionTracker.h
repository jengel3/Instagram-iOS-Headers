
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGItemDiffingDelegate.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedItemLoggingProviderDelegate, IGAnalyticsModule;
@class IGItemDiffing, NSString;

@interface IGFeedItemImpressionTracker : NSObject <IGItemDiffingDelegate, IGFeedItemVisibilityTracking> {

	IGItemDiffing* _tracker;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGAnalyticsModule> _analyticsModule;

}

@property (nonatomic,readonly) IGItemDiffing * tracker;                                                   //@synthesize tracker=_tracker - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAnalyticsModule> analyticsModule;                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)itemDiffing:(id)arg1 didChangeWithItemAdded:(id)arg2 ;
-(void)itemDiffing:(id)arg1 didChangeWithItemRemoved:(id)arg2 ;
-(id<IGAnalyticsModule>)analyticsModule;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingProviderDelegate:(id)arg1 analyticsModule:(id)arg2 ;
-(void)updateWithTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(IGItemDiffing *)tracker;
@end

