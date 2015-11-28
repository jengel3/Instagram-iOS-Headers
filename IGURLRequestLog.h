

@class NSString, NSNumber;

@interface IGURLRequestLog : NSObject {

	double _stamps[12];
	NSString* _path;
	NSString* _method;
	NSString* _query;
	NSNumber* _statusCode;
	NSNumber* _domainError;
	NSNumber* _contentLength;

}

@property (nonatomic,retain) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) NSString * method;                     //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSString * query;                      //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSNumber * statusCode;                 //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSNumber * domainError;                //@synthesize domainError=_domainError - In the implementation block
@property (nonatomic,retain) NSNumber * contentLength;              //@synthesize contentLength=_contentLength - In the implementation block
+(void)setLoggingEnabled:(char)arg1 ;
-(NSNumber *)domainError;
-(void)markEvent:(int)arg1 ;
-(void)setDomainError:(NSNumber *)arg1 ;
-(void)setContentLength:(NSNumber *)arg1 ;
-(id)init;
-(NSString *)query;
-(NSString *)path;
-(void)setQuery:(NSString *)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(NSNumber *)statusCode;
-(NSString *)method;
-(void)finish;
-(NSNumber *)contentLength;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
@end

