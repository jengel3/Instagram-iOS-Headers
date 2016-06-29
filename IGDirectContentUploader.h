
#import <Instagram/IGUserSessionClearableObject.h>

@class NSMutableSet, NSMutableDictionary, NSObject, NSString;

@interface IGDirectContentUploader : NSObject <IGUserSessionClearableObject> {

	NSMutableSet* _inflightUploads;
	NSMutableDictionary* _allUploadsByThreadId;
	NSObject* _lock;

}

@property (nonatomic,readonly) NSMutableSet * inflightUploads;                          //@synthesize inflightUploads=_inflightUploads - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * allUploadsByThreadId;              //@synthesize allUploadsByThreadId=_allUploadsByThreadId - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                           //@synthesize lock=_lock - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)sharedUploader;
+(id)uploadsBaseDirectory;
-(void)willSwitchUsers;
-(void)willLogOut;
-(id)uploadContentWithProducer:(id)arg1 parameter:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)wipeInMemoryUploads;
-(id)uploadsBaseDirectoryForThreadId:(id)arg1 ;
-(id)internalUploadsForThreadWithID:(id)arg1 includeNonThreadUploadForUserKey:(id)arg2 ;
-(NSMutableDictionary *)allUploadsByThreadId;
-(void)removeUploadFromDisk:(id)arg1 ;
-(char)useXProtocol;
-(NSMutableSet *)inflightUploads;
-(void)clearUpload:(id)arg1 ;
-(void)removeUploadFromMediaUploadManager:(id)arg1 ;
-(void)logMessageWaterfall:(id)arg1 withContentType:(id)arg2 withClientContextID:(id)arg3 isRealtime:(char)arg4 isSilent:(char)arg5 networkDuration:(double)arg6 ;
-(char)autoRetryUploadIfNeeded:(id)arg1 isRealtime:(char)arg2 networkDurationToLog:(double)arg3 error:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)failUpload:(id)arg1 isSilent:(char)arg2 isRealtime:(char)arg3 networkDuration:(double)arg4 error:(id)arg5 ;
-(void)sendUpload:(id)arg1 isSilent:(char)arg2 withProgress:(/*^block*/id)arg3 andCompletion:(/*^block*/id)arg4 ;
-(id)paramsFromDict:(id)arg1 forUpload:(id)arg2 ;
-(id)stringWithIdObject:(id)arg1 ;
-(id)requestForUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)fetchThreadIfRealtimeNotReceivingAndUploadIsVideo:(id)arg1 ;
-(id)firstThreadIDFromResponse:(id)arg1 ;
-(void)precacheUploadImagesIfNeeded:(id)arg1 response:(id)arg2 ;
-(void)sendHttpUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(char)realtimeIsReadyForSending;
-(void)sendRealtimeUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(void)logMessageWaterfall:(id)arg1 withContentType:(id)arg2 withClientContextID:(id)arg3 isRealtime:(char)arg4 isSilent:(char)arg5 networkDuration:(double)arg6 error:(id)arg7 ;
-(char)realtimeIsReadyForReceiving;
-(void)saveUpload:(id)arg1 ;
-(void)prepareSendUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareSendPhotoModelUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareSendVideoModelUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareSendQuickCamVideoUpload:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
-(id)uncacheUploadsForThreadsWithID:(id)arg1 ;
-(void)completeMediaUploadableIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)findRedundantUploads:(id)arg1 forThread:(id)arg2 ;
-(void)handleLike:(char)arg1 toContent:(id)arg2 inThread:(id)arg3 withFailureHandler:(/*^block*/id)arg4 ;
-(void)finishMediaUploadForUpload:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)uploadDidFailForUploadModel:(id)arg1 ;
-(id)uploadsForThread:(id)arg1 ;
-(void)clearUploadsForThreadWithID:(id)arg1 ;
-(void)preloadUploadsFromDiskForThreads:(id)arg1 ;
-(void)removeRedundantUploadsForThread:(id)arg1 ;
-(void)retryUpload:(id)arg1 isSilent:(char)arg2 progress:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(id)uploadContentWithUploadable:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)sendLikeToContent:(id)arg1 inThread:(id)arg2 withFailureHandler:(/*^block*/id)arg3 like:(char)arg4 ;
-(id)init;
-(NSObject *)lock;
-(void)setLock:(NSObject *)arg1 ;
-(void)cancelUpload:(id)arg1 ;
@end

