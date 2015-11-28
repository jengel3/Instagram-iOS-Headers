
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber;

@interface IGRaindropUser : TBaseStruct {

	NSNumber* __thrift_userId;
	NSNumber* __thrift_isPrivate;

}
-(id)toDict;
-(id)initWithUserId:(id)arg1 isPrivate:(id)arg2 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

