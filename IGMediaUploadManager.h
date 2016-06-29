
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableDictionary, IGService, NSString, IGMediaUploadQueue;

@interface IGMediaUploadManager : NSObject <IGUserSessionClearableObject> {

	NSMutableDictionary* _activeUploads;
	IGService* _service;
	int _maxAutoRetryConfigureCount;
	NSString* _userPK;
	IGMediaUploadQueue* _uploadQueue;
	int _uploadRetryPolicy;

}

@property (nonatomic,retain) IGService * service;                           //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) int maxAutoRetryConfigureCount;                //@synthesize maxAutoRetryConfigureCount=_maxAutoRetryConfigureCount - In the implementation block
@property (nonatomic,retain) NSString * userPK;                             //@synthesize userPK=_userPK - In the implementation block
@property (nonatomic,retain) IGMediaUploadQueue * uploadQueue;              //@synthesize uploadQueue=_uploadQueue - In the implementation block
@property (assign,nonatomic) int uploadRetryPolicy;                         //@synthesize uploadRetryPolicy=_uploadRetryPolicy - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)unarchiveUploadsForPath:(id)arg1 ;
+(id)configureEndpointFromUpload:(id)arg1 ;
+(id)configureAPISignedPostRequestBuilderFromUpload:(id)arg1 ;
+(id)sharedManager;
-(void)willSwitchUsers;
-(void)willLogOut;
-(NSString *)userPK;
-(void)setUserPK:(NSString *)arg1 ;
-(id)validUploadsAlbumUploads;
-(void)retryUploadWithStartTime:(id)arg1 ;
-(void)unarchiveUploadsAsync;
-(id)validUploadsBroadcastUploads;
-(void)onAppWillBackground:(id)arg1 ;
-(void)onAppWillResume:(id)arg1 ;
-(void)onAppWillTerminate:(id)arg1 ;
-(void)removeCompletedUploads;
-(void)processUploadQueue;
-(id)activeUploadsSynchronizedCopy;
-(void)processUnarchivedUploads;
-(void)removeUnusedSavedUploadsFromDisk;
-(void)removeUploadsForKeys:(id)arg1 ;
-(void)createUploadWithDataType:(int)arg1 startTime:(id)arg2 ;
-(void)startUploadBackgroundTaskForUpload:(id)arg1 ;
-(void)showAlertProcessingFailed;
-(void)startConfigureBackgroundTaskForUpload:(id)arg1 ;
-(void)configureUploadForStartTime:(id)arg1 ;
-(void)uploadVideoDataForUpload:(id)arg1 ;
-(id)validUploadsWithFilterBlock:(/*^block*/id)arg1 ;
-(id)uploadIdForUpload:(id)arg1 ;
-(id)paramsForHighResolutionUploadExperimentWithUpload:(id)arg1 ;
-(void)endUploadBackgroundTaskForUpload:(id)arg1 ;
-(void)uploadFailed:(id)arg1 ;
-(void)notifyImageUploadFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)notifyVideoUploadFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)logDistilleryEventWithStatusCode:(id)arg1 ;
-(void)finishConfigureForDirectShareUpload:(id)arg1 ;
-(id)generateConfigureParamsForUpload:(id)arg1 ;
-(void)postFinishedWithServerResponse:(id)arg1 forUpload:(id)arg2 ;
-(void)configureUploadAutoRetryUpload:(id)arg1 withRetryError:(id)arg2 ;
-(void)configureUploadFailed:(id)arg1 withError:(id)arg2 ;
-(int)maxAutoRetryConfigureCount;
-(void)notifyVideoConfigureFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(char)validateServerResponse:(id)arg1 forUpload:(id)arg2 ;
-(void)endConfigureBackgroundTaskForUpload:(id)arg1 ;
-(void)uploadSucceeded:(id)arg1 ;
-(void)manuallyCacheLocalImageData:(id)arg1 forItem:(id)arg2 ;
-(int)uploadRetryPolicy;
-(void)stashAllUploads;
-(id)initWithUserSessionPK:(id)arg1 service:(id)arg2 ;
-(id)validUploadsDirectedUploads;
-(void)setMaxAutoRetryConfigureCount:(int)arg1 ;
-(void)setUploadQueue:(IGMediaUploadQueue *)arg1 ;
-(void)setUploadRetryPolicy:(int)arg1 ;
-(void)removeUploadWithStartTime:(id)arg1 isUserAction:(char)arg2 ;
-(void)shareUploadForStartTime:(id)arg1 ;
-(void)uploadVideoForStartTime:(id)arg1 ;
-(id)createUploadForType:(int)arg1 ;
-(id)uploadForStartTime:(id)arg1 ;
-(void)uploadPhotoForStartTime:(id)arg1 ;
-(void)archiveUploadsWithAppEnteringBackground:(char)arg1 ;
-(void)uploadVideoCoverPhotoForStartTime:(id)arg1 ;
-(void)dealloc;
-(IGService *)service;
-(IGMediaUploadQueue *)uploadQueue;
-(void)cancelAllUploads;
-(void)setService:(IGService *)arg1 ;
@end

