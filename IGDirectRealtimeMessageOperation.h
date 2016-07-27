

@class NSString;

@interface IGDirectRealtimeMessageOperation : NSObject {

	/*^block*/id _successHandler;
	/*^block*/id _failureHandler;
	NSString* _messageKey;
	NSString* _message;

}

@property (nonatomic,copy,readonly) NSString * messageKey;              //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * message;                 //@synthesize message=_message - In the implementation block
@property (nonatomic,copy,readonly) id successHandler;                  //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy,readonly) id failureHandler;                  //@synthesize failureHandler=_failureHandler - In the implementation block
-(id)initWithMessageKey:(id)arg1 message:(id)arg2 successHandler:(/*^block*/id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)successHandler;
-(id)failureHandler;
-(NSString *)messageKey;
-(id)description;
-(NSString *)message;
@end

