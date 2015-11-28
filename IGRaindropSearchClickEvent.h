
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSNumber, NSString, IGRaindropInstagramEntity;

@interface IGRaindropSearchClickEvent : TBaseStruct {

	NSNumber* __thrift_isTypeahead;
	NSNumber* __thrift_nullState;
	NSString* __thrift_searchQueryText;
	IGRaindropInstagramEntity* __thrift_object;
	NSNumber* __thrift_selectedPosition;
	NSNumber* __thrift_isLocalResult;
	NSNumber* __thrift_isFollow;
	NSMutableArray* __thrift_resultsList;
	NSString* __thrift_targetId;

}
-(id)toDict;
-(id)initWithIsTypeahead:(id)arg1 nullState:(id)arg2 searchQueryText:(id)arg3 object:(id)arg4 selectedPosition:(id)arg5 isLocalResult:(id)arg6 isFollow:(id)arg7 resultsList:(NSMutableArray*)arg8 targetId:(id)arg9 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

