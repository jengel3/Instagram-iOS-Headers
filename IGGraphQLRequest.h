

@protocol IGGraphQLParsing;
@class NSString, NSDictionary;

@interface IGGraphQLRequest : NSObject {

	char _needsLoggedSession;
	NSString* _queryId;
	NSDictionary* _queryParams;
	id<IGGraphQLParsing> _parser;
	unsigned _requestType;
	/*^block*/id _successHandler;
	/*^block*/id _failHandler;

}

@property (nonatomic,copy,readonly) NSString * queryId;                      //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryParams;              //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) char needsLoggedSession;                      //@synthesize needsLoggedSession=_needsLoggedSession - In the implementation block
@property (nonatomic,readonly) id<IGGraphQLParsing> parser;                  //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) unsigned requestType;                         //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,copy,readonly) id successHandler;                       //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy,readonly) id failHandler;                          //@synthesize failHandler=_failHandler - In the implementation block
-(id)successHandler;
-(id)failHandler;
-(id)initRequestWithQueryId:(id)arg1 requestType:(unsigned)arg2 queryParams:(id)arg3 needsLoggedSession:(char)arg4 parser:(id)arg5 successHandler:(/*^block*/id)arg6 failHandler:(/*^block*/id)arg7 ;
-(void)successWithResult:(id)arg1 ;
-(NSDictionary *)queryParams;
-(char)needsLoggedSession;
-(id<IGGraphQLParsing>)parser;
-(unsigned)requestType;
-(void)failWithError:(id)arg1 ;
-(NSString *)queryId;
@end

