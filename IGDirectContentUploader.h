

@interface IGDirectContentUploader : NSObject
+(id)sharedUploader;
-(id)uploadContentWithProducer:(id)arg1 parameter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeUploadFromMediaUploadManager:(id)arg1 ;
-(id)attachCommonFieldsForParam:(id)arg1 upload:(id)arg2 ;
-(void)saveUpload:(id)arg1 ;
-(void)clearUpload:(id)arg1 ;
-(void)logMessageWaterfall:(id)arg1 withContentType:(id)arg2 withClientContextID:(id)arg3 isRealtime:(char)arg4 isSilent:(char)arg5 networkDuration:(double)arg6 ;
-(char)autoRetryUploadIfNeeded:(id)arg1 isRealtime:(char)arg2 networkDurationToLog:(double)arg3 error:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)failUpload:(id)arg1 isSilent:(char)arg2 isRealtime:(char)arg3 networkDuration:(double)arg4 error:(id)arg5 ;
-(void)sendUpload:(id)arg1 isSilent:(char)arg2 withProgress:(/*^block*/id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(id)stringWithIdObject:(id)arg1 ;
-(id)requestForUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)fetchThreadIfRealtimeNotReceiving:(id)arg1 ;
-(void)precacheUploadImagesIfNeeded:(id)arg1 threadID:(id)arg2 ;
-(void)sendHttpUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(char)realtimeIsReadyForSending;
-(void)sendRealtimeUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)logMessageWaterfall:(id)arg1 withContentType:(id)arg2 withClientContextID:(id)arg3 isRealtime:(char)arg4 isSilent:(char)arg5 networkDuration:(double)arg6 error:(id)arg7 ;
-(char)realtimeIsReadyForReceiving;
-(void)prepareSendUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareSendPhotoModelUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareSendVideoModelUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareSendQuickCamVideoUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)completeMediaUploadableIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handleLike:(char)arg1 toContent:(id)arg2 inThread:(id)arg3 withFailureHandler:(/*^block*/id)arg4 ;
-(void)finishMediaUploadForUpload:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)uploadDidFailForUploadModel:(id)arg1 ;
-(void)clearPendingMessages:(id)arg1 ;
-(void)retryUpload:(id)arg1 isSilent:(char)arg2 progress:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)uploadContentWithUploadable:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendLikeToContent:(id)arg1 inThread:(id)arg2 withFailureHandler:(/*^block*/id)arg3 like:(char)arg4 ;
-(void)cancelUpload:(id)arg1 ;
@end

