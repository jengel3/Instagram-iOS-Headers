
#import <Instagram/Instagram-Structs.h>
#import <Instagram/TBaseStruct.h>

@class NSString, NSNumber;

@interface IGRaindropFeedItemEvent : TBaseStruct {

	int __thrift_feedItemEventType;
	NSString* __thrift_followStatus;
	NSString* __thrift_mediaId;
	NSString* __thrift_trackToken;
	NSNumber* __thrift_timeSpent;

}
-(id)toDict;
-(id)initWithFeedItemEventType:(int)arg1 followStatus:(id)arg2 mediaId:(id)arg3 trackToken:(id)arg4 timeSpent:(id)arg5 ;
-(id)init;
-(id)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)write:(id)arg1 ;
@end

