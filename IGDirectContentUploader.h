

@interface IGDirectContentUploader : NSObject
+(id)userKeyForUsers:(id)arg1 ;
+(void)clearUploadsForThreadWithID:(id)arg1 ;
+(id)uploadsForThread:(id)arg1 ;
+(void)removeRedundantUploadsForThread:(id)arg1 ;
+(void)retryUpload:(id)arg1 progress:(/*^block*/id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)uploadText:(id)arg1 toRecipient:(id)arg2 progress:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)uploadLikeToRecipient:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(id)uploadImage:(id)arg1 toRecipient:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)uploadVideo:(id)arg1 toRecipient:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
+(id)uploadsBaseDirectory;
+(id)uploadsBaseDirectoryForThreadId:(id)arg1 ;
+(id)internalUploadsForThreadWithID:(id)arg1 includeNonThreadUploadForUserKey:(id)arg2 ;
+(id)allUploadsByThreadId;
+(id)inflightUploads;
+(void)clearUpload:(id)arg1 ;
+(void)logMessageWaterfall:(id)arg1 withContentType:(id)arg2 withClientContextID:(id)arg3 isRealtime:(char)arg4 ;
+(void)logMessageWaterfall:(id)arg1 withContentType:(id)arg2 withClientContextID:(id)arg3 isRealtime:(char)arg4 error:(id)arg5 ;
+(void)sendRealtimeUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
+(id)paramsFromDict:(id)arg1 forUpload:(id)arg2 ;
+(void)updateThreadStoreWithResponse:(id)arg1 ;
+(id)firstThreadIDFromResponse:(id)arg1 ;
+(void)precacheUploadImagesIfNeeded:(id)arg1 response:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)failUpload:(id)arg1 error:(id)arg2 ;
+(void)saveUpload:(id)arg1 ;
+(void)sendUpload:(id)arg1 withProgress:(/*^block*/id)arg2 andCompletion:(/*^block*/id)arg3 ;
+(id)uncacheUploadsForThreadsWithID:(id)arg1 ;
+(void)completeMediaUploadableIfNeeded:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)retryVideoUploadsIfNeeded:(id)arg1 ;
+(id)findRedundantUploads:(id)arg1 forThread:(id)arg2 ;
+(id)uploadMediaReshare:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)uploadHashtag:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)uploadProfile:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)uploadLocation:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)uploadPhotoWithUploadModel:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(id)uploadVideo:(id)arg1 withText:(id)arg2 toRecipient:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
+(void)finishVideoUploadForUpload:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)finishPhotoUploadForUpload:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
+(void)wipeInMemoryUploads;
+(void)retryAllUploadsIfNeeded;
+(void)uploadDidFailForUploadModel:(id)arg1 ;
+(void)cancelUpload:(id)arg1 ;
@end

