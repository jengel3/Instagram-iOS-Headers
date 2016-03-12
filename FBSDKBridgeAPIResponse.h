
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>

@class NSError, FBSDKBridgeAPIRequest, NSDictionary, NSString;

@interface FBSDKBridgeAPIResponse : NSObject <FBSDKCopying> {

	char _cancelled;
	NSError* _error;
	FBSDKBridgeAPIRequest* _request;
	NSDictionary* _responseParameters;

}

@property (getter=isCancelled,nonatomic,readonly) char cancelled;                   //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FBSDKBridgeAPIRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseParameters;              //@synthesize responseParameters=_responseParameters - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bridgeAPIResponseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)bridgeAPIResponseWithRequest:(id)arg1 responseURL:(id)arg2 sourceApplication:(id)arg3 error:(id*)arg4 ;
+(id)bridgeAPIResponseCancelledWithRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 responseParameters:(id)arg2 cancelled:(char)arg3 error:(id)arg4 ;
-(NSError *)error;
-(NSDictionary *)responseParameters;
-(id)init;
-(FBSDKBridgeAPIRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isCancelled;
@end

