

@class NSMutableDictionary;

@interface IGMediaUploadManager : NSObject {

	NSMutableDictionary* _activeUploads;

}
+(id)sharedManager;
-(id)initializeUploadForType:(int)arg1 ;
-(id)uploadForStartTime:(id)arg1 ;
-(void)uploadPhotoForStartTime:(id)arg1 ;
-(void)archiveUploadsWithAppEnteringBackground:(char)arg1 ;
-(void)removeMediaUploadWithStartTime:(id)arg1 isUserAction:(char)arg2 ;
-(void)retryMediaUploadWithStartTime:(id)arg1 ;
-(void)unarchiveUploads;
-(id)validUploadsBroadcastUploads;
-(void)mediaMetadataReady:(id)arg1 ;
-(void)onAppWillBackground:(id)arg1 ;
-(void)onAppWillResume:(id)arg1 ;
-(void)onAppWillTerminate:(id)arg1 ;
-(id)activeUploadsSynchronizedCopy;
-(void)removeUploadsForKeys:(id)arg1 ;
-(void)checkSavedUploads;
-(void)initializeUploadWithDataType:(int)arg1 startTime:(id)arg2 ;
-(void)startUploadBackgroundTaskForUpload:(id)arg1 ;
-(void)uploadVideoForStartTime:(id)arg1 ;
-(void)startConfigureBackgroundTaskForUpload:(id)arg1 ;
-(void)configureUploadForStartTime:(id)arg1 ;
-(void)uploadVideoDataForUpload:(id)arg1 ;
-(id)validUploadsForDirectedSharing:(char)arg1 ;
-(void)endUploadBackgroundTaskForUpload:(id)arg1 ;
-(void)notifyVideoUploadFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)uploadVideoCoverPhotoForStartTime:(id)arg1 ;
-(id)configureUrlFromUpload:(id)arg1 ;
-(void)postFinishedWithServerResponse:(id)arg1 forUpload:(id)arg2 ;
-(void)configureUploadAutoRetryUpload:(id)arg1 withRetryError:(id)arg2 ;
-(void)configureUploadFailed:(id)arg1 withError:(id)arg2 ;
-(void)notifyVideoConfigureFailureWithUploadTime:(id)arg1 andReason:(id)arg2 ;
-(void)endConfigureBackgroundTaskForUpload:(id)arg1 ;
-(void)manuallyCacheLocalImageData:(id)arg1 forPost:(id)arg2 ;
-(char)hasMediaUploadWithStartTime:(id)arg1 ;
-(char)hasUploadsInProgress;
-(id)validUploadsDirectedUploads;
-(char)validateServerResponse:(id)arg1 forUpload:(id)arg2 ;
-(void)dealloc;
-(id)init;
-(void)cancelAllUploads;
@end

