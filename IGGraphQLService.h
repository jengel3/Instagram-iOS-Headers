

@class IGService;

@interface IGGraphQLService : NSObject {

	IGService* _service;

}

@property (nonatomic,readonly) IGService * service;              //@synthesize service=_service - In the implementation block
+(id)graphQLURLFromQueryItems:(id)arg1 queryID:(id)arg2 ;
+(id)graphQLPathFromQueryItems:(id)arg1 queryID:(id)arg2 ;
-(id)urlFromQueryItems:(id)arg1 queryID:(id)arg2 ;
-(void)sendNoAccessTokenErrorWithRequest:(id)arg1 ;
-(void)sendRequestWithAccessToken:(id)arg1 url:(id)arg2 graphQLResquest:(id)arg3 ;
-(id)errorForMissingAccessToken;
-(id)requestWithAccessToken:(id)arg1 url:(id)arg2 graphQLRequest:(id)arg3 ;
-(void)parseResult:(id)arg1 forRequest:(id)arg2 ;
-(id)errorFromDictionary:(id)arg1 ;
-(void)startRequest:(id)arg1 ;
-(id)init;
-(IGService *)service;
-(id)initWithService:(id)arg1 ;
@end

