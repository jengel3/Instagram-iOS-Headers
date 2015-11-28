
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropMarquee, NSNumber, IGRaindropPositionIn2D, NSString;

@interface IGRaindropMarqueeImpressionEvent : TBaseStruct {

	IGRaindropMarquee* __thrift_marquee;
	NSNumber* __thrift_sectionNumber;
	IGRaindropPositionIn2D* __thrift_position;
	NSString* __thrift_algorithm;
	NSNumber* __thrift_viewed;
	NSNumber* __thrift_subImpression;
	NSString* __thrift_clusterKey;
	int __thrift_sectionType;
	NSString* __thrift_targetId;

}
-(id)toDict;
-(id)initWithMarquee:(id)arg1 sectionNumber:(id)arg2 position:(id)arg3 algorithm:(id)arg4 viewed:(id)arg5 subImpression:(id)arg6 clusterKey:(id)arg7 sectionType:(int)arg8 targetId:(id)arg9 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

