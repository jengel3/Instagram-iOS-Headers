
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedItemLoggingProviderDelegate, IGAnalyticsModule;
@class IGFeedItemViewingSessionManager, NSString;

@interface IGFullViewImpressionTracker : NSObject <IGFeedItemVisibilityTracking> {

	IGFeedItemViewingSessionManager* _viewingSessionManager;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGAnalyticsModule> _analyticsModule;

}

@property (nonatomic,readonly) IGFeedItemViewingSessionManager * viewingSessionManager;                   //@synthesize viewingSessionManager=_viewingSessionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAnalyticsModule> analyticsModule;                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGAnalyticsModule>)analyticsModule;
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingProviderDelegate:(id)arg1 analyticsModule:(id)arg2 ;
-(void)updateWithNewFeedItems:(id)arg1 ;
-(void)updateWithTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(IGFeedItemViewingSessionManager *)viewingSessionManager;
-(void)processTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
@end

