

#import <Instagram/Instagram-Structs.h>
@class NSArray, IGFullViewImpressionTracker;

@interface IGFeedViewControllerTracker : NSObject {

	NSArray* _impressionTrackers;
	IGFullViewImpressionTracker* _fullViewImpressionTracker;

}

@property (nonatomic,readonly) NSArray * impressionTrackers;                                         //@synthesize impressionTrackers=_impressionTrackers - In the implementation block
@property (nonatomic,readonly) IGFullViewImpressionTracker * fullViewImpressionTracker;              //@synthesize fullViewImpressionTracker=_fullViewImpressionTracker - In the implementation block
+(id)trackingDataForCollectionView:(id)arg1 items:(id)arg2 visibleContentRect:(CGRect)arg3 ;
-(id)initWithLoggingProviderDelegate:(id)arg1 raindropDelegate:(id)arg2 isMainFeed:(char)arg3 feedNetworkSource:(id)arg4 ;
-(void)updateTrackersForContentChangeWithCollectionView:(id)arg1 allItems:(id)arg2 visibleContentRect:(CGRect)arg3 ;
-(void)updateFullviewTrackerWithAllItems:(id)arg1 ;
-(IGFullViewImpressionTracker *)fullViewImpressionTracker;
-(NSArray *)impressionTrackers;
@end

