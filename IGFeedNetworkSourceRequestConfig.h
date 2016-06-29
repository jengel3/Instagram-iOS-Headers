

@class NSDictionary;

@interface IGFeedNetworkSourceRequestConfig : NSObject {

	NSDictionary* _requestParameters;
	int _fetchAction;
	int _priority;

}

@property (nonatomic,readonly) NSDictionary * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,readonly) int fetchAction;                               //@synthesize fetchAction=_fetchAction - In the implementation block
@property (nonatomic,readonly) int priority;                                  //@synthesize priority=_priority - In the implementation block
-(id)initWithRequestParameters:(id)arg1 fetchAction:(int)arg2 priority:(int)arg3 ;
-(int)fetchAction;
-(int)priority;
-(NSDictionary *)requestParameters;
@end

