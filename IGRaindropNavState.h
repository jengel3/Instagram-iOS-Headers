
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@interface IGRaindropNavState : TBaseStruct {

	NSMutableArray* __thrift_navStack;

}
-(id)toDict;
-(id)initWithNavStack:(NSMutableArray*)arg1 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

