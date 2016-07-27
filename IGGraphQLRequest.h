
#import <Instagram/Instagram-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IGGraphQLParsing, IGGraphQLCachePolicy;
@class NSString, NSDictionary;

@interface IGGraphQLRequest : NSObject <NSCopying> {

	char _needsLoggedSession;
	NSString* _queryId;
	NSDictionary* _queryParams;
	id<IGGraphQLParsing> _parser;
	unsigned _requestType;
	id<IGGraphQLCachePolicy> _cachePolicy;
	/*^block*/id _successHandler;
	/*^block*/id _failHandler;

}

@property (nonatomic,copy,readonly) id successHandler;                            //@synthesize successHandler=_successHandler - In the implementation block
@property (nonatomic,copy,readonly) id failHandler;                               //@synthesize failHandler=_failHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryId;                           //@synthesize queryId=_queryId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queryParams;                   //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) char needsLoggedSession;                           //@synthesize needsLoggedSession=_needsLoggedSession - In the implementation block
@property (nonatomic,readonly) id<IGGraphQLParsing> parser;                       //@synthesize parser=_parser - In the implementation block
@property (nonatomic,readonly) unsigned requestType;                              //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) id<IGGraphQLCachePolicy> cachePolicy;              //@synthesize cachePolicy=_cachePolicy - In the implementation block
-(id)initRequestWithQueryId:(id)arg1 requestType:(unsigned)arg2 queryParams:(id)arg3 needsLoggedSession:(char)arg4 parser:(id)arg5 cachePolicy:(id)arg6 successHandler:(/*^block*/id)arg7 failHandler:(/*^block*/id)arg8 ;
-(id)requestWithFailHandler:(/*^block*/id)arg1 ;
-(id)successHandler;
-(char)isCacheValidForObject:(id)arg1 ;
-(id)failHandler;
-(char)needsLoggedSession;
-(void)successWithResult:(id)arg1 ;
-(NSDictionary *)queryParams;
-(id<IGGraphQLParsing>)parser;
-(unsigned)requestType;
-(void)failWithError:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<IGGraphQLCachePolicy>)cachePolicy;
-(char)isEqualToRequest:(id)arg1 ;
-(NSString *)queryId;
@end

