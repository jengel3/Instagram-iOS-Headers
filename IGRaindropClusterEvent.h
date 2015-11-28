
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropClusterEvent : TBaseStruct {

	NSString* __thrift_clusterId;
	NSString* __thrift_clusterUserId;
	NSString* __thrift_clusterPosition;
	NSString* __thrift_clusterUserPosition;
	int __thrift_clusterEventType;
	NSNumber* __thrift_errorStatusCode;
	NSString* __thrift_errorMessage;

}
-(id)toDict;
-(id)initWithClusterId:(id)arg1 clusterUserId:(id)arg2 clusterPosition:(id)arg3 clusterUserPosition:(id)arg4 clusterEventType:(int)arg5 errorStatusCode:(id)arg6 errorMessage:(id)arg7 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

