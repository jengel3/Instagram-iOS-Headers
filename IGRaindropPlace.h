
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropPlace : TBaseStruct {

	int __thrift_placeSource;
	NSString* __thrift_name;
	NSString* __thrift_placeId;

}
-(id)toDict;
-(id)initWithPlaceSource:(int)arg1 name:(id)arg2 placeId:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
-(id)placeId;
@end

