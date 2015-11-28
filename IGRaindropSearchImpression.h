
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropInstagramEntity, NSNumber, NSString;

@interface IGRaindropSearchImpression : TBaseStruct {

	IGRaindropInstagramEntity* __thrift_object;
	NSNumber* __thrift_position;
	NSNumber* __thrift_hasSeen;
	NSNumber* __thrift_isLocal;
	NSString* __thrift_algorithm;

}
-(id)toDict;
-(id)initWithObject:(id)arg1 position:(id)arg2 hasSeen:(id)arg3 isLocal:(id)arg4 algorithm:(id)arg5 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

