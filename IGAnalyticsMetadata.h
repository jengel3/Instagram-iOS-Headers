

#import <Instagram/Instagram-Structs.h>
@class NSMutableArray;

@interface IGAnalyticsMetadata : NSObject {

	NSMutableArray* _navStack;
	NSMutableArray* _analyticsNavStack;

}

@property (nonatomic,retain) NSMutableArray * navStack;                       //@synthesize navStack=_navStack - In the implementation block
@property (nonatomic,retain) NSMutableArray * analyticsNavStack;              //@synthesize analyticsNavStack=_analyticsNavStack - In the implementation block
-(void)pushAnalyticsMetadataForViewController:(id)arg1 ;
-(void)popAnalyticsMetadataForViewController:(id)arg1 ;
-(id)newNavState;
-(id)currentNavEvent;
-(void)setNavStack:(NSMutableArray *)arg1 ;
-(void)setAnalyticsNavStack:(NSMutableArray *)arg1 ;
-(NSMutableArray *)navStack;
-(NSMutableArray *)analyticsNavStack;
-(id)currentAnalyticsNavEvent;
-(void)pushNavEvent:(id)arg1 ;
-(void)pushAnalyticsNavEvent:(id)arg1 ;
-(id)popNavEvent;
-(id)popAnalyticsNavEvent;
-(id)newAnalyticsNavState;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

