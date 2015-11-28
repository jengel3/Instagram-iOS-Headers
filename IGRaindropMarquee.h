
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropMarquee : TBaseStruct {

	NSString* __thrift_title;
	NSString* __thrift_type;
	NSString* __thrift_id;

}
-(id)toDict;
-(id)initWithTitle:(id)arg1 type:(id)arg2 id:(id)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

