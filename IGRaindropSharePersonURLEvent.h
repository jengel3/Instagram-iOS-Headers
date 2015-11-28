
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropSharePersonURLEvent : TBaseStruct {

	NSNumber* __thrift_userId;

}
-(id)toDict;
-(id)initWithUserId:(id)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

