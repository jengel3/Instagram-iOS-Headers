
#import <Instagram/RCTBridgeModule.h>
#import <Instagram/IGProfilePictureHelperDelegate.h>

@class NSNumber, IGProfilePictureHelper, NSString, RCTBridge;

@interface IGEditProfileReactModule : NSObject <RCTBridgeModule, IGProfilePictureHelperDelegate> {

	NSNumber* _importProfilePictureFlowReactTag;
	IGProfilePictureHelper* _profilePictureHelper;

}

@property (nonatomic,retain) NSNumber * importProfilePictureFlowReactTag;                //@synthesize importProfilePictureFlowReactTag=_importProfilePictureFlowReactTag - In the implementation block
@property (nonatomic,retain) IGProfilePictureHelper * profilePictureHelper;              //@synthesize profilePictureHelper=_profilePictureHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__560;
+(id)__rct_export__781;
+(id)__rct_export__1352;
+(id)__rct_export__1393;
+(id)__rct_export__1434;
+(id)__rct_export__1535;
+(id)__rct_export__1636;
+(id)__rct_export__1727;
+(id)__rct_export__1808;
+(id)__rct_export__1849;
+(id)__rct_export__19110;
+(id)__rct_export__21311;
+(id)__rct_export__22512;
+(id)__rct_export__23613;
+(void)load;
-(IGProfilePictureHelper *)profilePictureHelper;
-(void)setProfileActionNeeded:(char)arg1 ;
-(void)fetchUserData:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
-(void)post:(id)arg1 withReactTag:(id)arg2 withParameters:(id)arg3 onComplete:(/*^block*/id)arg4 onError:(/*^block*/id)arg5 ;
-(void)canImportProfilePictureForTwitter:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
-(void)canTakePhoto:(/*^block*/id)arg1 rejecter:(/*^block*/id)arg2 ;
-(void)importProfilePictureFromLibrary:(id)arg1 ;
-(void)importProfilePictureFromCamera:(id)arg1 ;
-(void)importProfilePictureFromTwitter:(id)arg1 ;
-(void)importProfilePictureFromFacebook:(id)arg1 ;
-(void)pushUserChangedNotification;
-(void)extractCountryCodeAndNumber:(id)arg1 callback:(/*^block*/id)arg2 ;
-(void)confirmEmail:(id)arg1 resolver:(/*^block*/id)arg2 rejecter:(/*^block*/id)arg3 ;
-(void)sendSMSCodeToPhoneNumber:(id)arg1 resolver:(/*^block*/id)arg2 rejecter:(/*^block*/id)arg3 ;
-(void)checkSMSConfirmationCode:(id)arg1 forPhoneNumber:(id)arg2 onComplete:(/*^block*/id)arg3 onError:(/*^block*/id)arg4 ;
-(NSNumber *)importProfilePictureFlowReactTag;
-(void)setImportProfilePictureFlowReactTag:(NSNumber *)arg1 ;
-(void)setProfilePictureHelper:(IGProfilePictureHelper *)arg1 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePictureWithURL:(id)arg2 fromOption:(int)arg3 ;
-(void)profilePictureHelper:(id)arg1 didFinishDownloadingProfilePicture:(id)arg2 fromOption:(int)arg3 ;
-(id)init;
@end

