
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString;

@interface IGRaindropUser : TBaseStruct {

	NSNumber* __thrift_userId;
	NSNumber* __thrift_isPrivate;
	NSString* __thrift_type;

}
-(id)toDict;
-(id)initWithUserId:(id)arg1 isPrivate:(id)arg2 type:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

