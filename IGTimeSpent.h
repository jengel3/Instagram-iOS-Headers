
#import <Instagram/IGEventAggregator.h>
#import <Instagram/FBAnalyticsTimeSpentDelegate.h>

@class FBAnalyticsTimeSpent, NSString;

@interface IGTimeSpent : IGEventAggregator <FBAnalyticsTimeSpentDelegate> {

	FBAnalyticsTimeSpent* _timeSpent;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)analyticsTimeSpent:(id)arg1 didProduceBitArray:(id)arg2 ;
-(void)save;
-(void)reset;
-(void)update:(double)arg1 ;
-(id)initWithQueue:(id)arg1 delegate:(id)arg2 ;
@end

