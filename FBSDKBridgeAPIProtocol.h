

@protocol FBSDKBridgeAPIProtocol <NSObject>
@required
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(char*)arg3 error:(id*)arg4;

@end

