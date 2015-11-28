
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropPositionIn2D : TBaseStruct {

	NSNumber* __thrift_x;
	NSNumber* __thrift_y;

}
-(id)toDict;
-(id)initWithX:(id)arg1 y:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

