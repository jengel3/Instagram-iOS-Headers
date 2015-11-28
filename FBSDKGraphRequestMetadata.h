

@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject {

	FBSDKGraphRequest* _request;
	/*^block*/id _completionHandler;
	NSDictionary* _batchParameters;

}

@property (nonatomic,retain) FBSDKGraphRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * batchParameters;              //@synthesize batchParameters=_batchParameters - In the implementation block
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(NSDictionary *)batchParameters;
-(void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3 ;
-(void)setBatchParameters:(NSDictionary *)arg1 ;
-(id)init;
-(id)description;
-(FBSDKGraphRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setRequest:(FBSDKGraphRequest *)arg1 ;
@end

