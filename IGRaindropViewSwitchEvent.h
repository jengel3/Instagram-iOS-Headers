
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
	NSString* __thrift_toEntityId;

}
-(id)toDict;
-(id)initWithFromViewType:(int)arg1 toViewType:(int)arg2 fromNavState:(id)arg3 clickPoint:(id)arg4 fromViewSubType:(int)arg5 toViewSubType:(int)arg6 toEntityId:(id)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

