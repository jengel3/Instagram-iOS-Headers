

@class NSString;

@interface FBAppBridgeScheme : NSObject {

	NSString* _version;

}

@property (nonatomic,copy) NSString * version;              //@synthesize version=_version - In the implementation block
+(id)installedFBNativeAppVersionForMethod:(id)arg1 minVersion:(id)arg2 ;
+(id)urlForMethod:(id)arg1 queryParams:(id)arg2 schemeVersion:(id)arg3 version:(id)arg4 ;
+(id)bridgeSchemeForFBAppForInvitesDialog;
+(id)bridgeSchemeForFBAppForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBAppForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForOpenGraphActionShareDialogParams:(id)arg1 ;
+(id)bridgeSchemeForFBMessengerForShareDialogPhotos;
+(id)bridgeSchemeForFBAppForLike;
+(char)isSupportedScheme:(id)arg1 ;
+(id)schemePrefix;
+(id)bridgeVersions;
-(id)urlForMethod:(id)arg1 queryParams:(id)arg2 ;
-(void)dealloc;
-(void)setVersion:(NSString *)arg1 ;
-(NSString *)version;
-(id)initWithVersion:(id)arg1 ;
@end

