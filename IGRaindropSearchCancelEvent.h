
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString;

@interface IGRaindropSearchCancelEvent : TBaseStruct {

	NSString* __thrift_requestId;
	NSMutableArray* __thrift_resultsList;
	int __thrift_searchType;

}
-(id)toDict;
-(id)initWithRequestId:(id)arg1 resultsList:(NSMutableArray*)arg2 searchType:(int)arg3 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

