

#import <Instagram/Instagram-Structs.h>
@class NSMutableArray;

@interface IGAnalyticsMetadata : NSObject {

	NSMutableArray* _navStack;

}

@property (nonatomic,retain) NSMutableArray * navStack;              //@synthesize navStack=_navStack - In the implementation block
-(void)pushAnalyticsMetadataForViewController:(id)arg1 ;
-(void)popAnalyticsMetadataForViewController:(id)arg1 ;
-(id)newNavState;
-(id)currentNavEvent;
-(NSMutableArray *)navStack;
-(void)pushNavEvent:(id)arg1 ;
-(id)popNavEvent;
-(void)setNavStack:(NSMutableArray *)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

