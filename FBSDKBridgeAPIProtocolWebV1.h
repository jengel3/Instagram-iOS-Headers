
#import <Instagram/FBSDKBridgeAPIProtocol.h>

@class NSString;

@interface FBSDKBridgeAPIProtocolWebV1 : NSObject <FBSDKBridgeAPIProtocol>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(char*)arg3 error:(id*)arg4 ;
@end

