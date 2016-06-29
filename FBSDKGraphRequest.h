

@class NSMutableDictionary, NSString;

@interface FBSDKGraphRequest : NSObject {

	NSMutableDictionary* _parameters;
	NSString* _tokenString;
	NSString* _graphPath;
	NSString* _HTTPMethod;
	NSString* _version;
	unsigned _flags;

}

@property (assign,nonatomic) unsigned flags;                                  //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy,readonly) NSString * tokenString;                   //@synthesize tokenString=_tokenString - In the implementation block
@property (nonatomic,copy,readonly) NSString * graphPath;                     //@synthesize graphPath=_graphPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * HTTPMethod;                    //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                       //@synthesize version=_version - In the implementation block
+(id)preprocessParams:(id)arg1 ;
+(id)serializeURL:(id)arg1 params:(id)arg2 ;
+(char)isAttachment:(id)arg1 ;
+(id)serializeURL:(id)arg1 params:(id)arg2 httpMethod:(id)arg3 ;
-(id)initWithGraphPath:(id)arg1 parameters:(id)arg2 flags:(unsigned)arg3 ;
-(id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 HTTPMethod:(id)arg4 flags:(unsigned)arg5 ;
-(id)initWithGraphPath:(id)arg1 parameters:(id)arg2 ;
-(id)initWithGraphPath:(id)arg1 parameters:(id)arg2 HTTPMethod:(id)arg3 ;
-(NSString *)graphPath;
-(char)isGraphErrorRecoveryDisabled;
-(id)initWithGraphPath:(id)arg1 parameters:(id)arg2 tokenString:(id)arg3 version:(id)arg4 HTTPMethod:(id)arg5 ;
-(void)setGraphErrorRecoveryDisabled:(char)arg1 ;
-(id)init;
-(id)description;
-(NSMutableDictionary *)parameters;
-(NSString *)version;
-(char)hasAttachments;
-(NSString *)HTTPMethod;
-(id)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(unsigned)flags;
-(NSString *)tokenString;
@end

