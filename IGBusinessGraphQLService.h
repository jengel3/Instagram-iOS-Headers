

@class IGGraphQLService, IGGraphQLRequest;

@interface IGBusinessGraphQLService : NSObject {

	IGGraphQLService* _graphQLService;
	IGGraphQLRequest* _request;

}

@property (nonatomic,readonly) IGGraphQLService * graphQLService;              //@synthesize graphQLService=_graphQLService - In the implementation block
@property (nonatomic,retain) IGGraphQLRequest * request;                       //@synthesize request=_request - In the implementation block
-(IGGraphQLService *)graphQLService;
-(void)getAccessTokenAndRestartRequestIfPossibleForRequest:(id)arg1 ;
-(void)startRequest:(id)arg1 ;
-(void)sendNoAccessTokenErrorWithRequest:(id)arg1 ;
-(id)init;
-(IGGraphQLRequest *)request;
-(void)setRequest:(IGGraphQLRequest *)arg1 ;
-(void)restartRequest;
@end

