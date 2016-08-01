

@class NSString;

@interface IGDirectNetworkPerfLogger : NSObject {

	NSString* _viewName;

}

@property (nonatomic,copy,readonly) NSString * viewName;              //@synthesize viewName=_viewName - In the implementation block
+(id)pendingInboxLogger;
+(id)inboxLogger;
+(id)threadLogger;
-(void)logRequestWithStartTime:(id)arg1 threadId:(id)arg2 succeeded:(char)arg3 isFirstPage:(char)arg4 ;
-(NSString *)viewName;
-(id)initWithViewName:(id)arg1 ;
@end

