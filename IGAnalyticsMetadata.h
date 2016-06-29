

#import <Instagram/Instagram-Structs.h>
@class NSMutableArray;

@interface IGAnalyticsMetadata : NSObject {

	NSMutableArray* _analyticsNavStack;

}

@property (nonatomic,retain) NSMutableArray * analyticsNavStack;              //@synthesize analyticsNavStack=_analyticsNavStack - In the implementation block
-(void)setAnalyticsNavStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)analyticsNavStack;
-(void)pushAnalyticsNavEvent:(id)arg1 ;
-(id)popAnalyticsNavEvent;
-(void)pushAnalyticsMetadataForViewController:(id)arg1 ;
-(void)popAnalyticsMetadataForViewController:(id)arg1 ;
-(id)newAnalyticsNavState;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

