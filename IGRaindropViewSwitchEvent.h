
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class IGRaindropNavState, NSString;

@interface IGRaindropViewSwitchEvent : TBaseStruct {

	int __thrift_fromViewType;
	int __thrift_toViewType;
	IGRaindropNavState* __thrift_fromNavState;
	NSString* __thrift_clickPoint;
	int __thrift_fromViewSubType;
	int __thrift_toViewSubType;

}
-(id)toDict;
-(id)initWithFromViewType:(int)arg1 toViewType:(int)arg2 fromNavState:(id)arg3 clickPoint:(id)arg4 fromViewSubType:(int)arg5 toViewSubType:(int)arg6 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

