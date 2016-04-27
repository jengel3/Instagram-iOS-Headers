
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGFeedItemVisibilityTracking.h>

@protocol IGFeedItemLoggingProviderDelegate, IGAnalyticsRaindropProtocol;
@class IGFeedItemViewingSessionManager, NSString;

@interface IGFullViewImpressionTracker : NSObject <IGFeedItemVisibilityTracking> {

	IGFeedItemViewingSessionManager* _viewingSessionManager;
	id<IGFeedItemLoggingProviderDelegate> _loggingDelegate;
	id<IGAnalyticsRaindropProtocol> _raindropDelegate;

}

@property (nonatomic,readonly) IGFeedItemViewingSessionManager * viewingSessionManager;                   //@synthesize viewingSessionManager=_viewingSessionManager - In the implementation block
@property (nonatomic,__weak,readonly) id<IGFeedItemLoggingProviderDelegate> loggingDelegate;              //@synthesize loggingDelegate=_loggingDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<IGAnalyticsRaindropProtocol> raindropDelegate;                   //@synthesize raindropDelegate=_raindropDelegate - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<IGFeedItemLoggingProviderDelegate>)loggingDelegate;
-(id)initWithLoggingProviderDelegate:(id)arg1 raindropDelegate:(id)arg2 ;
-(void)updateWithNewFeedItems:(id)arg1 ;
-(void)updateWithTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(IGFeedItemViewingSessionManager *)viewingSessionManager;
-(void)processTrackingData:(id)arg1 visibleContentRect:(CGRect)arg2 ;
-(id<IGAnalyticsRaindropProtocol>)raindropDelegate;
@end

