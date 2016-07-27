

@class NSString, NSDictionary;

@interface IGDirectMessageAcknowledgement : NSObject {

	NSString* _itemID;
	NSString* _threadID;
	NSString* _clientContext;
	int _statusCode;
	NSDictionary* _rawResponse;

}

@property (nonatomic,copy,readonly) NSString * itemID;                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadID;                     //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientContext;                //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) int statusCode;                               //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * rawResponse;              //@synthesize rawResponse=_rawResponse - In the implementation block
-(id)initWithItemID:(id)arg1 threadID:(id)arg2 clientContext:(id)arg3 statusCode:(int)arg4 rawResponse:(id)arg5 ;
-(NSString *)itemID;
-(id)description;
-(int)statusCode;
-(NSString *)threadID;
-(NSDictionary *)rawResponse;
-(NSString *)clientContext;
@end

