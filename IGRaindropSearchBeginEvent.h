
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropSearchBeginEvent : TBaseStruct {

	NSNumber* __thrift_isTypeAhead;

}
-(id)toDict;
-(id)initWithIsTypeAhead:(id)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

