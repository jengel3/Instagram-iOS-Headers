

@class IGService, IGGraphQLCache;

@interface IGGraphQLService : NSObject {

	IGService* _service;
	IGGraphQLCache* _cache;

}

@property (nonatomic,readonly) IGService * service;                 //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) IGGraphQLCache * cache;              //@synthesize cache=_cache - In the implementation block
-(void)startRequest:(id)arg1 ;
-(void)sendNoAccessTokenErrorWithRequest:(id)arg1 ;
-(id)initWithService:(id)arg1 cache:(id)arg2 ;
-(void)parseResult:(id)arg1 forRequest:(id)arg2 ;
-(void)startNewRequest:(id)arg1 ;
-(void)sendRequestWithAccessToken:(id)arg1 graphQLRequest:(id)arg2 ;
-(id)errorForMissingAccessToken;
-(id)requestWithAccessToken:(id)arg1 graphQLRequest:(id)arg2 ;
-(id)errorFromDictionary:(id)arg1 ;
-(id)genCompleteDescriptionFromDictionary:(id)arg1 ;
-(id)init;
-(IGGraphQLCache *)cache;
-(IGService *)service;
@end

