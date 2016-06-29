

@class NSString, FBFunnelPayload;

@interface FBFunnelAction : NSObject {

	NSString* _actionName;
	NSString* _tag;
	FBFunnelPayload* _actionPayload;
	double _relativeTime;

}

@property (nonatomic,copy,readonly) NSString * actionName;                        //@synthesize actionName=_actionName - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) double relativeTime;                               //@synthesize relativeTime=_relativeTime - In the implementation block
@property (nonatomic,copy,readonly) FBFunnelPayload * actionPayload;              //@synthesize actionPayload=_actionPayload - In the implementation block
-(id)initWithActionName:(id)arg1 tag:(id)arg2 relativeTime:(double)arg3 actionPayload:(id)arg4 ;
-(double)relativeTime;
-(FBFunnelPayload *)actionPayload;
-(NSString *)tag;
-(NSString *)actionName;
@end

